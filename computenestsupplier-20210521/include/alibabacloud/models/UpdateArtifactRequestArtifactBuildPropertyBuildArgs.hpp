// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUESTARTIFACTBUILDPROPERTYBUILDARGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUESTARTIFACTBUILDPROPERTYBUILDARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateArtifactRequestArtifactBuildPropertyBuildArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateArtifactRequestArtifactBuildPropertyBuildArgs& obj) { 
      DARABONBA_PTR_TO_JSON(ArgumentName, argumentName_);
      DARABONBA_PTR_TO_JSON(ArgumentValue, argumentValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateArtifactRequestArtifactBuildPropertyBuildArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(ArgumentName, argumentName_);
      DARABONBA_PTR_FROM_JSON(ArgumentValue, argumentValue_);
    };
    UpdateArtifactRequestArtifactBuildPropertyBuildArgs() = default ;
    UpdateArtifactRequestArtifactBuildPropertyBuildArgs(const UpdateArtifactRequestArtifactBuildPropertyBuildArgs &) = default ;
    UpdateArtifactRequestArtifactBuildPropertyBuildArgs(UpdateArtifactRequestArtifactBuildPropertyBuildArgs &&) = default ;
    UpdateArtifactRequestArtifactBuildPropertyBuildArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateArtifactRequestArtifactBuildPropertyBuildArgs() = default ;
    UpdateArtifactRequestArtifactBuildPropertyBuildArgs& operator=(const UpdateArtifactRequestArtifactBuildPropertyBuildArgs &) = default ;
    UpdateArtifactRequestArtifactBuildPropertyBuildArgs& operator=(UpdateArtifactRequestArtifactBuildPropertyBuildArgs &&) = default ;
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
    inline UpdateArtifactRequestArtifactBuildPropertyBuildArgs& setArgumentName(string argumentName) { DARABONBA_PTR_SET_VALUE(argumentName_, argumentName) };


    // argumentValue Field Functions 
    bool hasArgumentValue() const { return this->argumentValue_ != nullptr;};
    void deleteArgumentValue() { this->argumentValue_ = nullptr;};
    inline string argumentValue() const { DARABONBA_PTR_GET_DEFAULT(argumentValue_, "") };
    inline UpdateArtifactRequestArtifactBuildPropertyBuildArgs& setArgumentValue(string argumentValue) { DARABONBA_PTR_SET_VALUE(argumentValue_, argumentValue) };


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
