// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONHOSTACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONHOSTACCOUNTSRESPONSEBODY_HPP_
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
  class ListOperationHostAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationHostAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationHostAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOperationHostAccountsResponseBody() = default ;
    ListOperationHostAccountsResponseBody(const ListOperationHostAccountsResponseBody &) = default ;
    ListOperationHostAccountsResponseBody(ListOperationHostAccountsResponseBody &&) = default ;
    ListOperationHostAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationHostAccountsResponseBody() = default ;
    ListOperationHostAccountsResponseBody& operator=(const ListOperationHostAccountsResponseBody &) = default ;
    ListOperationHostAccountsResponseBody& operator=(ListOperationHostAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
        DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
        DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
        DARABONBA_PTR_TO_JSON(PrivateKeyFingerprint, privateKeyFingerprint_);
        DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
        DARABONBA_PTR_TO_JSON(SSHConfig, SSHConfig_);
      };
      friend void from_json(const Darabonba::Json& j, HostAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
        DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
        DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
        DARABONBA_PTR_FROM_JSON(PrivateKeyFingerprint, privateKeyFingerprint_);
        DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
        DARABONBA_PTR_FROM_JSON(SSHConfig, SSHConfig_);
      };
      HostAccounts() = default ;
      HostAccounts(const HostAccounts &) = default ;
      HostAccounts(HostAccounts &&) = default ;
      HostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostAccounts() = default ;
      HostAccounts& operator=(const HostAccounts &) = default ;
      HostAccounts& operator=(HostAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SSHConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SSHConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EnableSFTPChannel, enableSFTPChannel_);
          DARABONBA_PTR_TO_JSON(EnableSSHChannel, enableSSHChannel_);
        };
        friend void from_json(const Darabonba::Json& j, SSHConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EnableSFTPChannel, enableSFTPChannel_);
          DARABONBA_PTR_FROM_JSON(EnableSSHChannel, enableSSHChannel_);
        };
        SSHConfig() = default ;
        SSHConfig(const SSHConfig &) = default ;
        SSHConfig(SSHConfig &&) = default ;
        SSHConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SSHConfig() = default ;
        SSHConfig& operator=(const SSHConfig &) = default ;
        SSHConfig& operator=(SSHConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableSFTPChannel_ == nullptr
        && this->enableSSHChannel_ == nullptr; };
        // enableSFTPChannel Field Functions 
        bool hasEnableSFTPChannel() const { return this->enableSFTPChannel_ != nullptr;};
        void deleteEnableSFTPChannel() { this->enableSFTPChannel_ = nullptr;};
        inline bool getEnableSFTPChannel() const { DARABONBA_PTR_GET_DEFAULT(enableSFTPChannel_, false) };
        inline SSHConfig& setEnableSFTPChannel(bool enableSFTPChannel) { DARABONBA_PTR_SET_VALUE(enableSFTPChannel_, enableSFTPChannel) };


        // enableSSHChannel Field Functions 
        bool hasEnableSSHChannel() const { return this->enableSSHChannel_ != nullptr;};
        void deleteEnableSSHChannel() { this->enableSSHChannel_ = nullptr;};
        inline bool getEnableSSHChannel() const { DARABONBA_PTR_GET_DEFAULT(enableSSHChannel_, false) };
        inline SSHConfig& setEnableSSHChannel(bool enableSSHChannel) { DARABONBA_PTR_SET_VALUE(enableSSHChannel_, enableSSHChannel) };


      protected:
        // Indicates whether SFTP channels are enabled for the account.
        shared_ptr<bool> enableSFTPChannel_ {};
        // Indicates whether SSH channels are enabled for the account.
        shared_ptr<bool> enableSSHChannel_ {};
      };

      virtual bool empty() const override { return this->hasPassword_ == nullptr
        && this->hostAccountId_ == nullptr && this->hostAccountName_ == nullptr && this->hostId_ == nullptr && this->hostShareKeyId_ == nullptr && this->privateKeyFingerprint_ == nullptr
        && this->protocolName_ == nullptr && this->SSHConfig_ == nullptr; };
      // hasPassword Field Functions 
      bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
      void deleteHasPassword() { this->hasPassword_ = nullptr;};
      inline bool getHasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
      inline HostAccounts& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


      // hostAccountId Field Functions 
      bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
      void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
      inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
      inline HostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


      // hostAccountName Field Functions 
      bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
      void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
      inline string getHostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
      inline HostAccounts& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline HostAccounts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // hostShareKeyId Field Functions 
      bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
      void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
      inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
      inline HostAccounts& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


      // privateKeyFingerprint Field Functions 
      bool hasPrivateKeyFingerprint() const { return this->privateKeyFingerprint_ != nullptr;};
      void deletePrivateKeyFingerprint() { this->privateKeyFingerprint_ = nullptr;};
      inline string getPrivateKeyFingerprint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerprint_, "") };
      inline HostAccounts& setPrivateKeyFingerprint(string privateKeyFingerprint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerprint_, privateKeyFingerprint) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline HostAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


      // SSHConfig Field Functions 
      bool hasSSHConfig() const { return this->SSHConfig_ != nullptr;};
      void deleteSSHConfig() { this->SSHConfig_ = nullptr;};
      inline const HostAccounts::SSHConfig & getSSHConfig() const { DARABONBA_PTR_GET_CONST(SSHConfig_, HostAccounts::SSHConfig) };
      inline HostAccounts::SSHConfig getSSHConfig() { DARABONBA_PTR_GET(SSHConfig_, HostAccounts::SSHConfig) };
      inline HostAccounts& setSSHConfig(const HostAccounts::SSHConfig & sSHConfig) { DARABONBA_PTR_SET_VALUE(SSHConfig_, sSHConfig) };
      inline HostAccounts& setSSHConfig(HostAccounts::SSHConfig && sSHConfig) { DARABONBA_PTR_SET_RVALUE(SSHConfig_, sSHConfig) };


    protected:
      // Indicates whether a password is configured for the host account.
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasPassword_ {};
      // The host account ID.
      shared_ptr<string> hostAccountId_ {};
      // The host account name.
      shared_ptr<string> hostAccountName_ {};
      // The host ID.
      shared_ptr<string> hostId_ {};
      // The ID of the shared key that is associated with the host.
      shared_ptr<string> hostShareKeyId_ {};
      // The fingerprint of the private key for the host account.
      shared_ptr<string> privateKeyFingerprint_ {};
      // The protocol that is used by the host account.
      // 
      // *   **SSH**
      // *   **RDP**
      shared_ptr<string> protocolName_ {};
      // Indicates whether the Secure File Transfer Protocol (SFTP) channels or the SSH channels are enabled for the host account that uses the SSH protocol.
      shared_ptr<HostAccounts::SSHConfig> SSHConfig_ {};
    };

    virtual bool empty() const override { return this->hostAccounts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<ListOperationHostAccountsResponseBody::HostAccounts> & getHostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<ListOperationHostAccountsResponseBody::HostAccounts>) };
    inline vector<ListOperationHostAccountsResponseBody::HostAccounts> getHostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<ListOperationHostAccountsResponseBody::HostAccounts>) };
    inline ListOperationHostAccountsResponseBody& setHostAccounts(const vector<ListOperationHostAccountsResponseBody::HostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline ListOperationHostAccountsResponseBody& setHostAccounts(vector<ListOperationHostAccountsResponseBody::HostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationHostAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOperationHostAccountsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The host accounts returned.
    shared_ptr<vector<ListOperationHostAccountsResponseBody::HostAccounts>> hostAccounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of host accounts returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
