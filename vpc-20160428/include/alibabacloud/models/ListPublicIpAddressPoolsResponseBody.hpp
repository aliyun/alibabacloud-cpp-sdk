// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPublicIpAddressPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicIpAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolList, publicIpAddressPoolList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicIpAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolList, publicIpAddressPoolList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublicIpAddressPoolsResponseBody() = default ;
    ListPublicIpAddressPoolsResponseBody(const ListPublicIpAddressPoolsResponseBody &) = default ;
    ListPublicIpAddressPoolsResponseBody(ListPublicIpAddressPoolsResponseBody &&) = default ;
    ListPublicIpAddressPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicIpAddressPoolsResponseBody() = default ;
    ListPublicIpAddressPoolsResponseBody& operator=(const ListPublicIpAddressPoolsResponseBody &) = default ;
    ListPublicIpAddressPoolsResponseBody& operator=(ListPublicIpAddressPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublicIpAddressPoolList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublicIpAddressPoolList& obj) { 
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IpAddressRemaining, ipAddressRemaining_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityProtectionTypes, securityProtectionTypes_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TotalIpNum, totalIpNum_);
        DARABONBA_PTR_TO_JSON(UsedIpNum, usedIpNum_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
        DARABONBA_PTR_TO_JSON(Zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, PublicIpAddressPoolList& obj) { 
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IpAddressRemaining, ipAddressRemaining_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityProtectionTypes, securityProtectionTypes_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TotalIpNum, totalIpNum_);
        DARABONBA_PTR_FROM_JSON(UsedIpNum, usedIpNum_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
        DARABONBA_PTR_FROM_JSON(Zones, zones_);
      };
      PublicIpAddressPoolList() = default ;
      PublicIpAddressPoolList(const PublicIpAddressPoolList &) = default ;
      PublicIpAddressPoolList(PublicIpAddressPoolList &&) = default ;
      PublicIpAddressPoolList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublicIpAddressPoolList() = default ;
      PublicIpAddressPoolList& operator=(const PublicIpAddressPoolList &) = default ;
      PublicIpAddressPoolList& operator=(PublicIpAddressPoolList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->bizType_ == nullptr
        && this->businessStatus_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->ipAddressRemaining_ == nullptr && this->isp_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->publicIpAddressPoolId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityProtectionTypes_ == nullptr && this->shareType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->totalIpNum_ == nullptr
        && this->usedIpNum_ == nullptr && this->userType_ == nullptr && this->zones_ == nullptr; };
      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline PublicIpAddressPoolList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline PublicIpAddressPoolList& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline PublicIpAddressPoolList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PublicIpAddressPoolList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ipAddressRemaining Field Functions 
      bool hasIpAddressRemaining() const { return this->ipAddressRemaining_ != nullptr;};
      void deleteIpAddressRemaining() { this->ipAddressRemaining_ = nullptr;};
      inline bool getIpAddressRemaining() const { DARABONBA_PTR_GET_DEFAULT(ipAddressRemaining_, false) };
      inline PublicIpAddressPoolList& setIpAddressRemaining(bool ipAddressRemaining) { DARABONBA_PTR_SET_VALUE(ipAddressRemaining_, ipAddressRemaining) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline PublicIpAddressPoolList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PublicIpAddressPoolList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline PublicIpAddressPoolList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // publicIpAddressPoolId Field Functions 
      bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
      void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
      inline string getPublicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
      inline PublicIpAddressPoolList& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PublicIpAddressPoolList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline PublicIpAddressPoolList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityProtectionTypes Field Functions 
      bool hasSecurityProtectionTypes() const { return this->securityProtectionTypes_ != nullptr;};
      void deleteSecurityProtectionTypes() { this->securityProtectionTypes_ = nullptr;};
      inline const vector<string> & getSecurityProtectionTypes() const { DARABONBA_PTR_GET_CONST(securityProtectionTypes_, vector<string>) };
      inline vector<string> getSecurityProtectionTypes() { DARABONBA_PTR_GET(securityProtectionTypes_, vector<string>) };
      inline PublicIpAddressPoolList& setSecurityProtectionTypes(const vector<string> & securityProtectionTypes) { DARABONBA_PTR_SET_VALUE(securityProtectionTypes_, securityProtectionTypes) };
      inline PublicIpAddressPoolList& setSecurityProtectionTypes(vector<string> && securityProtectionTypes) { DARABONBA_PTR_SET_RVALUE(securityProtectionTypes_, securityProtectionTypes) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline PublicIpAddressPoolList& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PublicIpAddressPoolList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PublicIpAddressPoolList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PublicIpAddressPoolList::Tags>) };
      inline vector<PublicIpAddressPoolList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PublicIpAddressPoolList::Tags>) };
      inline PublicIpAddressPoolList& setTags(const vector<PublicIpAddressPoolList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PublicIpAddressPoolList& setTags(vector<PublicIpAddressPoolList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // totalIpNum Field Functions 
      bool hasTotalIpNum() const { return this->totalIpNum_ != nullptr;};
      void deleteTotalIpNum() { this->totalIpNum_ = nullptr;};
      inline int32_t getTotalIpNum() const { DARABONBA_PTR_GET_DEFAULT(totalIpNum_, 0) };
      inline PublicIpAddressPoolList& setTotalIpNum(int32_t totalIpNum) { DARABONBA_PTR_SET_VALUE(totalIpNum_, totalIpNum) };


      // usedIpNum Field Functions 
      bool hasUsedIpNum() const { return this->usedIpNum_ != nullptr;};
      void deleteUsedIpNum() { this->usedIpNum_ = nullptr;};
      inline int32_t getUsedIpNum() const { DARABONBA_PTR_GET_DEFAULT(usedIpNum_, 0) };
      inline PublicIpAddressPoolList& setUsedIpNum(int32_t usedIpNum) { DARABONBA_PTR_SET_VALUE(usedIpNum_, usedIpNum) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline PublicIpAddressPoolList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<string> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
      inline vector<string> getZones() { DARABONBA_PTR_GET(zones_, vector<string>) };
      inline PublicIpAddressPoolList& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline PublicIpAddressPoolList& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      // The business type of the IP address pool.
      // - **CloudBox**: CloudBox. Only CloudBox users support this type.
      // - **Default** (default): default, indicating a non-special type.
      shared_ptr<string> bizType_ {};
      // The business status of the IP address pool instance.
      // 
      // - **Normal**: normal.
      // - **FinancialLocked**: locked.
      shared_ptr<string> businessStatus_ {};
      // The creation time, in the format of `YYYY-MM-DDThh:mm:ssZ`.
      shared_ptr<string> creationTime_ {};
      // The description of the IP address pool instance.
      shared_ptr<string> description_ {};
      // Indicates whether idle IP addresses are available.
      // - **true**: yes.
      // - **false**: no.
      shared_ptr<bool> ipAddressRemaining_ {};
      // The line type.
      // 
      // - **BGP**: BGP (multi-ISP) line.
      // 
      // - **BGP_PRO**: BGP (multi-ISP) Pro line.
      // 
      // For more information about BGP (multi-ISP) lines and BGP (multi-ISP) Pro lines, see [EIP line types](https://help.aliyun.com/document_detail/32321.html).
      // 
      // If you are a whitelist user of single-ISP bandwidth, the returned type may also be:
      // - **ChinaTelecom**: China Telecom
      // - **ChinaUnicom**: China Unicom
      // - **ChinaMobile**: China Mobile
      // - **ChinaTelecom_L2**: China Telecom L2
      // - **ChinaUnicom_L2**: China Unicom L2
      // - **ChinaMobile_L2**: China Mobile L2
      // 
      // If you are a China (Hangzhou) Finance Cloud user, **BGP_FinanceCloud** is returned.
      shared_ptr<string> isp_ {};
      // The name of the IP address pool instance.
      shared_ptr<string> name_ {};
      // The Alibaba Cloud account to which the IP address pool belongs.
      shared_ptr<int64_t> ownerId_ {};
      // The instance ID of the IP address pool.
      shared_ptr<string> publicIpAddressPoolId_ {};
      // The region ID of the IP address pool.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the IP address pool belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The security protection level.
      // 
      // - If this parameter is empty, the default value is Anti-DDoS Basic.
      // 
      // - If the value is **AntiDDoS_Enhanced**, it indicates Anti-DDoS (Enhanced).
      shared_ptr<vector<string>> securityProtectionTypes_ {};
      // The sharing type of the IP address pool.
      // 
      // - **Shared**: The IP address pool is a shared IP address pool.
      // - Empty: The IP address pool is not a shared IP address pool.
      shared_ptr<string> shareType_ {};
      // The instance status of the IPAM pool.
      // - **Created**: active.
      // - **Deleting**: being deleted.
      // - **Modifying**: being modified.
      shared_ptr<string> status_ {};
      // The list of tags.
      shared_ptr<vector<PublicIpAddressPoolList::Tags>> tags_ {};
      // The total number of available IP addresses in the public IP address pool.
      shared_ptr<int32_t> totalIpNum_ {};
      // The number of used IP addresses in the public IP address pool.
      shared_ptr<int32_t> usedIpNum_ {};
      // The type of the user. Valid values:
      // - **admin**: administrator. An administrator can delete, modify, and query IP address pools, and allocate elastic IP addresses (EIPs) from IP address pools.
      // - **user**: regular user. A regular user can only allocate EIPs from IP address pools and query IP address pools, but cannot modify or delete IP address pools.
      shared_ptr<string> userType_ {};
      // The zones of the IP address pool.
      // This parameter is returned only when the business type of the IP address pool is CloudBox.
      shared_ptr<vector<string>> zones_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->publicIpAddressPoolList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublicIpAddressPoolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // publicIpAddressPoolList Field Functions 
    bool hasPublicIpAddressPoolList() const { return this->publicIpAddressPoolList_ != nullptr;};
    void deletePublicIpAddressPoolList() { this->publicIpAddressPoolList_ = nullptr;};
    inline const vector<ListPublicIpAddressPoolsResponseBody::PublicIpAddressPoolList> & getPublicIpAddressPoolList() const { DARABONBA_PTR_GET_CONST(publicIpAddressPoolList_, vector<ListPublicIpAddressPoolsResponseBody::PublicIpAddressPoolList>) };
    inline vector<ListPublicIpAddressPoolsResponseBody::PublicIpAddressPoolList> getPublicIpAddressPoolList() { DARABONBA_PTR_GET(publicIpAddressPoolList_, vector<ListPublicIpAddressPoolsResponseBody::PublicIpAddressPoolList>) };
    inline ListPublicIpAddressPoolsResponseBody& setPublicIpAddressPoolList(const vector<ListPublicIpAddressPoolsResponseBody::PublicIpAddressPoolList> & publicIpAddressPoolList) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolList_, publicIpAddressPoolList) };
    inline ListPublicIpAddressPoolsResponseBody& setPublicIpAddressPoolList(vector<ListPublicIpAddressPoolsResponseBody::PublicIpAddressPoolList> && publicIpAddressPoolList) { DARABONBA_PTR_SET_RVALUE(publicIpAddressPoolList_, publicIpAddressPoolList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublicIpAddressPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPublicIpAddressPoolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // - If **NextToken** is empty, no subsequent request is to be sent.
    // - If **NextToken** is returned, the value indicates the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The list of IP address pool instances.
    shared_ptr<vector<ListPublicIpAddressPoolsResponseBody::PublicIpAddressPoolList>> publicIpAddressPoolList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned under the current request conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
