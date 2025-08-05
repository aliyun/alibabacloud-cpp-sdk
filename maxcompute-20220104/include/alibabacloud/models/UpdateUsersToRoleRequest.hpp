// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSTOROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSTOROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateUsersToRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUsersToRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(add, add_);
      DARABONBA_PTR_TO_JSON(remove, remove_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUsersToRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(add, add_);
      DARABONBA_PTR_FROM_JSON(remove, remove_);
    };
    UpdateUsersToRoleRequest() = default ;
    UpdateUsersToRoleRequest(const UpdateUsersToRoleRequest &) = default ;
    UpdateUsersToRoleRequest(UpdateUsersToRoleRequest &&) = default ;
    UpdateUsersToRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUsersToRoleRequest() = default ;
    UpdateUsersToRoleRequest& operator=(const UpdateUsersToRoleRequest &) = default ;
    UpdateUsersToRoleRequest& operator=(UpdateUsersToRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->add_ != nullptr
        && this->remove_ != nullptr; };
    // add Field Functions 
    bool hasAdd() const { return this->add_ != nullptr;};
    void deleteAdd() { this->add_ = nullptr;};
    inline const vector<string> & add() const { DARABONBA_PTR_GET_CONST(add_, vector<string>) };
    inline vector<string> add() { DARABONBA_PTR_GET(add_, vector<string>) };
    inline UpdateUsersToRoleRequest& setAdd(const vector<string> & add) { DARABONBA_PTR_SET_VALUE(add_, add) };
    inline UpdateUsersToRoleRequest& setAdd(vector<string> && add) { DARABONBA_PTR_SET_RVALUE(add_, add) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline const vector<string> & remove() const { DARABONBA_PTR_GET_CONST(remove_, vector<string>) };
    inline vector<string> remove() { DARABONBA_PTR_GET(remove_, vector<string>) };
    inline UpdateUsersToRoleRequest& setRemove(const vector<string> & remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };
    inline UpdateUsersToRoleRequest& setRemove(vector<string> && remove) { DARABONBA_PTR_SET_RVALUE(remove_, remove) };


  protected:
    // The accounts.
    std::shared_ptr<vector<string>> add_ = nullptr;
    // The accounts.
    std::shared_ptr<vector<string>> remove_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
