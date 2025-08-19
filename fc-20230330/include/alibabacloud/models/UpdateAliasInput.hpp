// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALIASINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALIASINPUT_HPP_
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
  class UpdateAliasInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAliasInput& obj) { 
      DARABONBA_PTR_TO_JSON(additionalVersionWeight, additionalVersionWeight_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAliasInput& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalVersionWeight, additionalVersionWeight_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    UpdateAliasInput() = default ;
    UpdateAliasInput(const UpdateAliasInput &) = default ;
    UpdateAliasInput(UpdateAliasInput &&) = default ;
    UpdateAliasInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAliasInput() = default ;
    UpdateAliasInput& operator=(const UpdateAliasInput &) = default ;
    UpdateAliasInput& operator=(UpdateAliasInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalVersionWeight_ != nullptr
        && this->description_ != nullptr && this->versionId_ != nullptr; };
    // additionalVersionWeight Field Functions 
    bool hasAdditionalVersionWeight() const { return this->additionalVersionWeight_ != nullptr;};
    void deleteAdditionalVersionWeight() { this->additionalVersionWeight_ = nullptr;};
    inline const map<string, float> & additionalVersionWeight() const { DARABONBA_PTR_GET_CONST(additionalVersionWeight_, map<string, float>) };
    inline map<string, float> additionalVersionWeight() { DARABONBA_PTR_GET(additionalVersionWeight_, map<string, float>) };
    inline UpdateAliasInput& setAdditionalVersionWeight(const map<string, float> & additionalVersionWeight) { DARABONBA_PTR_SET_VALUE(additionalVersionWeight_, additionalVersionWeight) };
    inline UpdateAliasInput& setAdditionalVersionWeight(map<string, float> && additionalVersionWeight) { DARABONBA_PTR_SET_RVALUE(additionalVersionWeight_, additionalVersionWeight) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAliasInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateAliasInput& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<map<string, float>> additionalVersionWeight_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
