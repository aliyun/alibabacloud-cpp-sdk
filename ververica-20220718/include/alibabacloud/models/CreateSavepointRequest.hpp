// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAVEPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAVEPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class CreateSavepointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSavepointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(nativeFormat, nativeFormat_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSavepointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(nativeFormat, nativeFormat_);
    };
    CreateSavepointRequest() = default ;
    CreateSavepointRequest(const CreateSavepointRequest &) = default ;
    CreateSavepointRequest(CreateSavepointRequest &&) = default ;
    CreateSavepointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSavepointRequest() = default ;
    CreateSavepointRequest& operator=(const CreateSavepointRequest &) = default ;
    CreateSavepointRequest& operator=(CreateSavepointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr
        && return this->description_ == nullptr && return this->nativeFormat_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline CreateSavepointRequest& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSavepointRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nativeFormat Field Functions 
    bool hasNativeFormat() const { return this->nativeFormat_ != nullptr;};
    void deleteNativeFormat() { this->nativeFormat_ = nullptr;};
    inline bool nativeFormat() const { DARABONBA_PTR_GET_DEFAULT(nativeFormat_, false) };
    inline CreateSavepointRequest& setNativeFormat(bool nativeFormat) { DARABONBA_PTR_SET_VALUE(nativeFormat_, nativeFormat) };


  protected:
    // The deployment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> deploymentId_ = nullptr;
    // The description of the savepoint.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to use the native format mode. Valid values:
    // 
    // *   true: The native format mode is used.
    // *   false: The native format mode is not used.
    std::shared_ptr<bool> nativeFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
