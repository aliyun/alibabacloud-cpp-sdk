// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSOCIATEDRESOURCERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASSOCIATEDRESOURCERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListAssociatedResourceRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssociatedResourceRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SettingName, settingName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssociatedResourceRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SettingName, settingName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAssociatedResourceRulesRequest() = default ;
    ListAssociatedResourceRulesRequest(const ListAssociatedResourceRulesRequest &) = default ;
    ListAssociatedResourceRulesRequest(ListAssociatedResourceRulesRequest &&) = default ;
    ListAssociatedResourceRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssociatedResourceRulesRequest() = default ;
    ListAssociatedResourceRulesRequest& operator=(const ListAssociatedResourceRulesRequest &) = default ;
    ListAssociatedResourceRulesRequest& operator=(ListAssociatedResourceRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResult_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->settingName_ != nullptr && this->status_ != nullptr; };
    // maxResult Field Functions 
    bool hasMaxResult() const { return this->maxResult_ != nullptr;};
    void deleteMaxResult() { this->maxResult_ = nullptr;};
    inline int32_t maxResult() const { DARABONBA_PTR_GET_DEFAULT(maxResult_, 0) };
    inline ListAssociatedResourceRulesRequest& setMaxResult(int32_t maxResult) { DARABONBA_PTR_SET_VALUE(maxResult_, maxResult) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAssociatedResourceRulesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListAssociatedResourceRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListAssociatedResourceRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAssociatedResourceRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListAssociatedResourceRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // settingName Field Functions 
    bool hasSettingName() const { return this->settingName_ != nullptr;};
    void deleteSettingName() { this->settingName_ = nullptr;};
    inline const vector<string> & settingName() const { DARABONBA_PTR_GET_CONST(settingName_, vector<string>) };
    inline vector<string> settingName() { DARABONBA_PTR_GET(settingName_, vector<string>) };
    inline ListAssociatedResourceRulesRequest& setSettingName(const vector<string> & settingName) { DARABONBA_PTR_SET_VALUE(settingName_, settingName) };
    inline ListAssociatedResourceRulesRequest& setSettingName(vector<string> && settingName) { DARABONBA_PTR_SET_RVALUE(settingName_, settingName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAssociatedResourceRulesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Number of data entries to display per page during pagination.
    // 
    // Default value: 50. Maximum value: 100.
    std::shared_ptr<int32_t> maxResult_ = nullptr;
    // Token for the next query start.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // Setting name of the associated resource tag rule.
    std::shared_ptr<vector<string>> settingName_ = nullptr;
    // Whether the associated resource tag rule is enabled. Values:
    // 
    // - Enable: Enabled.
    // - Disable: Disabled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
