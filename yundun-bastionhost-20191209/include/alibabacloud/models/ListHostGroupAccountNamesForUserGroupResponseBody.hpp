// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPACCOUNTNAMESFORUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPACCOUNTNAMESFORUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostGroupAccountNamesForUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupAccountNamesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountNames, hostAccountNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupAccountNamesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountNames, hostAccountNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHostGroupAccountNamesForUserGroupResponseBody() = default ;
    ListHostGroupAccountNamesForUserGroupResponseBody(const ListHostGroupAccountNamesForUserGroupResponseBody &) = default ;
    ListHostGroupAccountNamesForUserGroupResponseBody(ListHostGroupAccountNamesForUserGroupResponseBody &&) = default ;
    ListHostGroupAccountNamesForUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupAccountNamesForUserGroupResponseBody() = default ;
    ListHostGroupAccountNamesForUserGroupResponseBody& operator=(const ListHostGroupAccountNamesForUserGroupResponseBody &) = default ;
    ListHostGroupAccountNamesForUserGroupResponseBody& operator=(ListHostGroupAccountNamesForUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostAccountNames_ != nullptr
        && this->requestId_ != nullptr; };
    // hostAccountNames Field Functions 
    bool hasHostAccountNames() const { return this->hostAccountNames_ != nullptr;};
    void deleteHostAccountNames() { this->hostAccountNames_ = nullptr;};
    inline const vector<string> & hostAccountNames() const { DARABONBA_PTR_GET_CONST(hostAccountNames_, vector<string>) };
    inline vector<string> hostAccountNames() { DARABONBA_PTR_GET(hostAccountNames_, vector<string>) };
    inline ListHostGroupAccountNamesForUserGroupResponseBody& setHostAccountNames(const vector<string> & hostAccountNames) { DARABONBA_PTR_SET_VALUE(hostAccountNames_, hostAccountNames) };
    inline ListHostGroupAccountNamesForUserGroupResponseBody& setHostAccountNames(vector<string> && hostAccountNames) { DARABONBA_PTR_SET_RVALUE(hostAccountNames_, hostAccountNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostGroupAccountNamesForUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The names of host accounts returned.
    std::shared_ptr<vector<string>> hostAccountNames_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
