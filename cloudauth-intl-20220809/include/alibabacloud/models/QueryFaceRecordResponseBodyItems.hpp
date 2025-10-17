// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACERECORDRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACERECORDRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class QueryFaceRecordResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceRecordResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImgOssUrl, imgOssUrl_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(RegistrationType, registrationType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceRecordResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImgOssUrl, imgOssUrl_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(RegistrationType, registrationType_);
    };
    QueryFaceRecordResponseBodyItems() = default ;
    QueryFaceRecordResponseBodyItems(const QueryFaceRecordResponseBodyItems &) = default ;
    QueryFaceRecordResponseBodyItems(QueryFaceRecordResponseBodyItems &&) = default ;
    QueryFaceRecordResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceRecordResponseBodyItems() = default ;
    QueryFaceRecordResponseBodyItems& operator=(const QueryFaceRecordResponseBodyItems &) = default ;
    QueryFaceRecordResponseBodyItems& operator=(QueryFaceRecordResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceId_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->imgOssUrl_ == nullptr && return this->merchantUserId_ == nullptr && return this->registrationType_ == nullptr; };
    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline QueryFaceRecordResponseBodyItems& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryFaceRecordResponseBodyItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryFaceRecordResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imgOssUrl Field Functions 
    bool hasImgOssUrl() const { return this->imgOssUrl_ != nullptr;};
    void deleteImgOssUrl() { this->imgOssUrl_ = nullptr;};
    inline string imgOssUrl() const { DARABONBA_PTR_GET_DEFAULT(imgOssUrl_, "") };
    inline QueryFaceRecordResponseBodyItems& setImgOssUrl(string imgOssUrl) { DARABONBA_PTR_SET_VALUE(imgOssUrl_, imgOssUrl) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline QueryFaceRecordResponseBodyItems& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // registrationType Field Functions 
    bool hasRegistrationType() const { return this->registrationType_ != nullptr;};
    void deleteRegistrationType() { this->registrationType_ = nullptr;};
    inline string registrationType() const { DARABONBA_PTR_GET_DEFAULT(registrationType_, "") };
    inline QueryFaceRecordResponseBodyItems& setRegistrationType(string registrationType) { DARABONBA_PTR_SET_VALUE(registrationType_, registrationType) };


  protected:
    // Face ID.
    std::shared_ptr<string> faceId_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Face image URL.
    std::shared_ptr<string> imgOssUrl_ = nullptr;
    // Merchant User ID.
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // Registration type.
    std::shared_ptr<string> registrationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
