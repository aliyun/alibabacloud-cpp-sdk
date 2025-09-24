// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAYORDERREQUESTECIDACCOUNTIDS_HPP_
#define ALIBABACLOUD_MODELS_PAYORDERREQUESTECIDACCOUNTIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class PayOrderRequestEcIdAccountIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PayOrderRequestEcIdAccountIds& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(EcId, ecId_);
    };
    friend void from_json(const Darabonba::Json& j, PayOrderRequestEcIdAccountIds& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(EcId, ecId_);
    };
    PayOrderRequestEcIdAccountIds() = default ;
    PayOrderRequestEcIdAccountIds(const PayOrderRequestEcIdAccountIds &) = default ;
    PayOrderRequestEcIdAccountIds(PayOrderRequestEcIdAccountIds &&) = default ;
    PayOrderRequestEcIdAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PayOrderRequestEcIdAccountIds() = default ;
    PayOrderRequestEcIdAccountIds& operator=(const PayOrderRequestEcIdAccountIds &) = default ;
    PayOrderRequestEcIdAccountIds& operator=(PayOrderRequestEcIdAccountIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIds_ != nullptr
        && this->ecId_ != nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<int64_t> & accountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
    inline vector<int64_t> accountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
    inline PayOrderRequestEcIdAccountIds& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline PayOrderRequestEcIdAccountIds& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // ecId Field Functions 
    bool hasEcId() const { return this->ecId_ != nullptr;};
    void deleteEcId() { this->ecId_ = nullptr;};
    inline string ecId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
    inline PayOrderRequestEcIdAccountIds& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


  protected:
    std::shared_ptr<vector<int64_t>> accountIds_ = nullptr;
    std::shared_ptr<string> ecId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
