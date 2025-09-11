// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODYENVSCODEDEPLOYCODEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODYENVSCODEDEPLOYCODEVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineResponseBodyEnvsCodeDeployCodeVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineResponseBodyEnvsCodeDeployCodeVersions& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineResponseBodyEnvsCodeDeployCodeVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    GetRoutineResponseBodyEnvsCodeDeployCodeVersions() = default ;
    GetRoutineResponseBodyEnvsCodeDeployCodeVersions(const GetRoutineResponseBodyEnvsCodeDeployCodeVersions &) = default ;
    GetRoutineResponseBodyEnvsCodeDeployCodeVersions(GetRoutineResponseBodyEnvsCodeDeployCodeVersions &&) = default ;
    GetRoutineResponseBodyEnvsCodeDeployCodeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineResponseBodyEnvsCodeDeployCodeVersions() = default ;
    GetRoutineResponseBodyEnvsCodeDeployCodeVersions& operator=(const GetRoutineResponseBodyEnvsCodeDeployCodeVersions &) = default ;
    GetRoutineResponseBodyEnvsCodeDeployCodeVersions& operator=(GetRoutineResponseBodyEnvsCodeDeployCodeVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeVersion_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->percentage_ != nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline GetRoutineResponseBodyEnvsCodeDeployCodeVersions& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRoutineResponseBodyEnvsCodeDeployCodeVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRoutineResponseBodyEnvsCodeDeployCodeVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int64_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0L) };
    inline GetRoutineResponseBodyEnvsCodeDeployCodeVersions& setPercentage(int64_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


  protected:
    std::shared_ptr<string> codeVersion_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
