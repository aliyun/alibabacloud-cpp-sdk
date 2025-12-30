// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSPASSWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSPASSWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DesktopUsers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesktopUsers& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(Password, password_);
      };
      friend void from_json(const Darabonba::Json& j, DesktopUsers& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
      };
      DesktopUsers() = default ;
      DesktopUsers(const DesktopUsers &) = default ;
      DesktopUsers(DesktopUsers &&) = default ;
      DesktopUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesktopUsers() = default ;
      DesktopUsers& operator=(const DesktopUsers &) = default ;
      DesktopUsers& operator=(DesktopUsers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->endUserId_ == nullptr && this->password_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline DesktopUsers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline DesktopUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline DesktopUsers& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    protected:
      // The display name of the end user.
      shared_ptr<string> displayName_ {};
      // The ID of the end user.
      shared_ptr<string> endUserId_ {};
      // The password of the end user.
      shared_ptr<string> password_ {};
    };

    virtual bool empty() const override { return this->desktopUsers_ == nullptr
        && this->requestId_ == nullptr; };
    // desktopUsers Field Functions 
    bool hasDesktopUsers() const { return this->desktopUsers_ != nullptr;};
    void deleteDesktopUsers() { this->desktopUsers_ = nullptr;};
    inline const vector<DescribeUsersPasswordResponseBody::DesktopUsers> & getDesktopUsers() const { DARABONBA_PTR_GET_CONST(desktopUsers_, vector<DescribeUsersPasswordResponseBody::DesktopUsers>) };
    inline vector<DescribeUsersPasswordResponseBody::DesktopUsers> getDesktopUsers() { DARABONBA_PTR_GET(desktopUsers_, vector<DescribeUsersPasswordResponseBody::DesktopUsers>) };
    inline DescribeUsersPasswordResponseBody& setDesktopUsers(const vector<DescribeUsersPasswordResponseBody::DesktopUsers> & desktopUsers) { DARABONBA_PTR_SET_VALUE(desktopUsers_, desktopUsers) };
    inline DescribeUsersPasswordResponseBody& setDesktopUsers(vector<DescribeUsersPasswordResponseBody::DesktopUsers> && desktopUsers) { DARABONBA_PTR_SET_RVALUE(desktopUsers_, desktopUsers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsersPasswordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The authorized users of the cloud computer.
    shared_ptr<vector<DescribeUsersPasswordResponseBody::DesktopUsers>> desktopUsers_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
