// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEVIDEOFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERGEVIDEOFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class MergeVideoFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeVideoFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddWatermark, addWatermark_);
      DARABONBA_PTR_TO_JSON(Enhance, enhance_);
      DARABONBA_PTR_TO_JSON(ReferenceURL, referenceURL_);
      DARABONBA_PTR_TO_JSON(VideoURL, videoURL_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
    };
    friend void from_json(const Darabonba::Json& j, MergeVideoFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddWatermark, addWatermark_);
      DARABONBA_PTR_FROM_JSON(Enhance, enhance_);
      DARABONBA_PTR_FROM_JSON(ReferenceURL, referenceURL_);
      DARABONBA_PTR_FROM_JSON(VideoURL, videoURL_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
    };
    MergeVideoFaceRequest() = default ;
    MergeVideoFaceRequest(const MergeVideoFaceRequest &) = default ;
    MergeVideoFaceRequest(MergeVideoFaceRequest &&) = default ;
    MergeVideoFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeVideoFaceRequest() = default ;
    MergeVideoFaceRequest& operator=(const MergeVideoFaceRequest &) = default ;
    MergeVideoFaceRequest& operator=(MergeVideoFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addWatermark_ != nullptr
        && this->enhance_ != nullptr && this->referenceURL_ != nullptr && this->videoURL_ != nullptr && this->watermarkType_ != nullptr; };
    // addWatermark Field Functions 
    bool hasAddWatermark() const { return this->addWatermark_ != nullptr;};
    void deleteAddWatermark() { this->addWatermark_ = nullptr;};
    inline bool addWatermark() const { DARABONBA_PTR_GET_DEFAULT(addWatermark_, false) };
    inline MergeVideoFaceRequest& setAddWatermark(bool addWatermark) { DARABONBA_PTR_SET_VALUE(addWatermark_, addWatermark) };


    // enhance Field Functions 
    bool hasEnhance() const { return this->enhance_ != nullptr;};
    void deleteEnhance() { this->enhance_ = nullptr;};
    inline bool enhance() const { DARABONBA_PTR_GET_DEFAULT(enhance_, false) };
    inline MergeVideoFaceRequest& setEnhance(bool enhance) { DARABONBA_PTR_SET_VALUE(enhance_, enhance) };


    // referenceURL Field Functions 
    bool hasReferenceURL() const { return this->referenceURL_ != nullptr;};
    void deleteReferenceURL() { this->referenceURL_ = nullptr;};
    inline string referenceURL() const { DARABONBA_PTR_GET_DEFAULT(referenceURL_, "") };
    inline MergeVideoFaceRequest& setReferenceURL(string referenceURL) { DARABONBA_PTR_SET_VALUE(referenceURL_, referenceURL) };


    // videoURL Field Functions 
    bool hasVideoURL() const { return this->videoURL_ != nullptr;};
    void deleteVideoURL() { this->videoURL_ = nullptr;};
    inline string videoURL() const { DARABONBA_PTR_GET_DEFAULT(videoURL_, "") };
    inline MergeVideoFaceRequest& setVideoURL(string videoURL) { DARABONBA_PTR_SET_VALUE(videoURL_, videoURL) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline MergeVideoFaceRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


  protected:
    std::shared_ptr<bool> addWatermark_ = nullptr;
    std::shared_ptr<bool> enhance_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> referenceURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoURL_ = nullptr;
    std::shared_ptr<string> watermarkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
