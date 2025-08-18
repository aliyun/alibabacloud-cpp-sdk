// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RemoveProjectMemberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveProjectMemberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveProjectMemberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommandShrink_);
    };
    RemoveProjectMemberShrinkRequest() = default ;
    RemoveProjectMemberShrinkRequest(const RemoveProjectMemberShrinkRequest &) = default ;
    RemoveProjectMemberShrinkRequest(RemoveProjectMemberShrinkRequest &&) = default ;
    RemoveProjectMemberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveProjectMemberShrinkRequest() = default ;
    RemoveProjectMemberShrinkRequest& operator=(const RemoveProjectMemberShrinkRequest &) = default ;
    RemoveProjectMemberShrinkRequest& operator=(RemoveProjectMemberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->opTenantId_ != nullptr && this->removeCommandShrink_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RemoveProjectMemberShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveProjectMemberShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommandShrink Field Functions 
    bool hasRemoveCommandShrink() const { return this->removeCommandShrink_ != nullptr;};
    void deleteRemoveCommandShrink() { this->removeCommandShrink_ = nullptr;};
    inline string removeCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(removeCommandShrink_, "") };
    inline RemoveProjectMemberShrinkRequest& setRemoveCommandShrink(string removeCommandShrink) { DARABONBA_PTR_SET_VALUE(removeCommandShrink_, removeCommandShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> removeCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
