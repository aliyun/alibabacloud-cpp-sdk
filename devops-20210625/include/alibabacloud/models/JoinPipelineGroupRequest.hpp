// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOINPIPELINEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_JOINPIPELINEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class JoinPipelineGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JoinPipelineGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(pipelineIds, pipelineIds_);
    };
    friend void from_json(const Darabonba::Json& j, JoinPipelineGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(pipelineIds, pipelineIds_);
    };
    JoinPipelineGroupRequest() = default ;
    JoinPipelineGroupRequest(const JoinPipelineGroupRequest &) = default ;
    JoinPipelineGroupRequest(JoinPipelineGroupRequest &&) = default ;
    JoinPipelineGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JoinPipelineGroupRequest() = default ;
    JoinPipelineGroupRequest& operator=(const JoinPipelineGroupRequest &) = default ;
    JoinPipelineGroupRequest& operator=(JoinPipelineGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->pipelineIds_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline JoinPipelineGroupRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pipelineIds Field Functions 
    bool hasPipelineIds() const { return this->pipelineIds_ != nullptr;};
    void deletePipelineIds() { this->pipelineIds_ = nullptr;};
    inline string pipelineIds() const { DARABONBA_PTR_GET_DEFAULT(pipelineIds_, "") };
    inline JoinPipelineGroupRequest& setPipelineIds(string pipelineIds) { DARABONBA_PTR_SET_VALUE(pipelineIds_, pipelineIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pipelineIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
