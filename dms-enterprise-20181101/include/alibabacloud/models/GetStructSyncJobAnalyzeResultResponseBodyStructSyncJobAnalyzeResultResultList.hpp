// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODYSTRUCTSYNCJOBANALYZERESULTRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODYSTRUCTSYNCJOBANALYZERESULTRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
      DARABONBA_PTR_TO_JSON(TargetTableName, targetTableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
      DARABONBA_PTR_FROM_JSON(TargetTableName, targetTableName_);
    };
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList() = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList(const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList &) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList(GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList &&) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList() = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList& operator=(const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList &) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList& operator=(GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->script_ == nullptr
        && return this->sourceTableName_ == nullptr && return this->targetTableName_ == nullptr; };
    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // sourceTableName Field Functions 
    bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
    void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
    inline string sourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


    // targetTableName Field Functions 
    bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
    void deleteTargetTableName() { this->targetTableName_ = nullptr;};
    inline string targetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


  protected:
    // The SQL script.
    std::shared_ptr<string> script_ = nullptr;
    // The name of the source table.
    std::shared_ptr<string> sourceTableName_ = nullptr;
    // The name of the destination table.
    std::shared_ptr<string> targetTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
