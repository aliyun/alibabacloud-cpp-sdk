// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTUSERSAYREQUESTUSERSAYDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTUSERSAYREQUESTUSERSAYDEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentUserSayRequestUserSayDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentUserSayRequestUserSayDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentUserSayRequestUserSayDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
    };
    CreateBeebotIntentUserSayRequestUserSayDefinition() = default ;
    CreateBeebotIntentUserSayRequestUserSayDefinition(const CreateBeebotIntentUserSayRequestUserSayDefinition &) = default ;
    CreateBeebotIntentUserSayRequestUserSayDefinition(CreateBeebotIntentUserSayRequestUserSayDefinition &&) = default ;
    CreateBeebotIntentUserSayRequestUserSayDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentUserSayRequestUserSayDefinition() = default ;
    CreateBeebotIntentUserSayRequestUserSayDefinition& operator=(const CreateBeebotIntentUserSayRequestUserSayDefinition &) = default ;
    CreateBeebotIntentUserSayRequestUserSayDefinition& operator=(CreateBeebotIntentUserSayRequestUserSayDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->intentId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateBeebotIntentUserSayRequestUserSayDefinition& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline CreateBeebotIntentUserSayRequestUserSayDefinition& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> intentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
