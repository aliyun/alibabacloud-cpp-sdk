// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCEENGINELISTRESPONSEBODYENGINELISTNETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCEENGINELISTRESPONSEBODYENGINELISTNETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceEngineListResponseBodyEngineListNetInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceEngineListResponseBodyEngineListNetInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceEngineListResponseBodyEngineListNetInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    GetLindormInstanceEngineListResponseBodyEngineListNetInfoList() = default ;
    GetLindormInstanceEngineListResponseBodyEngineListNetInfoList(const GetLindormInstanceEngineListResponseBodyEngineListNetInfoList &) = default ;
    GetLindormInstanceEngineListResponseBodyEngineListNetInfoList(GetLindormInstanceEngineListResponseBodyEngineListNetInfoList &&) = default ;
    GetLindormInstanceEngineListResponseBodyEngineListNetInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceEngineListResponseBodyEngineListNetInfoList() = default ;
    GetLindormInstanceEngineListResponseBodyEngineListNetInfoList& operator=(const GetLindormInstanceEngineListResponseBodyEngineListNetInfoList &) = default ;
    GetLindormInstanceEngineListResponseBodyEngineListNetInfoList& operator=(GetLindormInstanceEngineListResponseBodyEngineListNetInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->connectionString_ != nullptr && this->netType_ != nullptr && this->port_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline int32_t accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, 0) };
    inline GetLindormInstanceEngineListResponseBodyEngineListNetInfoList& setAccessType(int32_t accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline GetLindormInstanceEngineListResponseBodyEngineListNetInfoList& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline GetLindormInstanceEngineListResponseBodyEngineListNetInfoList& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetLindormInstanceEngineListResponseBodyEngineListNetInfoList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The method by which the connection information can be used to access LindormTable. Valid values:
    // 
    // *   **0**: The default value. This value can be ignored.
    // *   **1**: The connection information can be used to access LindormTable by using ApsaraDB for HBase API for Java.
    // *   **2**: The connection information can be used to access LindormTable by using ApsaraDB for HBase API for a non-Java language.
    // *   **3**: The connection information can be used to access LindormTable by using the LindormTable endpoint for CQL.
    // *   **4**: The connection information can be used to access LindormTable by using the LindormTable endpoint for SQL.
    // *   **5**: The connection information can be used to access Lindorm by using the LindormTable endpoint for Amazon S3.
    // *   **6**: The connection information can be used to access Lindorm by using the LindormTable endpoint for MySQL.
    std::shared_ptr<int32_t> accessType_ = nullptr;
    // The endpoint that is used to connect to the engine.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The network type of the endpoint. Valid values:
    // 
    // *   **0**: Internet
    // *   **2**: virtual private cloud (VPC)
    std::shared_ptr<string> netType_ = nullptr;
    // The port number used to connect to the engine.
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
