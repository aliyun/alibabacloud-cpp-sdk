// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFACEVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFACEVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeFaceVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaceVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(PictureReturnType, pictureReturnType_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaceVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(PictureReturnType, pictureReturnType_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    DescribeFaceVerifyRequest() = default ;
    DescribeFaceVerifyRequest(const DescribeFaceVerifyRequest &) = default ;
    DescribeFaceVerifyRequest(DescribeFaceVerifyRequest &&) = default ;
    DescribeFaceVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaceVerifyRequest() = default ;
    DescribeFaceVerifyRequest& operator=(const DescribeFaceVerifyRequest &) = default ;
    DescribeFaceVerifyRequest& operator=(DescribeFaceVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certifyId_ != nullptr
        && this->pictureReturnType_ != nullptr && this->sceneId_ != nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeFaceVerifyRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // pictureReturnType Field Functions 
    bool hasPictureReturnType() const { return this->pictureReturnType_ != nullptr;};
    void deletePictureReturnType() { this->pictureReturnType_ = nullptr;};
    inline string pictureReturnType() const { DARABONBA_PTR_GET_DEFAULT(pictureReturnType_, "") };
    inline DescribeFaceVerifyRequest& setPictureReturnType(string pictureReturnType) { DARABONBA_PTR_SET_VALUE(pictureReturnType_, pictureReturnType) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeFaceVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    std::shared_ptr<string> certifyId_ = nullptr;
    std::shared_ptr<string> pictureReturnType_ = nullptr;
    std::shared_ptr<int64_t> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
