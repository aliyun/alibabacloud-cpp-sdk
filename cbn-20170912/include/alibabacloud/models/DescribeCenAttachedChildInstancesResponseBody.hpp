// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenAttachedChildInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenAttachedChildInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstances, childInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenAttachedChildInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstances, childInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenAttachedChildInstancesResponseBody() = default ;
    DescribeCenAttachedChildInstancesResponseBody(const DescribeCenAttachedChildInstancesResponseBody &) = default ;
    DescribeCenAttachedChildInstancesResponseBody(DescribeCenAttachedChildInstancesResponseBody &&) = default ;
    DescribeCenAttachedChildInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenAttachedChildInstancesResponseBody() = default ;
    DescribeCenAttachedChildInstancesResponseBody& operator=(const DescribeCenAttachedChildInstancesResponseBody &) = default ;
    DescribeCenAttachedChildInstancesResponseBody& operator=(DescribeCenAttachedChildInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChildInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChildInstances& obj) { 
        DARABONBA_PTR_TO_JSON(ChildInstance, childInstance_);
      };
      friend void from_json(const Darabonba::Json& j, ChildInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(ChildInstance, childInstance_);
      };
      ChildInstances() = default ;
      ChildInstances(const ChildInstances &) = default ;
      ChildInstances(ChildInstances &&) = default ;
      ChildInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChildInstances() = default ;
      ChildInstances& operator=(const ChildInstances &) = default ;
      ChildInstances& operator=(ChildInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChildInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChildInstance& obj) { 
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(ChildInstanceAttachTime, childInstanceAttachTime_);
          DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
          DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
          DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
          DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
          DARABONBA_PTR_TO_JSON(ManagedService, managedService_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ChildInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceAttachTime, childInstanceAttachTime_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
          DARABONBA_PTR_FROM_JSON(ManagedService, managedService_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ChildInstance() = default ;
        ChildInstance(const ChildInstance &) = default ;
        ChildInstance(ChildInstance &&) = default ;
        ChildInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChildInstance() = default ;
        ChildInstance& operator=(const ChildInstance &) = default ;
        ChildInstance& operator=(ChildInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cenId_ == nullptr
        && this->childInstanceAttachTime_ == nullptr && this->childInstanceId_ == nullptr && this->childInstanceOwnerId_ == nullptr && this->childInstanceRegionId_ == nullptr && this->childInstanceType_ == nullptr
        && this->managedService_ == nullptr && this->status_ == nullptr; };
        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline ChildInstance& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // childInstanceAttachTime Field Functions 
        bool hasChildInstanceAttachTime() const { return this->childInstanceAttachTime_ != nullptr;};
        void deleteChildInstanceAttachTime() { this->childInstanceAttachTime_ = nullptr;};
        inline string getChildInstanceAttachTime() const { DARABONBA_PTR_GET_DEFAULT(childInstanceAttachTime_, "") };
        inline ChildInstance& setChildInstanceAttachTime(string childInstanceAttachTime) { DARABONBA_PTR_SET_VALUE(childInstanceAttachTime_, childInstanceAttachTime) };


        // childInstanceId Field Functions 
        bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
        void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
        inline string getChildInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
        inline ChildInstance& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


        // childInstanceOwnerId Field Functions 
        bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
        void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
        inline int64_t getChildInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
        inline ChildInstance& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


        // childInstanceRegionId Field Functions 
        bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
        void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
        inline string getChildInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
        inline ChildInstance& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


        // childInstanceType Field Functions 
        bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
        void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
        inline string getChildInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
        inline ChildInstance& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


        // managedService Field Functions 
        bool hasManagedService() const { return this->managedService_ != nullptr;};
        void deleteManagedService() { this->managedService_ = nullptr;};
        inline string getManagedService() const { DARABONBA_PTR_GET_DEFAULT(managedService_, "") };
        inline ChildInstance& setManagedService(string managedService) { DARABONBA_PTR_SET_VALUE(managedService_, managedService) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ChildInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the CEN instance.
        shared_ptr<string> cenId_ {};
        // The time when the network instance was attached to the CEN instance.
        // 
        // The time follows the ISO8601 standard in the YYYY-MM-DDThh:mmZ format. The time is displayed in UTC.
        shared_ptr<string> childInstanceAttachTime_ {};
        // The ID of the network instance.
        shared_ptr<string> childInstanceId_ {};
        // The ID of the Alibaba Cloud account to which the network instance belongs.
        shared_ptr<int64_t> childInstanceOwnerId_ {};
        // The ID of the region where the network instance is deployed.
        shared_ptr<string> childInstanceRegionId_ {};
        // The type of the network instance. Valid values:
        // 
        // *   **VPC**: VPC
        // *   **VBR**: VBR
        // *   **CCN**: CCN instance
        shared_ptr<string> childInstanceType_ {};
        shared_ptr<string> managedService_ {};
        // The status of the network instance. Valid values:
        // 
        // *   **Attaching**: The network instance is being created on the transit router.
        // *   **Attached**: The network instance has been created on the transit router.
        // *   **Detaching**: The network instance is being deleted from the transit router.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->childInstance_ == nullptr; };
      // childInstance Field Functions 
      bool hasChildInstance() const { return this->childInstance_ != nullptr;};
      void deleteChildInstance() { this->childInstance_ = nullptr;};
      inline const vector<ChildInstances::ChildInstance> & getChildInstance() const { DARABONBA_PTR_GET_CONST(childInstance_, vector<ChildInstances::ChildInstance>) };
      inline vector<ChildInstances::ChildInstance> getChildInstance() { DARABONBA_PTR_GET(childInstance_, vector<ChildInstances::ChildInstance>) };
      inline ChildInstances& setChildInstance(const vector<ChildInstances::ChildInstance> & childInstance) { DARABONBA_PTR_SET_VALUE(childInstance_, childInstance) };
      inline ChildInstances& setChildInstance(vector<ChildInstances::ChildInstance> && childInstance) { DARABONBA_PTR_SET_RVALUE(childInstance_, childInstance) };


    protected:
      shared_ptr<vector<ChildInstances::ChildInstance>> childInstance_ {};
    };

    virtual bool empty() const override { return this->childInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // childInstances Field Functions 
    bool hasChildInstances() const { return this->childInstances_ != nullptr;};
    void deleteChildInstances() { this->childInstances_ = nullptr;};
    inline const DescribeCenAttachedChildInstancesResponseBody::ChildInstances & getChildInstances() const { DARABONBA_PTR_GET_CONST(childInstances_, DescribeCenAttachedChildInstancesResponseBody::ChildInstances) };
    inline DescribeCenAttachedChildInstancesResponseBody::ChildInstances getChildInstances() { DARABONBA_PTR_GET(childInstances_, DescribeCenAttachedChildInstancesResponseBody::ChildInstances) };
    inline DescribeCenAttachedChildInstancesResponseBody& setChildInstances(const DescribeCenAttachedChildInstancesResponseBody::ChildInstances & childInstances) { DARABONBA_PTR_SET_VALUE(childInstances_, childInstances) };
    inline DescribeCenAttachedChildInstancesResponseBody& setChildInstances(DescribeCenAttachedChildInstancesResponseBody::ChildInstances && childInstances) { DARABONBA_PTR_SET_RVALUE(childInstances_, childInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenAttachedChildInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenAttachedChildInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenAttachedChildInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenAttachedChildInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the network instances.
    shared_ptr<DescribeCenAttachedChildInstancesResponseBody::ChildInstances> childInstances_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
