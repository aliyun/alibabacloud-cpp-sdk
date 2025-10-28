// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALIASINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEALIASINPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateAliasInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAliasInput& obj) { 
      DARABONBA_PTR_TO_JSON(additionalVersionWeight, additionalVersionWeight_);
      DARABONBA_PTR_TO_JSON(aliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAliasInput& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalVersionWeight, additionalVersionWeight_);
      DARABONBA_PTR_FROM_JSON(aliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    CreateAliasInput() = default ;
    CreateAliasInput(const CreateAliasInput &) = default ;
    CreateAliasInput(CreateAliasInput &&) = default ;
    CreateAliasInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAliasInput() = default ;
    CreateAliasInput& operator=(const CreateAliasInput &) = default ;
    CreateAliasInput& operator=(CreateAliasInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalVersionWeight_ == nullptr
        && return this->aliasName_ == nullptr && return this->description_ == nullptr && return this->versionId_ == nullptr; };
    // additionalVersionWeight Field Functions 
    bool hasAdditionalVersionWeight() const { return this->additionalVersionWeight_ != nullptr;};
    void deleteAdditionalVersionWeight() { this->additionalVersionWeight_ = nullptr;};
    inline const map<string, float> & additionalVersionWeight() const { DARABONBA_PTR_GET_CONST(additionalVersionWeight_, map<string, float>) };
    inline map<string, float> additionalVersionWeight() { DARABONBA_PTR_GET(additionalVersionWeight_, map<string, float>) };
    inline CreateAliasInput& setAdditionalVersionWeight(const map<string, float> & additionalVersionWeight) { DARABONBA_PTR_SET_VALUE(additionalVersionWeight_, additionalVersionWeight) };
    inline CreateAliasInput& setAdditionalVersionWeight(map<string, float> && additionalVersionWeight) { DARABONBA_PTR_SET_RVALUE(additionalVersionWeight_, additionalVersionWeight) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline CreateAliasInput& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAliasInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateAliasInput& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<map<string, float>> additionalVersionWeight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> aliasName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
