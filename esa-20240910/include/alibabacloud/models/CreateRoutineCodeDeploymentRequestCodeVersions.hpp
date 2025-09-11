// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTREQUESTCODEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTREQUESTCODEVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineCodeDeploymentRequestCodeVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineCodeDeploymentRequestCodeVersions& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineCodeDeploymentRequestCodeVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    CreateRoutineCodeDeploymentRequestCodeVersions() = default ;
    CreateRoutineCodeDeploymentRequestCodeVersions(const CreateRoutineCodeDeploymentRequestCodeVersions &) = default ;
    CreateRoutineCodeDeploymentRequestCodeVersions(CreateRoutineCodeDeploymentRequestCodeVersions &&) = default ;
    CreateRoutineCodeDeploymentRequestCodeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineCodeDeploymentRequestCodeVersions() = default ;
    CreateRoutineCodeDeploymentRequestCodeVersions& operator=(const CreateRoutineCodeDeploymentRequestCodeVersions &) = default ;
    CreateRoutineCodeDeploymentRequestCodeVersions& operator=(CreateRoutineCodeDeploymentRequestCodeVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeVersion_ != nullptr
        && this->percentage_ != nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline CreateRoutineCodeDeploymentRequestCodeVersions& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int64_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0L) };
    inline CreateRoutineCodeDeploymentRequestCodeVersions& setPercentage(int64_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> codeVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
