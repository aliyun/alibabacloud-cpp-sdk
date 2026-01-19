// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLPOLICYITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLPOLICYITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeIpControlPolicyItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpControlPolicyItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlPolicyItems, ipControlPolicyItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpControlPolicyItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlPolicyItems, ipControlPolicyItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpControlPolicyItemsResponseBody() = default ;
    DescribeIpControlPolicyItemsResponseBody(const DescribeIpControlPolicyItemsResponseBody &) = default ;
    DescribeIpControlPolicyItemsResponseBody(DescribeIpControlPolicyItemsResponseBody &&) = default ;
    DescribeIpControlPolicyItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpControlPolicyItemsResponseBody() = default ;
    DescribeIpControlPolicyItemsResponseBody& operator=(const DescribeIpControlPolicyItemsResponseBody &) = default ;
    DescribeIpControlPolicyItemsResponseBody& operator=(DescribeIpControlPolicyItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpControlPolicyItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpControlPolicyItems& obj) { 
        DARABONBA_PTR_TO_JSON(IpControlPolicyItem, ipControlPolicyItem_);
      };
      friend void from_json(const Darabonba::Json& j, IpControlPolicyItems& obj) { 
        DARABONBA_PTR_FROM_JSON(IpControlPolicyItem, ipControlPolicyItem_);
      };
      IpControlPolicyItems() = default ;
      IpControlPolicyItems(const IpControlPolicyItems &) = default ;
      IpControlPolicyItems(IpControlPolicyItems &&) = default ;
      IpControlPolicyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpControlPolicyItems() = default ;
      IpControlPolicyItems& operator=(const IpControlPolicyItems &) = default ;
      IpControlPolicyItems& operator=(IpControlPolicyItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpControlPolicyItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpControlPolicyItem& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(PolicyItemId, policyItemId_);
        };
        friend void from_json(const Darabonba::Json& j, IpControlPolicyItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(PolicyItemId, policyItemId_);
        };
        IpControlPolicyItem() = default ;
        IpControlPolicyItem(const IpControlPolicyItem &) = default ;
        IpControlPolicyItem(IpControlPolicyItem &&) = default ;
        IpControlPolicyItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpControlPolicyItem() = default ;
        IpControlPolicyItem& operator=(const IpControlPolicyItem &) = default ;
        IpControlPolicyItem& operator=(IpControlPolicyItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->cidrIp_ == nullptr && this->createTime_ == nullptr && this->modifiedTime_ == nullptr && this->policyItemId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline IpControlPolicyItem& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // cidrIp Field Functions 
        bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
        void deleteCidrIp() { this->cidrIp_ = nullptr;};
        inline string getCidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
        inline IpControlPolicyItem& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline IpControlPolicyItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline IpControlPolicyItem& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // policyItemId Field Functions 
        bool hasPolicyItemId() const { return this->policyItemId_ != nullptr;};
        void deletePolicyItemId() { this->policyItemId_ = nullptr;};
        inline string getPolicyItemId() const { DARABONBA_PTR_GET_DEFAULT(policyItemId_, "") };
        inline IpControlPolicyItem& setPolicyItemId(string policyItemId) { DARABONBA_PTR_SET_VALUE(policyItemId_, policyItemId) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The IP addresses or CIDR blocks.
        shared_ptr<string> cidrIp_ {};
        // The time when the policy was created. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The time when the policy was modified. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The ID of the policy.
        shared_ptr<string> policyItemId_ {};
      };

      virtual bool empty() const override { return this->ipControlPolicyItem_ == nullptr; };
      // ipControlPolicyItem Field Functions 
      bool hasIpControlPolicyItem() const { return this->ipControlPolicyItem_ != nullptr;};
      void deleteIpControlPolicyItem() { this->ipControlPolicyItem_ = nullptr;};
      inline const vector<IpControlPolicyItems::IpControlPolicyItem> & getIpControlPolicyItem() const { DARABONBA_PTR_GET_CONST(ipControlPolicyItem_, vector<IpControlPolicyItems::IpControlPolicyItem>) };
      inline vector<IpControlPolicyItems::IpControlPolicyItem> getIpControlPolicyItem() { DARABONBA_PTR_GET(ipControlPolicyItem_, vector<IpControlPolicyItems::IpControlPolicyItem>) };
      inline IpControlPolicyItems& setIpControlPolicyItem(const vector<IpControlPolicyItems::IpControlPolicyItem> & ipControlPolicyItem) { DARABONBA_PTR_SET_VALUE(ipControlPolicyItem_, ipControlPolicyItem) };
      inline IpControlPolicyItems& setIpControlPolicyItem(vector<IpControlPolicyItems::IpControlPolicyItem> && ipControlPolicyItem) { DARABONBA_PTR_SET_RVALUE(ipControlPolicyItem_, ipControlPolicyItem) };


    protected:
      shared_ptr<vector<IpControlPolicyItems::IpControlPolicyItem>> ipControlPolicyItem_ {};
    };

    virtual bool empty() const override { return this->ipControlPolicyItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipControlPolicyItems Field Functions 
    bool hasIpControlPolicyItems() const { return this->ipControlPolicyItems_ != nullptr;};
    void deleteIpControlPolicyItems() { this->ipControlPolicyItems_ = nullptr;};
    inline const DescribeIpControlPolicyItemsResponseBody::IpControlPolicyItems & getIpControlPolicyItems() const { DARABONBA_PTR_GET_CONST(ipControlPolicyItems_, DescribeIpControlPolicyItemsResponseBody::IpControlPolicyItems) };
    inline DescribeIpControlPolicyItemsResponseBody::IpControlPolicyItems getIpControlPolicyItems() { DARABONBA_PTR_GET(ipControlPolicyItems_, DescribeIpControlPolicyItemsResponseBody::IpControlPolicyItems) };
    inline DescribeIpControlPolicyItemsResponseBody& setIpControlPolicyItems(const DescribeIpControlPolicyItemsResponseBody::IpControlPolicyItems & ipControlPolicyItems) { DARABONBA_PTR_SET_VALUE(ipControlPolicyItems_, ipControlPolicyItems) };
    inline DescribeIpControlPolicyItemsResponseBody& setIpControlPolicyItems(DescribeIpControlPolicyItemsResponseBody::IpControlPolicyItems && ipControlPolicyItems) { DARABONBA_PTR_SET_RVALUE(ipControlPolicyItems_, ipControlPolicyItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpControlPolicyItemsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpControlPolicyItemsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpControlPolicyItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpControlPolicyItemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about policies. The information is an array of IpControlPolicyItem data.
    shared_ptr<DescribeIpControlPolicyItemsResponseBody::IpControlPolicyItems> ipControlPolicyItems_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
