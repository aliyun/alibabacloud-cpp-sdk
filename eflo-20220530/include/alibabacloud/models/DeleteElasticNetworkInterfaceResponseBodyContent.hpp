// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEELASTICNETWORKINTERFACERESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DELETEELASTICNETWORKINTERFACERESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class DeleteElasticNetworkInterfaceResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteElasticNetworkInterfaceResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteElasticNetworkInterfaceResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    DeleteElasticNetworkInterfaceResponseBodyContent() = default ;
    DeleteElasticNetworkInterfaceResponseBodyContent(const DeleteElasticNetworkInterfaceResponseBodyContent &) = default ;
    DeleteElasticNetworkInterfaceResponseBodyContent(DeleteElasticNetworkInterfaceResponseBodyContent &&) = default ;
    DeleteElasticNetworkInterfaceResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteElasticNetworkInterfaceResponseBodyContent() = default ;
    DeleteElasticNetworkInterfaceResponseBodyContent& operator=(const DeleteElasticNetworkInterfaceResponseBodyContent &) = default ;
    DeleteElasticNetworkInterfaceResponseBodyContent& operator=(DeleteElasticNetworkInterfaceResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticNetworkInterfaceId_ == nullptr
        && return this->nodeId_ == nullptr; };
    // elasticNetworkInterfaceId Field Functions 
    bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
    void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
    inline string elasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
    inline DeleteElasticNetworkInterfaceResponseBodyContent& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DeleteElasticNetworkInterfaceResponseBodyContent& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // Lingjun Elastic Network Interface ID
    std::shared_ptr<string> elasticNetworkInterfaceId_ = nullptr;
    // Lingjun Node ID
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
