// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLINKAISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFLINKAISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class GetFlinkAiServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlinkAiServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlinkAiServiceDTO, flinkAiServiceDTO_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlinkAiServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlinkAiServiceDTO, flinkAiServiceDTO_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFlinkAiServiceResponseBody() = default ;
    GetFlinkAiServiceResponseBody(const GetFlinkAiServiceResponseBody &) = default ;
    GetFlinkAiServiceResponseBody(GetFlinkAiServiceResponseBody &&) = default ;
    GetFlinkAiServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlinkAiServiceResponseBody() = default ;
    GetFlinkAiServiceResponseBody& operator=(const GetFlinkAiServiceResponseBody &) = default ;
    GetFlinkAiServiceResponseBody& operator=(GetFlinkAiServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlinkAiServiceDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlinkAiServiceDTO& obj) { 
        DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(FlinkAiInstanceStatus, flinkAiInstanceStatus_);
        DARABONBA_PTR_TO_JSON(MainInstanceId, mainInstanceId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceCreateTime, resourceCreateTime_);
      };
      friend void from_json(const Darabonba::Json& j, FlinkAiServiceDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(FlinkAiInstanceStatus, flinkAiInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(MainInstanceId, mainInstanceId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceCreateTime, resourceCreateTime_);
      };
      FlinkAiServiceDTO() = default ;
      FlinkAiServiceDTO(const FlinkAiServiceDTO &) = default ;
      FlinkAiServiceDTO(FlinkAiServiceDTO &&) = default ;
      FlinkAiServiceDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlinkAiServiceDTO() = default ;
      FlinkAiServiceDTO& operator=(const FlinkAiServiceDTO &) = default ;
      FlinkAiServiceDTO& operator=(FlinkAiServiceDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deletionProtection_ == nullptr
        && this->flinkAiInstanceStatus_ == nullptr && this->mainInstanceId_ == nullptr && this->region_ == nullptr && this->resourceCreateTime_ == nullptr; };
      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline FlinkAiServiceDTO& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // flinkAiInstanceStatus Field Functions 
      bool hasFlinkAiInstanceStatus() const { return this->flinkAiInstanceStatus_ != nullptr;};
      void deleteFlinkAiInstanceStatus() { this->flinkAiInstanceStatus_ = nullptr;};
      inline string getFlinkAiInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(flinkAiInstanceStatus_, "") };
      inline FlinkAiServiceDTO& setFlinkAiInstanceStatus(string flinkAiInstanceStatus) { DARABONBA_PTR_SET_VALUE(flinkAiInstanceStatus_, flinkAiInstanceStatus) };


      // mainInstanceId Field Functions 
      bool hasMainInstanceId() const { return this->mainInstanceId_ != nullptr;};
      void deleteMainInstanceId() { this->mainInstanceId_ = nullptr;};
      inline string getMainInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mainInstanceId_, "") };
      inline FlinkAiServiceDTO& setMainInstanceId(string mainInstanceId) { DARABONBA_PTR_SET_VALUE(mainInstanceId_, mainInstanceId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline FlinkAiServiceDTO& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceCreateTime Field Functions 
      bool hasResourceCreateTime() const { return this->resourceCreateTime_ != nullptr;};
      void deleteResourceCreateTime() { this->resourceCreateTime_ = nullptr;};
      inline int64_t getResourceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreateTime_, 0L) };
      inline FlinkAiServiceDTO& setResourceCreateTime(int64_t resourceCreateTime) { DARABONBA_PTR_SET_VALUE(resourceCreateTime_, resourceCreateTime) };


    protected:
      // Indicates whether deletion protection is enabled.
      shared_ptr<bool> deletionProtection_ {};
      // The status of the Flink AI instance. Valid values:
      // - CLOSED: closed or not activated.
      // - WAITING: waiting to be activated after payment.
      // - OPENING: being activated.
      // - RUNNING: activated.
      // - CLOSING: being closed.
      // - DISABLE: overdue payment.
      shared_ptr<string> flinkAiInstanceStatus_ {};
      // The AI service order instance ID.
      shared_ptr<string> mainInstanceId_ {};
      // The region ID.
      shared_ptr<string> region_ {};
      // The time when the AI service was activated, in timestamp format (milliseconds).
      shared_ptr<int64_t> resourceCreateTime_ {};
    };

    virtual bool empty() const override { return this->flinkAiServiceDTO_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // flinkAiServiceDTO Field Functions 
    bool hasFlinkAiServiceDTO() const { return this->flinkAiServiceDTO_ != nullptr;};
    void deleteFlinkAiServiceDTO() { this->flinkAiServiceDTO_ = nullptr;};
    inline const GetFlinkAiServiceResponseBody::FlinkAiServiceDTO & getFlinkAiServiceDTO() const { DARABONBA_PTR_GET_CONST(flinkAiServiceDTO_, GetFlinkAiServiceResponseBody::FlinkAiServiceDTO) };
    inline GetFlinkAiServiceResponseBody::FlinkAiServiceDTO getFlinkAiServiceDTO() { DARABONBA_PTR_GET(flinkAiServiceDTO_, GetFlinkAiServiceResponseBody::FlinkAiServiceDTO) };
    inline GetFlinkAiServiceResponseBody& setFlinkAiServiceDTO(const GetFlinkAiServiceResponseBody::FlinkAiServiceDTO & flinkAiServiceDTO) { DARABONBA_PTR_SET_VALUE(flinkAiServiceDTO_, flinkAiServiceDTO) };
    inline GetFlinkAiServiceResponseBody& setFlinkAiServiceDTO(GetFlinkAiServiceResponseBody::FlinkAiServiceDTO && flinkAiServiceDTO) { DARABONBA_PTR_SET_RVALUE(flinkAiServiceDTO_, flinkAiServiceDTO) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFlinkAiServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFlinkAiServiceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The Flink AI service data transfer object.
    shared_ptr<GetFlinkAiServiceResponseBody::FlinkAiServiceDTO> flinkAiServiceDTO_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
