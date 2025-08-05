// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATAROLESACLINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATAROLESACLINSTANCE_HPP_
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
  class ListRolesResponseBodyDataRolesAclInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyDataRolesAclInstance& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyDataRolesAclInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListRolesResponseBodyDataRolesAclInstance() = default ;
    ListRolesResponseBodyDataRolesAclInstance(const ListRolesResponseBodyDataRolesAclInstance &) = default ;
    ListRolesResponseBodyDataRolesAclInstance(ListRolesResponseBodyDataRolesAclInstance &&) = default ;
    ListRolesResponseBodyDataRolesAclInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyDataRolesAclInstance() = default ;
    ListRolesResponseBodyDataRolesAclInstance& operator=(const ListRolesResponseBodyDataRolesAclInstance &) = default ;
    ListRolesResponseBodyDataRolesAclInstance& operator=(ListRolesResponseBodyDataRolesAclInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->name_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> actions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline ListRolesResponseBodyDataRolesAclInstance& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline ListRolesResponseBodyDataRolesAclInstance& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRolesResponseBodyDataRolesAclInstance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The operations that were performed on the instance.
    std::shared_ptr<vector<string>> actions_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
