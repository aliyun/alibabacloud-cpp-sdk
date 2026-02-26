// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEMBERACCOUNTRESULT_HPP_
#define ALIBABACLOUD_MODELS_MEMBERACCOUNTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class MemberAccountResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MemberAccountResult& obj) { 
      DARABONBA_PTR_TO_JSON(accountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
    };
    friend void from_json(const Darabonba::Json& j, MemberAccountResult& obj) { 
      DARABONBA_PTR_FROM_JSON(accountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
    };
    MemberAccountResult() = default ;
    MemberAccountResult(const MemberAccountResult &) = default ;
    MemberAccountResult(MemberAccountResult &&) = default ;
    MemberAccountResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MemberAccountResult() = default ;
    MemberAccountResult& operator=(const MemberAccountResult &) = default ;
    MemberAccountResult& operator=(MemberAccountResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->shopId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline const vector<string> & getAccountNo() const { DARABONBA_PTR_GET_CONST(accountNo_, vector<string>) };
    inline vector<string> getAccountNo() { DARABONBA_PTR_GET(accountNo_, vector<string>) };
    inline MemberAccountResult& setAccountNo(const vector<string> & accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };
    inline MemberAccountResult& setAccountNo(vector<string> && accountNo) { DARABONBA_PTR_SET_RVALUE(accountNo_, accountNo) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline MemberAccountResult& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


  protected:
    shared_ptr<vector<string>> accountNo_ {};
    shared_ptr<string> shopId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
