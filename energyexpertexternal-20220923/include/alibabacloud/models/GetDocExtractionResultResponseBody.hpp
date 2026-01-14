// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContentItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocExtractionResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocExtractionResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocExtractionResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDocExtractionResultResponseBody() = default ;
    GetDocExtractionResultResponseBody(const GetDocExtractionResultResponseBody &) = default ;
    GetDocExtractionResultResponseBody(GetDocExtractionResultResponseBody &&) = default ;
    GetDocExtractionResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocExtractionResultResponseBody() = default ;
    GetDocExtractionResultResponseBody& operator=(const GetDocExtractionResultResponseBody &) = default ;
    GetDocExtractionResultResponseBody& operator=(GetDocExtractionResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(kvListInfo, kvListInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(kvListInfo, kvListInfo_);
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
      class KvListInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KvListInfo& obj) { 
          DARABONBA_PTR_TO_JSON(context, context_);
          DARABONBA_PTR_TO_JSON(keyName, keyName_);
          DARABONBA_PTR_TO_JSON(keyValue, keyValue_);
        };
        friend void from_json(const Darabonba::Json& j, KvListInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(context, context_);
          DARABONBA_PTR_FROM_JSON(keyName, keyName_);
          DARABONBA_PTR_FROM_JSON(keyValue, keyValue_);
        };
        KvListInfo() = default ;
        KvListInfo(const KvListInfo &) = default ;
        KvListInfo(KvListInfo &&) = default ;
        KvListInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KvListInfo() = default ;
        KvListInfo& operator=(const KvListInfo &) = default ;
        KvListInfo& operator=(KvListInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Context : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Context& obj) { 
            DARABONBA_PTR_TO_JSON(confidence, confidence_);
            DARABONBA_PTR_TO_JSON(key, key_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Context& obj) { 
            DARABONBA_PTR_FROM_JSON(confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(key, key_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Context() = default ;
          Context(const Context &) = default ;
          Context(Context &&) = default ;
          Context(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Context() = default ;
          Context& operator=(const Context &) = default ;
          Context& operator=(Context &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Confidence : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Confidence& obj) { 
              DARABONBA_PTR_TO_JSON(keyConfidence, keyConfidence_);
              DARABONBA_PTR_TO_JSON(valueConfidence, valueConfidence_);
            };
            friend void from_json(const Darabonba::Json& j, Confidence& obj) { 
              DARABONBA_PTR_FROM_JSON(keyConfidence, keyConfidence_);
              DARABONBA_PTR_FROM_JSON(valueConfidence, valueConfidence_);
            };
            Confidence() = default ;
            Confidence(const Confidence &) = default ;
            Confidence(Confidence &&) = default ;
            Confidence(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Confidence() = default ;
            Confidence& operator=(const Confidence &) = default ;
            Confidence& operator=(Confidence &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->keyConfidence_ == nullptr
        && this->valueConfidence_ == nullptr; };
            // keyConfidence Field Functions 
            bool hasKeyConfidence() const { return this->keyConfidence_ != nullptr;};
            void deleteKeyConfidence() { this->keyConfidence_ = nullptr;};
            inline double getKeyConfidence() const { DARABONBA_PTR_GET_DEFAULT(keyConfidence_, 0.0) };
            inline Confidence& setKeyConfidence(double keyConfidence) { DARABONBA_PTR_SET_VALUE(keyConfidence_, keyConfidence) };


            // valueConfidence Field Functions 
            bool hasValueConfidence() const { return this->valueConfidence_ != nullptr;};
            void deleteValueConfidence() { this->valueConfidence_ = nullptr;};
            inline double getValueConfidence() const { DARABONBA_PTR_GET_DEFAULT(valueConfidence_, 0.0) };
            inline Confidence& setValueConfidence(double valueConfidence) { DARABONBA_PTR_SET_VALUE(valueConfidence_, valueConfidence) };


          protected:
            // Key confidence level
            shared_ptr<double> keyConfidence_ {};
            // value confidence level
            shared_ptr<double> valueConfidence_ {};
          };

          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline const Context::Confidence & getConfidence() const { DARABONBA_PTR_GET_CONST(confidence_, Context::Confidence) };
          inline Context::Confidence getConfidence() { DARABONBA_PTR_GET(confidence_, Context::Confidence) };
          inline Context& setConfidence(const Context::Confidence & confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };
          inline Context& setConfidence(Context::Confidence && confidence) { DARABONBA_PTR_SET_RVALUE(confidence_, confidence) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline const vector<ContentItem> & getKey() const { DARABONBA_PTR_GET_CONST(key_, vector<ContentItem>) };
          inline vector<ContentItem> getKey() { DARABONBA_PTR_GET(key_, vector<ContentItem>) };
          inline Context& setKey(const vector<ContentItem> & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
          inline Context& setKey(vector<ContentItem> && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline const vector<ContentItem> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<ContentItem>) };
          inline vector<ContentItem> getValue() { DARABONBA_PTR_GET(value_, vector<ContentItem>) };
          inline Context& setValue(const vector<ContentItem> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
          inline Context& setValue(vector<ContentItem> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


        protected:
          // Confidence level
          shared_ptr<Context::Confidence> confidence_ {};
          // Details of key recall information
          shared_ptr<vector<ContentItem>> key_ {};
          // Details of value recall information
          shared_ptr<vector<ContentItem>> value_ {};
        };

        virtual bool empty() const override { return this->context_ == nullptr
        && this->keyName_ == nullptr && this->keyValue_ == nullptr; };
        // context Field Functions 
        bool hasContext() const { return this->context_ != nullptr;};
        void deleteContext() { this->context_ = nullptr;};
        inline const KvListInfo::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, KvListInfo::Context) };
        inline KvListInfo::Context getContext() { DARABONBA_PTR_GET(context_, KvListInfo::Context) };
        inline KvListInfo& setContext(const KvListInfo::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
        inline KvListInfo& setContext(KvListInfo::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


        // keyName Field Functions 
        bool hasKeyName() const { return this->keyName_ != nullptr;};
        void deleteKeyName() { this->keyName_ = nullptr;};
        inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
        inline KvListInfo& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


        // keyValue Field Functions 
        bool hasKeyValue() const { return this->keyValue_ != nullptr;};
        void deleteKeyValue() { this->keyValue_ = nullptr;};
        inline string getKeyValue() const { DARABONBA_PTR_GET_DEFAULT(keyValue_, "") };
        inline KvListInfo& setKeyValue(string keyValue) { DARABONBA_PTR_SET_VALUE(keyValue_, keyValue) };


      protected:
        // Recalled content
        shared_ptr<KvListInfo::Context> context_ {};
        // Field key name
        shared_ptr<string> keyName_ {};
        // Field key value
        shared_ptr<string> keyValue_ {};
      };

      virtual bool empty() const override { return this->kvListInfo_ == nullptr; };
      // kvListInfo Field Functions 
      bool hasKvListInfo() const { return this->kvListInfo_ != nullptr;};
      void deleteKvListInfo() { this->kvListInfo_ = nullptr;};
      inline const vector<Data::KvListInfo> & getKvListInfo() const { DARABONBA_PTR_GET_CONST(kvListInfo_, vector<Data::KvListInfo>) };
      inline vector<Data::KvListInfo> getKvListInfo() { DARABONBA_PTR_GET(kvListInfo_, vector<Data::KvListInfo>) };
      inline Data& setKvListInfo(const vector<Data::KvListInfo> & kvListInfo) { DARABONBA_PTR_SET_VALUE(kvListInfo_, kvListInfo) };
      inline Data& setKvListInfo(vector<Data::KvListInfo> && kvListInfo) { DARABONBA_PTR_SET_RVALUE(kvListInfo_, kvListInfo) };


    protected:
      // Details of document extraction results
      shared_ptr<vector<Data::KvListInfo>> kvListInfo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDocExtractionResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDocExtractionResultResponseBody::Data) };
    inline GetDocExtractionResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDocExtractionResultResponseBody::Data) };
    inline GetDocExtractionResultResponseBody& setData(const GetDocExtractionResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocExtractionResultResponseBody& setData(GetDocExtractionResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocExtractionResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data structure.
    shared_ptr<GetDocExtractionResultResponseBody::Data> data_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
