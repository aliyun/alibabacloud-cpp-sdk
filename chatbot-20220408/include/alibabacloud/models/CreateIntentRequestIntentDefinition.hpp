// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTENTREQUESTINTENTDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTENTREQUESTINTENTDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateIntentRequestIntentDefinitionSlotInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateIntentRequestIntentDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntentRequestIntentDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntentRequestIntentDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
    };
    CreateIntentRequestIntentDefinition() = default ;
    CreateIntentRequestIntentDefinition(const CreateIntentRequestIntentDefinition &) = default ;
    CreateIntentRequestIntentDefinition(CreateIntentRequestIntentDefinition &&) = default ;
    CreateIntentRequestIntentDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntentRequestIntentDefinition() = default ;
    CreateIntentRequestIntentDefinition& operator=(const CreateIntentRequestIntentDefinition &) = default ;
    CreateIntentRequestIntentDefinition& operator=(CreateIntentRequestIntentDefinition &&) = default ;
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
    inline CreateIntentRequestIntentDefinition& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline CreateIntentRequestIntentDefinition& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // slotInfos Field Functions 
    bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
    void deleteSlotInfos() { this->slotInfos_ = nullptr;};
    inline const vector<Models::CreateIntentRequestIntentDefinitionSlotInfos> & slotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<Models::CreateIntentRequestIntentDefinitionSlotInfos>) };
    inline vector<Models::CreateIntentRequestIntentDefinitionSlotInfos> slotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<Models::CreateIntentRequestIntentDefinitionSlotInfos>) };
    inline CreateIntentRequestIntentDefinition& setSlotInfos(const vector<Models::CreateIntentRequestIntentDefinitionSlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
    inline CreateIntentRequestIntentDefinition& setSlotInfos(vector<Models::CreateIntentRequestIntentDefinitionSlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


  protected:
    std::shared_ptr<string> aliasName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<vector<Models::CreateIntentRequestIntentDefinitionSlotInfos>> slotInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
