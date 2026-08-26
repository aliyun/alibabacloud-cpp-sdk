// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBBranchEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBBranchEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBBranchEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAgenticDBBranchEndpointsResponseBody() = default ;
    DescribeAgenticDBBranchEndpointsResponseBody(const DescribeAgenticDBBranchEndpointsResponseBody &) = default ;
    DescribeAgenticDBBranchEndpointsResponseBody(DescribeAgenticDBBranchEndpointsResponseBody &&) = default ;
    DescribeAgenticDBBranchEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBBranchEndpointsResponseBody() = default ;
    DescribeAgenticDBBranchEndpointsResponseBody& operator=(const DescribeAgenticDBBranchEndpointsResponseBody &) = default ;
    DescribeAgenticDBBranchEndpointsResponseBody& operator=(DescribeAgenticDBBranchEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddressItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressItems& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, AddressItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        AddressItems() = default ;
        AddressItems(const AddressItems &) = default ;
        AddressItems(AddressItems &&) = default ;
        AddressItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddressItems() = default ;
        AddressItems& operator=(const AddressItems &) = default ;
        AddressItems& operator=(AddressItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->connectionString_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline AddressItems& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline AddressItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline AddressItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline AddressItems& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // The endpoint.
        shared_ptr<string> address_ {};
        // The full PostgreSQL connection string.
        shared_ptr<string> connectionString_ {};
        // The network type. Valid values: Private and Public.
        shared_ptr<string> netType_ {};
        // The port.
        shared_ptr<int32_t> port_ {};
      };

      virtual bool empty() const override { return this->account_ == nullptr
        && this->address_ == nullptr && this->addressItems_ == nullptr && this->connectionString_ == nullptr && this->database_ == nullptr && this->endpointId_ == nullptr
        && this->endpointType_ == nullptr && this->password_ == nullptr && this->port_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline Items& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Items& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // addressItems Field Functions 
      bool hasAddressItems() const { return this->addressItems_ != nullptr;};
      void deleteAddressItems() { this->addressItems_ = nullptr;};
      inline const vector<Items::AddressItems> & getAddressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, vector<Items::AddressItems>) };
      inline vector<Items::AddressItems> getAddressItems() { DARABONBA_PTR_GET(addressItems_, vector<Items::AddressItems>) };
      inline Items& setAddressItems(const vector<Items::AddressItems> & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
      inline Items& setAddressItems(vector<Items::AddressItems> && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline Items& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Items& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Items& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Items& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Items& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Items& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The account name.
      shared_ptr<string> account_ {};
      // The compatible connection address. The public endpoint is returned first. If no public endpoint is available, the private endpoint is returned.
      shared_ptr<string> address_ {};
      // The list of public and private network endpoints.
      shared_ptr<vector<Items::AddressItems>> addressItems_ {};
      // The compatible connection string. The public connection string is returned first. If no public connection string is available, the private connection string is returned.
      shared_ptr<string> connectionString_ {};
      // The database name.
      shared_ptr<string> database_ {};
      // The endpoint ID.
      shared_ptr<string> endpointId_ {};
      // The endpoint type.
      shared_ptr<string> endpointType_ {};
      // The password.
      shared_ptr<string> password_ {};
      // The compatible connection port that corresponds to the Address parameter.
      shared_ptr<int32_t> port_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAgenticDBBranchEndpointsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAgenticDBBranchEndpointsResponseBody::Items>) };
    inline vector<DescribeAgenticDBBranchEndpointsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAgenticDBBranchEndpointsResponseBody::Items>) };
    inline DescribeAgenticDBBranchEndpointsResponseBody& setItems(const vector<DescribeAgenticDBBranchEndpointsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAgenticDBBranchEndpointsResponseBody& setItems(vector<DescribeAgenticDBBranchEndpointsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticDBBranchEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of endpoints.
    shared_ptr<vector<DescribeAgenticDBBranchEndpointsResponseBody::Items>> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
