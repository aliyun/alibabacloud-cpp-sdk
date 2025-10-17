// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSAYREQUESTUSERSAYDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSAYREQUESTUSERSAYDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateUserSayRequestUserSayDefinitionSlotInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateUserSayRequestUserSayDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserSayRequestUserSayDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserSayRequestUserSayDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
    };
    CreateUserSayRequestUserSayDefinition() = default ;
    CreateUserSayRequestUserSayDefinition(const CreateUserSayRequestUserSayDefinition &) = default ;
    CreateUserSayRequestUserSayDefinition(CreateUserSayRequestUserSayDefinition &&) = default ;
    CreateUserSayRequestUserSayDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserSayRequestUserSayDefinition() = default ;
    CreateUserSayRequestUserSayDefinition& operator=(const CreateUserSayRequestUserSayDefinition &) = default ;
    CreateUserSayRequestUserSayDefinition& operator=(CreateUserSayRequestUserSayDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->intentId_ == nullptr && return this->slotInfos_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateUserSayRequestUserSayDefinition& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline CreateUserSayRequestUserSayDefinition& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // slotInfos Field Functions 
    bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
    void deleteSlotInfos() { this->slotInfos_ = nullptr;};
    inline const vector<Models::CreateUserSayRequestUserSayDefinitionSlotInfos> & slotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<Models::CreateUserSayRequestUserSayDefinitionSlotInfos>) };
    inline vector<Models::CreateUserSayRequestUserSayDefinitionSlotInfos> slotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<Models::CreateUserSayRequestUserSayDefinitionSlotInfos>) };
    inline CreateUserSayRequestUserSayDefinition& setSlotInfos(const vector<Models::CreateUserSayRequestUserSayDefinitionSlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
    inline CreateUserSayRequestUserSayDefinition& setSlotInfos(vector<Models::CreateUserSayRequestUserSayDefinitionSlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> intentId_ = nullptr;
    std::shared_ptr<vector<Models::CreateUserSayRequestUserSayDefinitionSlotInfos>> slotInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
