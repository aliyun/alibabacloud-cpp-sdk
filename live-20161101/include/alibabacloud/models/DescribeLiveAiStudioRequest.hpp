// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIStudioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIStudioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StudioId, studioId_);
      DARABONBA_PTR_TO_JSON(StudioName, studioName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIStudioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StudioId, studioId_);
      DARABONBA_PTR_FROM_JSON(StudioName, studioName_);
    };
    DescribeLiveAIStudioRequest() = default ;
    DescribeLiveAIStudioRequest(const DescribeLiveAIStudioRequest &) = default ;
    DescribeLiveAIStudioRequest(DescribeLiveAIStudioRequest &&) = default ;
    DescribeLiveAIStudioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIStudioRequest() = default ;
    DescribeLiveAIStudioRequest& operator=(const DescribeLiveAIStudioRequest &) = default ;
    DescribeLiveAIStudioRequest& operator=(DescribeLiveAIStudioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->studioId_ == nullptr && return this->studioName_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveAIStudioRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLiveAIStudioRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveAIStudioRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveAIStudioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // studioId Field Functions 
    bool hasStudioId() const { return this->studioId_ != nullptr;};
    void deleteStudioId() { this->studioId_ = nullptr;};
    inline string studioId() const { DARABONBA_PTR_GET_DEFAULT(studioId_, "") };
    inline DescribeLiveAIStudioRequest& setStudioId(string studioId) { DARABONBA_PTR_SET_VALUE(studioId_, studioId) };


    // studioName Field Functions 
    bool hasStudioName() const { return this->studioName_ != nullptr;};
    void deleteStudioName() { this->studioName_ = nullptr;};
    inline string studioName() const { DARABONBA_PTR_GET_DEFAULT(studioName_, "") };
    inline DescribeLiveAIStudioRequest& setStudioName(string studioName) { DARABONBA_PTR_SET_VALUE(studioName_, studioName) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Valid values: 1 to 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the virtual studio template that you want to query. This parameter is optional.
    std::shared_ptr<string> studioId_ = nullptr;
    // The name of the virtual studio template.
    std::shared_ptr<string> studioName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
