// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSPASSWORDRESPONSEBODYDESKTOPUSERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSPASSWORDRESPONSEBODYDESKTOPUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUsersPasswordResponseBodyDesktopUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersPasswordResponseBodyDesktopUsers& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersPasswordResponseBodyDesktopUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    DescribeUsersPasswordResponseBodyDesktopUsers() = default ;
    DescribeUsersPasswordResponseBodyDesktopUsers(const DescribeUsersPasswordResponseBodyDesktopUsers &) = default ;
    DescribeUsersPasswordResponseBodyDesktopUsers(DescribeUsersPasswordResponseBodyDesktopUsers &&) = default ;
    DescribeUsersPasswordResponseBodyDesktopUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersPasswordResponseBodyDesktopUsers() = default ;
    DescribeUsersPasswordResponseBodyDesktopUsers& operator=(const DescribeUsersPasswordResponseBodyDesktopUsers &) = default ;
    DescribeUsersPasswordResponseBodyDesktopUsers& operator=(DescribeUsersPasswordResponseBodyDesktopUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->endUserId_ != nullptr && this->password_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeUsersPasswordResponseBodyDesktopUsers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeUsersPasswordResponseBodyDesktopUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeUsersPasswordResponseBodyDesktopUsers& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The display name of the end user.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the end user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The password of the end user.
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
