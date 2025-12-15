// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSRESPONSEBODYEVENTSTARGETRESOURCEGROUPINFO_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSRESPONSEBODYEVENTSTARGETRESOURCEGROUPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo() = default ;
    LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo(const LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo &) = default ;
    LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo(LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo &&) = default ;
    LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo() = default ;
    LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo& operator=(const LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo &) = default ;
    LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo& operator=(LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupDisplayName_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string resourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<string> resourceGroupDisplayName_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
