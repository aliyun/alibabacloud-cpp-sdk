// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALBUMDETAILBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALBUMDETAILBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlbumDetailByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlbumDetailByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlbumDetailByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
    };
    GetAlbumDetailByIdRequest() = default ;
    GetAlbumDetailByIdRequest(const GetAlbumDetailByIdRequest &) = default ;
    GetAlbumDetailByIdRequest(GetAlbumDetailByIdRequest &&) = default ;
    GetAlbumDetailByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlbumDetailByIdRequest() = default ;
    GetAlbumDetailByIdRequest& operator=(const GetAlbumDetailByIdRequest &) = default ;
    GetAlbumDetailByIdRequest& operator=(GetAlbumDetailByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumId_ != nullptr; };
    // albumId Field Functions 
    bool hasAlbumId() const { return this->albumId_ != nullptr;};
    void deleteAlbumId() { this->albumId_ = nullptr;};
    inline string albumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
    inline GetAlbumDetailByIdRequest& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


  protected:
    std::shared_ptr<string> albumId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
