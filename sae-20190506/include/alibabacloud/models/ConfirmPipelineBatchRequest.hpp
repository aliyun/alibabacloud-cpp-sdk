// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMPIPELINEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMPIPELINEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ConfirmPipelineBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmPipelineBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Confirm, confirm_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmPipelineBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Confirm, confirm_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    ConfirmPipelineBatchRequest() = default ;
    ConfirmPipelineBatchRequest(const ConfirmPipelineBatchRequest &) = default ;
    ConfirmPipelineBatchRequest(ConfirmPipelineBatchRequest &&) = default ;
    ConfirmPipelineBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmPipelineBatchRequest() = default ;
    ConfirmPipelineBatchRequest& operator=(const ConfirmPipelineBatchRequest &) = default ;
    ConfirmPipelineBatchRequest& operator=(ConfirmPipelineBatchRequest &&) = default ;
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
    inline ConfirmPipelineBatchRequest& setConfirm(bool confirm) { DARABONBA_PTR_SET_VALUE(confirm_, confirm) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ConfirmPipelineBatchRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    // true
    // 
    // This parameter is required.
    std::shared_ptr<bool> confirm_ = nullptr;
    // The ID of the batch. You can call the [DescribeChangeOrder](https://www.alibabacloud.com/help/zh/sae/serverless-app-engine-classic/developer-reference/api-sae-2019-05-06-describechangeorder-old?spm=a2c63.p38356.help-menu-search-118957.d_0) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
