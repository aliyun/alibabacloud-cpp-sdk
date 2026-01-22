// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECIDACCOUNTID_HPP_
#define ALIBABACLOUD_MODELS_ECIDACCOUNTID_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class EcIdAccountId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcIdAccountId& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(EcId, ecId_);
    };
    friend void from_json(const Darabonba::Json& j, EcIdAccountId& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(EcId, ecId_);
    };
    EcIdAccountId() = default ;
    EcIdAccountId(const EcIdAccountId &) = default ;
    EcIdAccountId(EcIdAccountId &&) = default ;
    EcIdAccountId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcIdAccountId() = default ;
    EcIdAccountId& operator=(const EcIdAccountId &) = default ;
    EcIdAccountId& operator=(EcIdAccountId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->ecId_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
    inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
    inline EcIdAccountId& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline EcIdAccountId& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // ecId Field Functions 
    bool hasEcId() const { return this->ecId_ != nullptr;};
    void deleteEcId() { this->ecId_ = nullptr;};
    inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
    inline EcIdAccountId& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


  protected:
    shared_ptr<vector<int64_t>> accountIds_ {};
    shared_ptr<string> ecId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
