// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLASTDEPLOYMENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLASTDEPLOYMENTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class GetLastDeploymentConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLastDeploymentConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLastDeploymentConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
    };
    GetLastDeploymentConfigRequest() = default ;
    GetLastDeploymentConfigRequest(const GetLastDeploymentConfigRequest &) = default ;
    GetLastDeploymentConfigRequest(GetLastDeploymentConfigRequest &&) = default ;
    GetLastDeploymentConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLastDeploymentConfigRequest() = default ;
    GetLastDeploymentConfigRequest& operator=(const GetLastDeploymentConfigRequest &) = default ;
    GetLastDeploymentConfigRequest& operator=(GetLastDeploymentConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceGroupId_ == nullptr; };
    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline int64_t getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, 0L) };
    inline GetLastDeploymentConfigRequest& setServiceGroupId(int64_t serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> serviceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
