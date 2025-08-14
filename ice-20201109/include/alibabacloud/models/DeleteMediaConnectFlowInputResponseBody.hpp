// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIACONNECTFLOWINPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIACONNECTFLOWINPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteMediaConnectFlowInputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaConnectFlowInputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaConnectFlowInputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
    };
    DeleteMediaConnectFlowInputResponseBody() = default ;
    DeleteMediaConnectFlowInputResponseBody(const DeleteMediaConnectFlowInputResponseBody &) = default ;
    DeleteMediaConnectFlowInputResponseBody(DeleteMediaConnectFlowInputResponseBody &&) = default ;
    DeleteMediaConnectFlowInputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaConnectFlowInputResponseBody() = default ;
    DeleteMediaConnectFlowInputResponseBody& operator=(const DeleteMediaConnectFlowInputResponseBody &) = default ;
    DeleteMediaConnectFlowInputResponseBody& operator=(DeleteMediaConnectFlowInputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->description_ != nullptr && this->requestId_ != nullptr && this->retCode_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DeleteMediaConnectFlowInputResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeleteMediaConnectFlowInputResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMediaConnectFlowInputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline DeleteMediaConnectFlowInputResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


  protected:
    // The response body.
    std::shared_ptr<string> content_ = nullptr;
    // The call description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned error code. A value of 0 indicates the call is successful.
    std::shared_ptr<int32_t> retCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
