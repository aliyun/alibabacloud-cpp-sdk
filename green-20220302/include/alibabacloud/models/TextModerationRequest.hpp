// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    TextModerationRequest() = default ;
    TextModerationRequest(const TextModerationRequest &) = default ;
    TextModerationRequest(TextModerationRequest &&) = default ;
    TextModerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationRequest() = default ;
    TextModerationRequest& operator=(const TextModerationRequest &) = default ;
    TextModerationRequest& operator=(TextModerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->service_ == nullptr
        && return this->serviceParameters_ == nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline TextModerationRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline TextModerationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The type of the moderation service. Valid values: nickname_detection: user nickname chat_detection: chat interactions comment_detection: dynamic comments pgc_detection: professionally-generated content (PGC) teaching materials
    // 
    // Valid values:
    // 
    // *   pgc_detection: moderation of PGC teaching materials
    // *   nickname_detection: user nickname moderation
    // *   comment_multilingual_pro: multi-language moderation in international business scenarios
    // *   chat_detection: moderation of interactive content of private chats
    // *   ad_compliance_detection: advertising law compliance identification
    // *   comment_detection: moderation of comment content of public chats
    // *   ai_art_detection: AI-generated text identfication
    std::shared_ptr<string> service_ = nullptr;
    // The parameters required by the moderation service. The value is a JSON string.
    std::shared_ptr<string> serviceParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
