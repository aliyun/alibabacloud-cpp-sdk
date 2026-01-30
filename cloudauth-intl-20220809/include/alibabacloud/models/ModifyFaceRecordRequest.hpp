// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFACERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFACERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class ModifyFaceRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFaceRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_TO_JSON(ImgOssInfos, imgOssInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFaceRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_FROM_JSON(ImgOssInfos, imgOssInfos_);
    };
    ModifyFaceRecordRequest() = default ;
    ModifyFaceRecordRequest(const ModifyFaceRecordRequest &) = default ;
    ModifyFaceRecordRequest(ModifyFaceRecordRequest &&) = default ;
    ModifyFaceRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFaceRecordRequest() = default ;
    ModifyFaceRecordRequest& operator=(const ModifyFaceRecordRequest &) = default ;
    ModifyFaceRecordRequest& operator=(ModifyFaceRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceGroupCode_ == nullptr
        && this->imgOssInfos_ == nullptr; };
    // faceGroupCode Field Functions 
    bool hasFaceGroupCode() const { return this->faceGroupCode_ != nullptr;};
    void deleteFaceGroupCode() { this->faceGroupCode_ = nullptr;};
    inline string getFaceGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCode_, "") };
    inline ModifyFaceRecordRequest& setFaceGroupCode(string faceGroupCode) { DARABONBA_PTR_SET_VALUE(faceGroupCode_, faceGroupCode) };


    // imgOssInfos Field Functions 
    bool hasImgOssInfos() const { return this->imgOssInfos_ != nullptr;};
    void deleteImgOssInfos() { this->imgOssInfos_ = nullptr;};
    inline string getImgOssInfos() const { DARABONBA_PTR_GET_DEFAULT(imgOssInfos_, "") };
    inline ModifyFaceRecordRequest& setImgOssInfos(string imgOssInfos) { DARABONBA_PTR_SET_VALUE(imgOssInfos_, imgOssInfos) };


  protected:
    // This parameter is required.
    shared_ptr<string> faceGroupCode_ {};
    // This parameter is required.
    shared_ptr<string> imgOssInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
