// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTUSERSAYREQUESTUSERSAYDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTUSERSAYREQUESTUSERSAYDEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentUserSayRequestUserSayDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentUserSayRequestUserSayDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentUserSayRequestUserSayDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
    };
    ModifyBeebotIntentUserSayRequestUserSayDefinition() = default ;
    ModifyBeebotIntentUserSayRequestUserSayDefinition(const ModifyBeebotIntentUserSayRequestUserSayDefinition &) = default ;
    ModifyBeebotIntentUserSayRequestUserSayDefinition(ModifyBeebotIntentUserSayRequestUserSayDefinition &&) = default ;
    ModifyBeebotIntentUserSayRequestUserSayDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentUserSayRequestUserSayDefinition() = default ;
    ModifyBeebotIntentUserSayRequestUserSayDefinition& operator=(const ModifyBeebotIntentUserSayRequestUserSayDefinition &) = default ;
    ModifyBeebotIntentUserSayRequestUserSayDefinition& operator=(ModifyBeebotIntentUserSayRequestUserSayDefinition &&) = default ;
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
    inline ModifyBeebotIntentUserSayRequestUserSayDefinition& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ModifyBeebotIntentUserSayRequestUserSayDefinition& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


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
