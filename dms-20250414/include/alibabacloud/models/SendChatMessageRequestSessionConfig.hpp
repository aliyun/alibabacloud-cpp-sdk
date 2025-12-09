// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATMESSAGEREQUESTSESSIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATMESSAGEREQUESTSESSIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class SendChatMessageRequestSessionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatMessageRequestSessionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(CustomAgentStage, customAgentStage_);
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatMessageRequestSessionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(CustomAgentStage, customAgentStage_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    SendChatMessageRequestSessionConfig() = default ;
    SendChatMessageRequestSessionConfig(const SendChatMessageRequestSessionConfig &) = default ;
    SendChatMessageRequestSessionConfig(SendChatMessageRequestSessionConfig &&) = default ;
    SendChatMessageRequestSessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatMessageRequestSessionConfig() = default ;
    SendChatMessageRequestSessionConfig& operator=(const SendChatMessageRequestSessionConfig &) = default ;
    SendChatMessageRequestSessionConfig& operator=(SendChatMessageRequestSessionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && return this->customAgentStage_ == nullptr && return this->language_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string customAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline SendChatMessageRequestSessionConfig& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // customAgentStage Field Functions 
    bool hasCustomAgentStage() const { return this->customAgentStage_ != nullptr;};
    void deleteCustomAgentStage() { this->customAgentStage_ = nullptr;};
    inline string customAgentStage() const { DARABONBA_PTR_GET_DEFAULT(customAgentStage_, "") };
    inline SendChatMessageRequestSessionConfig& setCustomAgentStage(string customAgentStage) { DARABONBA_PTR_SET_VALUE(customAgentStage_, customAgentStage) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SendChatMessageRequestSessionConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    std::shared_ptr<string> customAgentId_ = nullptr;
    std::shared_ptr<string> customAgentStage_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
