// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORUSERGROUPRESPONSEBODY_HPP_
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
  class ListHostAccountsForUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostAccountsForUserGroupResponseBody() = default ;
    ListHostAccountsForUserGroupResponseBody(const ListHostAccountsForUserGroupResponseBody &) = default ;
    ListHostAccountsForUserGroupResponseBody(ListHostAccountsForUserGroupResponseBody &&) = default ;
    ListHostAccountsForUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsForUserGroupResponseBody() = default ;
    ListHostAccountsForUserGroupResponseBody& operator=(const ListHostAccountsForUserGroupResponseBody &) = default ;
    ListHostAccountsForUserGroupResponseBody& operator=(ListHostAccountsForUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
        DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(IsAuthorized, isAuthorized_);
        DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      };
      friend void from_json(const Darabonba::Json& j, HostAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
        DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(IsAuthorized, isAuthorized_);
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
      virtual bool empty() const override { return this->hostAccountId_ == nullptr
        && this->hostAccountName_ == nullptr && this->hostId_ == nullptr && this->isAuthorized_ == nullptr && this->protocolName_ == nullptr; };
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


      // isAuthorized Field Functions 
      bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
      void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
      inline bool getIsAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, false) };
      inline HostAccounts& setIsAuthorized(bool isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline HostAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    protected:
      // The ID of the host account.
      shared_ptr<string> hostAccountId_ {};
      // The name of the host account.
      shared_ptr<string> hostAccountName_ {};
      // The ID of the host for which the host accounts were queried.
      shared_ptr<string> hostId_ {};
      // Indicates whether the user group is authorized to manage the host account. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> isAuthorized_ {};
      // The protocol that is used by the host. Valid values:
      // 
      // *   **SSH**
      // *   **RDP**
      shared_ptr<string> protocolName_ {};
    };

    virtual bool empty() const override { return this->hostAccounts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<ListHostAccountsForUserGroupResponseBody::HostAccounts> & getHostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<ListHostAccountsForUserGroupResponseBody::HostAccounts>) };
    inline vector<ListHostAccountsForUserGroupResponseBody::HostAccounts> getHostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<ListHostAccountsForUserGroupResponseBody::HostAccounts>) };
    inline ListHostAccountsForUserGroupResponseBody& setHostAccounts(const vector<ListHostAccountsForUserGroupResponseBody::HostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline ListHostAccountsForUserGroupResponseBody& setHostAccounts(vector<ListHostAccountsForUserGroupResponseBody::HostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostAccountsForUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHostAccountsForUserGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the queried host accounts.
    shared_ptr<vector<ListHostAccountsForUserGroupResponseBody::HostAccounts>> hostAccounts_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of host accounts that were queried.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
