// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSAYREQUESTUSERSAYDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSAYREQUESTUSERSAYDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateUserSayRequestUserSayDefinitionSlotInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateUserSayRequestUserSayDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserSayRequestUserSayDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserSayRequestUserSayDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
    };
    UpdateUserSayRequestUserSayDefinition() = default ;
    UpdateUserSayRequestUserSayDefinition(const UpdateUserSayRequestUserSayDefinition &) = default ;
    UpdateUserSayRequestUserSayDefinition(UpdateUserSayRequestUserSayDefinition &&) = default ;
    UpdateUserSayRequestUserSayDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserSayRequestUserSayDefinition() = default ;
    UpdateUserSayRequestUserSayDefinition& operator=(const UpdateUserSayRequestUserSayDefinition &) = default ;
    UpdateUserSayRequestUserSayDefinition& operator=(UpdateUserSayRequestUserSayDefinition &&) = default ;
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
    inline UpdateUserSayRequestUserSayDefinition& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline UpdateUserSayRequestUserSayDefinition& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // slotInfos Field Functions 
    bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
    void deleteSlotInfos() { this->slotInfos_ = nullptr;};
    inline const vector<Models::UpdateUserSayRequestUserSayDefinitionSlotInfos> & slotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<Models::UpdateUserSayRequestUserSayDefinitionSlotInfos>) };
    inline vector<Models::UpdateUserSayRequestUserSayDefinitionSlotInfos> slotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<Models::UpdateUserSayRequestUserSayDefinitionSlotInfos>) };
    inline UpdateUserSayRequestUserSayDefinition& setSlotInfos(const vector<Models::UpdateUserSayRequestUserSayDefinitionSlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
    inline UpdateUserSayRequestUserSayDefinition& setSlotInfos(vector<Models::UpdateUserSayRequestUserSayDefinitionSlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> intentId_ = nullptr;
    std::shared_ptr<vector<Models::UpdateUserSayRequestUserSayDefinitionSlotInfos>> slotInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
