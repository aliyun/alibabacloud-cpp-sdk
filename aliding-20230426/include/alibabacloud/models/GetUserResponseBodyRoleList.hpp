// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYROLELIST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYROLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserResponseBodyRoleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyRoleList& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyRoleList& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetUserResponseBodyRoleList() = default ;
    GetUserResponseBodyRoleList(const GetUserResponseBodyRoleList &) = default ;
    GetUserResponseBodyRoleList(GetUserResponseBodyRoleList &&) = default ;
    GetUserResponseBodyRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyRoleList() = default ;
    GetUserResponseBodyRoleList& operator=(const GetUserResponseBodyRoleList &) = default ;
    GetUserResponseBodyRoleList& operator=(GetUserResponseBodyRoleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetUserResponseBodyRoleList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetUserResponseBodyRoleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUserResponseBodyRoleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
