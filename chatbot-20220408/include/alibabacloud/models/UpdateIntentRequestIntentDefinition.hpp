// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTENTREQUESTINTENTDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTENTREQUESTINTENTDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateIntentRequestIntentDefinitionSlotInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateIntentRequestIntentDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntentRequestIntentDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntentRequestIntentDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
    };
    UpdateIntentRequestIntentDefinition() = default ;
    UpdateIntentRequestIntentDefinition(const UpdateIntentRequestIntentDefinition &) = default ;
    UpdateIntentRequestIntentDefinition(UpdateIntentRequestIntentDefinition &&) = default ;
    UpdateIntentRequestIntentDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntentRequestIntentDefinition() = default ;
    UpdateIntentRequestIntentDefinition& operator=(const UpdateIntentRequestIntentDefinition &) = default ;
    UpdateIntentRequestIntentDefinition& operator=(UpdateIntentRequestIntentDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->intentName_ == nullptr && return this->slotInfos_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline UpdateIntentRequestIntentDefinition& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline UpdateIntentRequestIntentDefinition& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // slotInfos Field Functions 
    bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
    void deleteSlotInfos() { this->slotInfos_ = nullptr;};
    inline const vector<Models::UpdateIntentRequestIntentDefinitionSlotInfos> & slotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<Models::UpdateIntentRequestIntentDefinitionSlotInfos>) };
    inline vector<Models::UpdateIntentRequestIntentDefinitionSlotInfos> slotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<Models::UpdateIntentRequestIntentDefinitionSlotInfos>) };
    inline UpdateIntentRequestIntentDefinition& setSlotInfos(const vector<Models::UpdateIntentRequestIntentDefinitionSlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
    inline UpdateIntentRequestIntentDefinition& setSlotInfos(vector<Models::UpdateIntentRequestIntentDefinitionSlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


  protected:
    std::shared_ptr<string> aliasName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<vector<Models::UpdateIntentRequestIntentDefinitionSlotInfos>> slotInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
