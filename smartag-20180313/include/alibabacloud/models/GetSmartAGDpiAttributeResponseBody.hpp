// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTAGDPIATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTAGDPIATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class GetSmartAGDpiAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartAGDpiAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DpiMonitorStatus, dpiMonitorStatus_);
      DARABONBA_PTR_TO_JSON(DpiStatus, dpiStatus_);
      DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsRegion, slsRegion_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartAGDpiAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DpiMonitorStatus, dpiMonitorStatus_);
      DARABONBA_PTR_FROM_JSON(DpiStatus, dpiStatus_);
      DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsRegion, slsRegion_);
    };
    GetSmartAGDpiAttributeResponseBody() = default ;
    GetSmartAGDpiAttributeResponseBody(const GetSmartAGDpiAttributeResponseBody &) = default ;
    GetSmartAGDpiAttributeResponseBody(GetSmartAGDpiAttributeResponseBody &&) = default ;
    GetSmartAGDpiAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartAGDpiAttributeResponseBody() = default ;
    GetSmartAGDpiAttributeResponseBody& operator=(const GetSmartAGDpiAttributeResponseBody &) = default ;
    GetSmartAGDpiAttributeResponseBody& operator=(GetSmartAGDpiAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dpiMonitorStatus_ == nullptr
        && this->dpiStatus_ == nullptr && this->logstoreName_ == nullptr && this->projectName_ == nullptr && this->requestId_ == nullptr && this->slsRegion_ == nullptr; };
    // dpiMonitorStatus Field Functions 
    bool hasDpiMonitorStatus() const { return this->dpiMonitorStatus_ != nullptr;};
    void deleteDpiMonitorStatus() { this->dpiMonitorStatus_ = nullptr;};
    inline string getDpiMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(dpiMonitorStatus_, "") };
    inline GetSmartAGDpiAttributeResponseBody& setDpiMonitorStatus(string dpiMonitorStatus) { DARABONBA_PTR_SET_VALUE(dpiMonitorStatus_, dpiMonitorStatus) };


    // dpiStatus Field Functions 
    bool hasDpiStatus() const { return this->dpiStatus_ != nullptr;};
    void deleteDpiStatus() { this->dpiStatus_ = nullptr;};
    inline string getDpiStatus() const { DARABONBA_PTR_GET_DEFAULT(dpiStatus_, "") };
    inline GetSmartAGDpiAttributeResponseBody& setDpiStatus(string dpiStatus) { DARABONBA_PTR_SET_VALUE(dpiStatus_, dpiStatus) };


    // logstoreName Field Functions 
    bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
    void deleteLogstoreName() { this->logstoreName_ = nullptr;};
    inline string getLogstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
    inline GetSmartAGDpiAttributeResponseBody& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetSmartAGDpiAttributeResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmartAGDpiAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsRegion Field Functions 
    bool hasSlsRegion() const { return this->slsRegion_ != nullptr;};
    void deleteSlsRegion() { this->slsRegion_ = nullptr;};
    inline string getSlsRegion() const { DARABONBA_PTR_GET_DEFAULT(slsRegion_, "") };
    inline GetSmartAGDpiAttributeResponseBody& setSlsRegion(string slsRegion) { DARABONBA_PTR_SET_VALUE(slsRegion_, slsRegion) };


  protected:
    // The status of the DPI-based monitoring feature. Valid values:
    // 
    // *   **Active**: enabled
    // *   **Inactive**: disabled
    shared_ptr<string> dpiMonitorStatus_ {};
    // The status of the DPI feature. Valid values:
    // 
    // *   **On**: enabled
    // *   **Off**: disabled
    shared_ptr<string> dpiStatus_ {};
    // The name of the Log Service Logstore that is associated with the DPI feature.
    shared_ptr<string> logstoreName_ {};
    // The name of the Log Service project that is associated with the DPI feature.
    shared_ptr<string> projectName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The region where Log Service is deployed.
    shared_ptr<string> slsRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
