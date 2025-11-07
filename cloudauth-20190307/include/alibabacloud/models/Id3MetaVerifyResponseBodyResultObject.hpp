// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID3METAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_ID3METAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id3MetaVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id3MetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(FaceDetail, faceDetail_);
    };
    friend void from_json(const Darabonba::Json& j, Id3MetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(FaceDetail, faceDetail_);
    };
    Id3MetaVerifyResponseBodyResultObject() = default ;
    Id3MetaVerifyResponseBodyResultObject(const Id3MetaVerifyResponseBodyResultObject &) = default ;
    Id3MetaVerifyResponseBodyResultObject(Id3MetaVerifyResponseBodyResultObject &&) = default ;
    Id3MetaVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id3MetaVerifyResponseBodyResultObject() = default ;
    Id3MetaVerifyResponseBodyResultObject& operator=(const Id3MetaVerifyResponseBodyResultObject &) = default ;
    Id3MetaVerifyResponseBodyResultObject& operator=(Id3MetaVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->faceDetail_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline Id3MetaVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // faceDetail Field Functions 
    bool hasFaceDetail() const { return this->faceDetail_ != nullptr;};
    void deleteFaceDetail() { this->faceDetail_ = nullptr;};
    inline string faceDetail() const { DARABONBA_PTR_GET_DEFAULT(faceDetail_, "") };
    inline Id3MetaVerifyResponseBodyResultObject& setFaceDetail(string faceDetail) { DARABONBA_PTR_SET_VALUE(faceDetail_, faceDetail) };


  protected:
    // Identity verification result:
    // 
    // - 1: Consistent
    // - 2: Inconsistent
    // - 3: No record found
    std::shared_ptr<string> bizCode_ = nullptr;
    // Image comparison score.
    std::shared_ptr<string> faceDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
