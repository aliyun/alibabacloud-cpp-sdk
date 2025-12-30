// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTDESKTOPGROUPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTDESKTOPGROUPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ExportDesktopGroupInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportDesktopGroupInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(LangType, langType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ExportDesktopGroupInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(LangType, langType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ExportDesktopGroupInfoRequest() = default ;
    ExportDesktopGroupInfoRequest(const ExportDesktopGroupInfoRequest &) = default ;
    ExportDesktopGroupInfoRequest(ExportDesktopGroupInfoRequest &&) = default ;
    ExportDesktopGroupInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportDesktopGroupInfoRequest() = default ;
    ExportDesktopGroupInfoRequest& operator=(const ExportDesktopGroupInfoRequest &) = default ;
    ExportDesktopGroupInfoRequest& operator=(ExportDesktopGroupInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You cannot specify an empty string as a tag key. A tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify an empty string as a tag key. A tag value can be up to 128 characters in length and cannot start with `acs:`. The tag value cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->desktopGroupId_ == nullptr && this->desktopGroupName_ == nullptr && this->endUserId_ == nullptr && this->expiredTime_ == nullptr && this->langType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr && this->policyGroupId_ == nullptr && this->regionId_ == nullptr
        && this->tag_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ExportDesktopGroupInfoRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline const vector<string> & getDesktopGroupId() const { DARABONBA_PTR_GET_CONST(desktopGroupId_, vector<string>) };
    inline vector<string> getDesktopGroupId() { DARABONBA_PTR_GET(desktopGroupId_, vector<string>) };
    inline ExportDesktopGroupInfoRequest& setDesktopGroupId(const vector<string> & desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };
    inline ExportDesktopGroupInfoRequest& setDesktopGroupId(vector<string> && desktopGroupId) { DARABONBA_PTR_SET_RVALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline ExportDesktopGroupInfoRequest& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & getEndUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> getEndUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline ExportDesktopGroupInfoRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline ExportDesktopGroupInfoRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ExportDesktopGroupInfoRequest& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // langType Field Functions 
    bool hasLangType() const { return this->langType_ != nullptr;};
    void deleteLangType() { this->langType_ = nullptr;};
    inline string getLangType() const { DARABONBA_PTR_GET_DEFAULT(langType_, "") };
    inline ExportDesktopGroupInfoRequest& setLangType(string langType) { DARABONBA_PTR_SET_VALUE(langType_, langType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ExportDesktopGroupInfoRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ExportDesktopGroupInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ExportDesktopGroupInfoRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ExportDesktopGroupInfoRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportDesktopGroupInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ExportDesktopGroupInfoRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ExportDesktopGroupInfoRequest::Tag>) };
    inline vector<ExportDesktopGroupInfoRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ExportDesktopGroupInfoRequest::Tag>) };
    inline ExportDesktopGroupInfoRequest& setTag(const vector<ExportDesktopGroupInfoRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ExportDesktopGroupInfoRequest& setTag(vector<ExportDesktopGroupInfoRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The billing method of the cloud computer share.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    shared_ptr<string> chargeType_ {};
    // The IDs of the cloud computer shares.
    shared_ptr<vector<string>> desktopGroupId_ {};
    // The name of the cloud computer share.
    shared_ptr<string> desktopGroupName_ {};
    // The IDs of the users to be authorized.
    shared_ptr<vector<string>> endUserId_ {};
    // The expiration date of the subscription cloud computer share.
    shared_ptr<string> expiredTime_ {};
    // The language of the response.
    shared_ptr<string> langType_ {};
    // The number of entries to return on each page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the next query. If this parameter is left empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the office network.
    shared_ptr<string> officeSiteId_ {};
    // The ID of the security policy.
    shared_ptr<string> policyGroupId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<vector<ExportDesktopGroupInfoRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
