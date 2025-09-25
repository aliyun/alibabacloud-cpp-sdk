// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVerifyResultResponseBodyMaterial.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityComparisionScore, authorityComparisionScore_);
      DARABONBA_PTR_TO_JSON(FaceComparisonScore, faceComparisonScore_);
      DARABONBA_PTR_TO_JSON(IdCardFaceComparisonScore, idCardFaceComparisonScore_);
      DARABONBA_PTR_TO_JSON(Material, material_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VerifyStatus, verifyStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityComparisionScore, authorityComparisionScore_);
      DARABONBA_PTR_FROM_JSON(FaceComparisonScore, faceComparisonScore_);
      DARABONBA_PTR_FROM_JSON(IdCardFaceComparisonScore, idCardFaceComparisonScore_);
      DARABONBA_PTR_FROM_JSON(Material, material_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VerifyStatus, verifyStatus_);
    };
    DescribeVerifyResultResponseBody() = default ;
    DescribeVerifyResultResponseBody(const DescribeVerifyResultResponseBody &) = default ;
    DescribeVerifyResultResponseBody(DescribeVerifyResultResponseBody &&) = default ;
    DescribeVerifyResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyResultResponseBody() = default ;
    DescribeVerifyResultResponseBody& operator=(const DescribeVerifyResultResponseBody &) = default ;
    DescribeVerifyResultResponseBody& operator=(DescribeVerifyResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorityComparisionScore_ != nullptr
        && this->faceComparisonScore_ != nullptr && this->idCardFaceComparisonScore_ != nullptr && this->material_ != nullptr && this->requestId_ != nullptr && this->verifyStatus_ != nullptr; };
    // authorityComparisionScore Field Functions 
    bool hasAuthorityComparisionScore() const { return this->authorityComparisionScore_ != nullptr;};
    void deleteAuthorityComparisionScore() { this->authorityComparisionScore_ = nullptr;};
    inline float authorityComparisionScore() const { DARABONBA_PTR_GET_DEFAULT(authorityComparisionScore_, 0.0) };
    inline DescribeVerifyResultResponseBody& setAuthorityComparisionScore(float authorityComparisionScore) { DARABONBA_PTR_SET_VALUE(authorityComparisionScore_, authorityComparisionScore) };


    // faceComparisonScore Field Functions 
    bool hasFaceComparisonScore() const { return this->faceComparisonScore_ != nullptr;};
    void deleteFaceComparisonScore() { this->faceComparisonScore_ = nullptr;};
    inline float faceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScore_, 0.0) };
    inline DescribeVerifyResultResponseBody& setFaceComparisonScore(float faceComparisonScore) { DARABONBA_PTR_SET_VALUE(faceComparisonScore_, faceComparisonScore) };


    // idCardFaceComparisonScore Field Functions 
    bool hasIdCardFaceComparisonScore() const { return this->idCardFaceComparisonScore_ != nullptr;};
    void deleteIdCardFaceComparisonScore() { this->idCardFaceComparisonScore_ = nullptr;};
    inline float idCardFaceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(idCardFaceComparisonScore_, 0.0) };
    inline DescribeVerifyResultResponseBody& setIdCardFaceComparisonScore(float idCardFaceComparisonScore) { DARABONBA_PTR_SET_VALUE(idCardFaceComparisonScore_, idCardFaceComparisonScore) };


    // material Field Functions 
    bool hasMaterial() const { return this->material_ != nullptr;};
    void deleteMaterial() { this->material_ = nullptr;};
    inline const DescribeVerifyResultResponseBodyMaterial & material() const { DARABONBA_PTR_GET_CONST(material_, DescribeVerifyResultResponseBodyMaterial) };
    inline DescribeVerifyResultResponseBodyMaterial material() { DARABONBA_PTR_GET(material_, DescribeVerifyResultResponseBodyMaterial) };
    inline DescribeVerifyResultResponseBody& setMaterial(const DescribeVerifyResultResponseBodyMaterial & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
    inline DescribeVerifyResultResponseBody& setMaterial(DescribeVerifyResultResponseBodyMaterial && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyStatus Field Functions 
    bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
    void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
    inline int32_t verifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, 0) };
    inline DescribeVerifyResultResponseBody& setVerifyStatus(int32_t verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


  protected:
    // The comparison score between the face photo submitted during the authentication process and the authoritative data, with a value range of **0** to **100**.
    // Confidence threshold references:
    // - When the false acceptance rate is 0.001%, the corresponding threshold is 95. - When the false acceptance rate is 0.01%, the corresponding threshold is 90. - When the false acceptance rate is 0.1%, the corresponding threshold is 80. - When the false acceptance rate is 1%, the corresponding threshold is 60.
    // > This field only indicates the comparison result between the face and the authoritative data, for your reference only. It is generally not recommended to use this value alone as the standard for whether the authentication passes. For a comprehensive authentication result, please refer to the **VerifyStatus** field. The **VerifyStatus** result integrates the comparison of the face with the authoritative data and various other strategies, which can enhance security levels.
    std::shared_ptr<float> authorityComparisionScore_ = nullptr;
    // The comparison score between the face photo submitted during the authentication process and the face in the retained face image. The value range is **0**~**100**.
    // 
    // Confidence threshold reference:
    // 
    // - When the false recognition rate is 0.001%, the corresponding threshold is 95.
    // - When the false recognition rate is 0.01%, the corresponding threshold is 90.
    // - When the false recognition rate is 0.1%, the corresponding threshold is 80.
    // - When the false recognition rate is 1%, the corresponding threshold is 60.
    std::shared_ptr<float> faceComparisonScore_ = nullptr;
    // The comparison score between the face photo submitted during the authentication process and the face on the ID card\\"s face side. The value range is **0**~**100**.
    // 
    // Confidence threshold reference:
    // 
    // - When the false recognition rate is 0.001%, the corresponding threshold is 95.
    // - When the false recognition rate is 0.01%, the corresponding threshold is 90.
    // - When the false recognition rate is 0.1%, the corresponding threshold is 80.
    // - When the false recognition rate is 1%, the corresponding threshold is 60.
    std::shared_ptr<float> idCardFaceComparisonScore_ = nullptr;
    // Authentication materials.
    std::shared_ptr<DescribeVerifyResultResponseBodyMaterial> material_ = nullptr;
    // The ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Authentication status, values:
    // - **-1**: Not authenticated - **1**: Authentication passed - **2** to **n**: Authentication failed for various reasons. For detailed descriptions, see the authentication status explanation.
    std::shared_ptr<int32_t> verifyStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
