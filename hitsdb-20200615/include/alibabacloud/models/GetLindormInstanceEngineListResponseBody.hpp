// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCEENGINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCEENGINELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceEngineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceEngineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(EngineList, engineList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceEngineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(EngineList, engineList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLindormInstanceEngineListResponseBody() = default ;
    GetLindormInstanceEngineListResponseBody(const GetLindormInstanceEngineListResponseBody &) = default ;
    GetLindormInstanceEngineListResponseBody(GetLindormInstanceEngineListResponseBody &&) = default ;
    GetLindormInstanceEngineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceEngineListResponseBody() = default ;
    GetLindormInstanceEngineListResponseBody& operator=(const GetLindormInstanceEngineListResponseBody &) = default ;
    GetLindormInstanceEngineListResponseBody& operator=(GetLindormInstanceEngineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EngineList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EngineList& obj) { 
        DARABONBA_PTR_TO_JSON(EngineType, engineType_);
        DARABONBA_PTR_TO_JSON(NetInfoList, netInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, EngineList& obj) { 
        DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
        DARABONBA_PTR_FROM_JSON(NetInfoList, netInfoList_);
      };
      EngineList() = default ;
      EngineList(const EngineList &) = default ;
      EngineList(EngineList &&) = default ;
      EngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EngineList() = default ;
      EngineList& operator=(const EngineList &) = default ;
      EngineList& operator=(EngineList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AccessType, accessType_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, NetInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        NetInfoList() = default ;
        NetInfoList(const NetInfoList &) = default ;
        NetInfoList(NetInfoList &&) = default ;
        NetInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetInfoList() = default ;
        NetInfoList& operator=(const NetInfoList &) = default ;
        NetInfoList& operator=(NetInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessType_ == nullptr
        && this->connectionString_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr; };
        // accessType Field Functions 
        bool hasAccessType() const { return this->accessType_ != nullptr;};
        void deleteAccessType() { this->accessType_ = nullptr;};
        inline int32_t getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, 0) };
        inline NetInfoList& setAccessType(int32_t accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline NetInfoList& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline NetInfoList& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline NetInfoList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // The connection method for LindormTable. Valid values:
        // 
        // - **0**: This is the default value and can be ignored.
        // 
        // - **1**: Use the HBase Java API to access LindormTable.
        // 
        // - **2**: Use a non-Java HBase API to access LindormTable.
        // 
        // - **3**: Use CQL to access LindormTable.
        // 
        // - **4**: Use the LindormTable SQL endpoint.
        // 
        // - **5**: Use the S3-compatible endpoint for LindormTable.
        // 
        // - **6**: Use the MySQL-compatible endpoint for LindormTable.
        shared_ptr<int32_t> accessType_ {};
        // The database endpoint.
        shared_ptr<string> connectionString_ {};
        // The network type of the database endpoint. Valid values:
        // 
        // - **0**: Internet.
        // 
        // - **2**: Virtual private cloud (VPC).
        shared_ptr<string> netType_ {};
        // The port number of the database endpoint.
        shared_ptr<int32_t> port_ {};
      };

      virtual bool empty() const override { return this->engineType_ == nullptr
        && this->netInfoList_ == nullptr; };
      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline EngineList& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // netInfoList Field Functions 
      bool hasNetInfoList() const { return this->netInfoList_ != nullptr;};
      void deleteNetInfoList() { this->netInfoList_ = nullptr;};
      inline const vector<EngineList::NetInfoList> & getNetInfoList() const { DARABONBA_PTR_GET_CONST(netInfoList_, vector<EngineList::NetInfoList>) };
      inline vector<EngineList::NetInfoList> getNetInfoList() { DARABONBA_PTR_GET(netInfoList_, vector<EngineList::NetInfoList>) };
      inline EngineList& setNetInfoList(const vector<EngineList::NetInfoList> & netInfoList) { DARABONBA_PTR_SET_VALUE(netInfoList_, netInfoList) };
      inline EngineList& setNetInfoList(vector<EngineList::NetInfoList> && netInfoList) { DARABONBA_PTR_SET_RVALUE(netInfoList_, netInfoList) };


    protected:
      // The engine type. Valid values:
      // 
      // - **lindorm**: LindormTable.
      // 
      // - **tsdb**: LindormTSDB.
      // 
      // - **solr**: Search engine.
      // 
      // - **store**: File engine.
      shared_ptr<string> engineType_ {};
      // The list of database connection information for the engine.
      shared_ptr<vector<EngineList::NetInfoList>> netInfoList_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->engineList_ == nullptr && this->instanceId_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormInstanceEngineListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<GetLindormInstanceEngineListResponseBody::EngineList> & getEngineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<GetLindormInstanceEngineListResponseBody::EngineList>) };
    inline vector<GetLindormInstanceEngineListResponseBody::EngineList> getEngineList() { DARABONBA_PTR_GET(engineList_, vector<GetLindormInstanceEngineListResponseBody::EngineList>) };
    inline GetLindormInstanceEngineListResponseBody& setEngineList(const vector<GetLindormInstanceEngineListResponseBody::EngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline GetLindormInstanceEngineListResponseBody& setEngineList(vector<GetLindormInstanceEngineListResponseBody::EngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormInstanceEngineListResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormInstanceEngineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed reason why the access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // The list of engine types.
    shared_ptr<vector<GetLindormInstanceEngineListResponseBody::EngineList>> engineList_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
