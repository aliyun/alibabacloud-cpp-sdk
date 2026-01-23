// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTANDARDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTANDARDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteStandardShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStandardShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStandardShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteStandardShrinkRequest() = default ;
    DeleteStandardShrinkRequest(const DeleteStandardShrinkRequest &) = default ;
    DeleteStandardShrinkRequest(DeleteStandardShrinkRequest &&) = default ;
    DeleteStandardShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStandardShrinkRequest() = default ;
    DeleteStandardShrinkRequest& operator=(const DeleteStandardShrinkRequest &) = default ;
    DeleteStandardShrinkRequest& operator=(DeleteStandardShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommandShrink Field Functions 
    bool hasDeleteCommandShrink() const { return this->deleteCommandShrink_ != nullptr;};
    void deleteDeleteCommandShrink() { this->deleteCommandShrink_ = nullptr;};
    inline string getDeleteCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteCommandShrink_, "") };
    inline DeleteStandardShrinkRequest& setDeleteCommandShrink(string deleteCommandShrink) { DARABONBA_PTR_SET_VALUE(deleteCommandShrink_, deleteCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteStandardShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> deleteCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
