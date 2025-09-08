// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMPIPELINEBATCHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMPIPELINEBATCHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ConfirmPipelineBatchResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmPipelineBatchResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmPipelineBatchResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    ConfirmPipelineBatchResponseBodyData() = default ;
    ConfirmPipelineBatchResponseBodyData(const ConfirmPipelineBatchResponseBodyData &) = default ;
    ConfirmPipelineBatchResponseBodyData(ConfirmPipelineBatchResponseBodyData &&) = default ;
    ConfirmPipelineBatchResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmPipelineBatchResponseBodyData() = default ;
    ConfirmPipelineBatchResponseBodyData& operator=(const ConfirmPipelineBatchResponseBodyData &) = default ;
    ConfirmPipelineBatchResponseBodyData& operator=(ConfirmPipelineBatchResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pipelineId_ != nullptr; };
    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ConfirmPipelineBatchResponseBodyData& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    // The ID of the batch.
    std::shared_ptr<string> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
