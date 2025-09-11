// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRoutineWithAssetsCodeVersionRequestConfOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineWithAssetsCodeVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineWithAssetsCodeVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildId, buildId_);
      DARABONBA_PTR_TO_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_TO_JSON(ConfOptions, confOptions_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineWithAssetsCodeVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildId, buildId_);
      DARABONBA_PTR_FROM_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_FROM_JSON(ConfOptions, confOptions_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateRoutineWithAssetsCodeVersionRequest() = default ;
    CreateRoutineWithAssetsCodeVersionRequest(const CreateRoutineWithAssetsCodeVersionRequest &) = default ;
    CreateRoutineWithAssetsCodeVersionRequest(CreateRoutineWithAssetsCodeVersionRequest &&) = default ;
    CreateRoutineWithAssetsCodeVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineWithAssetsCodeVersionRequest() = default ;
    CreateRoutineWithAssetsCodeVersionRequest& operator=(const CreateRoutineWithAssetsCodeVersionRequest &) = default ;
    CreateRoutineWithAssetsCodeVersionRequest& operator=(CreateRoutineWithAssetsCodeVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildId_ != nullptr
        && this->codeDescription_ != nullptr && this->confOptions_ != nullptr && this->extraInfo_ != nullptr && this->name_ != nullptr; };
    // buildId Field Functions 
    bool hasBuildId() const { return this->buildId_ != nullptr;};
    void deleteBuildId() { this->buildId_ = nullptr;};
    inline int64_t buildId() const { DARABONBA_PTR_GET_DEFAULT(buildId_, 0L) };
    inline CreateRoutineWithAssetsCodeVersionRequest& setBuildId(int64_t buildId) { DARABONBA_PTR_SET_VALUE(buildId_, buildId) };


    // codeDescription Field Functions 
    bool hasCodeDescription() const { return this->codeDescription_ != nullptr;};
    void deleteCodeDescription() { this->codeDescription_ = nullptr;};
    inline string codeDescription() const { DARABONBA_PTR_GET_DEFAULT(codeDescription_, "") };
    inline CreateRoutineWithAssetsCodeVersionRequest& setCodeDescription(string codeDescription) { DARABONBA_PTR_SET_VALUE(codeDescription_, codeDescription) };


    // confOptions Field Functions 
    bool hasConfOptions() const { return this->confOptions_ != nullptr;};
    void deleteConfOptions() { this->confOptions_ = nullptr;};
    inline const CreateRoutineWithAssetsCodeVersionRequestConfOptions & confOptions() const { DARABONBA_PTR_GET_CONST(confOptions_, CreateRoutineWithAssetsCodeVersionRequestConfOptions) };
    inline CreateRoutineWithAssetsCodeVersionRequestConfOptions confOptions() { DARABONBA_PTR_GET(confOptions_, CreateRoutineWithAssetsCodeVersionRequestConfOptions) };
    inline CreateRoutineWithAssetsCodeVersionRequest& setConfOptions(const CreateRoutineWithAssetsCodeVersionRequestConfOptions & confOptions) { DARABONBA_PTR_SET_VALUE(confOptions_, confOptions) };
    inline CreateRoutineWithAssetsCodeVersionRequest& setConfOptions(CreateRoutineWithAssetsCodeVersionRequestConfOptions && confOptions) { DARABONBA_PTR_SET_RVALUE(confOptions_, confOptions) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline CreateRoutineWithAssetsCodeVersionRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRoutineWithAssetsCodeVersionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int64_t> buildId_ = nullptr;
    std::shared_ptr<string> codeDescription_ = nullptr;
    std::shared_ptr<CreateRoutineWithAssetsCodeVersionRequestConfOptions> confOptions_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
