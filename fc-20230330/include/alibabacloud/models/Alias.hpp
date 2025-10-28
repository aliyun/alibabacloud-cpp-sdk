// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALIAS_HPP_
#define ALIBABACLOUD_MODELS_ALIAS_HPP_
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
  class Alias : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Alias& obj) { 
      DARABONBA_PTR_TO_JSON(additionalVersionWeight, additionalVersionWeight_);
      DARABONBA_PTR_TO_JSON(aliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, Alias& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalVersionWeight, additionalVersionWeight_);
      DARABONBA_PTR_FROM_JSON(aliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    Alias() = default ;
    Alias(const Alias &) = default ;
    Alias(Alias &&) = default ;
    Alias(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Alias() = default ;
    Alias& operator=(const Alias &) = default ;
    Alias& operator=(Alias &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalVersionWeight_ == nullptr
        && return this->aliasName_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->lastModifiedTime_ == nullptr && return this->versionId_ == nullptr; };
    // additionalVersionWeight Field Functions 
    bool hasAdditionalVersionWeight() const { return this->additionalVersionWeight_ != nullptr;};
    void deleteAdditionalVersionWeight() { this->additionalVersionWeight_ = nullptr;};
    inline const map<string, float> & additionalVersionWeight() const { DARABONBA_PTR_GET_CONST(additionalVersionWeight_, map<string, float>) };
    inline map<string, float> additionalVersionWeight() { DARABONBA_PTR_GET(additionalVersionWeight_, map<string, float>) };
    inline Alias& setAdditionalVersionWeight(const map<string, float> & additionalVersionWeight) { DARABONBA_PTR_SET_VALUE(additionalVersionWeight_, additionalVersionWeight) };
    inline Alias& setAdditionalVersionWeight(map<string, float> && additionalVersionWeight) { DARABONBA_PTR_SET_RVALUE(additionalVersionWeight_, additionalVersionWeight) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline Alias& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline Alias& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Alias& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline Alias& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline Alias& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<map<string, float>> additionalVersionWeight_ = nullptr;
    std::shared_ptr<string> aliasName_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
