// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetSkillRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(includeLogs, includeLogs_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(includeLogs, includeLogs_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetSkillRunRequest() = default ;
    GetSkillRunRequest(const GetSkillRunRequest &) = default ;
    GetSkillRunRequest(GetSkillRunRequest &&) = default ;
    GetSkillRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillRunRequest() = default ;
    GetSkillRunRequest& operator=(const GetSkillRunRequest &) = default ;
    GetSkillRunRequest& operator=(GetSkillRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeLogs_ == nullptr
        && this->runId_ == nullptr && this->tenantId_ == nullptr; };
    // includeLogs Field Functions 
    bool hasIncludeLogs() const { return this->includeLogs_ != nullptr;};
    void deleteIncludeLogs() { this->includeLogs_ = nullptr;};
    inline bool getIncludeLogs() const { DARABONBA_PTR_GET_DEFAULT(includeLogs_, false) };
    inline GetSkillRunRequest& setIncludeLogs(bool includeLogs) { DARABONBA_PTR_SET_VALUE(includeLogs_, includeLogs) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetSkillRunRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetSkillRunRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Specifies whether to include execution logs. Default value: false. Enable this parameter only for troubleshooting.
    shared_ptr<bool> includeLogs_ {};
    // The evaluation run ID.
    // 
    // This parameter is required.
    shared_ptr<string> runId_ {};
    // The tenant ID to which the task belongs.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
