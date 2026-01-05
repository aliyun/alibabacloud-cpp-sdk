// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeActivationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActivationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActivationList, activationList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActivationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivationList, activationList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeActivationsResponseBody() = default ;
    DescribeActivationsResponseBody(const DescribeActivationsResponseBody &) = default ;
    DescribeActivationsResponseBody(DescribeActivationsResponseBody &&) = default ;
    DescribeActivationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActivationsResponseBody() = default ;
    DescribeActivationsResponseBody& operator=(const DescribeActivationsResponseBody &) = default ;
    DescribeActivationsResponseBody& operator=(DescribeActivationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ActivationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActivationList& obj) { 
        DARABONBA_PTR_TO_JSON(ActivationId, activationId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DeregisteredCount, deregisteredCount_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Disabled, disabled_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(IpAddressRange, ipAddressRange_);
        DARABONBA_PTR_TO_JSON(RegisteredCount, registeredCount_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TimeToLiveInHours, timeToLiveInHours_);
      };
      friend void from_json(const Darabonba::Json& j, ActivationList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivationId, activationId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DeregisteredCount, deregisteredCount_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(IpAddressRange, ipAddressRange_);
        DARABONBA_PTR_FROM_JSON(RegisteredCount, registeredCount_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TimeToLiveInHours, timeToLiveInHours_);
      };
      ActivationList() = default ;
      ActivationList(const ActivationList &) = default ;
      ActivationList(ActivationList &&) = default ;
      ActivationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ActivationList() = default ;
      ActivationList& operator=(const ActivationList &) = default ;
      ActivationList& operator=(ActivationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key of the activation code.
        shared_ptr<string> tagKey_ {};
        // The tag value of the activation code.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->activationId_ == nullptr
        && this->creationTime_ == nullptr && this->deregisteredCount_ == nullptr && this->description_ == nullptr && this->disabled_ == nullptr && this->instanceCount_ == nullptr
        && this->instanceName_ == nullptr && this->ipAddressRange_ == nullptr && this->registeredCount_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr
        && this->timeToLiveInHours_ == nullptr; };
      // activationId Field Functions 
      bool hasActivationId() const { return this->activationId_ != nullptr;};
      void deleteActivationId() { this->activationId_ = nullptr;};
      inline string getActivationId() const { DARABONBA_PTR_GET_DEFAULT(activationId_, "") };
      inline ActivationList& setActivationId(string activationId) { DARABONBA_PTR_SET_VALUE(activationId_, activationId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline ActivationList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // deregisteredCount Field Functions 
      bool hasDeregisteredCount() const { return this->deregisteredCount_ != nullptr;};
      void deleteDeregisteredCount() { this->deregisteredCount_ = nullptr;};
      inline int32_t getDeregisteredCount() const { DARABONBA_PTR_GET_DEFAULT(deregisteredCount_, 0) };
      inline ActivationList& setDeregisteredCount(int32_t deregisteredCount) { DARABONBA_PTR_SET_VALUE(deregisteredCount_, deregisteredCount) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ActivationList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline ActivationList& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline ActivationList& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline ActivationList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // ipAddressRange Field Functions 
      bool hasIpAddressRange() const { return this->ipAddressRange_ != nullptr;};
      void deleteIpAddressRange() { this->ipAddressRange_ = nullptr;};
      inline string getIpAddressRange() const { DARABONBA_PTR_GET_DEFAULT(ipAddressRange_, "") };
      inline ActivationList& setIpAddressRange(string ipAddressRange) { DARABONBA_PTR_SET_VALUE(ipAddressRange_, ipAddressRange) };


      // registeredCount Field Functions 
      bool hasRegisteredCount() const { return this->registeredCount_ != nullptr;};
      void deleteRegisteredCount() { this->registeredCount_ = nullptr;};
      inline int32_t getRegisteredCount() const { DARABONBA_PTR_GET_DEFAULT(registeredCount_, 0) };
      inline ActivationList& setRegisteredCount(int32_t registeredCount) { DARABONBA_PTR_SET_VALUE(registeredCount_, registeredCount) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ActivationList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ActivationList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ActivationList::Tags>) };
      inline vector<ActivationList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ActivationList::Tags>) };
      inline ActivationList& setTags(const vector<ActivationList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ActivationList& setTags(vector<ActivationList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // timeToLiveInHours Field Functions 
      bool hasTimeToLiveInHours() const { return this->timeToLiveInHours_ != nullptr;};
      void deleteTimeToLiveInHours() { this->timeToLiveInHours_ = nullptr;};
      inline int64_t getTimeToLiveInHours() const { DARABONBA_PTR_GET_DEFAULT(timeToLiveInHours_, 0L) };
      inline ActivationList& setTimeToLiveInHours(int64_t timeToLiveInHours) { DARABONBA_PTR_SET_VALUE(timeToLiveInHours_, timeToLiveInHours) };


    protected:
      // The ID of the activation code.
      shared_ptr<string> activationId_ {};
      // The time when the activation code was created.
      shared_ptr<string> creationTime_ {};
      // The number of instances that were deregistered.
      shared_ptr<int32_t> deregisteredCount_ {};
      // The description of the activation code.
      shared_ptr<string> description_ {};
      // Indicates whether the activation code is disabled.
      shared_ptr<bool> disabled_ {};
      // The maximum number of times that the activation code can be used to register managed instances.
      shared_ptr<int32_t> instanceCount_ {};
      // The default instance name prefix.
      shared_ptr<string> instanceName_ {};
      // The IP addresses of hosts that are allowed to use the activation code.
      shared_ptr<string> ipAddressRange_ {};
      // The number of instances that were registered.
      shared_ptr<int32_t> registeredCount_ {};
      // The ID of the resource group to which the activation code belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The tags of the activation code.
      shared_ptr<vector<ActivationList::Tags>> tags_ {};
      // The validity period of the activation code. Unit: hours.
      shared_ptr<int64_t> timeToLiveInHours_ {};
    };

    virtual bool empty() const override { return this->activationList_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // activationList Field Functions 
    bool hasActivationList() const { return this->activationList_ != nullptr;};
    void deleteActivationList() { this->activationList_ = nullptr;};
    inline const vector<DescribeActivationsResponseBody::ActivationList> & getActivationList() const { DARABONBA_PTR_GET_CONST(activationList_, vector<DescribeActivationsResponseBody::ActivationList>) };
    inline vector<DescribeActivationsResponseBody::ActivationList> getActivationList() { DARABONBA_PTR_GET(activationList_, vector<DescribeActivationsResponseBody::ActivationList>) };
    inline DescribeActivationsResponseBody& setActivationList(const vector<DescribeActivationsResponseBody::ActivationList> & activationList) { DARABONBA_PTR_SET_VALUE(activationList_, activationList) };
    inline DescribeActivationsResponseBody& setActivationList(vector<DescribeActivationsResponseBody::ActivationList> && activationList) { DARABONBA_PTR_SET_RVALUE(activationList_, activationList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeActivationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeActivationsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeActivationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActivationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeActivationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The activation codes and their usage information.
    shared_ptr<vector<DescribeActivationsResponseBody::ActivationList>> activationList_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
