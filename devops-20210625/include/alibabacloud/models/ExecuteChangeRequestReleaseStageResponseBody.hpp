// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTECHANGEREQUESTRELEASESTAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTECHANGEREQUESTRELEASESTAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ExecuteChangeRequestReleaseStageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteChangeRequestReleaseStageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(object, object_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(pipelineRunId, pipelineRunId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteChangeRequestReleaseStageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(object, object_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(pipelineRunId, pipelineRunId_);
    };
    ExecuteChangeRequestReleaseStageResponseBody() = default ;
    ExecuteChangeRequestReleaseStageResponseBody(const ExecuteChangeRequestReleaseStageResponseBody &) = default ;
    ExecuteChangeRequestReleaseStageResponseBody(ExecuteChangeRequestReleaseStageResponseBody &&) = default ;
    ExecuteChangeRequestReleaseStageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteChangeRequestReleaseStageResponseBody() = default ;
    ExecuteChangeRequestReleaseStageResponseBody& operator=(const ExecuteChangeRequestReleaseStageResponseBody &) = default ;
    ExecuteChangeRequestReleaseStageResponseBody& operator=(ExecuteChangeRequestReleaseStageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->object_ == nullptr
        && return this->pipelineId_ == nullptr && return this->pipelineRunId_ == nullptr; };
    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline int64_t object() const { DARABONBA_PTR_GET_DEFAULT(object_, 0L) };
    inline ExecuteChangeRequestReleaseStageResponseBody& setObject(int64_t object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline ExecuteChangeRequestReleaseStageResponseBody& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline int64_t pipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, 0L) };
    inline ExecuteChangeRequestReleaseStageResponseBody& setPipelineRunId(int64_t pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


  protected:
    std::shared_ptr<int64_t> object_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
    std::shared_ptr<int64_t> pipelineRunId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
