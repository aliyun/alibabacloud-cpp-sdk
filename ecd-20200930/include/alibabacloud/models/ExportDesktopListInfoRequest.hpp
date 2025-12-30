// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTDESKTOPLISTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTDESKTOPLISTINFOREQUEST_HPP_
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
  class ExportDesktopListInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportDesktopListInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LangType, langType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ExportDesktopListInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LangType, langType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ExportDesktopListInfoRequest() = default ;
    ExportDesktopListInfoRequest(const ExportDesktopListInfoRequest &) = default ;
    ExportDesktopListInfoRequest(ExportDesktopListInfoRequest &&) = default ;
    ExportDesktopListInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportDesktopListInfoRequest() = default ;
    ExportDesktopListInfoRequest& operator=(const ExportDesktopListInfoRequest &) = default ;
    ExportDesktopListInfoRequest& operator=(ExportDesktopListInfoRequest &&) = default ;
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
      // The tag key. If you specify the `Tag` parameter, you must also specify the `Key` parameter. The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun` and cannot contain only spaces.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `acs:` or `aliyun`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr && this->endUserId_ == nullptr && this->expiredTime_ == nullptr
        && this->groupId_ == nullptr && this->langType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr
        && this->policyGroupId_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr && this->userName_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ExportDesktopListInfoRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline ExportDesktopListInfoRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline ExportDesktopListInfoRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline ExportDesktopListInfoRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline ExportDesktopListInfoRequest& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & getEndUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> getEndUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline ExportDesktopListInfoRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline ExportDesktopListInfoRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ExportDesktopListInfoRequest& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ExportDesktopListInfoRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // langType Field Functions 
    bool hasLangType() const { return this->langType_ != nullptr;};
    void deleteLangType() { this->langType_ = nullptr;};
    inline string getLangType() const { DARABONBA_PTR_GET_DEFAULT(langType_, "") };
    inline ExportDesktopListInfoRequest& setLangType(string langType) { DARABONBA_PTR_SET_VALUE(langType_, langType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ExportDesktopListInfoRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ExportDesktopListInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ExportDesktopListInfoRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ExportDesktopListInfoRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportDesktopListInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ExportDesktopListInfoRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ExportDesktopListInfoRequest::Tag>) };
    inline vector<ExportDesktopListInfoRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ExportDesktopListInfoRequest::Tag>) };
    inline ExportDesktopListInfoRequest& setTag(const vector<ExportDesktopListInfoRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ExportDesktopListInfoRequest& setTag(vector<ExportDesktopListInfoRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ExportDesktopListInfoRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The billing method of the cloud computer.
    // 
    // Default value: Postpaid. Valid values:
    // 
    // *   Postpaid: pay-as-you-go
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PrePaid: subscription
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> chargeType_ {};
    // The IDs of the cloud computers. You can specify 1 to 100 IDs.
    shared_ptr<vector<string>> desktopId_ {};
    // The name of the cloud computer.
    shared_ptr<string> desktopName_ {};
    // The status of the cloud computers.
    // 
    // Valid values:
    // 
    // *   Stopped
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Starting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Rebuilding
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Running
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Stopping
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Expired
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Deleted
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Pending
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> desktopStatus_ {};
    // The IDs of the end users of the cloud computer. You can specify 1 to 100 IDs.
    // 
    // >  During a specific period of time, only one user can connect to and use the cloud computer.
    shared_ptr<vector<string>> endUserId_ {};
    // The time when a subscription cloud computer expires.
    shared_ptr<string> expiredTime_ {};
    // The ID of the cloud computer pool to which the cloud computers belong.
    shared_ptr<string> groupId_ {};
    // The language in which the cloud computer is displayed in the console UI. You can export the list of cloud computers in the specified language.
    // 
    // Default value: zh-CN. Valid values:
    // 
    // *   zh-CN: Simplified Chinese
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   en-GB: British English
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> langType_ {};
    // The number of entries per page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used for the next query. If this parameter is empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The ID of the policy that is attached to the cloud computer.
    shared_ptr<string> policyGroupId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tags that are added to the cloud computer. A tag is a key-value pair that consists of a tag key and a tag value. Tags are used to identify resources. You can use tags to manage cloud computers by group. This facilitates search and batch operations. For more information, see [Use tags to manage cloud computers](https://help.aliyun.com/document_detail/203781.html).
    shared_ptr<vector<ExportDesktopListInfoRequest::Tag>> tag_ {};
    // The username of the end user who is using the cloud computer.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
