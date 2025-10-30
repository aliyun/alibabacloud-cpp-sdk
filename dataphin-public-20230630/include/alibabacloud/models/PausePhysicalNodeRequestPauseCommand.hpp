// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSEPHYSICALNODEREQUESTPAUSECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_PAUSEPHYSICALNODEREQUESTPAUSECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PausePhysicalNodeRequestPauseCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PausePhysicalNodeRequestPauseCommand& obj) { 
      DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, PausePhysicalNodeRequestPauseCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    PausePhysicalNodeRequestPauseCommand() = default ;
    PausePhysicalNodeRequestPauseCommand(const PausePhysicalNodeRequestPauseCommand &) = default ;
    PausePhysicalNodeRequestPauseCommand(PausePhysicalNodeRequestPauseCommand &&) = default ;
    PausePhysicalNodeRequestPauseCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PausePhysicalNodeRequestPauseCommand() = default ;
    PausePhysicalNodeRequestPauseCommand& operator=(const PausePhysicalNodeRequestPauseCommand &) = default ;
    PausePhysicalNodeRequestPauseCommand& operator=(PausePhysicalNodeRequestPauseCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeIdList_ == nullptr
        && return this->projectId_ == nullptr; };
    // nodeIdList Field Functions 
    bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
    void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
    inline const vector<string> & nodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<string>) };
    inline vector<string> nodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<string>) };
    inline PausePhysicalNodeRequestPauseCommand& setNodeIdList(const vector<string> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
    inline PausePhysicalNodeRequestPauseCommand& setNodeIdList(vector<string> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline PausePhysicalNodeRequestPauseCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> nodeIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
