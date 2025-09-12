// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEENGINELISTRESPONSEBODYENGINELISTNETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEENGINELISTRESPONSEBODYENGINELISTNETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList() = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList(const GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList &) = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList(GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList &&) = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList() = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList& operator=(const GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList &) = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList& operator=(GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList &&) = default ;
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
    inline GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList& setAccessType(int32_t accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<int32_t> accessType_ = nullptr;
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
