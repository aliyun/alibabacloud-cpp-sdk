// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTREQUESTINTENTDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTREQUESTINTENTDEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentRequestIntentDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentRequestIntentDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentRequestIntentDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
    };
    CreateBeebotIntentRequestIntentDefinition() = default ;
    CreateBeebotIntentRequestIntentDefinition(const CreateBeebotIntentRequestIntentDefinition &) = default ;
    CreateBeebotIntentRequestIntentDefinition(CreateBeebotIntentRequestIntentDefinition &&) = default ;
    CreateBeebotIntentRequestIntentDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentRequestIntentDefinition() = default ;
    CreateBeebotIntentRequestIntentDefinition& operator=(const CreateBeebotIntentRequestIntentDefinition &) = default ;
    CreateBeebotIntentRequestIntentDefinition& operator=(CreateBeebotIntentRequestIntentDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->intentName_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline CreateBeebotIntentRequestIntentDefinition& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline CreateBeebotIntentRequestIntentDefinition& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


  protected:
    std::shared_ptr<string> aliasName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
