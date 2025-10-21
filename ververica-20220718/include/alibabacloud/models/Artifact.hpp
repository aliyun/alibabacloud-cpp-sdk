// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JarArtifact.hpp>
#include <alibabacloud/models/PythonArtifact.hpp>
#include <alibabacloud/models/SqlArtifact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Artifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Artifact& obj) { 
      DARABONBA_PTR_TO_JSON(jarArtifact, jarArtifact_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(pythonArtifact, pythonArtifact_);
      DARABONBA_PTR_TO_JSON(sqlArtifact, sqlArtifact_);
    };
    friend void from_json(const Darabonba::Json& j, Artifact& obj) { 
      DARABONBA_PTR_FROM_JSON(jarArtifact, jarArtifact_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(pythonArtifact, pythonArtifact_);
      DARABONBA_PTR_FROM_JSON(sqlArtifact, sqlArtifact_);
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
    virtual bool empty() const override { return this->jarArtifact_ == nullptr
        && return this->kind_ == nullptr && return this->pythonArtifact_ == nullptr && return this->sqlArtifact_ == nullptr; };
    // jarArtifact Field Functions 
    bool hasJarArtifact() const { return this->jarArtifact_ != nullptr;};
    void deleteJarArtifact() { this->jarArtifact_ = nullptr;};
    inline const JarArtifact & jarArtifact() const { DARABONBA_PTR_GET_CONST(jarArtifact_, JarArtifact) };
    inline JarArtifact jarArtifact() { DARABONBA_PTR_GET(jarArtifact_, JarArtifact) };
    inline Artifact& setJarArtifact(const JarArtifact & jarArtifact) { DARABONBA_PTR_SET_VALUE(jarArtifact_, jarArtifact) };
    inline Artifact& setJarArtifact(JarArtifact && jarArtifact) { DARABONBA_PTR_SET_RVALUE(jarArtifact_, jarArtifact) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline Artifact& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // pythonArtifact Field Functions 
    bool hasPythonArtifact() const { return this->pythonArtifact_ != nullptr;};
    void deletePythonArtifact() { this->pythonArtifact_ = nullptr;};
    inline const PythonArtifact & pythonArtifact() const { DARABONBA_PTR_GET_CONST(pythonArtifact_, PythonArtifact) };
    inline PythonArtifact pythonArtifact() { DARABONBA_PTR_GET(pythonArtifact_, PythonArtifact) };
    inline Artifact& setPythonArtifact(const PythonArtifact & pythonArtifact) { DARABONBA_PTR_SET_VALUE(pythonArtifact_, pythonArtifact) };
    inline Artifact& setPythonArtifact(PythonArtifact && pythonArtifact) { DARABONBA_PTR_SET_RVALUE(pythonArtifact_, pythonArtifact) };


    // sqlArtifact Field Functions 
    bool hasSqlArtifact() const { return this->sqlArtifact_ != nullptr;};
    void deleteSqlArtifact() { this->sqlArtifact_ = nullptr;};
    inline const SqlArtifact & sqlArtifact() const { DARABONBA_PTR_GET_CONST(sqlArtifact_, SqlArtifact) };
    inline SqlArtifact sqlArtifact() { DARABONBA_PTR_GET(sqlArtifact_, SqlArtifact) };
    inline Artifact& setSqlArtifact(const SqlArtifact & sqlArtifact) { DARABONBA_PTR_SET_VALUE(sqlArtifact_, sqlArtifact) };
    inline Artifact& setSqlArtifact(SqlArtifact && sqlArtifact) { DARABONBA_PTR_SET_RVALUE(sqlArtifact_, sqlArtifact) };


  protected:
    std::shared_ptr<JarArtifact> jarArtifact_ = nullptr;
    std::shared_ptr<string> kind_ = nullptr;
    std::shared_ptr<PythonArtifact> pythonArtifact_ = nullptr;
    std::shared_ptr<SqlArtifact> sqlArtifact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
