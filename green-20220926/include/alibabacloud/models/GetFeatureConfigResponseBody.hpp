// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATURECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFEATURECONFIGRESPONSEBODY_HPP_
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
  class GetFeatureConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFeatureConfigResponseBody() = default ;
    GetFeatureConfigResponseBody(const GetFeatureConfigResponseBody &) = default ;
    GetFeatureConfigResponseBody(GetFeatureConfigResponseBody &&) = default ;
    GetFeatureConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureConfigResponseBody() = default ;
    GetFeatureConfigResponseBody& operator=(const GetFeatureConfigResponseBody &) = default ;
    GetFeatureConfigResponseBody& operator=(GetFeatureConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureConf, featureConf_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureConf, featureConf_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
      virtual bool empty() const override { return this->featureConf_ == nullptr
        && this->resourceType_ == nullptr && this->serviceCode_ == nullptr && this->type_ == nullptr && this->uid_ == nullptr; };
      // featureConf Field Functions 
      bool hasFeatureConf() const { return this->featureConf_ != nullptr;};
      void deleteFeatureConf() { this->featureConf_ = nullptr;};
      inline const vector<Darabonba::Json> & getFeatureConf() const { DARABONBA_PTR_GET_CONST(featureConf_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getFeatureConf() { DARABONBA_PTR_GET(featureConf_, vector<Darabonba::Json>) };
      inline Data& setFeatureConf(const vector<Darabonba::Json> & featureConf) { DARABONBA_PTR_SET_VALUE(featureConf_, featureConf) };
      inline Data& setFeatureConf(vector<Darabonba::Json> && featureConf) { DARABONBA_PTR_SET_RVALUE(featureConf_, featureConf) };


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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // List of feature configurations
      shared_ptr<vector<Darabonba::Json>> featureConf_ {};
      // Resource type.
      shared_ptr<string> resourceType_ {};
      // Service code.
      shared_ptr<string> serviceCode_ {};
      // Type
      shared_ptr<string> type_ {};
      // UID.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetFeatureConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFeatureConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFeatureConfigResponseBody::Data) };
    inline GetFeatureConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFeatureConfigResponseBody::Data) };
    inline GetFeatureConfigResponseBody& setData(const GetFeatureConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFeatureConfigResponseBody& setData(GetFeatureConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetFeatureConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetFeatureConfigResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFeatureConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFeatureConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code
    shared_ptr<int32_t> code_ {};
    // Returned data.
    shared_ptr<GetFeatureConfigResponseBody::Data> data_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Response message for this request.
    shared_ptr<string> msg_ {};
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
