// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELDEPLOYMENTSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELDEPLOYMENTSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class GetModelDeploymentSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelDeploymentSpecResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelDeploymentSpecResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetModelDeploymentSpecResponseBody() = default ;
    GetModelDeploymentSpecResponseBody(const GetModelDeploymentSpecResponseBody &) = default ;
    GetModelDeploymentSpecResponseBody(GetModelDeploymentSpecResponseBody &&) = default ;
    GetModelDeploymentSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelDeploymentSpecResponseBody() = default ;
    GetModelDeploymentSpecResponseBody& operator=(const GetModelDeploymentSpecResponseBody &) = default ;
    GetModelDeploymentSpecResponseBody& operator=(GetModelDeploymentSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inferenceSpec_ == nullptr
        && this->requestId_ == nullptr; };
    // inferenceSpec Field Functions 
    bool hasInferenceSpec() const { return this->inferenceSpec_ != nullptr;};
    void deleteInferenceSpec() { this->inferenceSpec_ = nullptr;};
    inline     const Darabonba::Json & getInferenceSpec() const { DARABONBA_GET(inferenceSpec_) };
    Darabonba::Json & getInferenceSpec() { DARABONBA_GET(inferenceSpec_) };
    inline GetModelDeploymentSpecResponseBody& setInferenceSpec(const Darabonba::Json & inferenceSpec) { DARABONBA_SET_VALUE(inferenceSpec_, inferenceSpec) };
    inline GetModelDeploymentSpecResponseBody& setInferenceSpec(Darabonba::Json && inferenceSpec) { DARABONBA_SET_RVALUE(inferenceSpec_, inferenceSpec) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelDeploymentSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    Darabonba::Json inferenceSpec_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
