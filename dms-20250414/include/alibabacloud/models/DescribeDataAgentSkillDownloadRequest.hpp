// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSKILLDOWNLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSKILLDOWNLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDataAgentSkillDownloadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentSkillDownloadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentSkillDownloadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DescribeDataAgentSkillDownloadRequest() = default ;
    DescribeDataAgentSkillDownloadRequest(const DescribeDataAgentSkillDownloadRequest &) = default ;
    DescribeDataAgentSkillDownloadRequest(DescribeDataAgentSkillDownloadRequest &&) = default ;
    DescribeDataAgentSkillDownloadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentSkillDownloadRequest() = default ;
    DescribeDataAgentSkillDownloadRequest& operator=(const DescribeDataAgentSkillDownloadRequest &) = default ;
    DescribeDataAgentSkillDownloadRequest& operator=(DescribeDataAgentSkillDownloadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skillId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline DescribeDataAgentSkillDownloadRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeDataAgentSkillDownloadRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The skill ID.
    shared_ptr<string> skillId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
