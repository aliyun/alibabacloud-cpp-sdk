// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetJobResponseBodyJobConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobConfig& obj) { 
      DARABONBA_PTR_TO_JSON(autoApply, autoApply_);
      DARABONBA_PTR_TO_JSON(hasConfigProactive, hasConfigProactive_);
      DARABONBA_PTR_TO_JSON(isDestroy, isDestroy_);
      DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_TO_JSON(resourcesChanged, resourcesChanged_);
      DARABONBA_PTR_TO_JSON(subCommand, subCommand_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(autoApply, autoApply_);
      DARABONBA_PTR_FROM_JSON(hasConfigProactive, hasConfigProactive_);
      DARABONBA_PTR_FROM_JSON(isDestroy, isDestroy_);
      DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_FROM_JSON(resourcesChanged, resourcesChanged_);
      DARABONBA_PTR_FROM_JSON(subCommand, subCommand_);
    };
    GetJobResponseBodyJobConfig() = default ;
    GetJobResponseBodyJobConfig(const GetJobResponseBodyJobConfig &) = default ;
    GetJobResponseBodyJobConfig(GetJobResponseBodyJobConfig &&) = default ;
    GetJobResponseBodyJobConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobConfig() = default ;
    GetJobResponseBodyJobConfig& operator=(const GetJobResponseBodyJobConfig &) = default ;
    GetJobResponseBodyJobConfig& operator=(GetJobResponseBodyJobConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoApply_ == nullptr
        && return this->hasConfigProactive_ == nullptr && return this->isDestroy_ == nullptr && return this->moduleVersion_ == nullptr && return this->resourcesChanged_ == nullptr && return this->subCommand_ == nullptr; };
    // autoApply Field Functions 
    bool hasAutoApply() const { return this->autoApply_ != nullptr;};
    void deleteAutoApply() { this->autoApply_ = nullptr;};
    inline bool autoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
    inline GetJobResponseBodyJobConfig& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


    // hasConfigProactive Field Functions 
    bool hasHasConfigProactive() const { return this->hasConfigProactive_ != nullptr;};
    void deleteHasConfigProactive() { this->hasConfigProactive_ = nullptr;};
    inline string hasConfigProactive() const { DARABONBA_PTR_GET_DEFAULT(hasConfigProactive_, "") };
    inline GetJobResponseBodyJobConfig& setHasConfigProactive(string hasConfigProactive) { DARABONBA_PTR_SET_VALUE(hasConfigProactive_, hasConfigProactive) };


    // isDestroy Field Functions 
    bool hasIsDestroy() const { return this->isDestroy_ != nullptr;};
    void deleteIsDestroy() { this->isDestroy_ = nullptr;};
    inline bool isDestroy() const { DARABONBA_PTR_GET_DEFAULT(isDestroy_, false) };
    inline GetJobResponseBodyJobConfig& setIsDestroy(bool isDestroy) { DARABONBA_PTR_SET_VALUE(isDestroy_, isDestroy) };


    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline string moduleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
    inline GetJobResponseBodyJobConfig& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


    // resourcesChanged Field Functions 
    bool hasResourcesChanged() const { return this->resourcesChanged_ != nullptr;};
    void deleteResourcesChanged() { this->resourcesChanged_ = nullptr;};
    inline string resourcesChanged() const { DARABONBA_PTR_GET_DEFAULT(resourcesChanged_, "") };
    inline GetJobResponseBodyJobConfig& setResourcesChanged(string resourcesChanged) { DARABONBA_PTR_SET_VALUE(resourcesChanged_, resourcesChanged) };


    // subCommand Field Functions 
    bool hasSubCommand() const { return this->subCommand_ != nullptr;};
    void deleteSubCommand() { this->subCommand_ = nullptr;};
    inline string subCommand() const { DARABONBA_PTR_GET_DEFAULT(subCommand_, "") };
    inline GetJobResponseBodyJobConfig& setSubCommand(string subCommand) { DARABONBA_PTR_SET_VALUE(subCommand_, subCommand) };


  protected:
    std::shared_ptr<bool> autoApply_ = nullptr;
    std::shared_ptr<string> hasConfigProactive_ = nullptr;
    std::shared_ptr<bool> isDestroy_ = nullptr;
    std::shared_ptr<string> moduleVersion_ = nullptr;
    std::shared_ptr<string> resourcesChanged_ = nullptr;
    std::shared_ptr<string> subCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
