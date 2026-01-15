// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class DetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DetailResponseBody() = default ;
    DetailResponseBody(const DetailResponseBody &) = default ;
    DetailResponseBody(DetailResponseBody &&) = default ;
    DetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetailResponseBody() = default ;
    DetailResponseBody& operator=(const DetailResponseBody &) = default ;
    DetailResponseBody& operator=(DetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Qps, qps_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UtcCreate, utcCreate_);
        DARABONBA_PTR_TO_JSON(UtcExpireTime, utcExpireTime_);
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Qps, qps_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UtcCreate, utcCreate_);
        DARABONBA_PTR_FROM_JSON(UtcExpireTime, utcExpireTime_);
      };
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->name_ == nullptr && this->qps_ == nullptr && this->region_ == nullptr && this->serviceType_ == nullptr && this->totalCount_ == nullptr
        && this->utcCreate_ == nullptr && this->utcExpireTime_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int32_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0) };
      inline Instance& setCapacity(int32_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Instance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // qps Field Functions 
      bool hasQps() const { return this->qps_ != nullptr;};
      void deleteQps() { this->qps_ = nullptr;};
      inline int32_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0) };
      inline Instance& setQps(int32_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Instance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline int32_t getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
      inline Instance& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Instance& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // utcCreate Field Functions 
      bool hasUtcCreate() const { return this->utcCreate_ != nullptr;};
      void deleteUtcCreate() { this->utcCreate_ = nullptr;};
      inline string getUtcCreate() const { DARABONBA_PTR_GET_DEFAULT(utcCreate_, "") };
      inline Instance& setUtcCreate(string utcCreate) { DARABONBA_PTR_SET_VALUE(utcCreate_, utcCreate) };


      // utcExpireTime Field Functions 
      bool hasUtcExpireTime() const { return this->utcExpireTime_ != nullptr;};
      void deleteUtcExpireTime() { this->utcExpireTime_ = nullptr;};
      inline string getUtcExpireTime() const { DARABONBA_PTR_GET_DEFAULT(utcExpireTime_, "") };
      inline Instance& setUtcExpireTime(string utcExpireTime) { DARABONBA_PTR_SET_VALUE(utcExpireTime_, utcExpireTime) };


    protected:
      // The capacity of the plan. Unit: × 10,000 images.
      shared_ptr<int32_t> capacity_ {};
      // The name of the instance.
      shared_ptr<string> name_ {};
      // The number of queries per second supported by the plan.
      shared_ptr<int32_t> qps_ {};
      // The information about the region.
      shared_ptr<string> region_ {};
      // The Image Search model.
      // 
      // 0: commodity search. 1: generic image search.
      shared_ptr<int32_t> serviceType_ {};
      // The number of images.
      shared_ptr<int64_t> totalCount_ {};
      // The time when the instance was created. Unit: milliseconds.
      shared_ptr<string> utcCreate_ {};
      // The time when the instance expires. Unit: milliseconds.
      shared_ptr<string> utcExpireTime_ {};
    };

    virtual bool empty() const override { return this->instance_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const DetailResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, DetailResponseBody::Instance) };
    inline DetailResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, DetailResponseBody::Instance) };
    inline DetailResponseBody& setInstance(const DetailResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DetailResponseBody& setInstance(DetailResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the instance.
    shared_ptr<DetailResponseBody::Instance> instance_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
