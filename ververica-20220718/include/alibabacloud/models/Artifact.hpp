// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CdcYamlArtifact.hpp>
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
      DARABONBA_PTR_TO_JSON(cdcYamlArtifact, cdcYamlArtifact_);
      DARABONBA_PTR_TO_JSON(jarArtifact, jarArtifact_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(pythonArtifact, pythonArtifact_);
      DARABONBA_PTR_TO_JSON(sqlArtifact, sqlArtifact_);
    };
    friend void from_json(const Darabonba::Json& j, Artifact& obj) { 
      DARABONBA_PTR_FROM_JSON(cdcYamlArtifact, cdcYamlArtifact_);
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
    virtual bool empty() const override { return this->cdcYamlArtifact_ == nullptr
        && this->jarArtifact_ == nullptr && this->kind_ == nullptr && this->pythonArtifact_ == nullptr && this->sqlArtifact_ == nullptr; };
    // cdcYamlArtifact Field Functions 
    bool hasCdcYamlArtifact() const { return this->cdcYamlArtifact_ != nullptr;};
    void deleteCdcYamlArtifact() { this->cdcYamlArtifact_ = nullptr;};
    inline const CdcYamlArtifact & getCdcYamlArtifact() const { DARABONBA_PTR_GET_CONST(cdcYamlArtifact_, CdcYamlArtifact) };
    inline CdcYamlArtifact getCdcYamlArtifact() { DARABONBA_PTR_GET(cdcYamlArtifact_, CdcYamlArtifact) };
    inline Artifact& setCdcYamlArtifact(const CdcYamlArtifact & cdcYamlArtifact) { DARABONBA_PTR_SET_VALUE(cdcYamlArtifact_, cdcYamlArtifact) };
    inline Artifact& setCdcYamlArtifact(CdcYamlArtifact && cdcYamlArtifact) { DARABONBA_PTR_SET_RVALUE(cdcYamlArtifact_, cdcYamlArtifact) };


    // jarArtifact Field Functions 
    bool hasJarArtifact() const { return this->jarArtifact_ != nullptr;};
    void deleteJarArtifact() { this->jarArtifact_ = nullptr;};
    inline const JarArtifact & getJarArtifact() const { DARABONBA_PTR_GET_CONST(jarArtifact_, JarArtifact) };
    inline JarArtifact getJarArtifact() { DARABONBA_PTR_GET(jarArtifact_, JarArtifact) };
    inline Artifact& setJarArtifact(const JarArtifact & jarArtifact) { DARABONBA_PTR_SET_VALUE(jarArtifact_, jarArtifact) };
    inline Artifact& setJarArtifact(JarArtifact && jarArtifact) { DARABONBA_PTR_SET_RVALUE(jarArtifact_, jarArtifact) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline Artifact& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // pythonArtifact Field Functions 
    bool hasPythonArtifact() const { return this->pythonArtifact_ != nullptr;};
    void deletePythonArtifact() { this->pythonArtifact_ = nullptr;};
    inline const PythonArtifact & getPythonArtifact() const { DARABONBA_PTR_GET_CONST(pythonArtifact_, PythonArtifact) };
    inline PythonArtifact getPythonArtifact() { DARABONBA_PTR_GET(pythonArtifact_, PythonArtifact) };
    inline Artifact& setPythonArtifact(const PythonArtifact & pythonArtifact) { DARABONBA_PTR_SET_VALUE(pythonArtifact_, pythonArtifact) };
    inline Artifact& setPythonArtifact(PythonArtifact && pythonArtifact) { DARABONBA_PTR_SET_RVALUE(pythonArtifact_, pythonArtifact) };


    // sqlArtifact Field Functions 
    bool hasSqlArtifact() const { return this->sqlArtifact_ != nullptr;};
    void deleteSqlArtifact() { this->sqlArtifact_ = nullptr;};
    inline const SqlArtifact & getSqlArtifact() const { DARABONBA_PTR_GET_CONST(sqlArtifact_, SqlArtifact) };
    inline SqlArtifact getSqlArtifact() { DARABONBA_PTR_GET(sqlArtifact_, SqlArtifact) };
    inline Artifact& setSqlArtifact(const SqlArtifact & sqlArtifact) { DARABONBA_PTR_SET_VALUE(sqlArtifact_, sqlArtifact) };
    inline Artifact& setSqlArtifact(SqlArtifact && sqlArtifact) { DARABONBA_PTR_SET_RVALUE(sqlArtifact_, sqlArtifact) };


  protected:
    shared_ptr<CdcYamlArtifact> cdcYamlArtifact_ {};
    // The information required for the SQL deployment.
    shared_ptr<JarArtifact> jarArtifact_ {};
    // The type of the deployment. This parameter is required and cannot be modified after the deployment is created.
    // 
    // *   SQLSCRIPT
    // *   JAR
    // *   PYTHON
    shared_ptr<string> kind_ {};
    // The information required for the Python deployment.
    shared_ptr<PythonArtifact> pythonArtifact_ {};
    // The information required for the JAR deployment.
    shared_ptr<SqlArtifact> sqlArtifact_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
