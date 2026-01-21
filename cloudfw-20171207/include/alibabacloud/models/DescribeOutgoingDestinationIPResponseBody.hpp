// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationIPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DstIPList, dstIPList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DstIPList, dstIPList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDestinationIPResponseBody() = default ;
    DescribeOutgoingDestinationIPResponseBody(const DescribeOutgoingDestinationIPResponseBody &) = default ;
    DescribeOutgoingDestinationIPResponseBody(DescribeOutgoingDestinationIPResponseBody &&) = default ;
    DescribeOutgoingDestinationIPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPResponseBody() = default ;
    DescribeOutgoingDestinationIPResponseBody& operator=(const DescribeOutgoingDestinationIPResponseBody &) = default ;
    DescribeOutgoingDestinationIPResponseBody& operator=(DescribeOutgoingDestinationIPResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DstIPList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DstIPList& obj) { 
        DARABONBA_PTR_TO_JSON(AclCoverage, aclCoverage_);
        DARABONBA_PTR_TO_JSON(AclRecommendDetail, aclRecommendDetail_);
        DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_TO_JSON(AddressGroupList, addressGroupList_);
        DARABONBA_PTR_TO_JSON(ApplicationPortList, applicationPortList_);
        DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_TO_JSON(CategoryClassId, categoryClassId_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(HasAcl, hasAcl_);
        DARABONBA_PTR_TO_JSON(HasAclRecommend, hasAclRecommend_);
        DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
        DARABONBA_PTR_TO_JSON(IsMarkNormal, isMarkNormal_);
        DARABONBA_PTR_TO_JSON(LocationName, locationName_);
        DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_TO_JSON(PrivateAssetCount, privateAssetCount_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(SecurityReason, securityReason_);
        DARABONBA_PTR_TO_JSON(SecuritySuggest, securitySuggest_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      };
      friend void from_json(const Darabonba::Json& j, DstIPList& obj) { 
        DARABONBA_PTR_FROM_JSON(AclCoverage, aclCoverage_);
        DARABONBA_PTR_FROM_JSON(AclRecommendDetail, aclRecommendDetail_);
        DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_FROM_JSON(AddressGroupList, addressGroupList_);
        DARABONBA_PTR_FROM_JSON(ApplicationPortList, applicationPortList_);
        DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_FROM_JSON(CategoryClassId, categoryClassId_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(HasAcl, hasAcl_);
        DARABONBA_PTR_FROM_JSON(HasAclRecommend, hasAclRecommend_);
        DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
        DARABONBA_PTR_FROM_JSON(IsMarkNormal, isMarkNormal_);
        DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
        DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_FROM_JSON(PrivateAssetCount, privateAssetCount_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(SecurityReason, securityReason_);
        DARABONBA_PTR_FROM_JSON(SecuritySuggest, securitySuggest_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      };
      DstIPList() = default ;
      DstIPList(const DstIPList &) = default ;
      DstIPList(DstIPList &&) = default ;
      DstIPList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DstIPList() = default ;
      DstIPList& operator=(const DstIPList &) = default ;
      DstIPList& operator=(DstIPList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(ClassId, classId_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(TagDescribe, tagDescribe_);
          DARABONBA_PTR_TO_JSON(TagId, tagId_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassId, classId_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(TagDescribe, tagDescribe_);
          DARABONBA_PTR_FROM_JSON(TagId, tagId_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->classId_ == nullptr
        && this->riskLevel_ == nullptr && this->tagDescribe_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr; };
        // classId Field Functions 
        bool hasClassId() const { return this->classId_ != nullptr;};
        void deleteClassId() { this->classId_ = nullptr;};
        inline string getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, "") };
        inline TagList& setClassId(string classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline TagList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // tagDescribe Field Functions 
        bool hasTagDescribe() const { return this->tagDescribe_ != nullptr;};
        void deleteTagDescribe() { this->tagDescribe_ = nullptr;};
        inline string getTagDescribe() const { DARABONBA_PTR_GET_DEFAULT(tagDescribe_, "") };
        inline TagList& setTagDescribe(string tagDescribe) { DARABONBA_PTR_SET_VALUE(tagDescribe_, tagDescribe) };


        // tagId Field Functions 
        bool hasTagId() const { return this->tagId_ != nullptr;};
        void deleteTagId() { this->tagId_ = nullptr;};
        inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
        inline TagList& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline TagList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      protected:
        // The type of the tag. Valid values:
        // 
        // *   **Suspicious**
        // *   **Malicious**
        // *   **Trusted**
        shared_ptr<string> classId_ {};
        // The risk level. Valid values:
        // 
        // *   **1**: low.
        // *   **2**: medium.
        // *   **3**: high.
        shared_ptr<int32_t> riskLevel_ {};
        // The description of the tag.
        shared_ptr<string> tagDescribe_ {};
        // The ID of the tag.
        shared_ptr<string> tagId_ {};
        // The name of the tag.
        shared_ptr<string> tagName_ {};
      };

      class ApplicationPortList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationPortList& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(UnknownReason, unknownReason_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationPortList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(UnknownReason, unknownReason_);
        };
        ApplicationPortList() = default ;
        ApplicationPortList(const ApplicationPortList &) = default ;
        ApplicationPortList(ApplicationPortList &&) = default ;
        ApplicationPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationPortList() = default ;
        ApplicationPortList& operator=(const ApplicationPortList &) = default ;
        ApplicationPortList& operator=(ApplicationPortList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->port_ == nullptr && this->unknownReason_ == nullptr; };
        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline ApplicationPortList& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline ApplicationPortList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // unknownReason Field Functions 
        bool hasUnknownReason() const { return this->unknownReason_ != nullptr;};
        void deleteUnknownReason() { this->unknownReason_ = nullptr;};
        inline const vector<string> & getUnknownReason() const { DARABONBA_PTR_GET_CONST(unknownReason_, vector<string>) };
        inline vector<string> getUnknownReason() { DARABONBA_PTR_GET(unknownReason_, vector<string>) };
        inline ApplicationPortList& setUnknownReason(const vector<string> & unknownReason) { DARABONBA_PTR_SET_VALUE(unknownReason_, unknownReason) };
        inline ApplicationPortList& setUnknownReason(vector<string> && unknownReason) { DARABONBA_PTR_SET_RVALUE(unknownReason_, unknownReason) };


      protected:
        // The application type used in the access control policy. Valid values:
        // 
        // *   **FTP**
        // *   **HTTP**
        // *   **HTTPS**
        // *   **Memcache**
        // *   **MongoDB**
        // *   **MQTT**
        // *   **MySQL**
        // *   **RDP**
        // *   **Redis**
        // *   **SMTP**
        // *   **SMTPS**
        // *   **SSH**
        // *   **SSL_No_Cert**
        // *   **SSL**
        // *   **VNC**
        // 
        // >  The value of this parameter depends on the value of the Proto parameter. If you set Proto to TCP, you can set ApplicationNameList to any valid value. If you configure both ApplicationNameList and ApplicationName, only the value of ApplicationNameList is used.
        shared_ptr<string> applicationName_ {};
        // The application port.
        shared_ptr<int32_t> port_ {};
        // List of reasons for failing to analyze the protocol when it is identified as Unknown.
        shared_ptr<vector<string>> unknownReason_ {};
      };

      class AddressGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(AddressGroupName, addressGroupName_);
          DARABONBA_PTR_TO_JSON(AddressGroupUUID, addressGroupUUID_);
        };
        friend void from_json(const Darabonba::Json& j, AddressGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressGroupName, addressGroupName_);
          DARABONBA_PTR_FROM_JSON(AddressGroupUUID, addressGroupUUID_);
        };
        AddressGroupList() = default ;
        AddressGroupList(const AddressGroupList &) = default ;
        AddressGroupList(AddressGroupList &&) = default ;
        AddressGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddressGroupList() = default ;
        AddressGroupList& operator=(const AddressGroupList &) = default ;
        AddressGroupList& operator=(AddressGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addressGroupName_ == nullptr
        && this->addressGroupUUID_ == nullptr; };
        // addressGroupName Field Functions 
        bool hasAddressGroupName() const { return this->addressGroupName_ != nullptr;};
        void deleteAddressGroupName() { this->addressGroupName_ = nullptr;};
        inline string getAddressGroupName() const { DARABONBA_PTR_GET_DEFAULT(addressGroupName_, "") };
        inline AddressGroupList& setAddressGroupName(string addressGroupName) { DARABONBA_PTR_SET_VALUE(addressGroupName_, addressGroupName) };


        // addressGroupUUID Field Functions 
        bool hasAddressGroupUUID() const { return this->addressGroupUUID_ != nullptr;};
        void deleteAddressGroupUUID() { this->addressGroupUUID_ = nullptr;};
        inline string getAddressGroupUUID() const { DARABONBA_PTR_GET_DEFAULT(addressGroupUUID_, "") };
        inline AddressGroupList& setAddressGroupUUID(string addressGroupUUID) { DARABONBA_PTR_SET_VALUE(addressGroupUUID_, addressGroupUUID) };


      protected:
        // The name of the address book.
        shared_ptr<string> addressGroupName_ {};
        // The UUID of the address book.
        shared_ptr<string> addressGroupUUID_ {};
      };

      virtual bool empty() const override { return this->aclCoverage_ == nullptr
        && this->aclRecommendDetail_ == nullptr && this->aclStatus_ == nullptr && this->addressGroupList_ == nullptr && this->applicationPortList_ == nullptr && this->assetCount_ == nullptr
        && this->categoryClassId_ == nullptr && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->dstIP_ == nullptr && this->groupName_ == nullptr
        && this->hasAcl_ == nullptr && this->hasAclRecommend_ == nullptr && this->inBytes_ == nullptr && this->isMarkNormal_ == nullptr && this->locationName_ == nullptr
        && this->outBytes_ == nullptr && this->privateAssetCount_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->securityReason_ == nullptr
        && this->securitySuggest_ == nullptr && this->sessionCount_ == nullptr && this->tagList_ == nullptr && this->totalBytes_ == nullptr; };
      // aclCoverage Field Functions 
      bool hasAclCoverage() const { return this->aclCoverage_ != nullptr;};
      void deleteAclCoverage() { this->aclCoverage_ = nullptr;};
      inline string getAclCoverage() const { DARABONBA_PTR_GET_DEFAULT(aclCoverage_, "") };
      inline DstIPList& setAclCoverage(string aclCoverage) { DARABONBA_PTR_SET_VALUE(aclCoverage_, aclCoverage) };


      // aclRecommendDetail Field Functions 
      bool hasAclRecommendDetail() const { return this->aclRecommendDetail_ != nullptr;};
      void deleteAclRecommendDetail() { this->aclRecommendDetail_ = nullptr;};
      inline string getAclRecommendDetail() const { DARABONBA_PTR_GET_DEFAULT(aclRecommendDetail_, "") };
      inline DstIPList& setAclRecommendDetail(string aclRecommendDetail) { DARABONBA_PTR_SET_VALUE(aclRecommendDetail_, aclRecommendDetail) };


      // aclStatus Field Functions 
      bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
      void deleteAclStatus() { this->aclStatus_ = nullptr;};
      inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
      inline DstIPList& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


      // addressGroupList Field Functions 
      bool hasAddressGroupList() const { return this->addressGroupList_ != nullptr;};
      void deleteAddressGroupList() { this->addressGroupList_ = nullptr;};
      inline const vector<DstIPList::AddressGroupList> & getAddressGroupList() const { DARABONBA_PTR_GET_CONST(addressGroupList_, vector<DstIPList::AddressGroupList>) };
      inline vector<DstIPList::AddressGroupList> getAddressGroupList() { DARABONBA_PTR_GET(addressGroupList_, vector<DstIPList::AddressGroupList>) };
      inline DstIPList& setAddressGroupList(const vector<DstIPList::AddressGroupList> & addressGroupList) { DARABONBA_PTR_SET_VALUE(addressGroupList_, addressGroupList) };
      inline DstIPList& setAddressGroupList(vector<DstIPList::AddressGroupList> && addressGroupList) { DARABONBA_PTR_SET_RVALUE(addressGroupList_, addressGroupList) };


      // applicationPortList Field Functions 
      bool hasApplicationPortList() const { return this->applicationPortList_ != nullptr;};
      void deleteApplicationPortList() { this->applicationPortList_ = nullptr;};
      inline const vector<DstIPList::ApplicationPortList> & getApplicationPortList() const { DARABONBA_PTR_GET_CONST(applicationPortList_, vector<DstIPList::ApplicationPortList>) };
      inline vector<DstIPList::ApplicationPortList> getApplicationPortList() { DARABONBA_PTR_GET(applicationPortList_, vector<DstIPList::ApplicationPortList>) };
      inline DstIPList& setApplicationPortList(const vector<DstIPList::ApplicationPortList> & applicationPortList) { DARABONBA_PTR_SET_VALUE(applicationPortList_, applicationPortList) };
      inline DstIPList& setApplicationPortList(vector<DstIPList::ApplicationPortList> && applicationPortList) { DARABONBA_PTR_SET_RVALUE(applicationPortList_, applicationPortList) };


      // assetCount Field Functions 
      bool hasAssetCount() const { return this->assetCount_ != nullptr;};
      void deleteAssetCount() { this->assetCount_ = nullptr;};
      inline int64_t getAssetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0L) };
      inline DstIPList& setAssetCount(int64_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


      // categoryClassId Field Functions 
      bool hasCategoryClassId() const { return this->categoryClassId_ != nullptr;};
      void deleteCategoryClassId() { this->categoryClassId_ = nullptr;};
      inline string getCategoryClassId() const { DARABONBA_PTR_GET_DEFAULT(categoryClassId_, "") };
      inline DstIPList& setCategoryClassId(string categoryClassId) { DARABONBA_PTR_SET_VALUE(categoryClassId_, categoryClassId) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline DstIPList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline DstIPList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // dstIP Field Functions 
      bool hasDstIP() const { return this->dstIP_ != nullptr;};
      void deleteDstIP() { this->dstIP_ = nullptr;};
      inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
      inline DstIPList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DstIPList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // hasAcl Field Functions 
      bool hasHasAcl() const { return this->hasAcl_ != nullptr;};
      void deleteHasAcl() { this->hasAcl_ = nullptr;};
      inline string getHasAcl() const { DARABONBA_PTR_GET_DEFAULT(hasAcl_, "") };
      inline DstIPList& setHasAcl(string hasAcl) { DARABONBA_PTR_SET_VALUE(hasAcl_, hasAcl) };


      // hasAclRecommend Field Functions 
      bool hasHasAclRecommend() const { return this->hasAclRecommend_ != nullptr;};
      void deleteHasAclRecommend() { this->hasAclRecommend_ = nullptr;};
      inline bool getHasAclRecommend() const { DARABONBA_PTR_GET_DEFAULT(hasAclRecommend_, false) };
      inline DstIPList& setHasAclRecommend(bool hasAclRecommend) { DARABONBA_PTR_SET_VALUE(hasAclRecommend_, hasAclRecommend) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline DstIPList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // isMarkNormal Field Functions 
      bool hasIsMarkNormal() const { return this->isMarkNormal_ != nullptr;};
      void deleteIsMarkNormal() { this->isMarkNormal_ = nullptr;};
      inline bool getIsMarkNormal() const { DARABONBA_PTR_GET_DEFAULT(isMarkNormal_, false) };
      inline DstIPList& setIsMarkNormal(bool isMarkNormal) { DARABONBA_PTR_SET_VALUE(isMarkNormal_, isMarkNormal) };


      // locationName Field Functions 
      bool hasLocationName() const { return this->locationName_ != nullptr;};
      void deleteLocationName() { this->locationName_ = nullptr;};
      inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
      inline DstIPList& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline DstIPList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // privateAssetCount Field Functions 
      bool hasPrivateAssetCount() const { return this->privateAssetCount_ != nullptr;};
      void deletePrivateAssetCount() { this->privateAssetCount_ = nullptr;};
      inline int64_t getPrivateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(privateAssetCount_, 0L) };
      inline DstIPList& setPrivateAssetCount(int64_t privateAssetCount) { DARABONBA_PTR_SET_VALUE(privateAssetCount_, privateAssetCount) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline DstIPList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline DstIPList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // securityReason Field Functions 
      bool hasSecurityReason() const { return this->securityReason_ != nullptr;};
      void deleteSecurityReason() { this->securityReason_ = nullptr;};
      inline string getSecurityReason() const { DARABONBA_PTR_GET_DEFAULT(securityReason_, "") };
      inline DstIPList& setSecurityReason(string securityReason) { DARABONBA_PTR_SET_VALUE(securityReason_, securityReason) };


      // securitySuggest Field Functions 
      bool hasSecuritySuggest() const { return this->securitySuggest_ != nullptr;};
      void deleteSecuritySuggest() { this->securitySuggest_ = nullptr;};
      inline string getSecuritySuggest() const { DARABONBA_PTR_GET_DEFAULT(securitySuggest_, "") };
      inline DstIPList& setSecuritySuggest(string securitySuggest) { DARABONBA_PTR_SET_VALUE(securitySuggest_, securitySuggest) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DstIPList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<DstIPList::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<DstIPList::TagList>) };
      inline vector<DstIPList::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<DstIPList::TagList>) };
      inline DstIPList& setTagList(const vector<DstIPList::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline DstIPList& setTagList(vector<DstIPList::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline string getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
      inline DstIPList& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    protected:
      // Indicates whether an access control policy is configured. Valid values:
      // 
      // *   **Uncovered**: no
      // *   **FullCoverage**: yes
      shared_ptr<string> aclCoverage_ {};
      // The suggestion to configure an access control policy.
      shared_ptr<string> aclRecommendDetail_ {};
      // The status of the access control policy. Valid values:
      // 
      // *   **normal**: healthy
      // *   **Abnormal**: unhealthy
      shared_ptr<string> aclStatus_ {};
      // The information about the address book.
      shared_ptr<vector<DstIPList::AddressGroupList>> addressGroupList_ {};
      // The application ports.
      // 
      // >  Only the first 100 application ports are displayed.
      shared_ptr<vector<DstIPList::ApplicationPortList>> applicationPortList_ {};
      // The outbound asset count.
      shared_ptr<int64_t> assetCount_ {};
      // The type of the tag. Valid values:
      // 
      // *   **Suspicious**
      // *   **Malicious**
      // *   **Trusted**
      shared_ptr<string> categoryClassId_ {};
      // The ID of the service type. Valid values:
      // 
      // *   **Aliyun**: Alibaba Cloud services
      // *   **NotAliyun**: third-party services
      shared_ptr<string> categoryId_ {};
      // The type of the service to which the destination IP address belongs. Valid values:
      // 
      // *   **Alibaba Cloud services**
      // *   **Third-party services**
      shared_ptr<string> categoryName_ {};
      // The destination IP addresses in outbound connections.
      shared_ptr<string> dstIP_ {};
      // The name of the group to which the access control policy belongs.
      shared_ptr<string> groupName_ {};
      // Indicates whether an access control policy is configured. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> hasAcl_ {};
      // Indicates whether an access control policy is recommended. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasAclRecommend_ {};
      // The inbound traffic. Unit: bytes.
      shared_ptr<int64_t> inBytes_ {};
      // Indicates whether the destination IP address is added to a whitelist. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isMarkNormal_ {};
      // Location name.
      shared_ptr<string> locationName_ {};
      // The outbound traffic. Unit: bytes.
      shared_ptr<int64_t> outBytes_ {};
      // The outbound private asset count.
      shared_ptr<int64_t> privateAssetCount_ {};
      // The UUID of the access control policy.
      shared_ptr<string> ruleId_ {};
      // The name of the access control policy.
      shared_ptr<string> ruleName_ {};
      // The reason why the domain name is secure.
      shared_ptr<string> securityReason_ {};
      // The suggestion to handle the traffic of the domain name in outbound connections. Valid values:
      // 
      // *   **pass**: allow
      // *   **alert**: deny
      // *   **drop**: monitor
      shared_ptr<string> securitySuggest_ {};
      // The number of requests.
      shared_ptr<int64_t> sessionCount_ {};
      // The tags.
      shared_ptr<vector<DstIPList::TagList>> tagList_ {};
      // The total traffic. Unit: bytes
      shared_ptr<string> totalBytes_ {};
    };

    virtual bool empty() const override { return this->dstIPList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dstIPList Field Functions 
    bool hasDstIPList() const { return this->dstIPList_ != nullptr;};
    void deleteDstIPList() { this->dstIPList_ = nullptr;};
    inline const vector<DescribeOutgoingDestinationIPResponseBody::DstIPList> & getDstIPList() const { DARABONBA_PTR_GET_CONST(dstIPList_, vector<DescribeOutgoingDestinationIPResponseBody::DstIPList>) };
    inline vector<DescribeOutgoingDestinationIPResponseBody::DstIPList> getDstIPList() { DARABONBA_PTR_GET(dstIPList_, vector<DescribeOutgoingDestinationIPResponseBody::DstIPList>) };
    inline DescribeOutgoingDestinationIPResponseBody& setDstIPList(const vector<DescribeOutgoingDestinationIPResponseBody::DstIPList> & dstIPList) { DARABONBA_PTR_SET_VALUE(dstIPList_, dstIPList) };
    inline DescribeOutgoingDestinationIPResponseBody& setDstIPList(vector<DescribeOutgoingDestinationIPResponseBody::DstIPList> && dstIPList) { DARABONBA_PTR_SET_RVALUE(dstIPList_, dstIPList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDestinationIPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDestinationIPResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IP addresses in outbound connections.
    shared_ptr<vector<DescribeOutgoingDestinationIPResponseBody::DstIPList>> dstIPList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of destination IP addresses in outbound connections.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
