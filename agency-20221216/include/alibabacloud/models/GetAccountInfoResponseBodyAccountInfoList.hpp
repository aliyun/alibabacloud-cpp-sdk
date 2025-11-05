// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODYACCOUNTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODYACCOUNTINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccountInfoResponseBodyAccountInfoListAccountInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetAccountInfoResponseBodyAccountInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountInfoResponseBodyAccountInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfo, accountInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountInfoResponseBodyAccountInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfo, accountInfo_);
    };
    GetAccountInfoResponseBodyAccountInfoList() = default ;
    GetAccountInfoResponseBodyAccountInfoList(const GetAccountInfoResponseBodyAccountInfoList &) = default ;
    GetAccountInfoResponseBodyAccountInfoList(GetAccountInfoResponseBodyAccountInfoList &&) = default ;
    GetAccountInfoResponseBodyAccountInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountInfoResponseBodyAccountInfoList() = default ;
    GetAccountInfoResponseBodyAccountInfoList& operator=(const GetAccountInfoResponseBodyAccountInfoList &) = default ;
    GetAccountInfoResponseBodyAccountInfoList& operator=(GetAccountInfoResponseBodyAccountInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountInfo_ == nullptr; };
    // accountInfo Field Functions 
    bool hasAccountInfo() const { return this->accountInfo_ != nullptr;};
    void deleteAccountInfo() { this->accountInfo_ = nullptr;};
    inline const vector<Models::GetAccountInfoResponseBodyAccountInfoListAccountInfo> & accountInfo() const { DARABONBA_PTR_GET_CONST(accountInfo_, vector<Models::GetAccountInfoResponseBodyAccountInfoListAccountInfo>) };
    inline vector<Models::GetAccountInfoResponseBodyAccountInfoListAccountInfo> accountInfo() { DARABONBA_PTR_GET(accountInfo_, vector<Models::GetAccountInfoResponseBodyAccountInfoListAccountInfo>) };
    inline GetAccountInfoResponseBodyAccountInfoList& setAccountInfo(const vector<Models::GetAccountInfoResponseBodyAccountInfoListAccountInfo> & accountInfo) { DARABONBA_PTR_SET_VALUE(accountInfo_, accountInfo) };
    inline GetAccountInfoResponseBodyAccountInfoList& setAccountInfo(vector<Models::GetAccountInfoResponseBodyAccountInfoListAccountInfo> && accountInfo) { DARABONBA_PTR_SET_RVALUE(accountInfo_, accountInfo) };


  protected:
    std::shared_ptr<vector<Models::GetAccountInfoResponseBodyAccountInfoListAccountInfo>> accountInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
