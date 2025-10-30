// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMEMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMEMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddProjectMemberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectMemberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommandShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectMemberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommandShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddProjectMemberShrinkRequest() = default ;
    AddProjectMemberShrinkRequest(const AddProjectMemberShrinkRequest &) = default ;
    AddProjectMemberShrinkRequest(AddProjectMemberShrinkRequest &&) = default ;
    AddProjectMemberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectMemberShrinkRequest() = default ;
    AddProjectMemberShrinkRequest& operator=(const AddProjectMemberShrinkRequest &) = default ;
    AddProjectMemberShrinkRequest& operator=(AddProjectMemberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addCommandShrink_ == nullptr
        && return this->id_ == nullptr && return this->opTenantId_ == nullptr; };
    // addCommandShrink Field Functions 
    bool hasAddCommandShrink() const { return this->addCommandShrink_ != nullptr;};
    void deleteAddCommandShrink() { this->addCommandShrink_ = nullptr;};
    inline string addCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(addCommandShrink_, "") };
    inline AddProjectMemberShrinkRequest& setAddCommandShrink(string addCommandShrink) { DARABONBA_PTR_SET_VALUE(addCommandShrink_, addCommandShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddProjectMemberShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddProjectMemberShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> addCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
