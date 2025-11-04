// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaConnectFlowResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Retcode, retcode_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Retcode, retcode_);
    };
    GetMediaConnectFlowResponseBody() = default ;
    GetMediaConnectFlowResponseBody(const GetMediaConnectFlowResponseBody &) = default ;
    GetMediaConnectFlowResponseBody(GetMediaConnectFlowResponseBody &&) = default ;
    GetMediaConnectFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectFlowResponseBody() = default ;
    GetMediaConnectFlowResponseBody& operator=(const GetMediaConnectFlowResponseBody &) = default ;
    GetMediaConnectFlowResponseBody& operator=(GetMediaConnectFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->description_ == nullptr && return this->requestId_ == nullptr && return this->retcode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetMediaConnectFlowResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, GetMediaConnectFlowResponseBodyContent) };
    inline GetMediaConnectFlowResponseBodyContent content() { DARABONBA_PTR_GET(content_, GetMediaConnectFlowResponseBodyContent) };
    inline GetMediaConnectFlowResponseBody& setContent(const GetMediaConnectFlowResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetMediaConnectFlowResponseBody& setContent(GetMediaConnectFlowResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMediaConnectFlowResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaConnectFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcode Field Functions 
    bool hasRetcode() const { return this->retcode_ != nullptr;};
    void deleteRetcode() { this->retcode_ = nullptr;};
    inline int32_t retcode() const { DARABONBA_PTR_GET_DEFAULT(retcode_, 0) };
    inline GetMediaConnectFlowResponseBody& setRetcode(int32_t retcode) { DARABONBA_PTR_SET_VALUE(retcode_, retcode) };


  protected:
    // The response body.
    std::shared_ptr<GetMediaConnectFlowResponseBodyContent> content_ = nullptr;
    // The call description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned code. A value of 0 indicates the call is successful.
    std::shared_ptr<int32_t> retcode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
