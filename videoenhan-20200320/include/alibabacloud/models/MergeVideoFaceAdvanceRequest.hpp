// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEVIDEOFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERGEVIDEOFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class MergeVideoFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeVideoFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddWatermark, addWatermark_);
      DARABONBA_PTR_TO_JSON(Enhance, enhance_);
      DARABONBA_TO_JSON(ReferenceURL, referenceURLObject_);
      DARABONBA_TO_JSON(VideoURL, videoURLObject_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
    };
    friend void from_json(const Darabonba::Json& j, MergeVideoFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddWatermark, addWatermark_);
      DARABONBA_PTR_FROM_JSON(Enhance, enhance_);
      DARABONBA_FROM_JSON(ReferenceURL, referenceURLObject_);
      DARABONBA_FROM_JSON(VideoURL, videoURLObject_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
    };
    MergeVideoFaceAdvanceRequest() = default ;
    MergeVideoFaceAdvanceRequest(const MergeVideoFaceAdvanceRequest &) = default ;
    MergeVideoFaceAdvanceRequest(MergeVideoFaceAdvanceRequest &&) = default ;
    MergeVideoFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeVideoFaceAdvanceRequest() = default ;
    MergeVideoFaceAdvanceRequest& operator=(const MergeVideoFaceAdvanceRequest &) = default ;
    MergeVideoFaceAdvanceRequest& operator=(MergeVideoFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addWatermark_ != nullptr
        && this->enhance_ != nullptr && this->referenceURLObject_ != nullptr && this->videoURLObject_ != nullptr && this->watermarkType_ != nullptr; };
    // addWatermark Field Functions 
    bool hasAddWatermark() const { return this->addWatermark_ != nullptr;};
    void deleteAddWatermark() { this->addWatermark_ = nullptr;};
    inline bool addWatermark() const { DARABONBA_PTR_GET_DEFAULT(addWatermark_, false) };
    inline MergeVideoFaceAdvanceRequest& setAddWatermark(bool addWatermark) { DARABONBA_PTR_SET_VALUE(addWatermark_, addWatermark) };


    // enhance Field Functions 
    bool hasEnhance() const { return this->enhance_ != nullptr;};
    void deleteEnhance() { this->enhance_ = nullptr;};
    inline bool enhance() const { DARABONBA_PTR_GET_DEFAULT(enhance_, false) };
    inline MergeVideoFaceAdvanceRequest& setEnhance(bool enhance) { DARABONBA_PTR_SET_VALUE(enhance_, enhance) };


    // referenceURLObject Field Functions 
    bool hasReferenceURLObject() const { return this->referenceURLObject_ != nullptr;};
    void deleteReferenceURLObject() { this->referenceURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> referenceURLObject() const { DARABONBA_GET(referenceURLObject_) };
    inline MergeVideoFaceAdvanceRequest& setReferenceURLObject(shared_ptr<Darabonba::IStream> referenceURLObject) { DARABONBA_SET_VALUE(referenceURLObject_, referenceURLObject) };


    // videoURLObject Field Functions 
    bool hasVideoURLObject() const { return this->videoURLObject_ != nullptr;};
    void deleteVideoURLObject() { this->videoURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoURLObject() const { DARABONBA_GET(videoURLObject_) };
    inline MergeVideoFaceAdvanceRequest& setVideoURLObject(shared_ptr<Darabonba::IStream> videoURLObject) { DARABONBA_SET_VALUE(videoURLObject_, videoURLObject) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline MergeVideoFaceAdvanceRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


  protected:
    std::shared_ptr<bool> addWatermark_ = nullptr;
    std::shared_ptr<bool> enhance_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> referenceURLObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoURLObject_ = nullptr;
    std::shared_ptr<string> watermarkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
