// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCENETEXPIRETIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCENETEXPIRETIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class ModifyInstanceNetExpireTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceNetExpireTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetInfoItems, netInfoItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceNetExpireTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetInfoItems, netInfoItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyInstanceNetExpireTimeResponseBody() = default ;
    ModifyInstanceNetExpireTimeResponseBody(const ModifyInstanceNetExpireTimeResponseBody &) = default ;
    ModifyInstanceNetExpireTimeResponseBody(ModifyInstanceNetExpireTimeResponseBody &&) = default ;
    ModifyInstanceNetExpireTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceNetExpireTimeResponseBody() = default ;
    ModifyInstanceNetExpireTimeResponseBody& operator=(const ModifyInstanceNetExpireTimeResponseBody &) = default ;
    ModifyInstanceNetExpireTimeResponseBody& operator=(ModifyInstanceNetExpireTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetInfoItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetInfoItems& obj) { 
        DARABONBA_PTR_TO_JSON(NetInfoItem, netInfoItem_);
      };
      friend void from_json(const Darabonba::Json& j, NetInfoItems& obj) { 
        DARABONBA_PTR_FROM_JSON(NetInfoItem, netInfoItem_);
      };
      NetInfoItems() = default ;
      NetInfoItems(const NetInfoItems &) = default ;
      NetInfoItems(NetInfoItems &&) = default ;
      NetInfoItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetInfoItems() = default ;
      NetInfoItems& operator=(const NetInfoItems &) = default ;
      NetInfoItems& operator=(NetInfoItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetInfoItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetInfoItem& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, NetInfoItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        NetInfoItem() = default ;
        NetInfoItem(const NetInfoItem &) = default ;
        NetInfoItem(NetInfoItem &&) = default ;
        NetInfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetInfoItem() = default ;
        NetInfoItem& operator=(const NetInfoItem &) = default ;
        NetInfoItem& operator=(NetInfoItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->DBInstanceNetType_ == nullptr && this->expiredTime_ == nullptr && this->IPAddress_ == nullptr && this->port_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline NetInfoItem& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // DBInstanceNetType Field Functions 
        bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
        void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
        inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
        inline NetInfoItem& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline NetInfoItem& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline NetInfoItem& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline NetInfoItem& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // The endpoint of the classic network.
        shared_ptr<string> connectionString_ {};
        // The network type of the instance. The returned value is **Classic**.
        shared_ptr<string> DBInstanceNetType_ {};
        // The expiration time of the classic network endpoint.
        shared_ptr<string> expiredTime_ {};
        // The IP address of the instance in the classic network.
        shared_ptr<string> IPAddress_ {};
        // The port number that is used to connect to the instance.
        shared_ptr<string> port_ {};
      };

      virtual bool empty() const override { return this->netInfoItem_ == nullptr; };
      // netInfoItem Field Functions 
      bool hasNetInfoItem() const { return this->netInfoItem_ != nullptr;};
      void deleteNetInfoItem() { this->netInfoItem_ = nullptr;};
      inline const vector<NetInfoItems::NetInfoItem> & getNetInfoItem() const { DARABONBA_PTR_GET_CONST(netInfoItem_, vector<NetInfoItems::NetInfoItem>) };
      inline vector<NetInfoItems::NetInfoItem> getNetInfoItem() { DARABONBA_PTR_GET(netInfoItem_, vector<NetInfoItems::NetInfoItem>) };
      inline NetInfoItems& setNetInfoItem(const vector<NetInfoItems::NetInfoItem> & netInfoItem) { DARABONBA_PTR_SET_VALUE(netInfoItem_, netInfoItem) };
      inline NetInfoItems& setNetInfoItem(vector<NetInfoItems::NetInfoItem> && netInfoItem) { DARABONBA_PTR_SET_RVALUE(netInfoItem_, netInfoItem) };


    protected:
      shared_ptr<vector<NetInfoItems::NetInfoItem>> netInfoItem_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->netInfoItems_ == nullptr && this->requestId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceNetExpireTimeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // netInfoItems Field Functions 
    bool hasNetInfoItems() const { return this->netInfoItems_ != nullptr;};
    void deleteNetInfoItems() { this->netInfoItems_ = nullptr;};
    inline const ModifyInstanceNetExpireTimeResponseBody::NetInfoItems & getNetInfoItems() const { DARABONBA_PTR_GET_CONST(netInfoItems_, ModifyInstanceNetExpireTimeResponseBody::NetInfoItems) };
    inline ModifyInstanceNetExpireTimeResponseBody::NetInfoItems getNetInfoItems() { DARABONBA_PTR_GET(netInfoItems_, ModifyInstanceNetExpireTimeResponseBody::NetInfoItems) };
    inline ModifyInstanceNetExpireTimeResponseBody& setNetInfoItems(const ModifyInstanceNetExpireTimeResponseBody::NetInfoItems & netInfoItems) { DARABONBA_PTR_SET_VALUE(netInfoItems_, netInfoItems) };
    inline ModifyInstanceNetExpireTimeResponseBody& setNetInfoItems(ModifyInstanceNetExpireTimeResponseBody::NetInfoItems && netInfoItems) { DARABONBA_PTR_SET_RVALUE(netInfoItems_, netInfoItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInstanceNetExpireTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // Details about the extension period for which the classic network endpoint of the instance is retained.
    shared_ptr<ModifyInstanceNetExpireTimeResponseBody::NetInfoItems> netInfoItems_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
