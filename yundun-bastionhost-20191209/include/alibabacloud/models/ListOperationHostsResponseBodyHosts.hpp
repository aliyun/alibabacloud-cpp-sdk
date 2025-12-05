// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONHOSTSRESPONSEBODYHOSTS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONHOSTSRESPONSEBODYHOSTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationHostsResponseBodyHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationHostsResponseBodyHosts& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostPrivateAddress, hostPrivateAddress_);
      DARABONBA_PTR_TO_JSON(HostPublicAddress, hostPublicAddress_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceState, sourceInstanceState_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationHostsResponseBodyHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostPrivateAddress, hostPrivateAddress_);
      DARABONBA_PTR_FROM_JSON(HostPublicAddress, hostPublicAddress_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceState, sourceInstanceState_);
    };
    ListOperationHostsResponseBodyHosts() = default ;
    ListOperationHostsResponseBodyHosts(const ListOperationHostsResponseBodyHosts &) = default ;
    ListOperationHostsResponseBodyHosts(ListOperationHostsResponseBodyHosts &&) = default ;
    ListOperationHostsResponseBodyHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationHostsResponseBodyHosts() = default ;
    ListOperationHostsResponseBodyHosts& operator=(const ListOperationHostsResponseBodyHosts &) = default ;
    ListOperationHostsResponseBodyHosts& operator=(ListOperationHostsResponseBodyHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && return this->comment_ == nullptr && return this->hostId_ == nullptr && return this->hostName_ == nullptr && return this->hostPrivateAddress_ == nullptr && return this->hostPublicAddress_ == nullptr
        && return this->OSType_ == nullptr && return this->source_ == nullptr && return this->sourceInstanceId_ == nullptr && return this->sourceInstanceState_ == nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string activeAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline ListOperationHostsResponseBodyHosts& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListOperationHostsResponseBodyHosts& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ListOperationHostsResponseBodyHosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ListOperationHostsResponseBodyHosts& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostPrivateAddress Field Functions 
    bool hasHostPrivateAddress() const { return this->hostPrivateAddress_ != nullptr;};
    void deleteHostPrivateAddress() { this->hostPrivateAddress_ = nullptr;};
    inline string hostPrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPrivateAddress_, "") };
    inline ListOperationHostsResponseBodyHosts& setHostPrivateAddress(string hostPrivateAddress) { DARABONBA_PTR_SET_VALUE(hostPrivateAddress_, hostPrivateAddress) };


    // hostPublicAddress Field Functions 
    bool hasHostPublicAddress() const { return this->hostPublicAddress_ != nullptr;};
    void deleteHostPublicAddress() { this->hostPublicAddress_ = nullptr;};
    inline string hostPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPublicAddress_, "") };
    inline ListOperationHostsResponseBodyHosts& setHostPublicAddress(string hostPublicAddress) { DARABONBA_PTR_SET_VALUE(hostPublicAddress_, hostPublicAddress) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline ListOperationHostsResponseBodyHosts& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListOperationHostsResponseBodyHosts& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ListOperationHostsResponseBodyHosts& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceInstanceState Field Functions 
    bool hasSourceInstanceState() const { return this->sourceInstanceState_ != nullptr;};
    void deleteSourceInstanceState() { this->sourceInstanceState_ = nullptr;};
    inline string sourceInstanceState() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceState_, "") };
    inline ListOperationHostsResponseBodyHosts& setSourceInstanceState(string sourceInstanceState) { DARABONBA_PTR_SET_VALUE(sourceInstanceState_, sourceInstanceState) };


  protected:
    // The address type of the host. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    std::shared_ptr<string> activeAddressType_ = nullptr;
    // The remarks of the host.
    std::shared_ptr<string> comment_ = nullptr;
    // The host ID.
    std::shared_ptr<string> hostId_ = nullptr;
    // The host name.
    std::shared_ptr<string> hostName_ = nullptr;
    // The private IP address of the host.
    std::shared_ptr<string> hostPrivateAddress_ = nullptr;
    // The public IP address of the host.
    std::shared_ptr<string> hostPublicAddress_ = nullptr;
    // The host OS.
    // 
    // *   **Linux**
    // *   **Windows**
    std::shared_ptr<string> OSType_ = nullptr;
    // The host type. Valid values:
    // 
    // *   **Local**: on-premises host.
    // *   **Ecs**: Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> source_ = nullptr;
    // The ECS instance ID.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
    // The host status. Valid values:
    // 
    // *   **Normal**
    // *   **Release**
    std::shared_ptr<string> sourceInstanceState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
