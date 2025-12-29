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
        // Address.
        shared_ptr<string> address_ {};
        // Issuing authority.
        shared_ptr<string> authority_ {};
        // HTTP or HTTPS link to the national emblem side of the ID card. The link is valid for 5 minutes. It is recommended to store it in your business system to avoid any impact on usage.
        shared_ptr<string> backImageUrl_ {};
        // Date of birth.
        shared_ptr<string> birth_ {};
        // End date of the document\\"s validity period. Format: yyyymmdd.
        shared_ptr<string> endDate_ {};
        // HTTP or HTTPS link to the portrait side of the ID card. The link is valid for 5 minutes. It is recommended to store it in your business system to avoid any impact on usage.
        shared_ptr<string> frontImageUrl_ {};
        // Name.
        shared_ptr<string> name_ {};
        // Nationality.
        shared_ptr<string> nationality_ {};
        // ID number.
        shared_ptr<string> number_ {};
        // Start date of the document\\"s validity period. Format: yyyymmdd.
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
      // Global camera image captured by the real-person authentication SDK.
      // 
      // > This parameter will take effect after configuration. If you need to use this parameter, please submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
      shared_ptr<string> faceGlobalUrl_ {};
      // HTTP or HTTPS link to the frontal face image, corresponding to the request parameter **FaceImageUrl**. The link is valid for 5 minutes, and it is recommended to store it in your business to avoid affecting usage.
      shared_ptr<string> faceImageUrl_ {};
      // Whether the face is wearing a mask. Values:
      // - **true**: Wearing a mask
      // - **false**: Not wearing a mask
      shared_ptr<string> faceMask_ {};
      // The quality of the frontal face image. Possible values:
      // - **UNQUALIFIED**: Poor quality
      // - **LOW**: Low
      // - **NORMAL**: Average
      // - **HIGH**: High
      shared_ptr<string> faceQuality_ {};
      // OCR result of the ID card information.
      // 
      // > If there is no front or back of the ID card during the verification process, the OCR result of the ID card information will not be returned. Even if the front and back of the ID card are present during the verification process, it does not guarantee that all the information on the ID card will be returned. Due to issues such as poor ID card photography, the OCR may fail to recognize some information, leading to incomplete OCR results. It is recommended that the business side does not heavily rely on the ID card OCR information.
      shared_ptr<Material::IdCardInfo> idCardInfo_ {};
      // Name, corresponding to the request parameter **Name**.
      shared_ptr<string> idCardName_ {};
      // ID number, corresponding to the request parameter **IdCardNumber**.
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
    // Comparison score between the facial photo submitted during the authentication process and authoritative data, with a range of **0**~**100**.
    // 
    // Confidence threshold references:
    // - False recognition rate 0.001% corresponds to a threshold of 95.
    // - False recognition rate 0.01% corresponds to a threshold of 90.
    // - False recognition rate 0.1% corresponds to a threshold of 80.
    // - False recognition rate 1% corresponds to a threshold of 60.
    // 
    // > This field only indicates the comparison result between the face and authoritative data, serving as a reference score. It is generally not recommended to use this score alone as the pass/fail criterion. For the comprehensive authentication result, please refer to the **VerifyStatus** field. The **VerifyStatus** result integrates the face-to-authoritative data comparison and other various strategies, enhancing security levels.
    shared_ptr<float> authorityComparisionScore_ {};
    // Comparison score between the facial photo submitted during the authentication process and the face on the portrait side of the ID card image, with a range of **0**~**100**.
    // 
    // Confidence threshold references:
    // - False recognition rate 0.001% corresponds to a threshold of 95.
    // - False recognition rate 0.01% corresponds to a threshold of 90.
    // - False recognition rate 0.1% corresponds to a threshold of 80.
    // - False recognition rate 1% corresponds to a threshold of 60.
    shared_ptr<float> idCardFaceComparisonScore_ {};
    // Authentication materials.
    shared_ptr<VerifyMaterialResponseBody::Material> material_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Authentication status. Values:
    // 
    // - **1**: Authentication passed.
    // - **2**~**n**: Authentication failed due to various reasons. For detailed descriptions, see the **Authentication Status Explanation** below.
    shared_ptr<int32_t> verifyStatus_ {};
    // Token for this authentication, used to link various interfaces in the authentication request, valid for 30 minutes.
    shared_ptr<string> verifyToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
