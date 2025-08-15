// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
    };
    GetAccessKeyLastUsedResourcesResponseBodyResources() = default ;
    GetAccessKeyLastUsedResourcesResponseBodyResources(const GetAccessKeyLastUsedResourcesResponseBodyResources &) = default ;
    GetAccessKeyLastUsedResourcesResponseBodyResources(GetAccessKeyLastUsedResourcesResponseBodyResources &&) = default ;
    GetAccessKeyLastUsedResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedResourcesResponseBodyResources() = default ;
    GetAccessKeyLastUsedResourcesResponseBodyResources& operator=(const GetAccessKeyLastUsedResourcesResponseBodyResources &) = default ;
    GetAccessKeyLastUsedResourcesResponseBodyResources& operator=(GetAccessKeyLastUsedResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->resourceName_ != nullptr && this->resourceType_ != nullptr && this->source_ != nullptr && this->usedTimestamp_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline GetAccessKeyLastUsedResourcesResponseBodyResources& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetAccessKeyLastUsedResourcesResponseBodyResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAccessKeyLastUsedResourcesResponseBodyResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAccessKeyLastUsedResourcesResponseBodyResources& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // usedTimestamp Field Functions 
    bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
    void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
    inline int64_t usedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
    inline GetAccessKeyLastUsedResourcesResponseBodyResources& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


  protected:
    // The event details.
    std::shared_ptr<string> detail_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The event source.
    // 
    // Valid values:
    // 
    // *   Internal
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     other events
    // 
    //     <!-- -->
    // 
    // *   ManagementEvent
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     management events
    // 
    //     <!-- -->
    // 
    // *   DataEvent
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     data events
    // 
    //     <!-- -->
    std::shared_ptr<string> source_ = nullptr;
    // The timestamp when the resource was used. Unit: millisecond.
    std::shared_ptr<int64_t> usedTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
