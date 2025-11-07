// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID3METAVERIFYWITHOCRRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_ID3METAVERIFYWITHOCRRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id3MetaVerifyWithOCRResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id3MetaVerifyWithOCRResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(CardInfo, cardInfo_);
      DARABONBA_PTR_TO_JSON(FaceDetail, faceDetail_);
    };
    friend void from_json(const Darabonba::Json& j, Id3MetaVerifyWithOCRResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(CardInfo, cardInfo_);
      DARABONBA_PTR_FROM_JSON(FaceDetail, faceDetail_);
    };
    Id3MetaVerifyWithOCRResponseBodyResultObject() = default ;
    Id3MetaVerifyWithOCRResponseBodyResultObject(const Id3MetaVerifyWithOCRResponseBodyResultObject &) = default ;
    Id3MetaVerifyWithOCRResponseBodyResultObject(Id3MetaVerifyWithOCRResponseBodyResultObject &&) = default ;
    Id3MetaVerifyWithOCRResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id3MetaVerifyWithOCRResponseBodyResultObject() = default ;
    Id3MetaVerifyWithOCRResponseBodyResultObject& operator=(const Id3MetaVerifyWithOCRResponseBodyResultObject &) = default ;
    Id3MetaVerifyWithOCRResponseBodyResultObject& operator=(Id3MetaVerifyWithOCRResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->cardInfo_ == nullptr && return this->faceDetail_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline Id3MetaVerifyWithOCRResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // cardInfo Field Functions 
    bool hasCardInfo() const { return this->cardInfo_ != nullptr;};
    void deleteCardInfo() { this->cardInfo_ = nullptr;};
    inline string cardInfo() const { DARABONBA_PTR_GET_DEFAULT(cardInfo_, "") };
    inline Id3MetaVerifyWithOCRResponseBodyResultObject& setCardInfo(string cardInfo) { DARABONBA_PTR_SET_VALUE(cardInfo_, cardInfo) };


    // faceDetail Field Functions 
    bool hasFaceDetail() const { return this->faceDetail_ != nullptr;};
    void deleteFaceDetail() { this->faceDetail_ = nullptr;};
    inline string faceDetail() const { DARABONBA_PTR_GET_DEFAULT(faceDetail_, "") };
    inline Id3MetaVerifyWithOCRResponseBodyResultObject& setFaceDetail(string faceDetail) { DARABONBA_PTR_SET_VALUE(faceDetail_, faceDetail) };


  protected:
    // Identity verification result:
    // 
    // - 1: Consistent
    // - 2: Inconsistent
    // - 3: No record found
    std::shared_ptr<string> bizCode_ = nullptr;
    // Card ocr result.
    std::shared_ptr<string> cardInfo_ = nullptr;
    // Face comparison score.
    std::shared_ptr<string> faceDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
