// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINENODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINENODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineNodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineNodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatePipelineNodeCommand, createPipelineNodeCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineNodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatePipelineNodeCommand, createPipelineNodeCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreatePipelineNodeShrinkRequest() = default ;
    CreatePipelineNodeShrinkRequest(const CreatePipelineNodeShrinkRequest &) = default ;
    CreatePipelineNodeShrinkRequest(CreatePipelineNodeShrinkRequest &&) = default ;
    CreatePipelineNodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineNodeShrinkRequest() = default ;
    CreatePipelineNodeShrinkRequest& operator=(const CreatePipelineNodeShrinkRequest &) = default ;
    CreatePipelineNodeShrinkRequest& operator=(CreatePipelineNodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createPipelineNodeCommandShrink_ != nullptr
        && this->opTenantId_ != nullptr; };
    // createPipelineNodeCommandShrink Field Functions 
    bool hasCreatePipelineNodeCommandShrink() const { return this->createPipelineNodeCommandShrink_ != nullptr;};
    void deleteCreatePipelineNodeCommandShrink() { this->createPipelineNodeCommandShrink_ = nullptr;};
    inline string createPipelineNodeCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(createPipelineNodeCommandShrink_, "") };
    inline CreatePipelineNodeShrinkRequest& setCreatePipelineNodeCommandShrink(string createPipelineNodeCommandShrink) { DARABONBA_PTR_SET_VALUE(createPipelineNodeCommandShrink_, createPipelineNodeCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreatePipelineNodeShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> createPipelineNodeCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
