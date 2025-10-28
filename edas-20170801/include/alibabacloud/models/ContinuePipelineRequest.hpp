// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTINUEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ContinuePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinuePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Confirm, confirm_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, ContinuePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Confirm, confirm_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    ContinuePipelineRequest() = default ;
    ContinuePipelineRequest(const ContinuePipelineRequest &) = default ;
    ContinuePipelineRequest(ContinuePipelineRequest &&) = default ;
    ContinuePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinuePipelineRequest() = default ;
    ContinuePipelineRequest& operator=(const ContinuePipelineRequest &) = default ;
    ContinuePipelineRequest& operator=(ContinuePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confirm_ == nullptr
        && return this->pipelineId_ == nullptr; };
    // confirm Field Functions 
    bool hasConfirm() const { return this->confirm_ != nullptr;};
    void deleteConfirm() { this->confirm_ = nullptr;};
    inline bool confirm() const { DARABONBA_PTR_GET_DEFAULT(confirm_, false) };
    inline ContinuePipelineRequest& setConfirm(bool confirm) { DARABONBA_PTR_SET_VALUE(confirm_, confirm) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ContinuePipelineRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    // Specifies whether to release the next batch. Valid values:
    // 
    // *   true: releases the next batch.
    // *   false: does not release the next batch.
    std::shared_ptr<bool> confirm_ = nullptr;
    // The ID of the change process. You can call the GetChangeOrderInfo operation to query the ID of the change process that corresponds to a specific batch. For more information, see [GetChangeOrderInfo](https://help.aliyun.com/document_detail/62072.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
