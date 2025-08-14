// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANSHAREACCOUNTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANSHAREACCOUNTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSavingPlanShareAccountsResponseBodyDataShareTimeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanShareAccountsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanShareAccountsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ShareTimeList, shareTimeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanShareAccountsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ShareTimeList, shareTimeList_);
    };
    GetSavingPlanShareAccountsResponseBodyData() = default ;
    GetSavingPlanShareAccountsResponseBodyData(const GetSavingPlanShareAccountsResponseBodyData &) = default ;
    GetSavingPlanShareAccountsResponseBodyData(GetSavingPlanShareAccountsResponseBodyData &&) = default ;
    GetSavingPlanShareAccountsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanShareAccountsResponseBodyData() = default ;
    GetSavingPlanShareAccountsResponseBodyData& operator=(const GetSavingPlanShareAccountsResponseBodyData &) = default ;
    GetSavingPlanShareAccountsResponseBodyData& operator=(GetSavingPlanShareAccountsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->aliUid_ != nullptr && this->shareTimeList_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetSavingPlanShareAccountsResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetSavingPlanShareAccountsResponseBodyData& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // shareTimeList Field Functions 
    bool hasShareTimeList() const { return this->shareTimeList_ != nullptr;};
    void deleteShareTimeList() { this->shareTimeList_ = nullptr;};
    inline const vector<Models::GetSavingPlanShareAccountsResponseBodyDataShareTimeList> & shareTimeList() const { DARABONBA_PTR_GET_CONST(shareTimeList_, vector<Models::GetSavingPlanShareAccountsResponseBodyDataShareTimeList>) };
    inline vector<Models::GetSavingPlanShareAccountsResponseBodyDataShareTimeList> shareTimeList() { DARABONBA_PTR_GET(shareTimeList_, vector<Models::GetSavingPlanShareAccountsResponseBodyDataShareTimeList>) };
    inline GetSavingPlanShareAccountsResponseBodyData& setShareTimeList(const vector<Models::GetSavingPlanShareAccountsResponseBodyDataShareTimeList> & shareTimeList) { DARABONBA_PTR_SET_VALUE(shareTimeList_, shareTimeList) };
    inline GetSavingPlanShareAccountsResponseBodyData& setShareTimeList(vector<Models::GetSavingPlanShareAccountsResponseBodyDataShareTimeList> && shareTimeList) { DARABONBA_PTR_SET_RVALUE(shareTimeList_, shareTimeList) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<vector<Models::GetSavingPlanShareAccountsResponseBodyDataShareTimeList>> shareTimeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
