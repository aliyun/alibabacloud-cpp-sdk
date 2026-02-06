// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFlowResponseBody() = default ;
    GetFlowResponseBody(const GetFlowResponseBody &) = default ;
    GetFlowResponseBody(GetFlowResponseBody &&) = default ;
    GetFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowResponseBody() = default ;
    GetFlowResponseBody& operator=(const GetFlowResponseBody &) = default ;
    GetFlowResponseBody& operator=(GetFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(DataApiVersion, dataApiVersion_);
        DARABONBA_PTR_TO_JSON(EndpointUri, endpointUri_);
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(FlowName, flowName_);
        DARABONBA_PTR_TO_JSON(JSONVersion, JSONVersion_);
        DARABONBA_PTR_TO_JSON(PreviewUrl, previewUrl_);
        DARABONBA_PTR_TO_JSON(PreviewUrlExpires, previewUrlExpires_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(DataApiVersion, dataApiVersion_);
        DARABONBA_PTR_FROM_JSON(EndpointUri, endpointUri_);
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
        DARABONBA_PTR_FROM_JSON(JSONVersion, JSONVersion_);
        DARABONBA_PTR_FROM_JSON(PreviewUrl, previewUrl_);
        DARABONBA_PTR_FROM_JSON(PreviewUrlExpires, previewUrlExpires_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->categories_ == nullptr
        && this->dataApiVersion_ == nullptr && this->endpointUri_ == nullptr && this->flowId_ == nullptr && this->flowName_ == nullptr && this->JSONVersion_ == nullptr
        && this->previewUrl_ == nullptr && this->previewUrlExpires_ == nullptr && this->status_ == nullptr; };
      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
      inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
      inline Data& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline Data& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // dataApiVersion Field Functions 
      bool hasDataApiVersion() const { return this->dataApiVersion_ != nullptr;};
      void deleteDataApiVersion() { this->dataApiVersion_ = nullptr;};
      inline string getDataApiVersion() const { DARABONBA_PTR_GET_DEFAULT(dataApiVersion_, "") };
      inline Data& setDataApiVersion(string dataApiVersion) { DARABONBA_PTR_SET_VALUE(dataApiVersion_, dataApiVersion) };


      // endpointUri Field Functions 
      bool hasEndpointUri() const { return this->endpointUri_ != nullptr;};
      void deleteEndpointUri() { this->endpointUri_ = nullptr;};
      inline string getEndpointUri() const { DARABONBA_PTR_GET_DEFAULT(endpointUri_, "") };
      inline Data& setEndpointUri(string endpointUri) { DARABONBA_PTR_SET_VALUE(endpointUri_, endpointUri) };


      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline Data& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Data& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


      // JSONVersion Field Functions 
      bool hasJSONVersion() const { return this->JSONVersion_ != nullptr;};
      void deleteJSONVersion() { this->JSONVersion_ = nullptr;};
      inline string getJSONVersion() const { DARABONBA_PTR_GET_DEFAULT(JSONVersion_, "") };
      inline Data& setJSONVersion(string JSONVersion) { DARABONBA_PTR_SET_VALUE(JSONVersion_, JSONVersion) };


      // previewUrl Field Functions 
      bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
      void deletePreviewUrl() { this->previewUrl_ = nullptr;};
      inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
      inline Data& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


      // previewUrlExpires Field Functions 
      bool hasPreviewUrlExpires() const { return this->previewUrlExpires_ != nullptr;};
      void deletePreviewUrlExpires() { this->previewUrlExpires_ = nullptr;};
      inline int64_t getPreviewUrlExpires() const { DARABONBA_PTR_GET_DEFAULT(previewUrlExpires_, 0L) };
      inline Data& setPreviewUrlExpires(int64_t previewUrlExpires) { DARABONBA_PTR_SET_VALUE(previewUrlExpires_, previewUrlExpires) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The categories of the Flow.
      shared_ptr<vector<string>> categories_ {};
      // The version number of the API.
      shared_ptr<string> dataApiVersion_ {};
      shared_ptr<string> endpointUri_ {};
      // The Flow ID.
      shared_ptr<string> flowId_ {};
      // The Flow name.
      shared_ptr<string> flowName_ {};
      // The JSON version.
      shared_ptr<string> JSONVersion_ {};
      // The temporary preview URL.
      shared_ptr<string> previewUrl_ {};
      // The time when the preview URL expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> previewUrlExpires_ {};
      // The state of the Flow.
      // 
      // Valid values:
      // 
      // *   PUBLISHED
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   DRAFT
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   DEPRECATED
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetFlowResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFlowResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFlowResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFlowResponseBody::Data) };
    inline GetFlowResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFlowResponseBody::Data) };
    inline GetFlowResponseBody& setData(const GetFlowResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFlowResponseBody& setData(GetFlowResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFlowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // If OK is returned, the request was successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetFlowResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
