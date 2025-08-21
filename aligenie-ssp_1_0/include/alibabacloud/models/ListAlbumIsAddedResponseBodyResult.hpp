// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALBUMISADDEDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTALBUMISADDEDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListAlbumIsAddedResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlbumIsAddedResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
      DARABONBA_PTR_TO_JSON(IsAdded, isAdded_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlbumIsAddedResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
      DARABONBA_PTR_FROM_JSON(IsAdded, isAdded_);
    };
    ListAlbumIsAddedResponseBodyResult() = default ;
    ListAlbumIsAddedResponseBodyResult(const ListAlbumIsAddedResponseBodyResult &) = default ;
    ListAlbumIsAddedResponseBodyResult(ListAlbumIsAddedResponseBodyResult &&) = default ;
    ListAlbumIsAddedResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlbumIsAddedResponseBodyResult() = default ;
    ListAlbumIsAddedResponseBodyResult& operator=(const ListAlbumIsAddedResponseBodyResult &) = default ;
    ListAlbumIsAddedResponseBodyResult& operator=(ListAlbumIsAddedResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumId_ != nullptr
        && this->isAdded_ != nullptr; };
    // albumId Field Functions 
    bool hasAlbumId() const { return this->albumId_ != nullptr;};
    void deleteAlbumId() { this->albumId_ = nullptr;};
    inline string albumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
    inline ListAlbumIsAddedResponseBodyResult& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


    // isAdded Field Functions 
    bool hasIsAdded() const { return this->isAdded_ != nullptr;};
    void deleteIsAdded() { this->isAdded_ = nullptr;};
    inline string isAdded() const { DARABONBA_PTR_GET_DEFAULT(isAdded_, "") };
    inline ListAlbumIsAddedResponseBodyResult& setIsAdded(string isAdded) { DARABONBA_PTR_SET_VALUE(isAdded_, isAdded) };


  protected:
    std::shared_ptr<string> albumId_ = nullptr;
    std::shared_ptr<string> isAdded_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
