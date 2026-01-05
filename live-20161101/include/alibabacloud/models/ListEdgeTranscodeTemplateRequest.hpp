// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGETRANSCODETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGETRANSCODETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEdgeTranscodeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
    };
    ListEdgeTranscodeTemplateRequest() = default ;
    ListEdgeTranscodeTemplateRequest(const ListEdgeTranscodeTemplateRequest &) = default ;
    ListEdgeTranscodeTemplateRequest(ListEdgeTranscodeTemplateRequest &&) = default ;
    ListEdgeTranscodeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeTranscodeTemplateRequest() = default ;
    ListEdgeTranscodeTemplateRequest& operator=(const ListEdgeTranscodeTemplateRequest &) = default ;
    ListEdgeTranscodeTemplateRequest& operator=(ListEdgeTranscodeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->keyword_ == nullptr && this->ownerId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->sortBy_ == nullptr && this->type_ == nullptr && this->videoCodec_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListEdgeTranscodeTemplateRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListEdgeTranscodeTemplateRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListEdgeTranscodeTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListEdgeTranscodeTemplateRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEdgeTranscodeTemplateRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEdgeTranscodeTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListEdgeTranscodeTemplateRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListEdgeTranscodeTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // videoCodec Field Functions 
    bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
    void deleteVideoCodec() { this->videoCodec_ = nullptr;};
    inline string getVideoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
    inline ListEdgeTranscodeTemplateRequest& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


  protected:
    // The ID of the data center.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The keyword of the query.
    // 
    // *   You can specify a template ID for an exact match.
    // *   You can also specify a template name for a fuzzy match.
    shared_ptr<string> keyword_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    // The sorting order of the templates by creation time. Default value: desc. Valid values:
    // 
    // *   desc: descending order.
    // *   asc: ascending order.
    shared_ptr<string> sortBy_ {};
    // The type of edge transcoding. Valid values:
    // 
    // *   **common**: standard transcoding and Narrowband HD™ 1.0 transcoding.
    // *   **nbhd-2**: Narrowband HD™ 2.0 transcoding.
    // *   **ultra-hd**: ultra-high definition transcoding.
    // 
    // >  If you do not specify this parameter, the query result is filtered based on the type of edge transcoding on which you are granted permissions.
    shared_ptr<string> type_ {};
    // The video encoding format. Valid values:
    // 
    // *   H.264
    // *   H.265
    // 
    // >  If you do not specify this parameter, the query result is filtered based on the video encoding format on which you are granted permissions.
    shared_ptr<string> videoCodec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
