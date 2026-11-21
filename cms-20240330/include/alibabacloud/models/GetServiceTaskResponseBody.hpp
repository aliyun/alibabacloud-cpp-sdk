// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(serviceTask, serviceTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(serviceTask, serviceTask_);
    };
    GetServiceTaskResponseBody() = default ;
    GetServiceTaskResponseBody(const GetServiceTaskResponseBody &) = default ;
    GetServiceTaskResponseBody(GetServiceTaskResponseBody &&) = default ;
    GetServiceTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTaskResponseBody() = default ;
    GetServiceTaskResponseBody& operator=(const GetServiceTaskResponseBody &) = default ;
    GetServiceTaskResponseBody& operator=(GetServiceTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceTask_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceTask Field Functions 
    bool hasServiceTask() const { return this->serviceTask_ != nullptr;};
    void deleteServiceTask() { this->serviceTask_ = nullptr;};
    inline     const Darabonba::Json & getServiceTask() const { DARABONBA_GET(serviceTask_) };
    Darabonba::Json & getServiceTask() { DARABONBA_GET(serviceTask_) };
    inline GetServiceTaskResponseBody& setServiceTask(const Darabonba::Json & serviceTask) { DARABONBA_SET_VALUE(serviceTask_, serviceTask) };
    inline GetServiceTaskResponseBody& setServiceTask(Darabonba::Json && serviceTask) { DARABONBA_SET_RVALUE(serviceTask_, serviceTask) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task details object. Common fields include taskId, serviceId, workspace, regionId, ip, taskType, extraInfo (taskConfig JSON for LiveDebug), createTime, and updateTime.
    Darabonba::Json serviceTask_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
