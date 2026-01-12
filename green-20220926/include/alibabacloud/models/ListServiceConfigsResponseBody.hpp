// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListServiceConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListServiceConfigsResponseBody() = default ;
    ListServiceConfigsResponseBody(const ListServiceConfigsResponseBody &) = default ;
    ListServiceConfigsResponseBody(ListServiceConfigsResponseBody &&) = default ;
    ListServiceConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConfigsResponseBody() = default ;
    ListServiceConfigsResponseBody& operator=(const ListServiceConfigsResponseBody &) = default ;
    ListServiceConfigsResponseBody& operator=(ListServiceConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
        DARABONBA_PTR_TO_JSON(CustomServiceConf, customServiceConf_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_ANY_TO_JSON(Option, option_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(ServiceDesc, serviceDesc_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(UseStatus, useStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
        DARABONBA_PTR_FROM_JSON(CustomServiceConf, customServiceConf_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_ANY_FROM_JSON(Option, option_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(ServiceDesc, serviceDesc_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(UseStatus, useStatus_);
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
      class CustomServiceConf : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomServiceConf& obj) { 
          DARABONBA_PTR_TO_JSON(AudioService, audioService_);
          DARABONBA_PTR_TO_JSON(ImageService, imageService_);
          DARABONBA_PTR_TO_JSON(KeywordFilterLibs, keywordFilterLibs_);
          DARABONBA_PTR_TO_JSON(KeywordHitLibs, keywordHitLibs_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(SimilarTextHitLibs, similarTextHitLibs_);
        };
        friend void from_json(const Darabonba::Json& j, CustomServiceConf& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioService, audioService_);
          DARABONBA_PTR_FROM_JSON(ImageService, imageService_);
          DARABONBA_PTR_FROM_JSON(KeywordFilterLibs, keywordFilterLibs_);
          DARABONBA_PTR_FROM_JSON(KeywordHitLibs, keywordHitLibs_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(SimilarTextHitLibs, similarTextHitLibs_);
        };
        CustomServiceConf() = default ;
        CustomServiceConf(const CustomServiceConf &) = default ;
        CustomServiceConf(CustomServiceConf &&) = default ;
        CustomServiceConf(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomServiceConf() = default ;
        CustomServiceConf& operator=(const CustomServiceConf &) = default ;
        CustomServiceConf& operator=(CustomServiceConf &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(ImageScanRule, imageScanRule_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(TextScanRule, textScanRule_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(ImageScanRule, imageScanRule_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(TextScanRule, textScanRule_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TextScanRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TextScanRule& obj) { 
              DARABONBA_PTR_TO_JSON(Services, services_);
            };
            friend void from_json(const Darabonba::Json& j, TextScanRule& obj) { 
              DARABONBA_PTR_FROM_JSON(Services, services_);
            };
            TextScanRule() = default ;
            TextScanRule(const TextScanRule &) = default ;
            TextScanRule(TextScanRule &&) = default ;
            TextScanRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TextScanRule() = default ;
            TextScanRule& operator=(const TextScanRule &) = default ;
            TextScanRule& operator=(TextScanRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->services_ == nullptr; };
            // services Field Functions 
            bool hasServices() const { return this->services_ != nullptr;};
            void deleteServices() { this->services_ = nullptr;};
            inline const vector<string> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<string>) };
            inline vector<string> getServices() { DARABONBA_PTR_GET(services_, vector<string>) };
            inline TextScanRule& setServices(const vector<string> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
            inline TextScanRule& setServices(vector<string> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


          protected:
            // Text services.
            shared_ptr<vector<string>> services_ {};
          };

          class ImageScanRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ImageScanRule& obj) { 
              DARABONBA_PTR_TO_JSON(Services, services_);
            };
            friend void from_json(const Darabonba::Json& j, ImageScanRule& obj) { 
              DARABONBA_PTR_FROM_JSON(Services, services_);
            };
            ImageScanRule() = default ;
            ImageScanRule(const ImageScanRule &) = default ;
            ImageScanRule(ImageScanRule &&) = default ;
            ImageScanRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ImageScanRule() = default ;
            ImageScanRule& operator=(const ImageScanRule &) = default ;
            ImageScanRule& operator=(ImageScanRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->services_ == nullptr; };
            // services Field Functions 
            bool hasServices() const { return this->services_ != nullptr;};
            void deleteServices() { this->services_ = nullptr;};
            inline const vector<string> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<string>) };
            inline vector<string> getServices() { DARABONBA_PTR_GET(services_, vector<string>) };
            inline ImageScanRule& setServices(const vector<string> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
            inline ImageScanRule& setServices(vector<string> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


          protected:
            // Image services.
            shared_ptr<vector<string>> services_ {};
          };

          virtual bool empty() const override { return this->imageScanRule_ == nullptr
        && this->index_ == nullptr && this->textScanRule_ == nullptr; };
          // imageScanRule Field Functions 
          bool hasImageScanRule() const { return this->imageScanRule_ != nullptr;};
          void deleteImageScanRule() { this->imageScanRule_ = nullptr;};
          inline const Rules::ImageScanRule & getImageScanRule() const { DARABONBA_PTR_GET_CONST(imageScanRule_, Rules::ImageScanRule) };
          inline Rules::ImageScanRule getImageScanRule() { DARABONBA_PTR_GET(imageScanRule_, Rules::ImageScanRule) };
          inline Rules& setImageScanRule(const Rules::ImageScanRule & imageScanRule) { DARABONBA_PTR_SET_VALUE(imageScanRule_, imageScanRule) };
          inline Rules& setImageScanRule(Rules::ImageScanRule && imageScanRule) { DARABONBA_PTR_SET_RVALUE(imageScanRule_, imageScanRule) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
          inline Rules& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // textScanRule Field Functions 
          bool hasTextScanRule() const { return this->textScanRule_ != nullptr;};
          void deleteTextScanRule() { this->textScanRule_ = nullptr;};
          inline const Rules::TextScanRule & getTextScanRule() const { DARABONBA_PTR_GET_CONST(textScanRule_, Rules::TextScanRule) };
          inline Rules::TextScanRule getTextScanRule() { DARABONBA_PTR_GET(textScanRule_, Rules::TextScanRule) };
          inline Rules& setTextScanRule(const Rules::TextScanRule & textScanRule) { DARABONBA_PTR_SET_VALUE(textScanRule_, textScanRule) };
          inline Rules& setTextScanRule(Rules::TextScanRule && textScanRule) { DARABONBA_PTR_SET_RVALUE(textScanRule_, textScanRule) };


        protected:
          // Image review rule.
          shared_ptr<Rules::ImageScanRule> imageScanRule_ {};
          // Index.
          shared_ptr<int32_t> index_ {};
          // Text review rule.
          shared_ptr<Rules::TextScanRule> textScanRule_ {};
        };

        virtual bool empty() const override { return this->audioService_ == nullptr
        && this->imageService_ == nullptr && this->keywordFilterLibs_ == nullptr && this->keywordHitLibs_ == nullptr && this->rules_ == nullptr && this->similarTextHitLibs_ == nullptr; };
        // audioService Field Functions 
        bool hasAudioService() const { return this->audioService_ != nullptr;};
        void deleteAudioService() { this->audioService_ = nullptr;};
        inline string getAudioService() const { DARABONBA_PTR_GET_DEFAULT(audioService_, "") };
        inline CustomServiceConf& setAudioService(string audioService) { DARABONBA_PTR_SET_VALUE(audioService_, audioService) };


        // imageService Field Functions 
        bool hasImageService() const { return this->imageService_ != nullptr;};
        void deleteImageService() { this->imageService_ = nullptr;};
        inline const vector<string> & getImageService() const { DARABONBA_PTR_GET_CONST(imageService_, vector<string>) };
        inline vector<string> getImageService() { DARABONBA_PTR_GET(imageService_, vector<string>) };
        inline CustomServiceConf& setImageService(const vector<string> & imageService) { DARABONBA_PTR_SET_VALUE(imageService_, imageService) };
        inline CustomServiceConf& setImageService(vector<string> && imageService) { DARABONBA_PTR_SET_RVALUE(imageService_, imageService) };


        // keywordFilterLibs Field Functions 
        bool hasKeywordFilterLibs() const { return this->keywordFilterLibs_ != nullptr;};
        void deleteKeywordFilterLibs() { this->keywordFilterLibs_ = nullptr;};
        inline const vector<string> & getKeywordFilterLibs() const { DARABONBA_PTR_GET_CONST(keywordFilterLibs_, vector<string>) };
        inline vector<string> getKeywordFilterLibs() { DARABONBA_PTR_GET(keywordFilterLibs_, vector<string>) };
        inline CustomServiceConf& setKeywordFilterLibs(const vector<string> & keywordFilterLibs) { DARABONBA_PTR_SET_VALUE(keywordFilterLibs_, keywordFilterLibs) };
        inline CustomServiceConf& setKeywordFilterLibs(vector<string> && keywordFilterLibs) { DARABONBA_PTR_SET_RVALUE(keywordFilterLibs_, keywordFilterLibs) };


        // keywordHitLibs Field Functions 
        bool hasKeywordHitLibs() const { return this->keywordHitLibs_ != nullptr;};
        void deleteKeywordHitLibs() { this->keywordHitLibs_ = nullptr;};
        inline const vector<string> & getKeywordHitLibs() const { DARABONBA_PTR_GET_CONST(keywordHitLibs_, vector<string>) };
        inline vector<string> getKeywordHitLibs() { DARABONBA_PTR_GET(keywordHitLibs_, vector<string>) };
        inline CustomServiceConf& setKeywordHitLibs(const vector<string> & keywordHitLibs) { DARABONBA_PTR_SET_VALUE(keywordHitLibs_, keywordHitLibs) };
        inline CustomServiceConf& setKeywordHitLibs(vector<string> && keywordHitLibs) { DARABONBA_PTR_SET_RVALUE(keywordHitLibs_, keywordHitLibs) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<CustomServiceConf::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CustomServiceConf::Rules>) };
        inline vector<CustomServiceConf::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CustomServiceConf::Rules>) };
        inline CustomServiceConf& setRules(const vector<CustomServiceConf::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline CustomServiceConf& setRules(vector<CustomServiceConf::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        // similarTextHitLibs Field Functions 
        bool hasSimilarTextHitLibs() const { return this->similarTextHitLibs_ != nullptr;};
        void deleteSimilarTextHitLibs() { this->similarTextHitLibs_ = nullptr;};
        inline const vector<string> & getSimilarTextHitLibs() const { DARABONBA_PTR_GET_CONST(similarTextHitLibs_, vector<string>) };
        inline vector<string> getSimilarTextHitLibs() { DARABONBA_PTR_GET(similarTextHitLibs_, vector<string>) };
        inline CustomServiceConf& setSimilarTextHitLibs(const vector<string> & similarTextHitLibs) { DARABONBA_PTR_SET_VALUE(similarTextHitLibs_, similarTextHitLibs) };
        inline CustomServiceConf& setSimilarTextHitLibs(vector<string> && similarTextHitLibs) { DARABONBA_PTR_SET_RVALUE(similarTextHitLibs_, similarTextHitLibs) };


      protected:
        // Audio service.
        shared_ptr<string> audioService_ {};
        // Image services.
        shared_ptr<vector<string>> imageService_ {};
        // Ignored word libraries.
        shared_ptr<vector<string>> keywordFilterLibs_ {};
        // Hit word libraries.
        shared_ptr<vector<string>> keywordHitLibs_ {};
        // Service rules
        shared_ptr<vector<CustomServiceConf::Rules>> rules_ {};
        // Hit similar text libraries.
        shared_ptr<vector<string>> similarTextHitLibs_ {};
      };

      virtual bool empty() const override { return this->classify_ == nullptr
        && this->copyFrom_ == nullptr && this->customServiceConf_ == nullptr && this->gmtModified_ == nullptr && this->option_ == nullptr && this->resourceType_ == nullptr
        && this->serviceCode_ == nullptr && this->serviceDesc_ == nullptr && this->serviceName_ == nullptr && this->serviceType_ == nullptr && this->uid_ == nullptr
        && this->useStatus_ == nullptr; };
      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline Data& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // copyFrom Field Functions 
      bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
      void deleteCopyFrom() { this->copyFrom_ = nullptr;};
      inline string getCopyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
      inline Data& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


      // customServiceConf Field Functions 
      bool hasCustomServiceConf() const { return this->customServiceConf_ != nullptr;};
      void deleteCustomServiceConf() { this->customServiceConf_ = nullptr;};
      inline const Data::CustomServiceConf & getCustomServiceConf() const { DARABONBA_PTR_GET_CONST(customServiceConf_, Data::CustomServiceConf) };
      inline Data::CustomServiceConf getCustomServiceConf() { DARABONBA_PTR_GET(customServiceConf_, Data::CustomServiceConf) };
      inline Data& setCustomServiceConf(const Data::CustomServiceConf & customServiceConf) { DARABONBA_PTR_SET_VALUE(customServiceConf_, customServiceConf) };
      inline Data& setCustomServiceConf(Data::CustomServiceConf && customServiceConf) { DARABONBA_PTR_SET_RVALUE(customServiceConf_, customServiceConf) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // option Field Functions 
      bool hasOption() const { return this->option_ != nullptr;};
      void deleteOption() { this->option_ = nullptr;};
      inline       const Darabonba::Json & getOption() const { DARABONBA_GET(option_) };
      Darabonba::Json & getOption() { DARABONBA_GET(option_) };
      inline Data& setOption(const Darabonba::Json & option) { DARABONBA_SET_VALUE(option_, option) };
      inline Data& setOption(Darabonba::Json && option) { DARABONBA_SET_RVALUE(option_, option) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Data& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // serviceDesc Field Functions 
      bool hasServiceDesc() const { return this->serviceDesc_ != nullptr;};
      void deleteServiceDesc() { this->serviceDesc_ = nullptr;};
      inline string getServiceDesc() const { DARABONBA_PTR_GET_DEFAULT(serviceDesc_, "") };
      inline Data& setServiceDesc(string serviceDesc) { DARABONBA_PTR_SET_VALUE(serviceDesc_, serviceDesc) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Data& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // useStatus Field Functions 
      bool hasUseStatus() const { return this->useStatus_ != nullptr;};
      void deleteUseStatus() { this->useStatus_ = nullptr;};
      inline string getUseStatus() const { DARABONBA_PTR_GET_DEFAULT(useStatus_, "") };
      inline Data& setUseStatus(string useStatus) { DARABONBA_PTR_SET_VALUE(useStatus_, useStatus) };


    protected:
      // Category.
      shared_ptr<string> classify_ {};
      // Main service.
      shared_ptr<string> copyFrom_ {};
      // Service configuration.
      shared_ptr<Data::CustomServiceConf> customServiceConf_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Options.
      Darabonba::Json option_ {};
      // Resource type.
      shared_ptr<string> resourceType_ {};
      // Service code.
      shared_ptr<string> serviceCode_ {};
      // Service description.
      shared_ptr<string> serviceDesc_ {};
      // Service name.
      shared_ptr<string> serviceName_ {};
      // Service type.
      shared_ptr<string> serviceType_ {};
      // UID.
      shared_ptr<string> uid_ {};
      // Usage status
      shared_ptr<string> useStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListServiceConfigsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListServiceConfigsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListServiceConfigsResponseBody::Data>) };
    inline vector<ListServiceConfigsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListServiceConfigsResponseBody::Data>) };
    inline ListServiceConfigsResponseBody& setData(const vector<ListServiceConfigsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListServiceConfigsResponseBody& setData(vector<ListServiceConfigsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListServiceConfigsResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListServiceConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code.
    shared_ptr<int32_t> code_ {};
    // Returned data.
    shared_ptr<vector<ListServiceConfigsResponseBody::Data>> data_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // ID assigned by the backend to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
