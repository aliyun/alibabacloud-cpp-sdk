// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTREQUESTARTIFACTBUILDPROPERTYBUILDARGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTREQUESTARTIFACTBUILDPROPERTYBUILDARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateArtifactRequestArtifactBuildPropertyBuildArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactRequestArtifactBuildPropertyBuildArgs& obj) { 
      DARABONBA_PTR_TO_JSON(ArgumentName, argumentName_);
      DARABONBA_PTR_TO_JSON(ArgumentValue, argumentValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactRequestArtifactBuildPropertyBuildArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(ArgumentName, argumentName_);
      DARABONBA_PTR_FROM_JSON(ArgumentValue, argumentValue_);
    };
    CreateArtifactRequestArtifactBuildPropertyBuildArgs() = default ;
    CreateArtifactRequestArtifactBuildPropertyBuildArgs(const CreateArtifactRequestArtifactBuildPropertyBuildArgs &) = default ;
    CreateArtifactRequestArtifactBuildPropertyBuildArgs(CreateArtifactRequestArtifactBuildPropertyBuildArgs &&) = default ;
    CreateArtifactRequestArtifactBuildPropertyBuildArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactRequestArtifactBuildPropertyBuildArgs() = default ;
    CreateArtifactRequestArtifactBuildPropertyBuildArgs& operator=(const CreateArtifactRequestArtifactBuildPropertyBuildArgs &) = default ;
    CreateArtifactRequestArtifactBuildPropertyBuildArgs& operator=(CreateArtifactRequestArtifactBuildPropertyBuildArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->argumentName_ != nullptr
        && this->argumentValue_ != nullptr; };
    // argumentName Field Functions 
    bool hasArgumentName() const { return this->argumentName_ != nullptr;};
    void deleteArgumentName() { this->argumentName_ = nullptr;};
    inline string argumentName() const { DARABONBA_PTR_GET_DEFAULT(argumentName_, "") };
    inline CreateArtifactRequestArtifactBuildPropertyBuildArgs& setArgumentName(string argumentName) { DARABONBA_PTR_SET_VALUE(argumentName_, argumentName) };


    // argumentValue Field Functions 
    bool hasArgumentValue() const { return this->argumentValue_ != nullptr;};
    void deleteArgumentValue() { this->argumentValue_ = nullptr;};
    inline string argumentValue() const { DARABONBA_PTR_GET_DEFAULT(argumentValue_, "") };
    inline CreateArtifactRequestArtifactBuildPropertyBuildArgs& setArgumentValue(string argumentValue) { DARABONBA_PTR_SET_VALUE(argumentValue_, argumentValue) };


  protected:
    // The name of a specific build argument.
    std::shared_ptr<string> argumentName_ = nullptr;
    // The value of a specific build argument.
    std::shared_ptr<string> argumentValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
