// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBDEBUGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JOBDEBUGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobDebuggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobDebuggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DebuggerConfigContent, debuggerConfigContent_);
      DARABONBA_PTR_TO_JSON(DebuggerConfigId, debuggerConfigId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, JobDebuggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DebuggerConfigContent, debuggerConfigContent_);
      DARABONBA_PTR_FROM_JSON(DebuggerConfigId, debuggerConfigId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    JobDebuggerConfig() = default ;
    JobDebuggerConfig(const JobDebuggerConfig &) = default ;
    JobDebuggerConfig(JobDebuggerConfig &&) = default ;
    JobDebuggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobDebuggerConfig() = default ;
    JobDebuggerConfig& operator=(const JobDebuggerConfig &) = default ;
    JobDebuggerConfig& operator=(JobDebuggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->debuggerConfigContent_ != nullptr
        && this->debuggerConfigId_ != nullptr && this->gmtCreateTime_ != nullptr && this->jobId_ != nullptr; };
    // debuggerConfigContent Field Functions 
    bool hasDebuggerConfigContent() const { return this->debuggerConfigContent_ != nullptr;};
    void deleteDebuggerConfigContent() { this->debuggerConfigContent_ = nullptr;};
    inline string debuggerConfigContent() const { DARABONBA_PTR_GET_DEFAULT(debuggerConfigContent_, "") };
    inline JobDebuggerConfig& setDebuggerConfigContent(string debuggerConfigContent) { DARABONBA_PTR_SET_VALUE(debuggerConfigContent_, debuggerConfigContent) };


    // debuggerConfigId Field Functions 
    bool hasDebuggerConfigId() const { return this->debuggerConfigId_ != nullptr;};
    void deleteDebuggerConfigId() { this->debuggerConfigId_ = nullptr;};
    inline string debuggerConfigId() const { DARABONBA_PTR_GET_DEFAULT(debuggerConfigId_, "") };
    inline JobDebuggerConfig& setDebuggerConfigId(string debuggerConfigId) { DARABONBA_PTR_SET_VALUE(debuggerConfigId_, debuggerConfigId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline JobDebuggerConfig& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline JobDebuggerConfig& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    std::shared_ptr<string> debuggerConfigContent_ = nullptr;
    std::shared_ptr<string> debuggerConfigId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
