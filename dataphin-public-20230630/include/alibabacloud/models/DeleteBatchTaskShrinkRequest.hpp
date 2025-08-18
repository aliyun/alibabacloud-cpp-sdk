// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBATCHTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBATCHTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteBatchTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBatchTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBatchTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteBatchTaskShrinkRequest() = default ;
    DeleteBatchTaskShrinkRequest(const DeleteBatchTaskShrinkRequest &) = default ;
    DeleteBatchTaskShrinkRequest(DeleteBatchTaskShrinkRequest &&) = default ;
    DeleteBatchTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBatchTaskShrinkRequest() = default ;
    DeleteBatchTaskShrinkRequest& operator=(const DeleteBatchTaskShrinkRequest &) = default ;
    DeleteBatchTaskShrinkRequest& operator=(DeleteBatchTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteCommandShrink_ != nullptr
        && this->opTenantId_ != nullptr; };
    // deleteCommandShrink Field Functions 
    bool hasDeleteCommandShrink() const { return this->deleteCommandShrink_ != nullptr;};
    void deleteDeleteCommandShrink() { this->deleteCommandShrink_ = nullptr;};
    inline string deleteCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteCommandShrink_, "") };
    inline DeleteBatchTaskShrinkRequest& setDeleteCommandShrink(string deleteCommandShrink) { DARABONBA_PTR_SET_VALUE(deleteCommandShrink_, deleteCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteBatchTaskShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deleteCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
