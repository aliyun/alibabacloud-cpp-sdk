// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceSourceResponseBodyDataIngressOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListServiceSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(BindingWithGateway, bindingWithGateway_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IngressOptions, ingressOptions_);
      DARABONBA_PTR_TO_JSON(Invalid, invalid_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathList, pathList_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceUniqueId, sourceUniqueId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(BindingWithGateway, bindingWithGateway_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IngressOptions, ingressOptions_);
      DARABONBA_PTR_FROM_JSON(Invalid, invalid_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathList, pathList_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceUniqueId, sourceUniqueId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListServiceSourceResponseBodyData() = default ;
    ListServiceSourceResponseBodyData(const ListServiceSourceResponseBodyData &) = default ;
    ListServiceSourceResponseBodyData(ListServiceSourceResponseBodyData &&) = default ;
    ListServiceSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceSourceResponseBodyData() = default ;
    ListServiceSourceResponseBodyData& operator=(const ListServiceSourceResponseBodyData &) = default ;
    ListServiceSourceResponseBodyData& operator=(ListServiceSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->bindingWithGateway_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->groupList_ != nullptr && this->id_ != nullptr && this->ingressOptions_ != nullptr && this->invalid_ != nullptr && this->name_ != nullptr
        && this->pathList_ != nullptr && this->source_ != nullptr && this->sourceUniqueId_ != nullptr && this->type_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListServiceSourceResponseBodyData& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // bindingWithGateway Field Functions 
    bool hasBindingWithGateway() const { return this->bindingWithGateway_ != nullptr;};
    void deleteBindingWithGateway() { this->bindingWithGateway_ = nullptr;};
    inline int32_t bindingWithGateway() const { DARABONBA_PTR_GET_DEFAULT(bindingWithGateway_, 0) };
    inline ListServiceSourceResponseBodyData& setBindingWithGateway(int32_t bindingWithGateway) { DARABONBA_PTR_SET_VALUE(bindingWithGateway_, bindingWithGateway) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline ListServiceSourceResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListServiceSourceResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListServiceSourceResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListServiceSourceResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<string> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<string>) };
    inline vector<string> groupList() { DARABONBA_PTR_GET(groupList_, vector<string>) };
    inline ListServiceSourceResponseBodyData& setGroupList(const vector<string> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline ListServiceSourceResponseBodyData& setGroupList(vector<string> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListServiceSourceResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ingressOptions Field Functions 
    bool hasIngressOptions() const { return this->ingressOptions_ != nullptr;};
    void deleteIngressOptions() { this->ingressOptions_ = nullptr;};
    inline const Models::ListServiceSourceResponseBodyDataIngressOptions & ingressOptions() const { DARABONBA_PTR_GET_CONST(ingressOptions_, Models::ListServiceSourceResponseBodyDataIngressOptions) };
    inline Models::ListServiceSourceResponseBodyDataIngressOptions ingressOptions() { DARABONBA_PTR_GET(ingressOptions_, Models::ListServiceSourceResponseBodyDataIngressOptions) };
    inline ListServiceSourceResponseBodyData& setIngressOptions(const Models::ListServiceSourceResponseBodyDataIngressOptions & ingressOptions) { DARABONBA_PTR_SET_VALUE(ingressOptions_, ingressOptions) };
    inline ListServiceSourceResponseBodyData& setIngressOptions(Models::ListServiceSourceResponseBodyDataIngressOptions && ingressOptions) { DARABONBA_PTR_SET_RVALUE(ingressOptions_, ingressOptions) };


    // invalid Field Functions 
    bool hasInvalid() const { return this->invalid_ != nullptr;};
    void deleteInvalid() { this->invalid_ = nullptr;};
    inline bool invalid() const { DARABONBA_PTR_GET_DEFAULT(invalid_, false) };
    inline ListServiceSourceResponseBodyData& setInvalid(bool invalid) { DARABONBA_PTR_SET_VALUE(invalid_, invalid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServiceSourceResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathList Field Functions 
    bool hasPathList() const { return this->pathList_ != nullptr;};
    void deletePathList() { this->pathList_ = nullptr;};
    inline const vector<string> & pathList() const { DARABONBA_PTR_GET_CONST(pathList_, vector<string>) };
    inline vector<string> pathList() { DARABONBA_PTR_GET(pathList_, vector<string>) };
    inline ListServiceSourceResponseBodyData& setPathList(const vector<string> & pathList) { DARABONBA_PTR_SET_VALUE(pathList_, pathList) };
    inline ListServiceSourceResponseBodyData& setPathList(vector<string> && pathList) { DARABONBA_PTR_SET_RVALUE(pathList_, pathList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListServiceSourceResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceUniqueId Field Functions 
    bool hasSourceUniqueId() const { return this->sourceUniqueId_ != nullptr;};
    void deleteSourceUniqueId() { this->sourceUniqueId_ = nullptr;};
    inline string sourceUniqueId() const { DARABONBA_PTR_GET_DEFAULT(sourceUniqueId_, "") };
    inline ListServiceSourceResponseBodyData& setSourceUniqueId(string sourceUniqueId) { DARABONBA_PTR_SET_VALUE(sourceUniqueId_, sourceUniqueId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListServiceSourceResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the Container Service for Kubernetes (ACK) cluster or the endpoint of the Microservices Engine (MSE) instance.
    std::shared_ptr<string> address_ = nullptr;
    // Indicates whether the service source is associated with the gateway. The value 1 indicates that the service source is associated with the gateway.
    std::shared_ptr<int32_t> bindingWithGateway_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The update time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The array of service groups.
    std::shared_ptr<vector<string>> groupList_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The information about the support for Ingresses by applications.
    std::shared_ptr<Models::ListServiceSourceResponseBodyDataIngressOptions> ingressOptions_ = nullptr;
    std::shared_ptr<bool> invalid_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The array of root paths of service lists.
    std::shared_ptr<vector<string>> pathList_ = nullptr;
    // The type of the service source.
    std::shared_ptr<string> source_ = nullptr;
    // The unique ID of the service source.
    std::shared_ptr<string> sourceUniqueId_ = nullptr;
    // The type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
