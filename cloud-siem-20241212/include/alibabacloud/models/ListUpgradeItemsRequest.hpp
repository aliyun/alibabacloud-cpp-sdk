// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPGRADEITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUPGRADEITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListUpgradeItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpgradeItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpgradeItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListUpgradeItemsRequest() = default ;
    ListUpgradeItemsRequest(const ListUpgradeItemsRequest &) = default ;
    ListUpgradeItemsRequest(ListUpgradeItemsRequest &&) = default ;
    ListUpgradeItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpgradeItemsRequest() = default ;
    ListUpgradeItemsRequest& operator=(const ListUpgradeItemsRequest &) = default ;
    ListUpgradeItemsRequest& operator=(ListUpgradeItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListUpgradeItemsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUpgradeItemsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUpgradeItemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUpgradeItemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline string getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, "") };
    inline ListUpgradeItemsRequest& setRoleFor(string roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. Leave this parameter empty for the first request. To retrieve the next page, set this parameter to the NextToken value from the previous response.
    shared_ptr<string> nextToken_ {};
    // The region where the Data Management center is located. Select a region based on where your assets are. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland.
    // 
    // - ap-southeast-1: Your assets are outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of the member. An administrator can use this parameter to switch to the member\\"s view.
    shared_ptr<string> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
