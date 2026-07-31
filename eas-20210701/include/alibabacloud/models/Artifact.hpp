// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class Artifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Artifact& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, Artifact& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    Artifact() = default ;
    Artifact(const Artifact &) = default ;
    Artifact(Artifact &&) = default ;
    Artifact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Artifact() = default ;
    Artifact& operator=(const Artifact &) = default ;
    Artifact& operator=(Artifact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Versions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Versions& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ReleaseName, releaseName_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Versions& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ReleaseName, releaseName_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Versions() = default ;
      Versions(const Versions &) = default ;
      Versions(Versions &&) = default ;
      Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Versions() = default ;
      Versions& operator=(const Versions &) = default ;
      Versions& operator=(Versions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->description_ == nullptr && this->releaseName_ == nullptr && this->version_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Versions& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Versions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // releaseName Field Functions 
      bool hasReleaseName() const { return this->releaseName_ != nullptr;};
      void deleteReleaseName() { this->releaseName_ = nullptr;};
      inline string getReleaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
      inline Versions& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The version alias.
      shared_ptr<string> alias_ {};
      // The template description associated with the version.
      shared_ptr<string> description_ {};
      // The version name.
      shared_ptr<string> releaseName_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->versions_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Artifact& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Artifact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Artifact& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Artifact::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Artifact::Versions>) };
    inline vector<Artifact::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<Artifact::Versions>) };
    inline Artifact& setVersions(const vector<Artifact::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline Artifact& setVersions(vector<Artifact::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The creation time.
    shared_ptr<string> createdAt_ {};
    // The artifact name.
    shared_ptr<string> name_ {};
    // The artifact type.
    shared_ptr<string> type_ {};
    // The version list.
    shared_ptr<vector<Artifact::Versions>> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
