// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTENANTMEMBERSBYSOURCEUSERREQUESTADDCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_ADDTENANTMEMBERSBYSOURCEUSERREQUESTADDCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddTenantMembersBySourceUserRequestAddCommandSourceUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddTenantMembersBySourceUserRequestAddCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTenantMembersBySourceUserRequestAddCommand& obj) { 
      DARABONBA_PTR_TO_JSON(SourceUserList, sourceUserList_);
    };
    friend void from_json(const Darabonba::Json& j, AddTenantMembersBySourceUserRequestAddCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceUserList, sourceUserList_);
    };
    AddTenantMembersBySourceUserRequestAddCommand() = default ;
    AddTenantMembersBySourceUserRequestAddCommand(const AddTenantMembersBySourceUserRequestAddCommand &) = default ;
    AddTenantMembersBySourceUserRequestAddCommand(AddTenantMembersBySourceUserRequestAddCommand &&) = default ;
    AddTenantMembersBySourceUserRequestAddCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTenantMembersBySourceUserRequestAddCommand() = default ;
    AddTenantMembersBySourceUserRequestAddCommand& operator=(const AddTenantMembersBySourceUserRequestAddCommand &) = default ;
    AddTenantMembersBySourceUserRequestAddCommand& operator=(AddTenantMembersBySourceUserRequestAddCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceUserList_ != nullptr; };
    // sourceUserList Field Functions 
    bool hasSourceUserList() const { return this->sourceUserList_ != nullptr;};
    void deleteSourceUserList() { this->sourceUserList_ = nullptr;};
    inline const vector<Models::AddTenantMembersBySourceUserRequestAddCommandSourceUserList> & sourceUserList() const { DARABONBA_PTR_GET_CONST(sourceUserList_, vector<Models::AddTenantMembersBySourceUserRequestAddCommandSourceUserList>) };
    inline vector<Models::AddTenantMembersBySourceUserRequestAddCommandSourceUserList> sourceUserList() { DARABONBA_PTR_GET(sourceUserList_, vector<Models::AddTenantMembersBySourceUserRequestAddCommandSourceUserList>) };
    inline AddTenantMembersBySourceUserRequestAddCommand& setSourceUserList(const vector<Models::AddTenantMembersBySourceUserRequestAddCommandSourceUserList> & sourceUserList) { DARABONBA_PTR_SET_VALUE(sourceUserList_, sourceUserList) };
    inline AddTenantMembersBySourceUserRequestAddCommand& setSourceUserList(vector<Models::AddTenantMembersBySourceUserRequestAddCommandSourceUserList> && sourceUserList) { DARABONBA_PTR_SET_RVALUE(sourceUserList_, sourceUserList) };


  protected:
    std::shared_ptr<vector<Models::AddTenantMembersBySourceUserRequestAddCommandSourceUserList>> sourceUserList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
