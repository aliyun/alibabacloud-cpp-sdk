// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUserVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(K8sRegionId, k8sRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sRegionId, k8sRegionId_);
    };
    ListUserVpcRequest() = default ;
    ListUserVpcRequest(const ListUserVpcRequest &) = default ;
    ListUserVpcRequest(ListUserVpcRequest &&) = default ;
    ListUserVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserVpcRequest() = default ;
    ListUserVpcRequest& operator=(const ListUserVpcRequest &) = default ;
    ListUserVpcRequest& operator=(ListUserVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k8sRegionId_ == nullptr; };
    // k8sRegionId Field Functions 
    bool hasK8sRegionId() const { return this->k8sRegionId_ != nullptr;};
    void deleteK8sRegionId() { this->k8sRegionId_ = nullptr;};
    inline string getK8sRegionId() const { DARABONBA_PTR_GET_DEFAULT(k8sRegionId_, "") };
    inline ListUserVpcRequest& setK8sRegionId(string k8sRegionId) { DARABONBA_PTR_SET_VALUE(k8sRegionId_, k8sRegionId) };


  protected:
    // Region.
    // 
    // This parameter is required.
    shared_ptr<string> k8sRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
