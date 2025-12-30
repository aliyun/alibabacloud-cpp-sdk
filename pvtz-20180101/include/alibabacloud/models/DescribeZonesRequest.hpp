// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryRegionId, queryRegionId_);
      DARABONBA_PTR_TO_JSON(QueryVpcId, queryVpcId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceTag, resourceTag_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(ZoneTag, zoneTag_);
      DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryRegionId, queryRegionId_);
      DARABONBA_PTR_FROM_JSON(QueryVpcId, queryVpcId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceTag, resourceTag_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(ZoneTag, zoneTag_);
      DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
    };
    DescribeZonesRequest() = default ;
    DescribeZonesRequest(const DescribeZonesRequest &) = default ;
    DescribeZonesRequest(DescribeZonesRequest &&) = default ;
    DescribeZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesRequest() = default ;
    DescribeZonesRequest& operator=(const DescribeZonesRequest &) = default ;
    DescribeZonesRequest& operator=(DescribeZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ResourceTag() = default ;
      ResourceTag(const ResourceTag &) = default ;
      ResourceTag(ResourceTag &&) = default ;
      ResourceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTag() = default ;
      ResourceTag& operator=(const ResourceTag &) = default ;
      ResourceTag& operator=(ResourceTag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ResourceTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ResourceTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N added to the zone.
      shared_ptr<string> key_ {};
      // The value of tag N added to the zone.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->lang_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryRegionId_ == nullptr && this->queryVpcId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceTag_ == nullptr && this->searchMode_ == nullptr && this->zoneTag_ == nullptr && this->zoneType_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeZonesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeZonesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeZonesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeZonesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryRegionId Field Functions 
    bool hasQueryRegionId() const { return this->queryRegionId_ != nullptr;};
    void deleteQueryRegionId() { this->queryRegionId_ = nullptr;};
    inline string getQueryRegionId() const { DARABONBA_PTR_GET_DEFAULT(queryRegionId_, "") };
    inline DescribeZonesRequest& setQueryRegionId(string queryRegionId) { DARABONBA_PTR_SET_VALUE(queryRegionId_, queryRegionId) };


    // queryVpcId Field Functions 
    bool hasQueryVpcId() const { return this->queryVpcId_ != nullptr;};
    void deleteQueryVpcId() { this->queryVpcId_ = nullptr;};
    inline string getQueryVpcId() const { DARABONBA_PTR_GET_DEFAULT(queryVpcId_, "") };
    inline DescribeZonesRequest& setQueryVpcId(string queryVpcId) { DARABONBA_PTR_SET_VALUE(queryVpcId_, queryVpcId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeZonesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTag Field Functions 
    bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
    void deleteResourceTag() { this->resourceTag_ = nullptr;};
    inline const vector<DescribeZonesRequest::ResourceTag> & getResourceTag() const { DARABONBA_PTR_GET_CONST(resourceTag_, vector<DescribeZonesRequest::ResourceTag>) };
    inline vector<DescribeZonesRequest::ResourceTag> getResourceTag() { DARABONBA_PTR_GET(resourceTag_, vector<DescribeZonesRequest::ResourceTag>) };
    inline DescribeZonesRequest& setResourceTag(const vector<DescribeZonesRequest::ResourceTag> & resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };
    inline DescribeZonesRequest& setResourceTag(vector<DescribeZonesRequest::ResourceTag> && resourceTag) { DARABONBA_PTR_SET_RVALUE(resourceTag_, resourceTag) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline DescribeZonesRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // zoneTag Field Functions 
    bool hasZoneTag() const { return this->zoneTag_ != nullptr;};
    void deleteZoneTag() { this->zoneTag_ = nullptr;};
    inline const vector<string> & getZoneTag() const { DARABONBA_PTR_GET_CONST(zoneTag_, vector<string>) };
    inline vector<string> getZoneTag() { DARABONBA_PTR_GET(zoneTag_, vector<string>) };
    inline DescribeZonesRequest& setZoneTag(const vector<string> & zoneTag) { DARABONBA_PTR_SET_VALUE(zoneTag_, zoneTag) };
    inline DescribeZonesRequest& setZoneTag(vector<string> && zoneTag) { DARABONBA_PTR_SET_RVALUE(zoneTag_, zoneTag) };


    // zoneType Field Functions 
    bool hasZoneType() const { return this->zoneType_ != nullptr;};
    void deleteZoneType() { this->zoneType_ = nullptr;};
    inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
    inline DescribeZonesRequest& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


  protected:
    // The keyword of the zone name. The value is not case-sensitive. You can set SearchMode to LIKE or EXACT. The default value of SearchMode is LIKE.
    shared_ptr<string> keyword_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the virtual private cloud (VPC) associated with the zone.
    shared_ptr<string> queryRegionId_ {};
    // The ID of the VPC associated with the zone.
    shared_ptr<string> queryVpcId_ {};
    // The ID of the resource group to which the zone belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The tags added to the zone.
    shared_ptr<vector<DescribeZonesRequest::ResourceTag>> resourceTag_ {};
    // The search mode. The value of Keyword is the search scope. Valid values:
    // 
    // *   **LIKE** (default): fuzzy search
    // *   **EXACT**: exact search
    // 
    // Default value: **LIKE**.
    shared_ptr<string> searchMode_ {};
    // The types of cloud services.
    shared_ptr<vector<string>> zoneTag_ {};
    // The zone type. Valid values:
    // 
    // *   **AUTH_ZONE**: authoritative zone
    // *   **CLOUD_PRODUCT_ZONE**: authoritative zone for cloud services
    // 
    // Default value: **AUTH_ZONE**.
    shared_ptr<string> zoneType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
