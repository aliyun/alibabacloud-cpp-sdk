// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PodStatus, podStatus_);
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PodStatus, podStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
    };
    GetResourceGroupRequestRequest() = default ;
    GetResourceGroupRequestRequest(const GetResourceGroupRequestRequest &) = default ;
    GetResourceGroupRequestRequest(GetResourceGroupRequestRequest &&) = default ;
    GetResourceGroupRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupRequestRequest() = default ;
    GetResourceGroupRequestRequest& operator=(const GetResourceGroupRequestRequest &) = default ;
    GetResourceGroupRequestRequest& operator=(GetResourceGroupRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->podStatus_ == nullptr
        && this->resourceGroupID_ == nullptr; };
    // podStatus Field Functions 
    bool hasPodStatus() const { return this->podStatus_ != nullptr;};
    void deletePodStatus() { this->podStatus_ = nullptr;};
    inline string getPodStatus() const { DARABONBA_PTR_GET_DEFAULT(podStatus_, "") };
    inline GetResourceGroupRequestRequest& setPodStatus(string podStatus) { DARABONBA_PTR_SET_VALUE(podStatus_, podStatus) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline GetResourceGroupRequestRequest& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


  protected:
    shared_ptr<string> podStatus_ {};
    // This parameter is required.
    shared_ptr<string> resourceGroupID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
