// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYSERVICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYSERVICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteGatewayServiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayServiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayServiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DeleteGatewayServiceResponseBodyData() = default ;
    DeleteGatewayServiceResponseBodyData(const DeleteGatewayServiceResponseBodyData &) = default ;
    DeleteGatewayServiceResponseBodyData(DeleteGatewayServiceResponseBodyData &&) = default ;
    DeleteGatewayServiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayServiceResponseBodyData() = default ;
    DeleteGatewayServiceResponseBodyData& operator=(const DeleteGatewayServiceResponseBodyData &) = default ;
    DeleteGatewayServiceResponseBodyData& operator=(DeleteGatewayServiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->groupName_ == nullptr && return this->id_ == nullptr
        && return this->ips_ == nullptr && return this->metaInfo_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->serviceNameInRegistry_ == nullptr
        && return this->sourceId_ == nullptr && return this->sourceType_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline DeleteGatewayServiceResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline DeleteGatewayServiceResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DeleteGatewayServiceResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DeleteGatewayServiceResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DeleteGatewayServiceResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteGatewayServiceResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline DeleteGatewayServiceResponseBodyData& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DeleteGatewayServiceResponseBodyData& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string metaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline DeleteGatewayServiceResponseBodyData& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteGatewayServiceResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteGatewayServiceResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceNameInRegistry Field Functions 
    bool hasServiceNameInRegistry() const { return this->serviceNameInRegistry_ != nullptr;};
    void deleteServiceNameInRegistry() { this->serviceNameInRegistry_ = nullptr;};
    inline string serviceNameInRegistry() const { DARABONBA_PTR_GET_DEFAULT(serviceNameInRegistry_, "") };
    inline DeleteGatewayServiceResponseBodyData& setServiceNameInRegistry(string serviceNameInRegistry) { DARABONBA_PTR_SET_VALUE(serviceNameInRegistry_, serviceNameInRegistry) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline DeleteGatewayServiceResponseBodyData& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DeleteGatewayServiceResponseBodyData& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The time when the service was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The last modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The name of the group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the service.
    std::shared_ptr<int64_t> id_ = nullptr;
    // IP
    std::shared_ptr<vector<string>> ips_ = nullptr;
    // The basic information about the service.
    std::shared_ptr<string> metaInfo_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the service registered with the service registry.
    std::shared_ptr<string> serviceNameInRegistry_ = nullptr;
    // The ID of the service source.
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    // The source type of the service.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
