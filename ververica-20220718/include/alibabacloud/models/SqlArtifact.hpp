// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_SQLARTIFACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SqlArtifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlArtifact& obj) { 
      DARABONBA_PTR_TO_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_TO_JSON(sqlScript, sqlScript_);
    };
    friend void from_json(const Darabonba::Json& j, SqlArtifact& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_FROM_JSON(sqlScript, sqlScript_);
    };
    SqlArtifact() = default ;
    SqlArtifact(const SqlArtifact &) = default ;
    SqlArtifact(SqlArtifact &&) = default ;
    SqlArtifact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlArtifact() = default ;
    SqlArtifact& operator=(const SqlArtifact &) = default ;
    SqlArtifact& operator=(SqlArtifact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalDependencies_ == nullptr
        && return this->sqlScript_ == nullptr; };
    // additionalDependencies Field Functions 
    bool hasAdditionalDependencies() const { return this->additionalDependencies_ != nullptr;};
    void deleteAdditionalDependencies() { this->additionalDependencies_ = nullptr;};
    inline const vector<string> & additionalDependencies() const { DARABONBA_PTR_GET_CONST(additionalDependencies_, vector<string>) };
    inline vector<string> additionalDependencies() { DARABONBA_PTR_GET(additionalDependencies_, vector<string>) };
    inline SqlArtifact& setAdditionalDependencies(const vector<string> & additionalDependencies) { DARABONBA_PTR_SET_VALUE(additionalDependencies_, additionalDependencies) };
    inline SqlArtifact& setAdditionalDependencies(vector<string> && additionalDependencies) { DARABONBA_PTR_SET_RVALUE(additionalDependencies_, additionalDependencies) };


    // sqlScript Field Functions 
    bool hasSqlScript() const { return this->sqlScript_ != nullptr;};
    void deleteSqlScript() { this->sqlScript_ = nullptr;};
    inline string sqlScript() const { DARABONBA_PTR_GET_DEFAULT(sqlScript_, "") };
    inline SqlArtifact& setSqlScript(string sqlScript) { DARABONBA_PTR_SET_VALUE(sqlScript_, sqlScript) };


  protected:
    std::shared_ptr<vector<string>> additionalDependencies_ = nullptr;
    std::shared_ptr<string> sqlScript_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
