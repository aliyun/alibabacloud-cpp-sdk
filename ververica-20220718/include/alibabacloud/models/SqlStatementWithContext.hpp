// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLSTATEMENTWITHCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_SQLSTATEMENTWITHCONTEXT_HPP_
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
  class SqlStatementWithContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlStatementWithContext& obj) { 
      DARABONBA_PTR_TO_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_TO_JSON(batchMode, batchMode_);
      DARABONBA_ANY_TO_JSON(flinkConfiguration, flinkConfiguration_);
      DARABONBA_PTR_TO_JSON(statement, statement_);
      DARABONBA_PTR_TO_JSON(versionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, SqlStatementWithContext& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_FROM_JSON(batchMode, batchMode_);
      DARABONBA_ANY_FROM_JSON(flinkConfiguration, flinkConfiguration_);
      DARABONBA_PTR_FROM_JSON(statement, statement_);
      DARABONBA_PTR_FROM_JSON(versionName, versionName_);
    };
    SqlStatementWithContext() = default ;
    SqlStatementWithContext(const SqlStatementWithContext &) = default ;
    SqlStatementWithContext(SqlStatementWithContext &&) = default ;
    SqlStatementWithContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlStatementWithContext() = default ;
    SqlStatementWithContext& operator=(const SqlStatementWithContext &) = default ;
    SqlStatementWithContext& operator=(SqlStatementWithContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalDependencies_ == nullptr
        && return this->batchMode_ == nullptr && return this->flinkConfiguration_ == nullptr && return this->statement_ == nullptr && return this->versionName_ == nullptr; };
    // additionalDependencies Field Functions 
    bool hasAdditionalDependencies() const { return this->additionalDependencies_ != nullptr;};
    void deleteAdditionalDependencies() { this->additionalDependencies_ = nullptr;};
    inline const vector<string> & additionalDependencies() const { DARABONBA_PTR_GET_CONST(additionalDependencies_, vector<string>) };
    inline vector<string> additionalDependencies() { DARABONBA_PTR_GET(additionalDependencies_, vector<string>) };
    inline SqlStatementWithContext& setAdditionalDependencies(const vector<string> & additionalDependencies) { DARABONBA_PTR_SET_VALUE(additionalDependencies_, additionalDependencies) };
    inline SqlStatementWithContext& setAdditionalDependencies(vector<string> && additionalDependencies) { DARABONBA_PTR_SET_RVALUE(additionalDependencies_, additionalDependencies) };


    // batchMode Field Functions 
    bool hasBatchMode() const { return this->batchMode_ != nullptr;};
    void deleteBatchMode() { this->batchMode_ = nullptr;};
    inline bool batchMode() const { DARABONBA_PTR_GET_DEFAULT(batchMode_, false) };
    inline SqlStatementWithContext& setBatchMode(bool batchMode) { DARABONBA_PTR_SET_VALUE(batchMode_, batchMode) };


    // flinkConfiguration Field Functions 
    bool hasFlinkConfiguration() const { return this->flinkConfiguration_ != nullptr;};
    void deleteFlinkConfiguration() { this->flinkConfiguration_ = nullptr;};
    inline     const Darabonba::Json & flinkConfiguration() const { DARABONBA_GET(flinkConfiguration_) };
    Darabonba::Json & flinkConfiguration() { DARABONBA_GET(flinkConfiguration_) };
    inline SqlStatementWithContext& setFlinkConfiguration(const Darabonba::Json & flinkConfiguration) { DARABONBA_SET_VALUE(flinkConfiguration_, flinkConfiguration) };
    inline SqlStatementWithContext& setFlinkConfiguration(Darabonba::Json & flinkConfiguration) { DARABONBA_SET_RVALUE(flinkConfiguration_, flinkConfiguration) };


    // statement Field Functions 
    bool hasStatement() const { return this->statement_ != nullptr;};
    void deleteStatement() { this->statement_ = nullptr;};
    inline string statement() const { DARABONBA_PTR_GET_DEFAULT(statement_, "") };
    inline SqlStatementWithContext& setStatement(string statement) { DARABONBA_PTR_SET_VALUE(statement_, statement) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline SqlStatementWithContext& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    std::shared_ptr<vector<string>> additionalDependencies_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> batchMode_ = nullptr;
    Darabonba::Json flinkConfiguration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> statement_ = nullptr;
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
