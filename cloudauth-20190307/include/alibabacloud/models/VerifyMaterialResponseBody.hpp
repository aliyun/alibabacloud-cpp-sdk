// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYMATERIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYMATERIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Material : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Material& obj) { 
        DARABONBA_PTR_TO_JSON(FaceGlobalUrl, faceGlobalUrl_);
        DARABONBA_PTR_TO_JSON(FaceImageUrl, faceImageUrl_);
        DARABONBA_PTR_TO_JSON(FaceMask, faceMask_);
        DARABONBA_PTR_TO_JSON(FaceQuality, faceQuality_);
        DARABONBA_PTR_TO_JSON(IdCardInfo, idCardInfo_);
        DARABONBA_PTR_TO_JSON(IdCardName, idCardName_);
        DARABONBA_PTR_TO_JSON(IdCardNumber, idCardNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Material& obj) { 
        DARABONBA_PTR_FROM_JSON(FaceGlobalUrl, faceGlobalUrl_);
        DARABONBA_PTR_FROM_JSON(FaceImageUrl, faceImageUrl_);
        DARABONBA_PTR_FROM_JSON(FaceMask, faceMask_);
        DARABONBA_PTR_FROM_JSON(FaceQuality, faceQuality_);
        DARABONBA_PTR_FROM_JSON(IdCardInfo, idCardInfo_);
        DARABONBA_PTR_FROM_JSON(IdCardName, idCardName_);
        DARABONBA_PTR_FROM_JSON(IdCardNumber, idCardNumber_);
      };
      Material() = default ;
      Material(const Material &) = default ;
      Material(Material &&) = default ;
      Material(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Material() = default ;
      Material& operator=(const Material &) = default ;
      Material& operator=(Material &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IdCardInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IdCardInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(Authority, authority_);
          DARABONBA_PTR_TO_JSON(BackImageUrl, backImageUrl_);
          DARABONBA_PTR_TO_JSON(Birth, birth_);
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(FrontImageUrl, frontImageUrl_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Nationality, nationality_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        };
        friend void from_json(const Darabonba::Json& j, IdCardInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(Authority, authority_);
          DARABONBA_PTR_FROM_JSON(BackImageUrl, backImageUrl_);
          DARABONBA_PTR_FROM_JSON(Birth, birth_);
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(FrontImageUrl, frontImageUrl_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Nationality, nationality_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        };
        IdCardInfo() = default ;
        IdCardInfo(const IdCardInfo &) = default ;
        IdCardInfo(IdCardInfo &&) = default ;
        IdCardInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IdCardInfo() = default ;
        IdCardInfo& operator=(const IdCardInfo &) = default ;
        IdCardInfo& operator=(IdCardInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->authority_ == nullptr && this->backImageUrl_ == nullptr && this->birth_ == nullptr && this->endDate_ == nullptr && this->frontImageUrl_ == nullptr
        && this->name_ == nullptr && this->nationality_ == nullptr && this->number_ == nullptr && this->startDate_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline IdCardInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // authority Field Functions 
        bool hasAuthority() const { return this->authority_ != nullptr;};
        void deleteAuthority() { this->authority_ = nullptr;};
        inline string getAuthority() const { DARABONBA_PTR_GET_DEFAULT(authority_, "") };
        inline IdCardInfo& setAuthority(string authority) { DARABONBA_PTR_SET_VALUE(authority_, authority) };


        // backImageUrl Field Functions 
        bool hasBackImageUrl() const { return this->backImageUrl_ != nullptr;};
        void deleteBackImageUrl() { this->backImageUrl_ = nullptr;};
        inline string getBackImageUrl() const { DARABONBA_PTR_GET_DEFAULT(backImageUrl_, "") };
        inline IdCardInfo& setBackImageUrl(string backImageUrl) { DARABONBA_PTR_SET_VALUE(backImageUrl_, backImageUrl) };


        // birth Field Functions 
        bool hasBirth() const { return this->birth_ != nullptr;};
        void deleteBirth() { this->birth_ = nullptr;};
        inline string getBirth() const { DARABONBA_PTR_GET_DEFAULT(birth_, "") };
        inline IdCardInfo& setBirth(string birth) { DARABONBA_PTR_SET_VALUE(birth_, birth) };


        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline IdCardInfo& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // frontImageUrl Field Functions 
        bool hasFrontImageUrl() const { return this->frontImageUrl_ != nullptr;};
        void deleteFrontImageUrl() { this->frontImageUrl_ = nullptr;};
        inline string getFrontImageUrl() const { DARABONBA_PTR_GET_DEFAULT(frontImageUrl_, "") };
        inline IdCardInfo& setFrontImageUrl(string frontImageUrl) { DARABONBA_PTR_SET_VALUE(frontImageUrl_, frontImageUrl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline IdCardInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nationality Field Functions 
        bool hasNationality() const { return this->nationality_ != nullptr;};
        void deleteNationality() { this->nationality_ = nullptr;};
        inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
        inline IdCardInfo& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline IdCardInfo& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
        inline IdCardInfo& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      protected:
        // The address.
        shared_ptr<string> address_ {};
        // The issuing authority.
        shared_ptr<string> authority_ {};
        // The HTTP or HTTPS URL of the national emblem side of the ID card. The URL is valid for 5 minutes. Save the image to your own storage to avoid access issues.
        shared_ptr<string> backImageUrl_ {};
        // The date of birth.
        shared_ptr<string> birth_ {};
        // The expiration date of the ID card. Format: yyyymmdd.
        shared_ptr<string> endDate_ {};
        // The HTTP or HTTPS URL of the portrait side of the ID card. The URL is valid for 5 minutes. Save the image to your own storage to avoid access issues.
        shared_ptr<string> frontImageUrl_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The ethnicity.
        shared_ptr<string> nationality_ {};
        // The ID card number.
        shared_ptr<string> number_ {};
        // The start date of the ID card validity period. Format: yyyymmdd.
        shared_ptr<string> startDate_ {};
      };

      virtual bool empty() const override { return this->faceGlobalUrl_ == nullptr
        && this->faceImageUrl_ == nullptr && this->faceMask_ == nullptr && this->faceQuality_ == nullptr && this->idCardInfo_ == nullptr && this->idCardName_ == nullptr
        && this->idCardNumber_ == nullptr; };
      // faceGlobalUrl Field Functions 
      bool hasFaceGlobalUrl() const { return this->faceGlobalUrl_ != nullptr;};
      void deleteFaceGlobalUrl() { this->faceGlobalUrl_ = nullptr;};
      inline string getFaceGlobalUrl() const { DARABONBA_PTR_GET_DEFAULT(faceGlobalUrl_, "") };
      inline Material& setFaceGlobalUrl(string faceGlobalUrl) { DARABONBA_PTR_SET_VALUE(faceGlobalUrl_, faceGlobalUrl) };


      // faceImageUrl Field Functions 
      bool hasFaceImageUrl() const { return this->faceImageUrl_ != nullptr;};
      void deleteFaceImageUrl() { this->faceImageUrl_ = nullptr;};
      inline string getFaceImageUrl() const { DARABONBA_PTR_GET_DEFAULT(faceImageUrl_, "") };
      inline Material& setFaceImageUrl(string faceImageUrl) { DARABONBA_PTR_SET_VALUE(faceImageUrl_, faceImageUrl) };


      // faceMask Field Functions 
      bool hasFaceMask() const { return this->faceMask_ != nullptr;};
      void deleteFaceMask() { this->faceMask_ = nullptr;};
      inline string getFaceMask() const { DARABONBA_PTR_GET_DEFAULT(faceMask_, "") };
      inline Material& setFaceMask(string faceMask) { DARABONBA_PTR_SET_VALUE(faceMask_, faceMask) };


      // faceQuality Field Functions 
      bool hasFaceQuality() const { return this->faceQuality_ != nullptr;};
      void deleteFaceQuality() { this->faceQuality_ = nullptr;};
      inline string getFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(faceQuality_, "") };
      inline Material& setFaceQuality(string faceQuality) { DARABONBA_PTR_SET_VALUE(faceQuality_, faceQuality) };


      // idCardInfo Field Functions 
      bool hasIdCardInfo() const { return this->idCardInfo_ != nullptr;};
      void deleteIdCardInfo() { this->idCardInfo_ = nullptr;};
      inline const Material::IdCardInfo & getIdCardInfo() const { DARABONBA_PTR_GET_CONST(idCardInfo_, Material::IdCardInfo) };
      inline Material::IdCardInfo getIdCardInfo() { DARABONBA_PTR_GET(idCardInfo_, Material::IdCardInfo) };
      inline Material& setIdCardInfo(const Material::IdCardInfo & idCardInfo) { DARABONBA_PTR_SET_VALUE(idCardInfo_, idCardInfo) };
      inline Material& setIdCardInfo(Material::IdCardInfo && idCardInfo) { DARABONBA_PTR_SET_RVALUE(idCardInfo_, idCardInfo) };


      // idCardName Field Functions 
      bool hasIdCardName() const { return this->idCardName_ != nullptr;};
      void deleteIdCardName() { this->idCardName_ = nullptr;};
      inline string getIdCardName() const { DARABONBA_PTR_GET_DEFAULT(idCardName_, "") };
      inline Material& setIdCardName(string idCardName) { DARABONBA_PTR_SET_VALUE(idCardName_, idCardName) };


      // idCardNumber Field Functions 
      bool hasIdCardNumber() const { return this->idCardNumber_ != nullptr;};
      void deleteIdCardNumber() { this->idCardNumber_ = nullptr;};
      inline string getIdCardNumber() const { DARABONBA_PTR_GET_DEFAULT(idCardNumber_, "") };
      inline Material& setIdCardNumber(string idCardNumber) { DARABONBA_PTR_SET_VALUE(idCardNumber_, idCardNumber) };


    protected:
      // The global camera image captured by the ID Verification SDK.
      // 
      // > This parameter takes effect only after configuration. If you need to use this parameter, [submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
      shared_ptr<string> faceGlobalUrl_ {};
      // The HTTP or HTTPS URL of the front-facing facial photo, corresponding to the request parameter **FaceImageUrl**. The URL is valid for 5 minutes. Save the image to your own storage to avoid access issues.
      shared_ptr<string> faceImageUrl_ {};
      // Indicates whether the face is wearing a mask. Valid values:
      // - **true**: A mask is detected.
      // - **false**: No mask is detected.
      shared_ptr<string> faceMask_ {};
      // The quality of the front-facing facial photo. Valid values:
      // - **UNQUALIFIED**: poor quality
      // - **LOW**: low quality
      // - **NORMAL**: moderate quality
      // - **HIGH**: high quality.
      shared_ptr<string> faceQuality_ {};
      // The OCR result of the ID card information.
      // 
      // > If the front and back photos of the ID card are not provided during verification, the OCR result of the ID card information is not returned. Even if both photos are provided, not all information on the ID card is guaranteed to be returned. OCR may fail to recognize certain information due to issues such as poor photo quality. We recommend that your business logic does not strictly depend on the ID card OCR information.
      shared_ptr<Material::IdCardInfo> idCardInfo_ {};
      // The name, corresponding to the request parameter **Name**.
      shared_ptr<string> idCardName_ {};
      // The ID card number, corresponding to the request parameter **IdCardNumber**.
      shared_ptr<string> idCardNumber_ {};
    };

    virtual bool empty() const override { return this->authorityComparisionScore_ == nullptr
        && this->idCardFaceComparisonScore_ == nullptr && this->material_ == nullptr && this->requestId_ == nullptr && this->verifyStatus_ == nullptr && this->verifyToken_ == nullptr; };
    // authorityComparisionScore Field Functions 
    bool hasAuthorityComparisionScore() const { return this->authorityComparisionScore_ != nullptr;};
    void deleteAuthorityComparisionScore() { this->authorityComparisionScore_ = nullptr;};
    inline float getAuthorityComparisionScore() const { DARABONBA_PTR_GET_DEFAULT(authorityComparisionScore_, 0.0) };
    inline VerifyMaterialResponseBody& setAuthorityComparisionScore(float authorityComparisionScore) { DARABONBA_PTR_SET_VALUE(authorityComparisionScore_, authorityComparisionScore) };


    // idCardFaceComparisonScore Field Functions 
    bool hasIdCardFaceComparisonScore() const { return this->idCardFaceComparisonScore_ != nullptr;};
    void deleteIdCardFaceComparisonScore() { this->idCardFaceComparisonScore_ = nullptr;};
    inline float getIdCardFaceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(idCardFaceComparisonScore_, 0.0) };
    inline VerifyMaterialResponseBody& setIdCardFaceComparisonScore(float idCardFaceComparisonScore) { DARABONBA_PTR_SET_VALUE(idCardFaceComparisonScore_, idCardFaceComparisonScore) };


    // material Field Functions 
    bool hasMaterial() const { return this->material_ != nullptr;};
    void deleteMaterial() { this->material_ = nullptr;};
    inline const VerifyMaterialResponseBody::Material & getMaterial() const { DARABONBA_PTR_GET_CONST(material_, VerifyMaterialResponseBody::Material) };
    inline VerifyMaterialResponseBody::Material getMaterial() { DARABONBA_PTR_GET(material_, VerifyMaterialResponseBody::Material) };
    inline VerifyMaterialResponseBody& setMaterial(const VerifyMaterialResponseBody::Material & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
    inline VerifyMaterialResponseBody& setMaterial(VerifyMaterialResponseBody::Material && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyMaterialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyStatus Field Functions 
    bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
    void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
    inline int32_t getVerifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, 0) };
    inline VerifyMaterialResponseBody& setVerifyStatus(int32_t verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


    // verifyToken Field Functions 
    bool hasVerifyToken() const { return this->verifyToken_ != nullptr;};
    void deleteVerifyToken() { this->verifyToken_ = nullptr;};
    inline string getVerifyToken() const { DARABONBA_PTR_GET_DEFAULT(verifyToken_, "") };
    inline VerifyMaterialResponseBody& setVerifyToken(string verifyToken) { DARABONBA_PTR_SET_VALUE(verifyToken_, verifyToken) };


  protected:
    // The comparison score between the facial photo submitted during verification and the authoritative data. Value range: **0** to **100**.
    // 
    // Confidence thresholds for reference:
    // - At a false acceptance rate of 0.001%, the corresponding threshold is 95.
    // - At a false acceptance rate of 0.01%, the corresponding threshold is 90.
    // - At a false acceptance rate of 0.1%, the corresponding threshold is 80.
    // - At a false acceptance rate of 1%, the corresponding threshold is 60.
    // 
    // > This field only represents the comparison result between the face and the authoritative data and serves as a reference score. We do not recommend using this score alone as the pass/fail criterion. For the comprehensive verification result, refer to the **VerifyStatus** field. The **VerifyStatus** result combines the face-to-authoritative-data comparison with multiple other strategies to improve the security level.
    shared_ptr<float> authorityComparisionScore_ {};
    // The comparison score between the facial photo submitted during verification and the face on the portrait side of the ID card. Value range: **0** to **100**.
    // 
    // Confidence thresholds for reference:
    // - At a false acceptance rate of 0.001%, the corresponding threshold is 95.
    // - At a false acceptance rate of 0.01%, the corresponding threshold is 90.
    // - At a false acceptance rate of 0.1%, the corresponding threshold is 80.
    // - At a false acceptance rate of 1%, the corresponding threshold is 60.
    shared_ptr<float> idCardFaceComparisonScore_ {};
    // The verification materials.
    shared_ptr<VerifyMaterialResponseBody::Material> material_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The verification status. Valid values:
    // 
    // - **1**: Verification passed.
    // - **2** to **n**: Verification failed due to various reasons. For detailed descriptions, see **Verification status description** below.
    shared_ptr<int32_t> verifyStatus_ {};
    // The token for this verification, used to correlate the various operations within a verification request. The token is valid for 30 minutes.
    shared_ptr<string> verifyToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
