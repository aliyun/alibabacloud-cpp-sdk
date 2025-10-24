// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRolesResponseBodyDataRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListRolesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(roles, roles_);
    };
    ListRolesResponseBodyData() = default ;
    ListRolesResponseBodyData(const ListRolesResponseBodyData &) = default ;
    ListRolesResponseBodyData(ListRolesResponseBodyData &&) = default ;
    ListRolesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyData() = default ;
    ListRolesResponseBodyData& operator=(const ListRolesResponseBodyData &) = default ;
    ListRolesResponseBodyData& operator=(ListRolesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roles_ == nullptr; };
    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<Models::ListRolesResponseBodyDataRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Models::ListRolesResponseBodyDataRoles>) };
    inline vector<Models::ListRolesResponseBodyDataRoles> roles() { DARABONBA_PTR_GET(roles_, vector<Models::ListRolesResponseBodyDataRoles>) };
    inline ListRolesResponseBodyData& setRoles(const vector<Models::ListRolesResponseBodyDataRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline ListRolesResponseBodyData& setRoles(vector<Models::ListRolesResponseBodyDataRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // The MaxCompute project-level roles.
    std::shared_ptr<vector<Models::ListRolesResponseBodyDataRoles>> roles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
