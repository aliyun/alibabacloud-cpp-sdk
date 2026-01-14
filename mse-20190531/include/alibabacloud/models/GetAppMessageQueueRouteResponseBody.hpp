// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPMESSAGEQUEUEROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPMESSAGEQUEUEROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetAppMessageQueueRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppMessageQueueRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppMessageQueueRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAppMessageQueueRouteResponseBody() = default ;
    GetAppMessageQueueRouteResponseBody(const GetAppMessageQueueRouteResponseBody &) = default ;
    GetAppMessageQueueRouteResponseBody(GetAppMessageQueueRouteResponseBody &&) = default ;
    GetAppMessageQueueRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppMessageQueueRouteResponseBody() = default ;
    GetAppMessageQueueRouteResponseBody& operator=(const GetAppMessageQueueRouteResponseBody &) = default ;
    GetAppMessageQueueRouteResponseBody& operator=(GetAppMessageQueueRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(FilterSide, filterSide_);
        DARABONBA_PTR_TO_JSON(GrayBaseTags, grayBaseTags_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(FilterSide, filterSide_);
        DARABONBA_PTR_FROM_JSON(GrayBaseTags, grayBaseTags_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->enable_ == nullptr && this->filterSide_ == nullptr && this->grayBaseTags_ == nullptr && this->region_ == nullptr && this->tags_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // filterSide Field Functions 
      bool hasFilterSide() const { return this->filterSide_ != nullptr;};
      void deleteFilterSide() { this->filterSide_ = nullptr;};
      inline string getFilterSide() const { DARABONBA_PTR_GET_DEFAULT(filterSide_, "") };
      inline Data& setFilterSide(string filterSide) { DARABONBA_PTR_SET_VALUE(filterSide_, filterSide) };


      // grayBaseTags Field Functions 
      bool hasGrayBaseTags() const { return this->grayBaseTags_ != nullptr;};
      void deleteGrayBaseTags() { this->grayBaseTags_ = nullptr;};
      inline const vector<string> & getGrayBaseTags() const { DARABONBA_PTR_GET_CONST(grayBaseTags_, vector<string>) };
      inline vector<string> getGrayBaseTags() { DARABONBA_PTR_GET(grayBaseTags_, vector<string>) };
      inline Data& setGrayBaseTags(const vector<string> & grayBaseTags) { DARABONBA_PTR_SET_VALUE(grayBaseTags_, grayBaseTags) };
      inline Data& setGrayBaseTags(vector<string> && grayBaseTags) { DARABONBA_PTR_SET_RVALUE(grayBaseTags_, grayBaseTags) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Data& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // Indicates whether the canary release for messaging feature is enabled.
      // 
      // *   `true`: enabled
      // *   `false`: disabled
      shared_ptr<bool> enable_ {};
      // The side for message filtering when the canary release for messaging feature is enabled.
      shared_ptr<string> filterSide_ {};
      shared_ptr<vector<string>> grayBaseTags_ {};
      // The region ID.
      shared_ptr<string> region_ {};
      // The tags used to ignore message consumption for nodes in untagged environments.
      shared_ptr<vector<string>> tags_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAppMessageQueueRouteResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAppMessageQueueRouteResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAppMessageQueueRouteResponseBody::Data) };
    inline GetAppMessageQueueRouteResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAppMessageQueueRouteResponseBody::Data) };
    inline GetAppMessageQueueRouteResponseBody& setData(const GetAppMessageQueueRouteResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAppMessageQueueRouteResponseBody& setData(GetAppMessageQueueRouteResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAppMessageQueueRouteResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAppMessageQueueRouteResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppMessageQueueRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAppMessageQueueRouteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code returned.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<GetAppMessageQueueRouteResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    // 
    // *   If the request is successful, a success message is returned.
    // *   If the request fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false. The value true indicates that the request was successful. The value false indicates that the request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
