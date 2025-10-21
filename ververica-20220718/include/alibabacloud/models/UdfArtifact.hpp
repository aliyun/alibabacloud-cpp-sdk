// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UDFARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_UDFARTIFACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UdfClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UdfArtifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UdfArtifact& obj) { 
      DARABONBA_PTR_TO_JSON(artifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(dependencyJarUris, dependencyJarUris_);
      DARABONBA_PTR_TO_JSON(jarUrl, jarUrl_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(udfClasses, udfClasses_);
    };
    friend void from_json(const Darabonba::Json& j, UdfArtifact& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(dependencyJarUris, dependencyJarUris_);
      DARABONBA_PTR_FROM_JSON(jarUrl, jarUrl_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(udfClasses, udfClasses_);
    };
    UdfArtifact() = default ;
    UdfArtifact(const UdfArtifact &) = default ;
    UdfArtifact(UdfArtifact &&) = default ;
    UdfArtifact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UdfArtifact() = default ;
    UdfArtifact& operator=(const UdfArtifact &) = default ;
    UdfArtifact& operator=(UdfArtifact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactType_ == nullptr
        && return this->createdAt_ == nullptr && return this->creator_ == nullptr && return this->dependencyJarUris_ == nullptr && return this->jarUrl_ == nullptr && return this->modifiedAt_ == nullptr
        && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->udfClasses_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline UdfArtifact& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline UdfArtifact& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline UdfArtifact& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dependencyJarUris Field Functions 
    bool hasDependencyJarUris() const { return this->dependencyJarUris_ != nullptr;};
    void deleteDependencyJarUris() { this->dependencyJarUris_ = nullptr;};
    inline const vector<string> & dependencyJarUris() const { DARABONBA_PTR_GET_CONST(dependencyJarUris_, vector<string>) };
    inline vector<string> dependencyJarUris() { DARABONBA_PTR_GET(dependencyJarUris_, vector<string>) };
    inline UdfArtifact& setDependencyJarUris(const vector<string> & dependencyJarUris) { DARABONBA_PTR_SET_VALUE(dependencyJarUris_, dependencyJarUris) };
    inline UdfArtifact& setDependencyJarUris(vector<string> && dependencyJarUris) { DARABONBA_PTR_SET_RVALUE(dependencyJarUris_, dependencyJarUris) };


    // jarUrl Field Functions 
    bool hasJarUrl() const { return this->jarUrl_ != nullptr;};
    void deleteJarUrl() { this->jarUrl_ = nullptr;};
    inline string jarUrl() const { DARABONBA_PTR_GET_DEFAULT(jarUrl_, "") };
    inline UdfArtifact& setJarUrl(string jarUrl) { DARABONBA_PTR_SET_VALUE(jarUrl_, jarUrl) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline int64_t modifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, 0L) };
    inline UdfArtifact& setModifiedAt(int64_t modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UdfArtifact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UdfArtifact& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // udfClasses Field Functions 
    bool hasUdfClasses() const { return this->udfClasses_ != nullptr;};
    void deleteUdfClasses() { this->udfClasses_ = nullptr;};
    inline const vector<UdfClass> & udfClasses() const { DARABONBA_PTR_GET_CONST(udfClasses_, vector<UdfClass>) };
    inline vector<UdfClass> udfClasses() { DARABONBA_PTR_GET(udfClasses_, vector<UdfClass>) };
    inline UdfArtifact& setUdfClasses(const vector<UdfClass> & udfClasses) { DARABONBA_PTR_SET_VALUE(udfClasses_, udfClasses) };
    inline UdfArtifact& setUdfClasses(vector<UdfClass> && udfClasses) { DARABONBA_PTR_SET_RVALUE(udfClasses_, udfClasses) };


  protected:
    std::shared_ptr<string> artifactType_ = nullptr;
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<vector<string>> dependencyJarUris_ = nullptr;
    std::shared_ptr<string> jarUrl_ = nullptr;
    std::shared_ptr<int64_t> modifiedAt_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<vector<UdfClass>> udfClasses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
