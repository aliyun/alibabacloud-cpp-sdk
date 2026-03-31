// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESFORGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESFORGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListPoliciesForGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesForGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesForGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ListPoliciesForGroupRequest() = default ;
    ListPoliciesForGroupRequest(const ListPoliciesForGroupRequest &) = default ;
    ListPoliciesForGroupRequest(ListPoliciesForGroupRequest &&) = default ;
    ListPoliciesForGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesForGroupRequest() = default ;
    ListPoliciesForGroupRequest& operator=(const ListPoliciesForGroupRequest &) = default ;
    ListPoliciesForGroupRequest& operator=(ListPoliciesForGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListPoliciesForGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The name of the RAM user group.
    shared_ptr<string> groupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
