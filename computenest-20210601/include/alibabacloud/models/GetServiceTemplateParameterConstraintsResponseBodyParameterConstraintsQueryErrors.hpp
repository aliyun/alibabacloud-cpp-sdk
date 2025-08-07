// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTSQUERYERRORS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTSQUERYERRORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors() = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors(const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors &) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors(GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors &&) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors() = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors& operator=(const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors &) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors& operator=(GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->resourceName_ != nullptr && this->resourceType_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
