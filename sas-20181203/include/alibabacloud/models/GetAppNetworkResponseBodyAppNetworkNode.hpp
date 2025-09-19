// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODYAPPNETWORKNODE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODYAPPNETWORKNODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAppNetworkResponseBodyAppNetworkNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppNetworkResponseBodyAppNetworkNode& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerIds, containerIds_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppNetworkResponseBodyAppNetworkNode& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerIds, containerIds_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAppNetworkResponseBodyAppNetworkNode() = default ;
    GetAppNetworkResponseBodyAppNetworkNode(const GetAppNetworkResponseBodyAppNetworkNode &) = default ;
    GetAppNetworkResponseBodyAppNetworkNode(GetAppNetworkResponseBodyAppNetworkNode &&) = default ;
    GetAppNetworkResponseBodyAppNetworkNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppNetworkResponseBodyAppNetworkNode() = default ;
    GetAppNetworkResponseBodyAppNetworkNode& operator=(const GetAppNetworkResponseBodyAppNetworkNode &) = default ;
    GetAppNetworkResponseBodyAppNetworkNode& operator=(GetAppNetworkResponseBodyAppNetworkNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerIds_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->namespaceId_ != nullptr && this->riskLevel_ != nullptr && this->type_ != nullptr; };
    // containerIds Field Functions 
    bool hasContainerIds() const { return this->containerIds_ != nullptr;};
    void deleteContainerIds() { this->containerIds_ = nullptr;};
    inline const vector<string> & containerIds() const { DARABONBA_PTR_GET_CONST(containerIds_, vector<string>) };
    inline vector<string> containerIds() { DARABONBA_PTR_GET(containerIds_, vector<string>) };
    inline GetAppNetworkResponseBodyAppNetworkNode& setContainerIds(const vector<string> & containerIds) { DARABONBA_PTR_SET_VALUE(containerIds_, containerIds) };
    inline GetAppNetworkResponseBodyAppNetworkNode& setContainerIds(vector<string> && containerIds) { DARABONBA_PTR_SET_RVALUE(containerIds_, containerIds) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAppNetworkResponseBodyAppNetworkNode& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAppNetworkResponseBodyAppNetworkNode& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetAppNetworkResponseBodyAppNetworkNode& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetAppNetworkResponseBodyAppNetworkNode& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAppNetworkResponseBodyAppNetworkNode& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of the container IDs.
    std::shared_ptr<vector<string>> containerIds_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **3**: high
    // *   **2**: medium
    // *   **1**: low
    // *   **0**: warning
    // *   **-1**: unknown
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The type of the node. Valid values:
    // 
    // *   **app**: an application
    // *   **internet**: a network node in another cluster
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
