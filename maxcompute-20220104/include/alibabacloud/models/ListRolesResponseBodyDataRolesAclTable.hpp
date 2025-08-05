// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATAROLESACLTABLE_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATAROLESACLTABLE_HPP_
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
  class ListRolesResponseBodyDataRolesAclTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyDataRolesAclTable& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyDataRolesAclTable& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListRolesResponseBodyDataRolesAclTable() = default ;
    ListRolesResponseBodyDataRolesAclTable(const ListRolesResponseBodyDataRolesAclTable &) = default ;
    ListRolesResponseBodyDataRolesAclTable(ListRolesResponseBodyDataRolesAclTable &&) = default ;
    ListRolesResponseBodyDataRolesAclTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyDataRolesAclTable() = default ;
    ListRolesResponseBodyDataRolesAclTable& operator=(const ListRolesResponseBodyDataRolesAclTable &) = default ;
    ListRolesResponseBodyDataRolesAclTable& operator=(ListRolesResponseBodyDataRolesAclTable &&) = default ;
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
    inline ListRolesResponseBodyDataRolesAclTable& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline ListRolesResponseBodyDataRolesAclTable& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRolesResponseBodyDataRolesAclTable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The operations that were performed on the table.
    std::shared_ptr<vector<string>> actions_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
