// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateComputeSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommandShrink_);
    };
    UpdateComputeSourceShrinkRequest() = default ;
    UpdateComputeSourceShrinkRequest(const UpdateComputeSourceShrinkRequest &) = default ;
    UpdateComputeSourceShrinkRequest(UpdateComputeSourceShrinkRequest &&) = default ;
    UpdateComputeSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeSourceShrinkRequest() = default ;
    UpdateComputeSourceShrinkRequest& operator=(const UpdateComputeSourceShrinkRequest &) = default ;
    UpdateComputeSourceShrinkRequest& operator=(UpdateComputeSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->updateCommandShrink_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateComputeSourceShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommandShrink Field Functions 
    bool hasUpdateCommandShrink() const { return this->updateCommandShrink_ != nullptr;};
    void deleteUpdateCommandShrink() { this->updateCommandShrink_ = nullptr;};
    inline string updateCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(updateCommandShrink_, "") };
    inline UpdateComputeSourceShrinkRequest& setUpdateCommandShrink(string updateCommandShrink) { DARABONBA_PTR_SET_VALUE(updateCommandShrink_, updateCommandShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> updateCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
