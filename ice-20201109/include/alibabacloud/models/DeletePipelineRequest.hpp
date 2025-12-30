// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeletePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    DeletePipelineRequest() = default ;
    DeletePipelineRequest(const DeletePipelineRequest &) = default ;
    DeletePipelineRequest(DeletePipelineRequest &&) = default ;
    DeletePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePipelineRequest() = default ;
    DeletePipelineRequest& operator=(const DeletePipelineRequest &) = default ;
    DeletePipelineRequest& operator=(DeletePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineId_ == nullptr; };
    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DeletePipelineRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    // The ID of the MPS queue.
    // 
    // This parameter is required.
    shared_ptr<string> pipelineId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
