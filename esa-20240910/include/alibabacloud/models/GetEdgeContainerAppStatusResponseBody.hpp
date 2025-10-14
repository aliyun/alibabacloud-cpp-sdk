// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeContainerAppStatusResponseBodyAppStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppStatus, appStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppStatus, appStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEdgeContainerAppStatusResponseBody() = default ;
    GetEdgeContainerAppStatusResponseBody(const GetEdgeContainerAppStatusResponseBody &) = default ;
    GetEdgeContainerAppStatusResponseBody(GetEdgeContainerAppStatusResponseBody &&) = default ;
    GetEdgeContainerAppStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppStatusResponseBody() = default ;
    GetEdgeContainerAppStatusResponseBody& operator=(const GetEdgeContainerAppStatusResponseBody &) = default ;
    GetEdgeContainerAppStatusResponseBody& operator=(GetEdgeContainerAppStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // appStatus Field Functions 
    bool hasAppStatus() const { return this->appStatus_ != nullptr;};
    void deleteAppStatus() { this->appStatus_ = nullptr;};
    inline const GetEdgeContainerAppStatusResponseBodyAppStatus & appStatus() const { DARABONBA_PTR_GET_CONST(appStatus_, GetEdgeContainerAppStatusResponseBodyAppStatus) };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus appStatus() { DARABONBA_PTR_GET(appStatus_, GetEdgeContainerAppStatusResponseBodyAppStatus) };
    inline GetEdgeContainerAppStatusResponseBody& setAppStatus(const GetEdgeContainerAppStatusResponseBodyAppStatus & appStatus) { DARABONBA_PTR_SET_VALUE(appStatus_, appStatus) };
    inline GetEdgeContainerAppStatusResponseBody& setAppStatus(GetEdgeContainerAppStatusResponseBodyAppStatus && appStatus) { DARABONBA_PTR_SET_RVALUE(appStatus_, appStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the application.
    std::shared_ptr<GetEdgeContainerAppStatusResponseBodyAppStatus> appStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
