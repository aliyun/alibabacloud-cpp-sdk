// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORHOSTSHAREKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORHOSTSHAREKEYRESPONSEBODY_HPP_
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
  class ListHostAccountsForHostShareKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsForHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsForHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostAccountsForHostShareKeyResponseBody() = default ;
    ListHostAccountsForHostShareKeyResponseBody(const ListHostAccountsForHostShareKeyResponseBody &) = default ;
    ListHostAccountsForHostShareKeyResponseBody(ListHostAccountsForHostShareKeyResponseBody &&) = default ;
    ListHostAccountsForHostShareKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsForHostShareKeyResponseBody() = default ;
    ListHostAccountsForHostShareKeyResponseBody& operator=(const ListHostAccountsForHostShareKeyResponseBody &) = default ;
    ListHostAccountsForHostShareKeyResponseBody& operator=(ListHostAccountsForHostShareKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(HostsAccountId, hostsAccountId_);
        DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      };
      friend void from_json(const Darabonba::Json& j, HostAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(HostsAccountId, hostsAccountId_);
        DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
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
      virtual bool empty() const override { return this->hostAccountName_ == nullptr
        && this->hostId_ == nullptr && this->hostsAccountId_ == nullptr && this->protocolName_ == nullptr; };
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


      // hostsAccountId Field Functions 
      bool hasHostsAccountId() const { return this->hostsAccountId_ != nullptr;};
      void deleteHostsAccountId() { this->hostsAccountId_ = nullptr;};
      inline string getHostsAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostsAccountId_, "") };
      inline HostAccounts& setHostsAccountId(string hostsAccountId) { DARABONBA_PTR_SET_VALUE(hostsAccountId_, hostsAccountId) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline HostAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    protected:
      // The name of the host account.
      shared_ptr<string> hostAccountName_ {};
      // The ID of the host.
      shared_ptr<string> hostId_ {};
      // The ID of the host account.
      shared_ptr<string> hostsAccountId_ {};
      // The O\\&M protocol.
      shared_ptr<string> protocolName_ {};
    };

    virtual bool empty() const override { return this->hostAccounts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<ListHostAccountsForHostShareKeyResponseBody::HostAccounts> & getHostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<ListHostAccountsForHostShareKeyResponseBody::HostAccounts>) };
    inline vector<ListHostAccountsForHostShareKeyResponseBody::HostAccounts> getHostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<ListHostAccountsForHostShareKeyResponseBody::HostAccounts>) };
    inline ListHostAccountsForHostShareKeyResponseBody& setHostAccounts(const vector<ListHostAccountsForHostShareKeyResponseBody::HostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline ListHostAccountsForHostShareKeyResponseBody& setHostAccounts(vector<ListHostAccountsForHostShareKeyResponseBody::HostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostAccountsForHostShareKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListHostAccountsForHostShareKeyResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the host accounts that are associated with the shared key.
    shared_ptr<vector<ListHostAccountsForHostShareKeyResponseBody::HostAccounts>> hostAccounts_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of the host accounts that are associated with the shared key.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
