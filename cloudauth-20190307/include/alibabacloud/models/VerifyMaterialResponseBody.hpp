// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYMATERIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYMATERIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyMaterialResponseBodyMaterial.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VerifyMaterialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyMaterialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityComparisionScore, authorityComparisionScore_);
      DARABONBA_PTR_TO_JSON(IdCardFaceComparisonScore, idCardFaceComparisonScore_);
      DARABONBA_PTR_TO_JSON(Material, material_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VerifyStatus, verifyStatus_);
      DARABONBA_PTR_TO_JSON(VerifyToken, verifyToken_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyMaterialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityComparisionScore, authorityComparisionScore_);
      DARABONBA_PTR_FROM_JSON(IdCardFaceComparisonScore, idCardFaceComparisonScore_);
      DARABONBA_PTR_FROM_JSON(Material, material_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VerifyStatus, verifyStatus_);
      DARABONBA_PTR_FROM_JSON(VerifyToken, verifyToken_);
    };
    VerifyMaterialResponseBody() = default ;
    VerifyMaterialResponseBody(const VerifyMaterialResponseBody &) = default ;
    VerifyMaterialResponseBody(VerifyMaterialResponseBody &&) = default ;
    VerifyMaterialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyMaterialResponseBody() = default ;
    VerifyMaterialResponseBody& operator=(const VerifyMaterialResponseBody &) = default ;
    VerifyMaterialResponseBody& operator=(VerifyMaterialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorityComparisionScore_ == nullptr
        && return this->idCardFaceComparisonScore_ == nullptr && return this->material_ == nullptr && return this->requestId_ == nullptr && return this->verifyStatus_ == nullptr && return this->verifyToken_ == nullptr; };
    // authorityComparisionScore Field Functions 
    bool hasAuthorityComparisionScore() const { return this->authorityComparisionScore_ != nullptr;};
    void deleteAuthorityComparisionScore() { this->authorityComparisionScore_ = nullptr;};
    inline float authorityComparisionScore() const { DARABONBA_PTR_GET_DEFAULT(authorityComparisionScore_, 0.0) };
    inline VerifyMaterialResponseBody& setAuthorityComparisionScore(float authorityComparisionScore) { DARABONBA_PTR_SET_VALUE(authorityComparisionScore_, authorityComparisionScore) };


    // idCardFaceComparisonScore Field Functions 
    bool hasIdCardFaceComparisonScore() const { return this->idCardFaceComparisonScore_ != nullptr;};
    void deleteIdCardFaceComparisonScore() { this->idCardFaceComparisonScore_ = nullptr;};
    inline float idCardFaceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(idCardFaceComparisonScore_, 0.0) };
    inline VerifyMaterialResponseBody& setIdCardFaceComparisonScore(float idCardFaceComparisonScore) { DARABONBA_PTR_SET_VALUE(idCardFaceComparisonScore_, idCardFaceComparisonScore) };


    // material Field Functions 
    bool hasMaterial() const { return this->material_ != nullptr;};
    void deleteMaterial() { this->material_ = nullptr;};
    inline const VerifyMaterialResponseBodyMaterial & material() const { DARABONBA_PTR_GET_CONST(material_, VerifyMaterialResponseBodyMaterial) };
    inline VerifyMaterialResponseBodyMaterial material() { DARABONBA_PTR_GET(material_, VerifyMaterialResponseBodyMaterial) };
    inline VerifyMaterialResponseBody& setMaterial(const VerifyMaterialResponseBodyMaterial & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
    inline VerifyMaterialResponseBody& setMaterial(VerifyMaterialResponseBodyMaterial && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyMaterialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyStatus Field Functions 
    bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
    void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
    inline int32_t verifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, 0) };
    inline VerifyMaterialResponseBody& setVerifyStatus(int32_t verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


    // verifyToken Field Functions 
    bool hasVerifyToken() const { return this->verifyToken_ != nullptr;};
    void deleteVerifyToken() { this->verifyToken_ = nullptr;};
    inline string verifyToken() const { DARABONBA_PTR_GET_DEFAULT(verifyToken_, "") };
    inline VerifyMaterialResponseBody& setVerifyToken(string verifyToken) { DARABONBA_PTR_SET_VALUE(verifyToken_, verifyToken) };


  protected:
    // Comparison score between the facial photo submitted during the authentication process and authoritative data, with a range of **0**~**100**.
    // 
    // Confidence threshold references:
    // - False recognition rate 0.001% corresponds to a threshold of 95.
    // - False recognition rate 0.01% corresponds to a threshold of 90.
    // - False recognition rate 0.1% corresponds to a threshold of 80.
    // - False recognition rate 1% corresponds to a threshold of 60.
    // 
    // > This field only indicates the comparison result between the face and authoritative data, serving as a reference score. It is generally not recommended to use this score alone as the pass/fail criterion. For the comprehensive authentication result, please refer to the **VerifyStatus** field. The **VerifyStatus** result integrates the face-to-authoritative data comparison and other various strategies, enhancing security levels.
    std::shared_ptr<float> authorityComparisionScore_ = nullptr;
    // Comparison score between the facial photo submitted during the authentication process and the face on the portrait side of the ID card image, with a range of **0**~**100**.
    // 
    // Confidence threshold references:
    // - False recognition rate 0.001% corresponds to a threshold of 95.
    // - False recognition rate 0.01% corresponds to a threshold of 90.
    // - False recognition rate 0.1% corresponds to a threshold of 80.
    // - False recognition rate 1% corresponds to a threshold of 60.
    std::shared_ptr<float> idCardFaceComparisonScore_ = nullptr;
    // Authentication materials.
    std::shared_ptr<VerifyMaterialResponseBodyMaterial> material_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Authentication status. Values:
    // 
    // - **1**: Authentication passed.
    // - **2**~**n**: Authentication failed due to various reasons. For detailed descriptions, see the **Authentication Status Explanation** below.
    std::shared_ptr<int32_t> verifyStatus_ = nullptr;
    // Token for this authentication, used to link various interfaces in the authentication request, valid for 30 minutes.
    std::shared_ptr<string> verifyToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
