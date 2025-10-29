// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODYSHOWLISTINFOSHOWLISTSHOWRESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODYSHOWLISTINFOSHOWLISTSHOWRESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LiveInputType, liveInputType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceUrl, resourceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveInputType, liveInputType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceUrl, resourceUrl_);
    };
    DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo() = default ;
    DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo(const DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo &) = default ;
    DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo(DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo &&) = default ;
    DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo() = default ;
    DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo& operator=(const DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo &) = default ;
    DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo& operator=(DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveInputType_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->resourceUrl_ == nullptr; };
    // liveInputType Field Functions 
    bool hasLiveInputType() const { return this->liveInputType_ != nullptr;};
    void deleteLiveInputType() { this->liveInputType_ = nullptr;};
    inline int32_t liveInputType() const { DARABONBA_PTR_GET_DEFAULT(liveInputType_, 0) };
    inline DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo& setLiveInputType(int32_t liveInputType) { DARABONBA_PTR_SET_VALUE(liveInputType_, liveInputType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceUrl Field Functions 
    bool hasResourceUrl() const { return this->resourceUrl_ != nullptr;};
    void deleteResourceUrl() { this->resourceUrl_ = nullptr;};
    inline string resourceUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceUrl_, "") };
    inline DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo& setResourceUrl(string resourceUrl) { DARABONBA_PTR_SET_VALUE(resourceUrl_, resourceUrl) };


  protected:
    // The custom type label.
    std::shared_ptr<int32_t> liveInputType_ = nullptr;
    // The ID of the video-on-demand (VOD) file.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The URL of the resource.
    std::shared_ptr<string> resourceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
