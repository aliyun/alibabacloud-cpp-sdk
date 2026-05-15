// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILNEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILNEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailNewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailNewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailNewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    QueryAiVoiceAgentDetailNewRequest() = default ;
    QueryAiVoiceAgentDetailNewRequest(const QueryAiVoiceAgentDetailNewRequest &) = default ;
    QueryAiVoiceAgentDetailNewRequest(QueryAiVoiceAgentDetailNewRequest &&) = default ;
    QueryAiVoiceAgentDetailNewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailNewRequest() = default ;
    QueryAiVoiceAgentDetailNewRequest& operator=(const QueryAiVoiceAgentDetailNewRequest &) = default ;
    QueryAiVoiceAgentDetailNewRequest& operator=(QueryAiVoiceAgentDetailNewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->branchId_ == nullptr && this->versionId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline QueryAiVoiceAgentDetailNewRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline int64_t getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, 0L) };
    inline QueryAiVoiceAgentDetailNewRequest& setBranchId(int64_t branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int64_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
    inline QueryAiVoiceAgentDetailNewRequest& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    shared_ptr<int64_t> agentId_ {};
    shared_ptr<int64_t> branchId_ {};
    shared_ptr<int64_t> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
