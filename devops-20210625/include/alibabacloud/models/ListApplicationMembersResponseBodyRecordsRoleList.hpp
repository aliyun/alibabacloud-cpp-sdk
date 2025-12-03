// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONMEMBERSRESPONSEBODYRECORDSROLELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONMEMBERSRESPONSEBODYRECORDSROLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListApplicationMembersResponseBodyRecordsRoleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationMembersResponseBodyRecordsRoleList& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationMembersResponseBodyRecordsRoleList& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListApplicationMembersResponseBodyRecordsRoleList() = default ;
    ListApplicationMembersResponseBodyRecordsRoleList(const ListApplicationMembersResponseBodyRecordsRoleList &) = default ;
    ListApplicationMembersResponseBodyRecordsRoleList(ListApplicationMembersResponseBodyRecordsRoleList &&) = default ;
    ListApplicationMembersResponseBodyRecordsRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationMembersResponseBodyRecordsRoleList() = default ;
    ListApplicationMembersResponseBodyRecordsRoleList& operator=(const ListApplicationMembersResponseBodyRecordsRoleList &) = default ;
    ListApplicationMembersResponseBodyRecordsRoleList& operator=(ListApplicationMembersResponseBodyRecordsRoleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->name_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListApplicationMembersResponseBodyRecordsRoleList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApplicationMembersResponseBodyRecordsRoleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
