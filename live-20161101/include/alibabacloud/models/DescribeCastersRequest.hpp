// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCastersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCastersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCastersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CasterName, casterName_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NormType, normType_);
      DARABONBA_PTR_TO_JSON(OrderByModifyAsc, orderByModifyAsc_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCastersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CasterName, casterName_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NormType, normType_);
      DARABONBA_PTR_FROM_JSON(OrderByModifyAsc, orderByModifyAsc_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCastersRequest() = default ;
    DescribeCastersRequest(const DescribeCastersRequest &) = default ;
    DescribeCastersRequest(DescribeCastersRequest &&) = default ;
    DescribeCastersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCastersRequest() = default ;
    DescribeCastersRequest& operator=(const DescribeCastersRequest &) = default ;
    DescribeCastersRequest& operator=(DescribeCastersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->casterName_ == nullptr && return this->chargeType_ == nullptr && return this->endTime_ == nullptr && return this->normType_ == nullptr && return this->orderByModifyAsc_ == nullptr
        && return this->ownerId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->tag_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCastersRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // casterName Field Functions 
    bool hasCasterName() const { return this->casterName_ != nullptr;};
    void deleteCasterName() { this->casterName_ = nullptr;};
    inline string casterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
    inline DescribeCastersRequest& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline int32_t chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, 0) };
    inline DescribeCastersRequest& setChargeType(int32_t chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCastersRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // normType Field Functions 
    bool hasNormType() const { return this->normType_ != nullptr;};
    void deleteNormType() { this->normType_ = nullptr;};
    inline string normType() const { DARABONBA_PTR_GET_DEFAULT(normType_, "") };
    inline DescribeCastersRequest& setNormType(string normType) { DARABONBA_PTR_SET_VALUE(normType_, normType) };


    // orderByModifyAsc Field Functions 
    bool hasOrderByModifyAsc() const { return this->orderByModifyAsc_ != nullptr;};
    void deleteOrderByModifyAsc() { this->orderByModifyAsc_ = nullptr;};
    inline string orderByModifyAsc() const { DARABONBA_PTR_GET_DEFAULT(orderByModifyAsc_, "") };
    inline DescribeCastersRequest& setOrderByModifyAsc(string orderByModifyAsc) { DARABONBA_PTR_SET_VALUE(orderByModifyAsc_, orderByModifyAsc) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCastersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeCastersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCastersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCastersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCastersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCastersRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCastersRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeCastersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeCastersRequestTag>) };
    inline vector<DescribeCastersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeCastersRequestTag>) };
    inline DescribeCastersRequest& setTag(const vector<DescribeCastersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCastersRequest& setTag(vector<DescribeCastersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848012.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the ApsaraVideo Live console and click Production Studios in the left-side navigation pane.
    // 
    // > 
    // 
    // *   You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // *   If you leave this parameter empty, the data of all production studios is returned.
    std::shared_ptr<string> casterId_ = nullptr;
    // The name of the production studio.
    std::shared_ptr<string> casterName_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   0: the subscription billing method
    // *   1: the pay-as-you-go billing method
    std::shared_ptr<int32_t> chargeType_ = nullptr;
    // The end of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The type of the production studio. Valid values:
    // 
    // *   1: general mode
    // *   3: lightweight carousel playback mode
    // *   4: virtual studio
    // *   6: playlist mode
    std::shared_ptr<string> normType_ = nullptr;
    // Specifies whether to sort the production studios in ascending order based on the modification time.
    // 
    // >  If you leave this parameter empty, the default value is used. Default value: false.
    std::shared_ptr<string> orderByModifyAsc_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of templates to return on each page. If you leave this parameter empty, the default value is used. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID. For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/2381067.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The beginning of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the production studio. Valid values:
    // 
    // *   0: idle
    // *   1: streaming
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<DescribeCastersRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
