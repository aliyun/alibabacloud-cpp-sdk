// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREGISTERLINEAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREGISTERLINEAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteRegisterLineageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRegisterLineageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteRegisterLineageCommand, deleteRegisterLineageCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRegisterLineageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteRegisterLineageCommand, deleteRegisterLineageCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteRegisterLineageShrinkRequest() = default ;
    DeleteRegisterLineageShrinkRequest(const DeleteRegisterLineageShrinkRequest &) = default ;
    DeleteRegisterLineageShrinkRequest(DeleteRegisterLineageShrinkRequest &&) = default ;
    DeleteRegisterLineageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRegisterLineageShrinkRequest() = default ;
    DeleteRegisterLineageShrinkRequest& operator=(const DeleteRegisterLineageShrinkRequest &) = default ;
    DeleteRegisterLineageShrinkRequest& operator=(DeleteRegisterLineageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteRegisterLineageCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteRegisterLineageCommandShrink Field Functions 
    bool hasDeleteRegisterLineageCommandShrink() const { return this->deleteRegisterLineageCommandShrink_ != nullptr;};
    void deleteDeleteRegisterLineageCommandShrink() { this->deleteRegisterLineageCommandShrink_ = nullptr;};
    inline string getDeleteRegisterLineageCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteRegisterLineageCommandShrink_, "") };
    inline DeleteRegisterLineageShrinkRequest& setDeleteRegisterLineageCommandShrink(string deleteRegisterLineageCommandShrink) { DARABONBA_PTR_SET_VALUE(deleteRegisterLineageCommandShrink_, deleteRegisterLineageCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteRegisterLineageShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> deleteRegisterLineageCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
