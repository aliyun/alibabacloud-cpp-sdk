// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
        DARABONBA_PTR_TO_JSON(VideoUrls, videoUrls_);
      };
      friend void from_json(const Darabonba::Json& j, Material& obj) { 
        DARABONBA_PTR_FROM_JSON(FaceGlobalUrl, faceGlobalUrl_);
        DARABONBA_PTR_FROM_JSON(FaceImageUrl, faceImageUrl_);
        DARABONBA_PTR_FROM_JSON(FaceMask, faceMask_);
        DARABONBA_PTR_FROM_JSON(FaceQuality, faceQuality_);
        DARABONBA_PTR_FROM_JSON(IdCardInfo, idCardInfo_);
        DARABONBA_PTR_FROM_JSON(IdCardName, idCardName_);
        DARABONBA_PTR_FROM_JSON(IdCardNumber, idCardNumber_);
        DARABONBA_PTR_FROM_JSON(VideoUrls, videoUrls_);
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
        // HTTP/HTTPS link to the image of the back side (national emblem side) of the ID card. The link is valid for 5 minutes, and it is recommended to store it for business use to avoid any impact.
        // > If the HTTP/HTTPS link to the front-facing portrait image expires, you can call DescribeVerifyResult again to get the link.
        shared_ptr<string> backImageUrl_ {};
        // Date of birth.
        shared_ptr<string> birth_ {};
        // The end date of the document\\"s validity period. Format: yyyymmdd.
        shared_ptr<string> endDate_ {};
        // HTTP/HTTPS link to the image of the front side (portrait side) of the ID card. The link is valid for 5 minutes, and it is recommended to store it for business use to avoid any impact.
        // > If the HTTP/HTTPS link to the front-facing portrait image expires, you can call DescribeVerifyResult again to get the link.
        shared_ptr<string> frontImageUrl_ {};
        // Name.
        shared_ptr<string> name_ {};
        // Nationality.
        shared_ptr<string> nationality_ {};
        // ID card number.
        shared_ptr<string> number_ {};
        // Start date of the document\\"s validity. Format: yyyymmdd.
        shared_ptr<string> startDate_ {};
      };

      virtual bool empty() const override { return this->faceGlobalUrl_ == nullptr
        && this->faceImageUrl_ == nullptr && this->faceMask_ == nullptr && this->faceQuality_ == nullptr && this->idCardInfo_ == nullptr && this->idCardName_ == nullptr
        && this->idCardNumber_ == nullptr && this->videoUrls_ == nullptr; };
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
      inline bool getFaceMask() const { DARABONBA_PTR_GET_DEFAULT(faceMask_, false) };
      inline Material& setFaceMask(bool faceMask) { DARABONBA_PTR_SET_VALUE(faceMask_, faceMask) };


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


      // videoUrls Field Functions 
      bool hasVideoUrls() const { return this->videoUrls_ != nullptr;};
      void deleteVideoUrls() { this->videoUrls_ = nullptr;};
      inline const vector<string> & getVideoUrls() const { DARABONBA_PTR_GET_CONST(videoUrls_, vector<string>) };
      inline vector<string> getVideoUrls() { DARABONBA_PTR_GET(videoUrls_, vector<string>) };
      inline Material& setVideoUrls(const vector<string> & videoUrls) { DARABONBA_PTR_SET_VALUE(videoUrls_, videoUrls) };
      inline Material& setVideoUrls(vector<string> && videoUrls) { DARABONBA_PTR_SET_RVALUE(videoUrls_, videoUrls) };


    protected:
      // The global camera image captured by the real-person authentication SDK.
      // 
      // > This parameter will only take effect after configuration. If you need to use this parameter, please submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
      shared_ptr<string> faceGlobalUrl_ {};
      // The HTTP or HTTPS link to the frontal face image. The link is valid for 5 minutes, and it is recommended to store it elsewhere to avoid any impact on usage.
      // > If the HTTP or HTTPS link to the frontal face image expires, you can call [DescribeVerifyResult](https://help.aliyun.com/document_detail/154606.html) again to get the link.
      shared_ptr<string> faceImageUrl_ {};
      // Whether the face is wearing a mask. Values:
      // - **true**: Wearing a mask
      // - **false**: Not wearing a mask
      shared_ptr<bool> faceMask_ {};
      // The quality of the frontal face image. Values:
      // - **UNQUALIFIED**: Poor quality
      // - **LOW**: Low
      // - **NORMAL**: Normal
      // - **HIGH**: High
      shared_ptr<string> faceQuality_ {};
      // OCR results of the ID card information.
      // > If there is no front and back information of the ID card during the authentication process, the real-person authentication service will not return the OCR results of the ID card. Even if there is front and back information of the ID card during the authentication process, the real-person authentication service does not guarantee to return all the information on the ID card. Due to issues with ID card photography, the OCR may fail to recognize some information, resulting in incomplete OCR information. It is recommended that your business does not strongly rely on the ID card OCR information.
      shared_ptr<Material::IdCardInfo> idCardInfo_ {};
      // Name.
      shared_ptr<string> idCardName_ {};
      // ID number.
      shared_ptr<string> idCardNumber_ {};
      // The URL addresses of the recorded videos returned by the historical RPH5BioOnly solution.
      shared_ptr<vector<string>> videoUrls_ {};
    };

    virtual bool empty() const override { return this->authorityComparisionScore_ == nullptr
        && this->faceComparisonScore_ == nullptr && this->idCardFaceComparisonScore_ == nullptr && this->material_ == nullptr && this->requestId_ == nullptr && this->verifyStatus_ == nullptr; };
    // authorityComparisionScore Field Functions 
    bool hasAuthorityComparisionScore() const { return this->authorityComparisionScore_ != nullptr;};
    void deleteAuthorityComparisionScore() { this->authorityComparisionScore_ = nullptr;};
    inline float getAuthorityComparisionScore() const { DARABONBA_PTR_GET_DEFAULT(authorityComparisionScore_, 0.0) };
    inline DescribeVerifyResultResponseBody& setAuthorityComparisionScore(float authorityComparisionScore) { DARABONBA_PTR_SET_VALUE(authorityComparisionScore_, authorityComparisionScore) };


    // faceComparisonScore Field Functions 
    bool hasFaceComparisonScore() const { return this->faceComparisonScore_ != nullptr;};
    void deleteFaceComparisonScore() { this->faceComparisonScore_ = nullptr;};
    inline float getFaceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScore_, 0.0) };
    inline DescribeVerifyResultResponseBody& setFaceComparisonScore(float faceComparisonScore) { DARABONBA_PTR_SET_VALUE(faceComparisonScore_, faceComparisonScore) };


    // idCardFaceComparisonScore Field Functions 
    bool hasIdCardFaceComparisonScore() const { return this->idCardFaceComparisonScore_ != nullptr;};
    void deleteIdCardFaceComparisonScore() { this->idCardFaceComparisonScore_ = nullptr;};
    inline float getIdCardFaceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(idCardFaceComparisonScore_, 0.0) };
    inline DescribeVerifyResultResponseBody& setIdCardFaceComparisonScore(float idCardFaceComparisonScore) { DARABONBA_PTR_SET_VALUE(idCardFaceComparisonScore_, idCardFaceComparisonScore) };


    // material Field Functions 
    bool hasMaterial() const { return this->material_ != nullptr;};
    void deleteMaterial() { this->material_ = nullptr;};
    inline const DescribeVerifyResultResponseBody::Material & getMaterial() const { DARABONBA_PTR_GET_CONST(material_, DescribeVerifyResultResponseBody::Material) };
    inline DescribeVerifyResultResponseBody::Material getMaterial() { DARABONBA_PTR_GET(material_, DescribeVerifyResultResponseBody::Material) };
    inline DescribeVerifyResultResponseBody& setMaterial(const DescribeVerifyResultResponseBody::Material & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
    inline DescribeVerifyResultResponseBody& setMaterial(DescribeVerifyResultResponseBody::Material && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyStatus Field Functions 
    bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
    void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
    inline int32_t getVerifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, 0) };
    inline DescribeVerifyResultResponseBody& setVerifyStatus(int32_t verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


  protected:
    // The comparison score between the face photo submitted during the authentication process and the authoritative data, with a value range of **0** to **100**.
    // Confidence threshold references:
    // - When the false acceptance rate is 0.001%, the corresponding threshold is 95. - When the false acceptance rate is 0.01%, the corresponding threshold is 90. - When the false acceptance rate is 0.1%, the corresponding threshold is 80. - When the false acceptance rate is 1%, the corresponding threshold is 60.
    // > This field only indicates the comparison result between the face and the authoritative data, for your reference only. It is generally not recommended to use this value alone as the standard for whether the authentication passes. For a comprehensive authentication result, please refer to the **VerifyStatus** field. The **VerifyStatus** result integrates the comparison of the face with the authoritative data and various other strategies, which can enhance security levels.
    shared_ptr<float> authorityComparisionScore_ {};
    // The comparison score between the face photo submitted during the authentication process and the face in the retained face image. The value range is **0**~**100**.
    // 
    // Confidence threshold reference:
    // 
    // - When the false recognition rate is 0.001%, the corresponding threshold is 95.
    // - When the false recognition rate is 0.01%, the corresponding threshold is 90.
    // - When the false recognition rate is 0.1%, the corresponding threshold is 80.
    // - When the false recognition rate is 1%, the corresponding threshold is 60.
    shared_ptr<float> faceComparisonScore_ {};
    // The comparison score between the face photo submitted during the authentication process and the face on the ID card\\"s face side. The value range is **0**~**100**.
    // 
    // Confidence threshold reference:
    // 
    // - When the false recognition rate is 0.001%, the corresponding threshold is 95.
    // - When the false recognition rate is 0.01%, the corresponding threshold is 90.
    // - When the false recognition rate is 0.1%, the corresponding threshold is 80.
    // - When the false recognition rate is 1%, the corresponding threshold is 60.
    shared_ptr<float> idCardFaceComparisonScore_ {};
    // Authentication materials.
    shared_ptr<DescribeVerifyResultResponseBody::Material> material_ {};
    // The ID of this request.
    shared_ptr<string> requestId_ {};
    // Authentication status, values:
    // - **-1**: Not authenticated - **1**: Authentication passed - **2** to **n**: Authentication failed for various reasons. For detailed descriptions, see the authentication status explanation.
    shared_ptr<int32_t> verifyStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
