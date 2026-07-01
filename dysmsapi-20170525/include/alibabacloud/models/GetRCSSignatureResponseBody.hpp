// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRCSSIGNATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRCSSIGNATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetRCSSignatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRCSSignatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRCSSignatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRCSSignatureResponseBody() = default ;
    GetRCSSignatureResponseBody(const GetRCSSignatureResponseBody &) = default ;
    GetRCSSignatureResponseBody(GetRCSSignatureResponseBody &&) = default ;
    GetRCSSignatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRCSSignatureResponseBody() = default ;
    GetRCSSignatureResponseBody& operator=(const GetRCSSignatureResponseBody &) = default ;
    GetRCSSignatureResponseBody& operator=(GetRCSSignatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundImage, backgroundImage_);
        DARABONBA_PTR_TO_JSON(BubbleColor, bubbleColor_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ChatbotCode, chatbotCode_);
        DARABONBA_PTR_TO_JSON(ChatbotName, chatbotName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Latitude, latitude_);
        DARABONBA_PTR_TO_JSON(Logo, logo_);
        DARABONBA_PTR_TO_JSON(Longitude, longitude_);
        DARABONBA_PTR_TO_JSON(OfficeAddress, officeAddress_);
        DARABONBA_PTR_TO_JSON(RegisterResultList, registerResultList_);
        DARABONBA_PTR_TO_JSON(ServiceEmail, serviceEmail_);
        DARABONBA_PTR_TO_JSON(ServicePhone, servicePhone_);
        DARABONBA_PTR_TO_JSON(ServiceTerms, serviceTerms_);
        DARABONBA_PTR_TO_JSON(ServiceWebsite, serviceWebsite_);
        DARABONBA_PTR_TO_JSON(ShelfResultList, shelfResultList_);
        DARABONBA_PTR_TO_JSON(SignId, signId_);
        DARABONBA_PTR_TO_JSON(SignName, signName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundImage, backgroundImage_);
        DARABONBA_PTR_FROM_JSON(BubbleColor, bubbleColor_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ChatbotCode, chatbotCode_);
        DARABONBA_PTR_FROM_JSON(ChatbotName, chatbotName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
        DARABONBA_PTR_FROM_JSON(Logo, logo_);
        DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
        DARABONBA_PTR_FROM_JSON(OfficeAddress, officeAddress_);
        DARABONBA_PTR_FROM_JSON(RegisterResultList, registerResultList_);
        DARABONBA_PTR_FROM_JSON(ServiceEmail, serviceEmail_);
        DARABONBA_PTR_FROM_JSON(ServicePhone, servicePhone_);
        DARABONBA_PTR_FROM_JSON(ServiceTerms, serviceTerms_);
        DARABONBA_PTR_FROM_JSON(ServiceWebsite, serviceWebsite_);
        DARABONBA_PTR_FROM_JSON(ShelfResultList, shelfResultList_);
        DARABONBA_PTR_FROM_JSON(SignId, signId_);
        DARABONBA_PTR_FROM_JSON(SignName, signName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ShelfResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShelfResultList& obj) { 
          DARABONBA_PTR_TO_JSON(OperatorCode, operatorCode_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(ShelfStatus, shelfStatus_);
          DARABONBA_PTR_TO_JSON(ShelfStatusReasons, shelfStatusReasons_);
        };
        friend void from_json(const Darabonba::Json& j, ShelfResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(OperatorCode, operatorCode_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(ShelfStatus, shelfStatus_);
          DARABONBA_PTR_FROM_JSON(ShelfStatusReasons, shelfStatusReasons_);
        };
        ShelfResultList() = default ;
        ShelfResultList(const ShelfResultList &) = default ;
        ShelfResultList(ShelfResultList &&) = default ;
        ShelfResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShelfResultList() = default ;
        ShelfResultList& operator=(const ShelfResultList &) = default ;
        ShelfResultList& operator=(ShelfResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ShelfStatusReasons : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ShelfStatusReasons& obj) { 
            DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
            DARABONBA_PTR_TO_JSON(ReasonDescList, reasonDescList_);
          };
          friend void from_json(const Darabonba::Json& j, ShelfStatusReasons& obj) { 
            DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
            DARABONBA_PTR_FROM_JSON(ReasonDescList, reasonDescList_);
          };
          ShelfStatusReasons() = default ;
          ShelfStatusReasons(const ShelfStatusReasons &) = default ;
          ShelfStatusReasons(ShelfStatusReasons &&) = default ;
          ShelfStatusReasons(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ShelfStatusReasons() = default ;
          ShelfStatusReasons& operator=(const ShelfStatusReasons &) = default ;
          ShelfStatusReasons& operator=(ShelfStatusReasons &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reasonCode_ == nullptr
        && this->reasonDescList_ == nullptr; };
          // reasonCode Field Functions 
          bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
          void deleteReasonCode() { this->reasonCode_ = nullptr;};
          inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
          inline ShelfStatusReasons& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


          // reasonDescList Field Functions 
          bool hasReasonDescList() const { return this->reasonDescList_ != nullptr;};
          void deleteReasonDescList() { this->reasonDescList_ = nullptr;};
          inline const vector<string> & getReasonDescList() const { DARABONBA_PTR_GET_CONST(reasonDescList_, vector<string>) };
          inline vector<string> getReasonDescList() { DARABONBA_PTR_GET(reasonDescList_, vector<string>) };
          inline ShelfStatusReasons& setReasonDescList(const vector<string> & reasonDescList) { DARABONBA_PTR_SET_VALUE(reasonDescList_, reasonDescList) };
          inline ShelfStatusReasons& setReasonDescList(vector<string> && reasonDescList) { DARABONBA_PTR_SET_RVALUE(reasonDescList_, reasonDescList) };


        protected:
          shared_ptr<string> reasonCode_ {};
          shared_ptr<vector<string>> reasonDescList_ {};
        };

        virtual bool empty() const override { return this->operatorCode_ == nullptr
        && this->productType_ == nullptr && this->shelfStatus_ == nullptr && this->shelfStatusReasons_ == nullptr; };
        // operatorCode Field Functions 
        bool hasOperatorCode() const { return this->operatorCode_ != nullptr;};
        void deleteOperatorCode() { this->operatorCode_ = nullptr;};
        inline string getOperatorCode() const { DARABONBA_PTR_GET_DEFAULT(operatorCode_, "") };
        inline ShelfResultList& setOperatorCode(string operatorCode) { DARABONBA_PTR_SET_VALUE(operatorCode_, operatorCode) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline int64_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
        inline ShelfResultList& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // shelfStatus Field Functions 
        bool hasShelfStatus() const { return this->shelfStatus_ != nullptr;};
        void deleteShelfStatus() { this->shelfStatus_ = nullptr;};
        inline int64_t getShelfStatus() const { DARABONBA_PTR_GET_DEFAULT(shelfStatus_, 0L) };
        inline ShelfResultList& setShelfStatus(int64_t shelfStatus) { DARABONBA_PTR_SET_VALUE(shelfStatus_, shelfStatus) };


        // shelfStatusReasons Field Functions 
        bool hasShelfStatusReasons() const { return this->shelfStatusReasons_ != nullptr;};
        void deleteShelfStatusReasons() { this->shelfStatusReasons_ = nullptr;};
        inline const vector<ShelfResultList::ShelfStatusReasons> & getShelfStatusReasons() const { DARABONBA_PTR_GET_CONST(shelfStatusReasons_, vector<ShelfResultList::ShelfStatusReasons>) };
        inline vector<ShelfResultList::ShelfStatusReasons> getShelfStatusReasons() { DARABONBA_PTR_GET(shelfStatusReasons_, vector<ShelfResultList::ShelfStatusReasons>) };
        inline ShelfResultList& setShelfStatusReasons(const vector<ShelfResultList::ShelfStatusReasons> & shelfStatusReasons) { DARABONBA_PTR_SET_VALUE(shelfStatusReasons_, shelfStatusReasons) };
        inline ShelfResultList& setShelfStatusReasons(vector<ShelfResultList::ShelfStatusReasons> && shelfStatusReasons) { DARABONBA_PTR_SET_RVALUE(shelfStatusReasons_, shelfStatusReasons) };


      protected:
        shared_ptr<string> operatorCode_ {};
        shared_ptr<int64_t> productType_ {};
        shared_ptr<int64_t> shelfStatus_ {};
        shared_ptr<vector<ShelfResultList::ShelfStatusReasons>> shelfStatusReasons_ {};
      };

      class RegisterResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegisterResultList& obj) { 
          DARABONBA_PTR_TO_JSON(OperatorCode, operatorCode_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(RegisterCompleteTime, registerCompleteTime_);
          DARABONBA_PTR_TO_JSON(RegisterStatus, registerStatus_);
          DARABONBA_PTR_TO_JSON(RegisterStatusReasons, registerStatusReasons_);
        };
        friend void from_json(const Darabonba::Json& j, RegisterResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(OperatorCode, operatorCode_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(RegisterCompleteTime, registerCompleteTime_);
          DARABONBA_PTR_FROM_JSON(RegisterStatus, registerStatus_);
          DARABONBA_PTR_FROM_JSON(RegisterStatusReasons, registerStatusReasons_);
        };
        RegisterResultList() = default ;
        RegisterResultList(const RegisterResultList &) = default ;
        RegisterResultList(RegisterResultList &&) = default ;
        RegisterResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegisterResultList() = default ;
        RegisterResultList& operator=(const RegisterResultList &) = default ;
        RegisterResultList& operator=(RegisterResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RegisterStatusReasons : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegisterStatusReasons& obj) { 
            DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
            DARABONBA_PTR_TO_JSON(ReasonDescList, reasonDescList_);
          };
          friend void from_json(const Darabonba::Json& j, RegisterStatusReasons& obj) { 
            DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
            DARABONBA_PTR_FROM_JSON(ReasonDescList, reasonDescList_);
          };
          RegisterStatusReasons() = default ;
          RegisterStatusReasons(const RegisterStatusReasons &) = default ;
          RegisterStatusReasons(RegisterStatusReasons &&) = default ;
          RegisterStatusReasons(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegisterStatusReasons() = default ;
          RegisterStatusReasons& operator=(const RegisterStatusReasons &) = default ;
          RegisterStatusReasons& operator=(RegisterStatusReasons &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reasonCode_ == nullptr
        && this->reasonDescList_ == nullptr; };
          // reasonCode Field Functions 
          bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
          void deleteReasonCode() { this->reasonCode_ = nullptr;};
          inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
          inline RegisterStatusReasons& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


          // reasonDescList Field Functions 
          bool hasReasonDescList() const { return this->reasonDescList_ != nullptr;};
          void deleteReasonDescList() { this->reasonDescList_ = nullptr;};
          inline const vector<string> & getReasonDescList() const { DARABONBA_PTR_GET_CONST(reasonDescList_, vector<string>) };
          inline vector<string> getReasonDescList() { DARABONBA_PTR_GET(reasonDescList_, vector<string>) };
          inline RegisterStatusReasons& setReasonDescList(const vector<string> & reasonDescList) { DARABONBA_PTR_SET_VALUE(reasonDescList_, reasonDescList) };
          inline RegisterStatusReasons& setReasonDescList(vector<string> && reasonDescList) { DARABONBA_PTR_SET_RVALUE(reasonDescList_, reasonDescList) };


        protected:
          shared_ptr<string> reasonCode_ {};
          shared_ptr<vector<string>> reasonDescList_ {};
        };

        virtual bool empty() const override { return this->operatorCode_ == nullptr
        && this->productType_ == nullptr && this->registerCompleteTime_ == nullptr && this->registerStatus_ == nullptr && this->registerStatusReasons_ == nullptr; };
        // operatorCode Field Functions 
        bool hasOperatorCode() const { return this->operatorCode_ != nullptr;};
        void deleteOperatorCode() { this->operatorCode_ = nullptr;};
        inline string getOperatorCode() const { DARABONBA_PTR_GET_DEFAULT(operatorCode_, "") };
        inline RegisterResultList& setOperatorCode(string operatorCode) { DARABONBA_PTR_SET_VALUE(operatorCode_, operatorCode) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline int64_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
        inline RegisterResultList& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // registerCompleteTime Field Functions 
        bool hasRegisterCompleteTime() const { return this->registerCompleteTime_ != nullptr;};
        void deleteRegisterCompleteTime() { this->registerCompleteTime_ = nullptr;};
        inline string getRegisterCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(registerCompleteTime_, "") };
        inline RegisterResultList& setRegisterCompleteTime(string registerCompleteTime) { DARABONBA_PTR_SET_VALUE(registerCompleteTime_, registerCompleteTime) };


        // registerStatus Field Functions 
        bool hasRegisterStatus() const { return this->registerStatus_ != nullptr;};
        void deleteRegisterStatus() { this->registerStatus_ = nullptr;};
        inline int64_t getRegisterStatus() const { DARABONBA_PTR_GET_DEFAULT(registerStatus_, 0L) };
        inline RegisterResultList& setRegisterStatus(int64_t registerStatus) { DARABONBA_PTR_SET_VALUE(registerStatus_, registerStatus) };


        // registerStatusReasons Field Functions 
        bool hasRegisterStatusReasons() const { return this->registerStatusReasons_ != nullptr;};
        void deleteRegisterStatusReasons() { this->registerStatusReasons_ = nullptr;};
        inline const vector<RegisterResultList::RegisterStatusReasons> & getRegisterStatusReasons() const { DARABONBA_PTR_GET_CONST(registerStatusReasons_, vector<RegisterResultList::RegisterStatusReasons>) };
        inline vector<RegisterResultList::RegisterStatusReasons> getRegisterStatusReasons() { DARABONBA_PTR_GET(registerStatusReasons_, vector<RegisterResultList::RegisterStatusReasons>) };
        inline RegisterResultList& setRegisterStatusReasons(const vector<RegisterResultList::RegisterStatusReasons> & registerStatusReasons) { DARABONBA_PTR_SET_VALUE(registerStatusReasons_, registerStatusReasons) };
        inline RegisterResultList& setRegisterStatusReasons(vector<RegisterResultList::RegisterStatusReasons> && registerStatusReasons) { DARABONBA_PTR_SET_RVALUE(registerStatusReasons_, registerStatusReasons) };


      protected:
        shared_ptr<string> operatorCode_ {};
        shared_ptr<int64_t> productType_ {};
        shared_ptr<string> registerCompleteTime_ {};
        shared_ptr<int64_t> registerStatus_ {};
        shared_ptr<vector<RegisterResultList::RegisterStatusReasons>> registerStatusReasons_ {};
      };

      virtual bool empty() const override { return this->backgroundImage_ == nullptr
        && this->bubbleColor_ == nullptr && this->category_ == nullptr && this->chatbotCode_ == nullptr && this->chatbotName_ == nullptr && this->description_ == nullptr
        && this->latitude_ == nullptr && this->logo_ == nullptr && this->longitude_ == nullptr && this->officeAddress_ == nullptr && this->registerResultList_ == nullptr
        && this->serviceEmail_ == nullptr && this->servicePhone_ == nullptr && this->serviceTerms_ == nullptr && this->serviceWebsite_ == nullptr && this->shelfResultList_ == nullptr
        && this->signId_ == nullptr && this->signName_ == nullptr; };
      // backgroundImage Field Functions 
      bool hasBackgroundImage() const { return this->backgroundImage_ != nullptr;};
      void deleteBackgroundImage() { this->backgroundImage_ = nullptr;};
      inline string getBackgroundImage() const { DARABONBA_PTR_GET_DEFAULT(backgroundImage_, "") };
      inline Data& setBackgroundImage(string backgroundImage) { DARABONBA_PTR_SET_VALUE(backgroundImage_, backgroundImage) };


      // bubbleColor Field Functions 
      bool hasBubbleColor() const { return this->bubbleColor_ != nullptr;};
      void deleteBubbleColor() { this->bubbleColor_ = nullptr;};
      inline string getBubbleColor() const { DARABONBA_PTR_GET_DEFAULT(bubbleColor_, "") };
      inline Data& setBubbleColor(string bubbleColor) { DARABONBA_PTR_SET_VALUE(bubbleColor_, bubbleColor) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int64_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0L) };
      inline Data& setCategory(int64_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // chatbotCode Field Functions 
      bool hasChatbotCode() const { return this->chatbotCode_ != nullptr;};
      void deleteChatbotCode() { this->chatbotCode_ = nullptr;};
      inline string getChatbotCode() const { DARABONBA_PTR_GET_DEFAULT(chatbotCode_, "") };
      inline Data& setChatbotCode(string chatbotCode) { DARABONBA_PTR_SET_VALUE(chatbotCode_, chatbotCode) };


      // chatbotName Field Functions 
      bool hasChatbotName() const { return this->chatbotName_ != nullptr;};
      void deleteChatbotName() { this->chatbotName_ = nullptr;};
      inline string getChatbotName() const { DARABONBA_PTR_GET_DEFAULT(chatbotName_, "") };
      inline Data& setChatbotName(string chatbotName) { DARABONBA_PTR_SET_VALUE(chatbotName_, chatbotName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // latitude Field Functions 
      bool hasLatitude() const { return this->latitude_ != nullptr;};
      void deleteLatitude() { this->latitude_ = nullptr;};
      inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
      inline Data& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


      // logo Field Functions 
      bool hasLogo() const { return this->logo_ != nullptr;};
      void deleteLogo() { this->logo_ = nullptr;};
      inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
      inline Data& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


      // longitude Field Functions 
      bool hasLongitude() const { return this->longitude_ != nullptr;};
      void deleteLongitude() { this->longitude_ = nullptr;};
      inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
      inline Data& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


      // officeAddress Field Functions 
      bool hasOfficeAddress() const { return this->officeAddress_ != nullptr;};
      void deleteOfficeAddress() { this->officeAddress_ = nullptr;};
      inline string getOfficeAddress() const { DARABONBA_PTR_GET_DEFAULT(officeAddress_, "") };
      inline Data& setOfficeAddress(string officeAddress) { DARABONBA_PTR_SET_VALUE(officeAddress_, officeAddress) };


      // registerResultList Field Functions 
      bool hasRegisterResultList() const { return this->registerResultList_ != nullptr;};
      void deleteRegisterResultList() { this->registerResultList_ = nullptr;};
      inline const vector<Data::RegisterResultList> & getRegisterResultList() const { DARABONBA_PTR_GET_CONST(registerResultList_, vector<Data::RegisterResultList>) };
      inline vector<Data::RegisterResultList> getRegisterResultList() { DARABONBA_PTR_GET(registerResultList_, vector<Data::RegisterResultList>) };
      inline Data& setRegisterResultList(const vector<Data::RegisterResultList> & registerResultList) { DARABONBA_PTR_SET_VALUE(registerResultList_, registerResultList) };
      inline Data& setRegisterResultList(vector<Data::RegisterResultList> && registerResultList) { DARABONBA_PTR_SET_RVALUE(registerResultList_, registerResultList) };


      // serviceEmail Field Functions 
      bool hasServiceEmail() const { return this->serviceEmail_ != nullptr;};
      void deleteServiceEmail() { this->serviceEmail_ = nullptr;};
      inline string getServiceEmail() const { DARABONBA_PTR_GET_DEFAULT(serviceEmail_, "") };
      inline Data& setServiceEmail(string serviceEmail) { DARABONBA_PTR_SET_VALUE(serviceEmail_, serviceEmail) };


      // servicePhone Field Functions 
      bool hasServicePhone() const { return this->servicePhone_ != nullptr;};
      void deleteServicePhone() { this->servicePhone_ = nullptr;};
      inline string getServicePhone() const { DARABONBA_PTR_GET_DEFAULT(servicePhone_, "") };
      inline Data& setServicePhone(string servicePhone) { DARABONBA_PTR_SET_VALUE(servicePhone_, servicePhone) };


      // serviceTerms Field Functions 
      bool hasServiceTerms() const { return this->serviceTerms_ != nullptr;};
      void deleteServiceTerms() { this->serviceTerms_ = nullptr;};
      inline string getServiceTerms() const { DARABONBA_PTR_GET_DEFAULT(serviceTerms_, "") };
      inline Data& setServiceTerms(string serviceTerms) { DARABONBA_PTR_SET_VALUE(serviceTerms_, serviceTerms) };


      // serviceWebsite Field Functions 
      bool hasServiceWebsite() const { return this->serviceWebsite_ != nullptr;};
      void deleteServiceWebsite() { this->serviceWebsite_ = nullptr;};
      inline string getServiceWebsite() const { DARABONBA_PTR_GET_DEFAULT(serviceWebsite_, "") };
      inline Data& setServiceWebsite(string serviceWebsite) { DARABONBA_PTR_SET_VALUE(serviceWebsite_, serviceWebsite) };


      // shelfResultList Field Functions 
      bool hasShelfResultList() const { return this->shelfResultList_ != nullptr;};
      void deleteShelfResultList() { this->shelfResultList_ = nullptr;};
      inline const vector<Data::ShelfResultList> & getShelfResultList() const { DARABONBA_PTR_GET_CONST(shelfResultList_, vector<Data::ShelfResultList>) };
      inline vector<Data::ShelfResultList> getShelfResultList() { DARABONBA_PTR_GET(shelfResultList_, vector<Data::ShelfResultList>) };
      inline Data& setShelfResultList(const vector<Data::ShelfResultList> & shelfResultList) { DARABONBA_PTR_SET_VALUE(shelfResultList_, shelfResultList) };
      inline Data& setShelfResultList(vector<Data::ShelfResultList> && shelfResultList) { DARABONBA_PTR_SET_RVALUE(shelfResultList_, shelfResultList) };


      // signId Field Functions 
      bool hasSignId() const { return this->signId_ != nullptr;};
      void deleteSignId() { this->signId_ = nullptr;};
      inline int64_t getSignId() const { DARABONBA_PTR_GET_DEFAULT(signId_, 0L) };
      inline Data& setSignId(int64_t signId) { DARABONBA_PTR_SET_VALUE(signId_, signId) };


      // signName Field Functions 
      bool hasSignName() const { return this->signName_ != nullptr;};
      void deleteSignName() { this->signName_ = nullptr;};
      inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
      inline Data& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    protected:
      shared_ptr<string> backgroundImage_ {};
      shared_ptr<string> bubbleColor_ {};
      shared_ptr<int64_t> category_ {};
      shared_ptr<string> chatbotCode_ {};
      shared_ptr<string> chatbotName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> latitude_ {};
      shared_ptr<string> logo_ {};
      shared_ptr<string> longitude_ {};
      shared_ptr<string> officeAddress_ {};
      shared_ptr<vector<Data::RegisterResultList>> registerResultList_ {};
      shared_ptr<string> serviceEmail_ {};
      shared_ptr<string> servicePhone_ {};
      shared_ptr<string> serviceTerms_ {};
      shared_ptr<string> serviceWebsite_ {};
      shared_ptr<vector<Data::ShelfResultList>> shelfResultList_ {};
      shared_ptr<int64_t> signId_ {};
      shared_ptr<string> signName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetRCSSignatureResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRCSSignatureResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRCSSignatureResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRCSSignatureResponseBody::Data) };
    inline GetRCSSignatureResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRCSSignatureResponseBody::Data) };
    inline GetRCSSignatureResponseBody& setData(const GetRCSSignatureResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRCSSignatureResponseBody& setData(GetRCSSignatureResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRCSSignatureResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRCSSignatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRCSSignatureResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<GetRCSSignatureResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
