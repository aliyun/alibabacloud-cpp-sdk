// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBALBUMRESPONSEBODYRESULTDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBALBUMRESPONSEBODYRESULTDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSubAlbumResponseBodyResultDataListScheduleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubAlbumResponseBodyResultDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAlbumResponseBodyResultDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsAdded, isAdded_);
      DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TotalEpisode, totalEpisode_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAlbumResponseBodyResultDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsAdded, isAdded_);
      DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TotalEpisode, totalEpisode_);
    };
    ListSubAlbumResponseBodyResultDataList() = default ;
    ListSubAlbumResponseBodyResultDataList(const ListSubAlbumResponseBodyResultDataList &) = default ;
    ListSubAlbumResponseBodyResultDataList(ListSubAlbumResponseBodyResultDataList &&) = default ;
    ListSubAlbumResponseBodyResultDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAlbumResponseBodyResultDataList() = default ;
    ListSubAlbumResponseBodyResultDataList& operator=(const ListSubAlbumResponseBodyResultDataList &) = default ;
    ListSubAlbumResponseBodyResultDataList& operator=(ListSubAlbumResponseBodyResultDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumId_ != nullptr
        && this->categoryId_ != nullptr && this->coverUrl_ != nullptr && this->id_ != nullptr && this->isAdded_ != nullptr && this->scheduleInfo_ != nullptr
        && this->sequence_ != nullptr && this->title_ != nullptr && this->totalEpisode_ != nullptr; };
    // albumId Field Functions 
    bool hasAlbumId() const { return this->albumId_ != nullptr;};
    void deleteAlbumId() { this->albumId_ = nullptr;};
    inline string albumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
    inline ListSubAlbumResponseBodyResultDataList& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline ListSubAlbumResponseBodyResultDataList& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline ListSubAlbumResponseBodyResultDataList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListSubAlbumResponseBodyResultDataList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAdded Field Functions 
    bool hasIsAdded() const { return this->isAdded_ != nullptr;};
    void deleteIsAdded() { this->isAdded_ = nullptr;};
    inline bool isAdded() const { DARABONBA_PTR_GET_DEFAULT(isAdded_, false) };
    inline ListSubAlbumResponseBodyResultDataList& setIsAdded(bool isAdded) { DARABONBA_PTR_SET_VALUE(isAdded_, isAdded) };


    // scheduleInfo Field Functions 
    bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
    void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
    inline const Models::ListSubAlbumResponseBodyResultDataListScheduleInfo & scheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Models::ListSubAlbumResponseBodyResultDataListScheduleInfo) };
    inline Models::ListSubAlbumResponseBodyResultDataListScheduleInfo scheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Models::ListSubAlbumResponseBodyResultDataListScheduleInfo) };
    inline ListSubAlbumResponseBodyResultDataList& setScheduleInfo(const Models::ListSubAlbumResponseBodyResultDataListScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
    inline ListSubAlbumResponseBodyResultDataList& setScheduleInfo(Models::ListSubAlbumResponseBodyResultDataListScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int64_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0L) };
    inline ListSubAlbumResponseBodyResultDataList& setSequence(int64_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListSubAlbumResponseBodyResultDataList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // totalEpisode Field Functions 
    bool hasTotalEpisode() const { return this->totalEpisode_ != nullptr;};
    void deleteTotalEpisode() { this->totalEpisode_ = nullptr;};
    inline int32_t totalEpisode() const { DARABONBA_PTR_GET_DEFAULT(totalEpisode_, 0) };
    inline ListSubAlbumResponseBodyResultDataList& setTotalEpisode(int32_t totalEpisode) { DARABONBA_PTR_SET_VALUE(totalEpisode_, totalEpisode) };


  protected:
    std::shared_ptr<string> albumId_ = nullptr;
    std::shared_ptr<int32_t> categoryId_ = nullptr;
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> isAdded_ = nullptr;
    std::shared_ptr<Models::ListSubAlbumResponseBodyResultDataListScheduleInfo> scheduleInfo_ = nullptr;
    std::shared_ptr<int64_t> sequence_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> totalEpisode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
