// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSWITHPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSWITHPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeUsersWithPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersWithPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UIDs, UIDs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersWithPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UIDs, UIDs_);
    };
    DescribeUsersWithPermissionsResponseBody() = default ;
    DescribeUsersWithPermissionsResponseBody(const DescribeUsersWithPermissionsResponseBody &) = default ;
    DescribeUsersWithPermissionsResponseBody(DescribeUsersWithPermissionsResponseBody &&) = default ;
    DescribeUsersWithPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersWithPermissionsResponseBody() = default ;
    DescribeUsersWithPermissionsResponseBody& operator=(const DescribeUsersWithPermissionsResponseBody &) = default ;
    DescribeUsersWithPermissionsResponseBody& operator=(DescribeUsersWithPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->UIDs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsersWithPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // UIDs Field Functions 
    bool hasUIDs() const { return this->UIDs_ != nullptr;};
    void deleteUIDs() { this->UIDs_ = nullptr;};
    inline const vector<string> & UIDs() const { DARABONBA_PTR_GET_CONST(UIDs_, vector<string>) };
    inline vector<string> UIDs() { DARABONBA_PTR_GET(UIDs_, vector<string>) };
    inline DescribeUsersWithPermissionsResponseBody& setUIDs(const vector<string> & UIDs) { DARABONBA_PTR_SET_VALUE(UIDs_, UIDs) };
    inline DescribeUsersWithPermissionsResponseBody& setUIDs(vector<string> && UIDs) { DARABONBA_PTR_SET_RVALUE(UIDs_, UIDs) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of the IDs of the RAM users or RAM roles to which an RBAC role is assigned.
    std::shared_ptr<vector<string>> UIDs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
