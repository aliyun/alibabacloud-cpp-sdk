// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTSFORUSERRESPONSEBODYHOSTS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTSFORUSERRESPONSEBODYHOSTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostsForUserResponseBodyHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostsForUserResponseBodyHosts& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostPrivateAddress, hostPrivateAddress_);
      DARABONBA_PTR_TO_JSON(HostPublicAddress, hostPublicAddress_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostsForUserResponseBodyHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostPrivateAddress, hostPrivateAddress_);
      DARABONBA_PTR_FROM_JSON(HostPublicAddress, hostPublicAddress_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
    };
    ListHostsForUserResponseBodyHosts() = default ;
    ListHostsForUserResponseBodyHosts(const ListHostsForUserResponseBodyHosts &) = default ;
    ListHostsForUserResponseBodyHosts(ListHostsForUserResponseBodyHosts &&) = default ;
    ListHostsForUserResponseBodyHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostsForUserResponseBodyHosts() = default ;
    ListHostsForUserResponseBodyHosts& operator=(const ListHostsForUserResponseBodyHosts &) = default ;
    ListHostsForUserResponseBodyHosts& operator=(ListHostsForUserResponseBodyHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeAddressType_ != nullptr
        && this->comment_ != nullptr && this->hostId_ != nullptr && this->hostName_ != nullptr && this->hostPrivateAddress_ != nullptr && this->hostPublicAddress_ != nullptr
        && this->OSType_ != nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string activeAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline ListHostsForUserResponseBodyHosts& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListHostsForUserResponseBodyHosts& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ListHostsForUserResponseBodyHosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ListHostsForUserResponseBodyHosts& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostPrivateAddress Field Functions 
    bool hasHostPrivateAddress() const { return this->hostPrivateAddress_ != nullptr;};
    void deleteHostPrivateAddress() { this->hostPrivateAddress_ = nullptr;};
    inline string hostPrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPrivateAddress_, "") };
    inline ListHostsForUserResponseBodyHosts& setHostPrivateAddress(string hostPrivateAddress) { DARABONBA_PTR_SET_VALUE(hostPrivateAddress_, hostPrivateAddress) };


    // hostPublicAddress Field Functions 
    bool hasHostPublicAddress() const { return this->hostPublicAddress_ != nullptr;};
    void deleteHostPublicAddress() { this->hostPublicAddress_ = nullptr;};
    inline string hostPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPublicAddress_, "") };
    inline ListHostsForUserResponseBodyHosts& setHostPublicAddress(string hostPublicAddress) { DARABONBA_PTR_SET_VALUE(hostPublicAddress_, hostPublicAddress) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline ListHostsForUserResponseBodyHosts& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


  protected:
    // The endpoint type of the host. Valid values:
    // 
    // *   **Public**: public endpoint
    // *   **Private**: internal endpoint
    std::shared_ptr<string> activeAddressType_ = nullptr;
    // The description of the host.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The name of the host.
    std::shared_ptr<string> hostName_ = nullptr;
    // The internal endpoint of the host. The value is a domain name or an IP address.
    std::shared_ptr<string> hostPrivateAddress_ = nullptr;
    // The public endpoint of the host. The value is a domain name or an IP address.
    std::shared_ptr<string> hostPublicAddress_ = nullptr;
    // The operating system of the host. Valid values:
    // 
    // *   **Linux**
    // *   **Windows**
    std::shared_ptr<string> OSType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
