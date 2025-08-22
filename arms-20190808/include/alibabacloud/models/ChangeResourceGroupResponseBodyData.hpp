// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ChangeResourceGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeResourceGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeResourceGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    ChangeResourceGroupResponseBodyData() = default ;
    ChangeResourceGroupResponseBodyData(const ChangeResourceGroupResponseBodyData &) = default ;
    ChangeResourceGroupResponseBodyData(ChangeResourceGroupResponseBodyData &&) = default ;
    ChangeResourceGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeResourceGroupResponseBodyData() = default ;
    ChangeResourceGroupResponseBodyData& operator=(const ChangeResourceGroupResponseBodyData &) = default ;
    ChangeResourceGroupResponseBodyData& operator=(ChangeResourceGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupId_ != nullptr
        && this->resourceId_ != nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ChangeResourceGroupResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ChangeResourceGroupResponseBodyData& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
