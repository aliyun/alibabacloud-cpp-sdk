// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMUSICREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_LISTMUSICREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListMusicRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMusicRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MusicId, musicId_);
      DARABONBA_PTR_TO_JSON(MusicName, musicName_);
      DARABONBA_PTR_TO_JSON(MusicType, musicType_);
      DARABONBA_PTR_TO_JSON(MusicTypeName, musicTypeName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListMusicRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MusicId, musicId_);
      DARABONBA_PTR_FROM_JSON(MusicName, musicName_);
      DARABONBA_PTR_FROM_JSON(MusicType, musicType_);
      DARABONBA_PTR_FROM_JSON(MusicTypeName, musicTypeName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListMusicRequestPayload() = default ;
    ListMusicRequestPayload(const ListMusicRequestPayload &) = default ;
    ListMusicRequestPayload(ListMusicRequestPayload &&) = default ;
    ListMusicRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMusicRequestPayload() = default ;
    ListMusicRequestPayload& operator=(const ListMusicRequestPayload &) = default ;
    ListMusicRequestPayload& operator=(ListMusicRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->musicId_ != nullptr && this->musicName_ != nullptr && this->musicType_ != nullptr && this->musicTypeName_ != nullptr && this->pageSize_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMusicRequestPayload& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // musicId Field Functions 
    bool hasMusicId() const { return this->musicId_ != nullptr;};
    void deleteMusicId() { this->musicId_ = nullptr;};
    inline int64_t musicId() const { DARABONBA_PTR_GET_DEFAULT(musicId_, 0L) };
    inline ListMusicRequestPayload& setMusicId(int64_t musicId) { DARABONBA_PTR_SET_VALUE(musicId_, musicId) };


    // musicName Field Functions 
    bool hasMusicName() const { return this->musicName_ != nullptr;};
    void deleteMusicName() { this->musicName_ = nullptr;};
    inline string musicName() const { DARABONBA_PTR_GET_DEFAULT(musicName_, "") };
    inline ListMusicRequestPayload& setMusicName(string musicName) { DARABONBA_PTR_SET_VALUE(musicName_, musicName) };


    // musicType Field Functions 
    bool hasMusicType() const { return this->musicType_ != nullptr;};
    void deleteMusicType() { this->musicType_ = nullptr;};
    inline int64_t musicType() const { DARABONBA_PTR_GET_DEFAULT(musicType_, 0L) };
    inline ListMusicRequestPayload& setMusicType(int64_t musicType) { DARABONBA_PTR_SET_VALUE(musicType_, musicType) };


    // musicTypeName Field Functions 
    bool hasMusicTypeName() const { return this->musicTypeName_ != nullptr;};
    void deleteMusicTypeName() { this->musicTypeName_ = nullptr;};
    inline string musicTypeName() const { DARABONBA_PTR_GET_DEFAULT(musicTypeName_, "") };
    inline ListMusicRequestPayload& setMusicTypeName(string musicTypeName) { DARABONBA_PTR_SET_VALUE(musicTypeName_, musicTypeName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMusicRequestPayload& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int64_t> musicId_ = nullptr;
    std::shared_ptr<string> musicName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> musicType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> musicTypeName_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
