// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESTINATIONCIDRBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDESTINATIONCIDRBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetDestinationCidrBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDestinationCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDestinationCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDestinationCidrBlockResponseBody() = default ;
    GetDestinationCidrBlockResponseBody(const GetDestinationCidrBlockResponseBody &) = default ;
    GetDestinationCidrBlockResponseBody(GetDestinationCidrBlockResponseBody &&) = default ;
    GetDestinationCidrBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDestinationCidrBlockResponseBody() = default ;
    GetDestinationCidrBlockResponseBody& operator=(const GetDestinationCidrBlockResponseBody &) = default ;
    GetDestinationCidrBlockResponseBody& operator=(GetDestinationCidrBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
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
      virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr; };
      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline const vector<string> & getDestinationCidrBlock() const { DARABONBA_PTR_GET_CONST(destinationCidrBlock_, vector<string>) };
      inline vector<string> getDestinationCidrBlock() { DARABONBA_PTR_GET(destinationCidrBlock_, vector<string>) };
      inline Content& setDestinationCidrBlock(const vector<string> & destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };
      inline Content& setDestinationCidrBlock(vector<string> && destinationCidrBlock) { DARABONBA_PTR_SET_RVALUE(destinationCidrBlock_, destinationCidrBlock) };


    protected:
      // List of destination CIDR block information for the current network instance
      shared_ptr<vector<string>> destinationCidrBlock_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetDestinationCidrBlockResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetDestinationCidrBlockResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetDestinationCidrBlockResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetDestinationCidrBlockResponseBody::Content) };
    inline GetDestinationCidrBlockResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetDestinationCidrBlockResponseBody::Content) };
    inline GetDestinationCidrBlockResponseBody& setContent(const GetDestinationCidrBlockResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetDestinationCidrBlockResponseBody& setContent(GetDestinationCidrBlockResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDestinationCidrBlockResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDestinationCidrBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code
    shared_ptr<int32_t> code_ {};
    // Response content
    shared_ptr<GetDestinationCidrBlockResponseBody::Content> content_ {};
    // Error message. (Indicates the reason for the anomaly when the instance status is abnormal.)
    shared_ptr<string> message_ {};
    // ID of this request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
