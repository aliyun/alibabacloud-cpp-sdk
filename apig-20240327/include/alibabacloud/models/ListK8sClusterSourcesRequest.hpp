// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SCLUSTERSOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SCLUSTERSOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListK8sClusterSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sClusterSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sClusterSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListK8sClusterSourcesRequest() = default ;
    ListK8sClusterSourcesRequest(const ListK8sClusterSourcesRequest &) = default ;
    ListK8sClusterSourcesRequest(ListK8sClusterSourcesRequest &&) = default ;
    ListK8sClusterSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sClusterSourcesRequest() = default ;
    ListK8sClusterSourcesRequest& operator=(const ListK8sClusterSourcesRequest &) = default ;
    ListK8sClusterSourcesRequest& operator=(ListK8sClusterSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcId_ == nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListK8sClusterSourcesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
