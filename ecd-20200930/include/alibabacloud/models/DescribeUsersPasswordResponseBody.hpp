// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSPASSWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSPASSWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsersPasswordResponseBodyDesktopUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUsersPasswordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersPasswordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopUsers, desktopUsers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersPasswordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopUsers, desktopUsers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUsersPasswordResponseBody() = default ;
    DescribeUsersPasswordResponseBody(const DescribeUsersPasswordResponseBody &) = default ;
    DescribeUsersPasswordResponseBody(DescribeUsersPasswordResponseBody &&) = default ;
    DescribeUsersPasswordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersPasswordResponseBody() = default ;
    DescribeUsersPasswordResponseBody& operator=(const DescribeUsersPasswordResponseBody &) = default ;
    DescribeUsersPasswordResponseBody& operator=(DescribeUsersPasswordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopUsers_ == nullptr
        && return this->requestId_ == nullptr; };
    // desktopUsers Field Functions 
    bool hasDesktopUsers() const { return this->desktopUsers_ != nullptr;};
    void deleteDesktopUsers() { this->desktopUsers_ = nullptr;};
    inline const vector<DescribeUsersPasswordResponseBodyDesktopUsers> & desktopUsers() const { DARABONBA_PTR_GET_CONST(desktopUsers_, vector<DescribeUsersPasswordResponseBodyDesktopUsers>) };
    inline vector<DescribeUsersPasswordResponseBodyDesktopUsers> desktopUsers() { DARABONBA_PTR_GET(desktopUsers_, vector<DescribeUsersPasswordResponseBodyDesktopUsers>) };
    inline DescribeUsersPasswordResponseBody& setDesktopUsers(const vector<DescribeUsersPasswordResponseBodyDesktopUsers> & desktopUsers) { DARABONBA_PTR_SET_VALUE(desktopUsers_, desktopUsers) };
    inline DescribeUsersPasswordResponseBody& setDesktopUsers(vector<DescribeUsersPasswordResponseBodyDesktopUsers> && desktopUsers) { DARABONBA_PTR_SET_RVALUE(desktopUsers_, desktopUsers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsersPasswordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The authorized users of the cloud computer.
    std::shared_ptr<vector<DescribeUsersPasswordResponseBodyDesktopUsers>> desktopUsers_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
