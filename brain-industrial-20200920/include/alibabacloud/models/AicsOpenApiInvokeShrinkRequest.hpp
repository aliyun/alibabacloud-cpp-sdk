// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AICSOPENAPIINVOKESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AICSOPENAPIINVOKESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class AicsOpenApiInvokeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AicsOpenApiInvokeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Param, paramShrink_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AicsOpenApiInvokeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Param, paramShrink_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AicsOpenApiInvokeShrinkRequest() = default ;
    AicsOpenApiInvokeShrinkRequest(const AicsOpenApiInvokeShrinkRequest &) = default ;
    AicsOpenApiInvokeShrinkRequest(AicsOpenApiInvokeShrinkRequest &&) = default ;
    AicsOpenApiInvokeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AicsOpenApiInvokeShrinkRequest() = default ;
    AicsOpenApiInvokeShrinkRequest& operator=(const AicsOpenApiInvokeShrinkRequest &) = default ;
    AicsOpenApiInvokeShrinkRequest& operator=(AicsOpenApiInvokeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->nodeId_ == nullptr && return this->paramShrink_ == nullptr && return this->serviceId_ == nullptr && return this->type_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline AicsOpenApiInvokeShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline AicsOpenApiInvokeShrinkRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // paramShrink Field Functions 
    bool hasParamShrink() const { return this->paramShrink_ != nullptr;};
    void deleteParamShrink() { this->paramShrink_ = nullptr;};
    inline string paramShrink() const { DARABONBA_PTR_GET_DEFAULT(paramShrink_, "") };
    inline AicsOpenApiInvokeShrinkRequest& setParamShrink(string paramShrink) { DARABONBA_PTR_SET_VALUE(paramShrink_, paramShrink) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline AicsOpenApiInvokeShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AicsOpenApiInvokeShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> paramShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
