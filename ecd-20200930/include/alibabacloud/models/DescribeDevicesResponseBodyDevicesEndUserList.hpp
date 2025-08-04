// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODYDEVICESENDUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODYDEVICESENDUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDevicesResponseBodyDevicesEndUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDevicesResponseBodyDevicesEndUserList& obj) { 
      DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDevicesResponseBodyDevicesEndUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    DescribeDevicesResponseBodyDevicesEndUserList() = default ;
    DescribeDevicesResponseBodyDevicesEndUserList(const DescribeDevicesResponseBodyDevicesEndUserList &) = default ;
    DescribeDevicesResponseBodyDevicesEndUserList(DescribeDevicesResponseBodyDevicesEndUserList &&) = default ;
    DescribeDevicesResponseBodyDevicesEndUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDevicesResponseBodyDevicesEndUserList() = default ;
    DescribeDevicesResponseBodyDevicesEndUserList& operator=(const DescribeDevicesResponseBodyDevicesEndUserList &) = default ;
    DescribeDevicesResponseBodyDevicesEndUserList& operator=(DescribeDevicesResponseBodyDevicesEndUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adDomain_ != nullptr
        && this->directoryId_ != nullptr && this->endUserId_ != nullptr && this->userType_ != nullptr; };
    // adDomain Field Functions 
    bool hasAdDomain() const { return this->adDomain_ != nullptr;};
    void deleteAdDomain() { this->adDomain_ = nullptr;};
    inline string adDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
    inline DescribeDevicesResponseBodyDevicesEndUserList& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeDevicesResponseBodyDevicesEndUserList& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeDevicesResponseBodyDevicesEndUserList& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline DescribeDevicesResponseBodyDevicesEndUserList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The address of the AD office network.
    std::shared_ptr<string> adDomain_ = nullptr;
    // The ID of the convenient office network.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The account type of the user.
    // 
    // Valid values:
    // 
    // *   AD: enterprise AD account.
    // *   SIMPLE: convenience account
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
