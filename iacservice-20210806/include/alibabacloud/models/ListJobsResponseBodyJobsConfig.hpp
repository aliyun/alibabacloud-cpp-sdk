// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListJobsResponseBodyJobsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(isDestroy, isDestroy_);
      DARABONBA_PTR_TO_JSON(moduleDescription, moduleDescription_);
      DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_TO_JSON(resourcesChanged, resourcesChanged_);
      DARABONBA_PTR_TO_JSON(subCommand, subCommand_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(isDestroy, isDestroy_);
      DARABONBA_PTR_FROM_JSON(moduleDescription, moduleDescription_);
      DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_FROM_JSON(resourcesChanged, resourcesChanged_);
      DARABONBA_PTR_FROM_JSON(subCommand, subCommand_);
    };
    ListJobsResponseBodyJobsConfig() = default ;
    ListJobsResponseBodyJobsConfig(const ListJobsResponseBodyJobsConfig &) = default ;
    ListJobsResponseBodyJobsConfig(ListJobsResponseBodyJobsConfig &&) = default ;
    ListJobsResponseBodyJobsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobsConfig() = default ;
    ListJobsResponseBodyJobsConfig& operator=(const ListJobsResponseBodyJobsConfig &) = default ;
    ListJobsResponseBodyJobsConfig& operator=(ListJobsResponseBodyJobsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDestroy_ == nullptr
        && return this->moduleDescription_ == nullptr && return this->moduleVersion_ == nullptr && return this->resourcesChanged_ == nullptr && return this->subCommand_ == nullptr; };
    // isDestroy Field Functions 
    bool hasIsDestroy() const { return this->isDestroy_ != nullptr;};
    void deleteIsDestroy() { this->isDestroy_ = nullptr;};
    inline bool isDestroy() const { DARABONBA_PTR_GET_DEFAULT(isDestroy_, false) };
    inline ListJobsResponseBodyJobsConfig& setIsDestroy(bool isDestroy) { DARABONBA_PTR_SET_VALUE(isDestroy_, isDestroy) };


    // moduleDescription Field Functions 
    bool hasModuleDescription() const { return this->moduleDescription_ != nullptr;};
    void deleteModuleDescription() { this->moduleDescription_ = nullptr;};
    inline string moduleDescription() const { DARABONBA_PTR_GET_DEFAULT(moduleDescription_, "") };
    inline ListJobsResponseBodyJobsConfig& setModuleDescription(string moduleDescription) { DARABONBA_PTR_SET_VALUE(moduleDescription_, moduleDescription) };


    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline string moduleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
    inline ListJobsResponseBodyJobsConfig& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


    // resourcesChanged Field Functions 
    bool hasResourcesChanged() const { return this->resourcesChanged_ != nullptr;};
    void deleteResourcesChanged() { this->resourcesChanged_ = nullptr;};
    inline string resourcesChanged() const { DARABONBA_PTR_GET_DEFAULT(resourcesChanged_, "") };
    inline ListJobsResponseBodyJobsConfig& setResourcesChanged(string resourcesChanged) { DARABONBA_PTR_SET_VALUE(resourcesChanged_, resourcesChanged) };


    // subCommand Field Functions 
    bool hasSubCommand() const { return this->subCommand_ != nullptr;};
    void deleteSubCommand() { this->subCommand_ = nullptr;};
    inline string subCommand() const { DARABONBA_PTR_GET_DEFAULT(subCommand_, "") };
    inline ListJobsResponseBodyJobsConfig& setSubCommand(string subCommand) { DARABONBA_PTR_SET_VALUE(subCommand_, subCommand) };


  protected:
    std::shared_ptr<bool> isDestroy_ = nullptr;
    std::shared_ptr<string> moduleDescription_ = nullptr;
    std::shared_ptr<string> moduleVersion_ = nullptr;
    std::shared_ptr<string> resourcesChanged_ = nullptr;
    std::shared_ptr<string> subCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
