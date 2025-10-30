// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYROLESRESPONSEBODYROLELIST_HPP_
#define ALIBABACLOUD_MODELS_GETMYROLESRESPONSEBODYROLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetMyRolesResponseBodyRoleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMyRolesResponseBodyRoleList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetMyRolesResponseBodyRoleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetMyRolesResponseBodyRoleList() = default ;
    GetMyRolesResponseBodyRoleList(const GetMyRolesResponseBodyRoleList &) = default ;
    GetMyRolesResponseBodyRoleList(GetMyRolesResponseBodyRoleList &&) = default ;
    GetMyRolesResponseBodyRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMyRolesResponseBodyRoleList() = default ;
    GetMyRolesResponseBodyRoleList& operator=(const GetMyRolesResponseBodyRoleList &) = default ;
    GetMyRolesResponseBodyRoleList& operator=(GetMyRolesResponseBodyRoleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMyRolesResponseBodyRoleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMyRolesResponseBodyRoleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMyRolesResponseBodyRoleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
