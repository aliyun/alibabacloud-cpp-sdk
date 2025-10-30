// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateProjectMemberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectMemberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectMemberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommandShrink_);
    };
    UpdateProjectMemberShrinkRequest() = default ;
    UpdateProjectMemberShrinkRequest(const UpdateProjectMemberShrinkRequest &) = default ;
    UpdateProjectMemberShrinkRequest(UpdateProjectMemberShrinkRequest &&) = default ;
    UpdateProjectMemberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectMemberShrinkRequest() = default ;
    UpdateProjectMemberShrinkRequest& operator=(const UpdateProjectMemberShrinkRequest &) = default ;
    UpdateProjectMemberShrinkRequest& operator=(UpdateProjectMemberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->opTenantId_ == nullptr && return this->updateCommandShrink_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateProjectMemberShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateProjectMemberShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommandShrink Field Functions 
    bool hasUpdateCommandShrink() const { return this->updateCommandShrink_ != nullptr;};
    void deleteUpdateCommandShrink() { this->updateCommandShrink_ = nullptr;};
    inline string updateCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(updateCommandShrink_, "") };
    inline UpdateProjectMemberShrinkRequest& setUpdateCommandShrink(string updateCommandShrink) { DARABONBA_PTR_SET_VALUE(updateCommandShrink_, updateCommandShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> updateCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
