// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOVERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class MoveResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Responses, responses_);
    };
    friend void from_json(const Darabonba::Json& j, MoveResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Responses, responses_);
    };
    MoveResourcesResponseBody() = default ;
    MoveResourcesResponseBody(const MoveResourcesResponseBody &) = default ;
    MoveResourcesResponseBody(MoveResourcesResponseBody &&) = default ;
    MoveResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveResourcesResponseBody() = default ;
    MoveResourcesResponseBody& operator=(const MoveResourcesResponseBody &) = default ;
    MoveResourcesResponseBody& operator=(MoveResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Responses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Responses& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Service, service_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Responses& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Responses() = default ;
      Responses(const Responses &) = default ;
      Responses(Responses &&) = default ;
      Responses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Responses() = default ;
      Responses& operator=(const Responses &) = default ;
      Responses& operator=(Responses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->service_ == nullptr && this->status_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Responses& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Responses& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Responses& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Responses& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Responses& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Responses& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline Responses& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Responses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The error code returned.
      // 
      // >  This parameter is returned if the resource failed to be moved.
      shared_ptr<string> errorCode_ {};
      // The error message returned.
      // 
      // >  This parameter is returned if the resource failed to be moved.
      shared_ptr<string> errorMsg_ {};
      // The region ID of the resource.
      shared_ptr<string> regionId_ {};
      // The ID of the request.
      shared_ptr<string> requestId_ {};
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
      // The ID of the Alibaba Cloud service.
      shared_ptr<string> service_ {};
      // The status of the move task. Valid values:
      // 
      // *   SUCCESS
      // *   FAIL
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->responses_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MoveResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responses Field Functions 
    bool hasResponses() const { return this->responses_ != nullptr;};
    void deleteResponses() { this->responses_ = nullptr;};
    inline const vector<MoveResourcesResponseBody::Responses> & getResponses() const { DARABONBA_PTR_GET_CONST(responses_, vector<MoveResourcesResponseBody::Responses>) };
    inline vector<MoveResourcesResponseBody::Responses> getResponses() { DARABONBA_PTR_GET(responses_, vector<MoveResourcesResponseBody::Responses>) };
    inline MoveResourcesResponseBody& setResponses(const vector<MoveResourcesResponseBody::Responses> & responses) { DARABONBA_PTR_SET_VALUE(responses_, responses) };
    inline MoveResourcesResponseBody& setResponses(vector<MoveResourcesResponseBody::Responses> && responses) { DARABONBA_PTR_SET_RVALUE(responses_, responses) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned results.
    shared_ptr<vector<MoveResourcesResponseBody::Responses>> responses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
