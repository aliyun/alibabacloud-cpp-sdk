// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIACONNECTFLOWOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIACONNECTFLOWOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddMediaConnectFlowOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaConnectFlowOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaConnectFlowOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
    };
    AddMediaConnectFlowOutputResponseBody() = default ;
    AddMediaConnectFlowOutputResponseBody(const AddMediaConnectFlowOutputResponseBody &) = default ;
    AddMediaConnectFlowOutputResponseBody(AddMediaConnectFlowOutputResponseBody &&) = default ;
    AddMediaConnectFlowOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaConnectFlowOutputResponseBody() = default ;
    AddMediaConnectFlowOutputResponseBody& operator=(const AddMediaConnectFlowOutputResponseBody &) = default ;
    AddMediaConnectFlowOutputResponseBody& operator=(AddMediaConnectFlowOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->outputUrl_ == nullptr; };
      // outputUrl Field Functions 
      bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
      void deleteOutputUrl() { this->outputUrl_ = nullptr;};
      inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
      inline Content& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    protected:
      // The output URL.
      shared_ptr<string> outputUrl_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->requestId_ == nullptr && this->retCode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const AddMediaConnectFlowOutputResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, AddMediaConnectFlowOutputResponseBody::Content) };
    inline AddMediaConnectFlowOutputResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, AddMediaConnectFlowOutputResponseBody::Content) };
    inline AddMediaConnectFlowOutputResponseBody& setContent(const AddMediaConnectFlowOutputResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline AddMediaConnectFlowOutputResponseBody& setContent(AddMediaConnectFlowOutputResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddMediaConnectFlowOutputResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMediaConnectFlowOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline AddMediaConnectFlowOutputResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


  protected:
    // The response body.
    shared_ptr<AddMediaConnectFlowOutputResponseBody::Content> content_ {};
    // The call description.
    shared_ptr<string> description_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned error code. A value of 0 indicates that the call is successful.
    shared_ptr<int32_t> retCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
