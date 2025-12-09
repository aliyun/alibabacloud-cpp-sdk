// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONRESPONSEBODYDATASESSIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONRESPONSEBODYDATASESSIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentSessionResponseBodyDataSessionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentSessionResponseBodyDataSessionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(CustomAgentStage, customAgentStage_);
      DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentSessionResponseBodyDataSessionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(CustomAgentStage, customAgentStage_);
      DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    CreateDataAgentSessionResponseBodyDataSessionConfig() = default ;
    CreateDataAgentSessionResponseBodyDataSessionConfig(const CreateDataAgentSessionResponseBodyDataSessionConfig &) = default ;
    CreateDataAgentSessionResponseBodyDataSessionConfig(CreateDataAgentSessionResponseBodyDataSessionConfig &&) = default ;
    CreateDataAgentSessionResponseBodyDataSessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentSessionResponseBodyDataSessionConfig() = default ;
    CreateDataAgentSessionResponseBodyDataSessionConfig& operator=(const CreateDataAgentSessionResponseBodyDataSessionConfig &) = default ;
    CreateDataAgentSessionResponseBodyDataSessionConfig& operator=(CreateDataAgentSessionResponseBodyDataSessionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && return this->customAgentStage_ == nullptr && return this->enableSearch_ == nullptr && return this->language_ == nullptr && return this->mode_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string customAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline CreateDataAgentSessionResponseBodyDataSessionConfig& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // customAgentStage Field Functions 
    bool hasCustomAgentStage() const { return this->customAgentStage_ != nullptr;};
    void deleteCustomAgentStage() { this->customAgentStage_ = nullptr;};
    inline string customAgentStage() const { DARABONBA_PTR_GET_DEFAULT(customAgentStage_, "") };
    inline CreateDataAgentSessionResponseBodyDataSessionConfig& setCustomAgentStage(string customAgentStage) { DARABONBA_PTR_SET_VALUE(customAgentStage_, customAgentStage) };


    // enableSearch Field Functions 
    bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
    void deleteEnableSearch() { this->enableSearch_ = nullptr;};
    inline bool enableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
    inline CreateDataAgentSessionResponseBodyDataSessionConfig& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateDataAgentSessionResponseBodyDataSessionConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateDataAgentSessionResponseBodyDataSessionConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    std::shared_ptr<string> customAgentId_ = nullptr;
    std::shared_ptr<string> customAgentStage_ = nullptr;
    std::shared_ptr<bool> enableSearch_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
