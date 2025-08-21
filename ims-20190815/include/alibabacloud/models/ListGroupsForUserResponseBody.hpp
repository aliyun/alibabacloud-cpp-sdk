// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGroupsForUserResponseBodyGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListGroupsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGroupsForUserResponseBody() = default ;
    ListGroupsForUserResponseBody(const ListGroupsForUserResponseBody &) = default ;
    ListGroupsForUserResponseBody(ListGroupsForUserResponseBody &&) = default ;
    ListGroupsForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForUserResponseBody() = default ;
    ListGroupsForUserResponseBody& operator=(const ListGroupsForUserResponseBody &) = default ;
    ListGroupsForUserResponseBody& operator=(ListGroupsForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groups_ != nullptr
        && this->requestId_ != nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const ListGroupsForUserResponseBodyGroups & groups() const { DARABONBA_PTR_GET_CONST(groups_, ListGroupsForUserResponseBodyGroups) };
    inline ListGroupsForUserResponseBodyGroups groups() { DARABONBA_PTR_GET(groups_, ListGroupsForUserResponseBodyGroups) };
    inline ListGroupsForUserResponseBody& setGroups(const ListGroupsForUserResponseBodyGroups & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListGroupsForUserResponseBody& setGroups(ListGroupsForUserResponseBodyGroups && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the RAM user groups.
    std::shared_ptr<ListGroupsForUserResponseBodyGroups> groups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
