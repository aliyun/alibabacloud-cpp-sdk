// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWALATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWALATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeInstanceAutoRenewalAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewalAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(InstanceAttribute, instanceAttribute_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewalAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(InstanceAttribute, instanceAttribute_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAutoRenewalAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody(const DescribeInstanceAutoRenewalAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody(DescribeInstanceAutoRenewalAttributeResponseBody &&) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewalAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody& operator=(const DescribeInstanceAutoRenewalAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody& operator=(DescribeInstanceAutoRenewalAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceAttribute : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceAttribute& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceAttribute& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      InstanceAttribute() = default ;
      InstanceAttribute(const InstanceAttribute &) = default ;
      InstanceAttribute(InstanceAttribute &&) = default ;
      InstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceAttribute() = default ;
      InstanceAttribute& operator=(const InstanceAttribute &) = default ;
      InstanceAttribute& operator=(InstanceAttribute &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->autoRenewal_ == nullptr && this->instanceId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline InstanceAttribute& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // autoRenewal Field Functions 
      bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
      void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
      inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
      inline InstanceAttribute& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<int64_t> aliUid_ {};
      // The auto-renewal status. Valid values:
      // - true: Auto-renewal is enabled.
      // - false: Auto-renewal is disabled.
      shared_ptr<bool> autoRenewal_ {};
      // The instance ID, which identifies the purchased instance.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->instanceAttribute_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // instanceAttribute Field Functions 
    bool hasInstanceAttribute() const { return this->instanceAttribute_ != nullptr;};
    void deleteInstanceAttribute() { this->instanceAttribute_ = nullptr;};
    inline const vector<DescribeInstanceAutoRenewalAttributeResponseBody::InstanceAttribute> & getInstanceAttribute() const { DARABONBA_PTR_GET_CONST(instanceAttribute_, vector<DescribeInstanceAutoRenewalAttributeResponseBody::InstanceAttribute>) };
    inline vector<DescribeInstanceAutoRenewalAttributeResponseBody::InstanceAttribute> getInstanceAttribute() { DARABONBA_PTR_GET(instanceAttribute_, vector<DescribeInstanceAutoRenewalAttributeResponseBody::InstanceAttribute>) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setInstanceAttribute(const vector<DescribeInstanceAutoRenewalAttributeResponseBody::InstanceAttribute> & instanceAttribute) { DARABONBA_PTR_SET_VALUE(instanceAttribute_, instanceAttribute) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setInstanceAttribute(vector<DescribeInstanceAutoRenewalAttributeResponseBody::InstanceAttribute> && instanceAttribute) { DARABONBA_PTR_SET_RVALUE(instanceAttribute_, instanceAttribute) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of entries that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The list of instances and their auto-renewal status.
    shared_ptr<vector<DescribeInstanceAutoRenewalAttributeResponseBody::InstanceAttribute>> instanceAttribute_ {};
    // The maximum number of entries to return per query.
    shared_ptr<int32_t> maxResults_ {};
    // The mark for paging. Leave this parameter empty for the first query. For subsequent paging, pass the NextToken value returned in the previous response as is. Do not construct or decode the value.
    shared_ptr<string> nextToken_ {};
    // The page number of the paging query, starting from 1.
    shared_ptr<int32_t> pageNo_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
