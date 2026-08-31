// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAssetAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAssetAttributesResponseBody() = default ;
    GetAssetAttributesResponseBody(const GetAssetAttributesResponseBody &) = default ;
    GetAssetAttributesResponseBody(GetAssetAttributesResponseBody &&) = default ;
    GetAssetAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetAttributesResponseBody() = default ;
    GetAssetAttributesResponseBody& operator=(const GetAssetAttributesResponseBody &) = default ;
    GetAssetAttributesResponseBody& operator=(GetAssetAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssetAttributeList, assetAttributeList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetAttributeList, assetAttributeList_);
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
      class AssetAttributeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssetAttributeList& obj) { 
          DARABONBA_PTR_TO_JSON(AssetName, assetName_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(AttributeList, attributeList_);
          DARABONBA_PTR_TO_JSON(Guid, guid_);
          DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
        };
        friend void from_json(const Darabonba::Json& j, AssetAttributeList& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(AttributeList, attributeList_);
          DARABONBA_PTR_FROM_JSON(Guid, guid_);
          DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
        };
        AssetAttributeList() = default ;
        AssetAttributeList(const AssetAttributeList &) = default ;
        AssetAttributeList(AssetAttributeList &&) = default ;
        AssetAttributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssetAttributeList() = default ;
        AssetAttributeList& operator=(const AssetAttributeList &) = default ;
        AssetAttributeList& operator=(AssetAttributeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AttributeList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeList& obj) { 
            DARABONBA_PTR_TO_JSON(AttributeCode, attributeCode_);
            DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
            DARABONBA_PTR_TO_JSON(Required, required_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeList& obj) { 
            DARABONBA_PTR_FROM_JSON(AttributeCode, attributeCode_);
            DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
            DARABONBA_PTR_FROM_JSON(Required, required_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          AttributeList() = default ;
          AttributeList(const AttributeList &) = default ;
          AttributeList(AttributeList &&) = default ;
          AttributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeList() = default ;
          AttributeList& operator=(const AttributeList &) = default ;
          AttributeList& operator=(AttributeList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributeCode_ == nullptr
        && this->attributeName_ == nullptr && this->required_ == nullptr && this->values_ == nullptr; };
          // attributeCode Field Functions 
          bool hasAttributeCode() const { return this->attributeCode_ != nullptr;};
          void deleteAttributeCode() { this->attributeCode_ = nullptr;};
          inline string getAttributeCode() const { DARABONBA_PTR_GET_DEFAULT(attributeCode_, "") };
          inline AttributeList& setAttributeCode(string attributeCode) { DARABONBA_PTR_SET_VALUE(attributeCode_, attributeCode) };


          // attributeName Field Functions 
          bool hasAttributeName() const { return this->attributeName_ != nullptr;};
          void deleteAttributeName() { this->attributeName_ = nullptr;};
          inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
          inline AttributeList& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
          inline AttributeList& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
          inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
          inline AttributeList& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline AttributeList& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // The property code.
          shared_ptr<string> attributeCode_ {};
          // The display name of the property.
          shared_ptr<string> attributeName_ {};
          // Indicates whether the property is required.
          shared_ptr<bool> required_ {};
          // The list of property values.
          shared_ptr<vector<string>> values_ {};
        };

        virtual bool empty() const override { return this->assetName_ == nullptr
        && this->assetType_ == nullptr && this->attributeList_ == nullptr && this->guid_ == nullptr && this->lastModifiedTime_ == nullptr; };
        // assetName Field Functions 
        bool hasAssetName() const { return this->assetName_ != nullptr;};
        void deleteAssetName() { this->assetName_ = nullptr;};
        inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
        inline AssetAttributeList& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
        inline AssetAttributeList& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // attributeList Field Functions 
        bool hasAttributeList() const { return this->attributeList_ != nullptr;};
        void deleteAttributeList() { this->attributeList_ = nullptr;};
        inline const vector<AssetAttributeList::AttributeList> & getAttributeList() const { DARABONBA_PTR_GET_CONST(attributeList_, vector<AssetAttributeList::AttributeList>) };
        inline vector<AssetAttributeList::AttributeList> getAttributeList() { DARABONBA_PTR_GET(attributeList_, vector<AssetAttributeList::AttributeList>) };
        inline AssetAttributeList& setAttributeList(const vector<AssetAttributeList::AttributeList> & attributeList) { DARABONBA_PTR_SET_VALUE(attributeList_, attributeList) };
        inline AssetAttributeList& setAttributeList(vector<AssetAttributeList::AttributeList> && attributeList) { DARABONBA_PTR_SET_RVALUE(attributeList_, attributeList) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline AssetAttributeList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


        // lastModifiedTime Field Functions 
        bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
        void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
        inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
        inline AssetAttributeList& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


      protected:
        // The asset name.
        shared_ptr<string> assetName_ {};
        // The asset type.
        shared_ptr<string> assetType_ {};
        // The list of property values.
        shared_ptr<vector<AssetAttributeList::AttributeList>> attributeList_ {};
        // The unique identifier of the asset.
        shared_ptr<string> guid_ {};
        // The last modified time, in the format of yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> lastModifiedTime_ {};
      };

      virtual bool empty() const override { return this->assetAttributeList_ == nullptr; };
      // assetAttributeList Field Functions 
      bool hasAssetAttributeList() const { return this->assetAttributeList_ != nullptr;};
      void deleteAssetAttributeList() { this->assetAttributeList_ = nullptr;};
      inline const vector<Data::AssetAttributeList> & getAssetAttributeList() const { DARABONBA_PTR_GET_CONST(assetAttributeList_, vector<Data::AssetAttributeList>) };
      inline vector<Data::AssetAttributeList> getAssetAttributeList() { DARABONBA_PTR_GET(assetAttributeList_, vector<Data::AssetAttributeList>) };
      inline Data& setAssetAttributeList(const vector<Data::AssetAttributeList> & assetAttributeList) { DARABONBA_PTR_SET_VALUE(assetAttributeList_, assetAttributeList) };
      inline Data& setAssetAttributeList(vector<Data::AssetAttributeList> && assetAttributeList) { DARABONBA_PTR_SET_RVALUE(assetAttributeList_, assetAttributeList) };


    protected:
      // The list of asset properties.
      shared_ptr<vector<Data::AssetAttributeList>> assetAttributeList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAssetAttributesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAssetAttributesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAssetAttributesResponseBody::Data) };
    inline GetAssetAttributesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAssetAttributesResponseBody::Data) };
    inline GetAssetAttributesResponseBody& setData(const GetAssetAttributesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAssetAttributesResponseBody& setData(GetAssetAttributesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAssetAttributesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAssetAttributesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAssetAttributesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetAssetAttributesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
