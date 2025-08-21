// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALBUMDETAILBYIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETALBUMDETAILBYIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlbumDetailByIdResponseBodyResultAlbumContentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlbumDetailByIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlbumDetailByIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumContentList, albumContentList_);
      DARABONBA_PTR_TO_JSON(AlbumCoverUrl, albumCoverUrl_);
      DARABONBA_PTR_TO_JSON(AlbumDescription, albumDescription_);
      DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
      DARABONBA_PTR_TO_JSON(AlbumTitle, albumTitle_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlbumDetailByIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumContentList, albumContentList_);
      DARABONBA_PTR_FROM_JSON(AlbumCoverUrl, albumCoverUrl_);
      DARABONBA_PTR_FROM_JSON(AlbumDescription, albumDescription_);
      DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
      DARABONBA_PTR_FROM_JSON(AlbumTitle, albumTitle_);
    };
    GetAlbumDetailByIdResponseBodyResult() = default ;
    GetAlbumDetailByIdResponseBodyResult(const GetAlbumDetailByIdResponseBodyResult &) = default ;
    GetAlbumDetailByIdResponseBodyResult(GetAlbumDetailByIdResponseBodyResult &&) = default ;
    GetAlbumDetailByIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlbumDetailByIdResponseBodyResult() = default ;
    GetAlbumDetailByIdResponseBodyResult& operator=(const GetAlbumDetailByIdResponseBodyResult &) = default ;
    GetAlbumDetailByIdResponseBodyResult& operator=(GetAlbumDetailByIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumContentList_ != nullptr
        && this->albumCoverUrl_ != nullptr && this->albumDescription_ != nullptr && this->albumId_ != nullptr && this->albumTitle_ != nullptr; };
    // albumContentList Field Functions 
    bool hasAlbumContentList() const { return this->albumContentList_ != nullptr;};
    void deleteAlbumContentList() { this->albumContentList_ = nullptr;};
    inline const vector<Models::GetAlbumDetailByIdResponseBodyResultAlbumContentList> & albumContentList() const { DARABONBA_PTR_GET_CONST(albumContentList_, vector<Models::GetAlbumDetailByIdResponseBodyResultAlbumContentList>) };
    inline vector<Models::GetAlbumDetailByIdResponseBodyResultAlbumContentList> albumContentList() { DARABONBA_PTR_GET(albumContentList_, vector<Models::GetAlbumDetailByIdResponseBodyResultAlbumContentList>) };
    inline GetAlbumDetailByIdResponseBodyResult& setAlbumContentList(const vector<Models::GetAlbumDetailByIdResponseBodyResultAlbumContentList> & albumContentList) { DARABONBA_PTR_SET_VALUE(albumContentList_, albumContentList) };
    inline GetAlbumDetailByIdResponseBodyResult& setAlbumContentList(vector<Models::GetAlbumDetailByIdResponseBodyResultAlbumContentList> && albumContentList) { DARABONBA_PTR_SET_RVALUE(albumContentList_, albumContentList) };


    // albumCoverUrl Field Functions 
    bool hasAlbumCoverUrl() const { return this->albumCoverUrl_ != nullptr;};
    void deleteAlbumCoverUrl() { this->albumCoverUrl_ = nullptr;};
    inline string albumCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(albumCoverUrl_, "") };
    inline GetAlbumDetailByIdResponseBodyResult& setAlbumCoverUrl(string albumCoverUrl) { DARABONBA_PTR_SET_VALUE(albumCoverUrl_, albumCoverUrl) };


    // albumDescription Field Functions 
    bool hasAlbumDescription() const { return this->albumDescription_ != nullptr;};
    void deleteAlbumDescription() { this->albumDescription_ = nullptr;};
    inline string albumDescription() const { DARABONBA_PTR_GET_DEFAULT(albumDescription_, "") };
    inline GetAlbumDetailByIdResponseBodyResult& setAlbumDescription(string albumDescription) { DARABONBA_PTR_SET_VALUE(albumDescription_, albumDescription) };


    // albumId Field Functions 
    bool hasAlbumId() const { return this->albumId_ != nullptr;};
    void deleteAlbumId() { this->albumId_ = nullptr;};
    inline string albumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
    inline GetAlbumDetailByIdResponseBodyResult& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


    // albumTitle Field Functions 
    bool hasAlbumTitle() const { return this->albumTitle_ != nullptr;};
    void deleteAlbumTitle() { this->albumTitle_ = nullptr;};
    inline string albumTitle() const { DARABONBA_PTR_GET_DEFAULT(albumTitle_, "") };
    inline GetAlbumDetailByIdResponseBodyResult& setAlbumTitle(string albumTitle) { DARABONBA_PTR_SET_VALUE(albumTitle_, albumTitle) };


  protected:
    std::shared_ptr<vector<Models::GetAlbumDetailByIdResponseBodyResultAlbumContentList>> albumContentList_ = nullptr;
    std::shared_ptr<string> albumCoverUrl_ = nullptr;
    std::shared_ptr<string> albumDescription_ = nullptr;
    std::shared_ptr<string> albumId_ = nullptr;
    std::shared_ptr<string> albumTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
