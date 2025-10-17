// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AICSOPENAPIINVOKEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AICSOPENAPIINVOKEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class AicsOpenApiInvokeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AicsOpenApiInvokeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_ANY_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AicsOpenApiInvokeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_ANY_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AicsOpenApiInvokeRequest() = default ;
    AicsOpenApiInvokeRequest(const AicsOpenApiInvokeRequest &) = default ;
    AicsOpenApiInvokeRequest(AicsOpenApiInvokeRequest &&) = default ;
    AicsOpenApiInvokeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AicsOpenApiInvokeRequest() = default ;
    AicsOpenApiInvokeRequest& operator=(const AicsOpenApiInvokeRequest &) = default ;
    AicsOpenApiInvokeRequest& operator=(AicsOpenApiInvokeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->nodeId_ == nullptr && return this->param_ == nullptr && return this->serviceId_ == nullptr && return this->type_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline AicsOpenApiInvokeRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline AicsOpenApiInvokeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline     const Darabonba::Json & param() const { DARABONBA_GET(param_) };
    Darabonba::Json & param() { DARABONBA_GET(param_) };
    inline AicsOpenApiInvokeRequest& setParam(const Darabonba::Json & param) { DARABONBA_SET_VALUE(param_, param) };
    inline AicsOpenApiInvokeRequest& setParam(Darabonba::Json & param) { DARABONBA_SET_RVALUE(param_, param) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline AicsOpenApiInvokeRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AicsOpenApiInvokeRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    Darabonba::Json param_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
