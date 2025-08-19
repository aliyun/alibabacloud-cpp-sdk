// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECARDVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECARDVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeCardVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCardVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(CardInfo, cardInfo_);
      DARABONBA_PTR_TO_JSON(FaceDetail, faceDetail_);
      DARABONBA_PTR_TO_JSON(OcrCardInfo, ocrCardInfo_);
      DARABONBA_PTR_TO_JSON(PictureInfo, pictureInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCardVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(CardInfo, cardInfo_);
      DARABONBA_PTR_FROM_JSON(FaceDetail, faceDetail_);
      DARABONBA_PTR_FROM_JSON(OcrCardInfo, ocrCardInfo_);
      DARABONBA_PTR_FROM_JSON(PictureInfo, pictureInfo_);
    };
    DescribeCardVerifyResponseBodyResultObject() = default ;
    DescribeCardVerifyResponseBodyResultObject(const DescribeCardVerifyResponseBodyResultObject &) = default ;
    DescribeCardVerifyResponseBodyResultObject(DescribeCardVerifyResponseBodyResultObject &&) = default ;
    DescribeCardVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCardVerifyResponseBodyResultObject() = default ;
    DescribeCardVerifyResponseBodyResultObject& operator=(const DescribeCardVerifyResponseBodyResultObject &) = default ;
    DescribeCardVerifyResponseBodyResultObject& operator=(DescribeCardVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizCode_ != nullptr
        && this->cardInfo_ != nullptr && this->faceDetail_ != nullptr && this->ocrCardInfo_ != nullptr && this->pictureInfo_ != nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline DescribeCardVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // cardInfo Field Functions 
    bool hasCardInfo() const { return this->cardInfo_ != nullptr;};
    void deleteCardInfo() { this->cardInfo_ = nullptr;};
    inline string cardInfo() const { DARABONBA_PTR_GET_DEFAULT(cardInfo_, "") };
    inline DescribeCardVerifyResponseBodyResultObject& setCardInfo(string cardInfo) { DARABONBA_PTR_SET_VALUE(cardInfo_, cardInfo) };


    // faceDetail Field Functions 
    bool hasFaceDetail() const { return this->faceDetail_ != nullptr;};
    void deleteFaceDetail() { this->faceDetail_ = nullptr;};
    inline string faceDetail() const { DARABONBA_PTR_GET_DEFAULT(faceDetail_, "") };
    inline DescribeCardVerifyResponseBodyResultObject& setFaceDetail(string faceDetail) { DARABONBA_PTR_SET_VALUE(faceDetail_, faceDetail) };


    // ocrCardInfo Field Functions 
    bool hasOcrCardInfo() const { return this->ocrCardInfo_ != nullptr;};
    void deleteOcrCardInfo() { this->ocrCardInfo_ = nullptr;};
    inline string ocrCardInfo() const { DARABONBA_PTR_GET_DEFAULT(ocrCardInfo_, "") };
    inline DescribeCardVerifyResponseBodyResultObject& setOcrCardInfo(string ocrCardInfo) { DARABONBA_PTR_SET_VALUE(ocrCardInfo_, ocrCardInfo) };


    // pictureInfo Field Functions 
    bool hasPictureInfo() const { return this->pictureInfo_ != nullptr;};
    void deletePictureInfo() { this->pictureInfo_ = nullptr;};
    inline string pictureInfo() const { DARABONBA_PTR_GET_DEFAULT(pictureInfo_, "") };
    inline DescribeCardVerifyResponseBodyResultObject& setPictureInfo(string pictureInfo) { DARABONBA_PTR_SET_VALUE(pictureInfo_, pictureInfo) };


  protected:
    std::shared_ptr<string> bizCode_ = nullptr;
    std::shared_ptr<string> cardInfo_ = nullptr;
    std::shared_ptr<string> faceDetail_ = nullptr;
    std::shared_ptr<string> ocrCardInfo_ = nullptr;
    std::shared_ptr<string> pictureInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
