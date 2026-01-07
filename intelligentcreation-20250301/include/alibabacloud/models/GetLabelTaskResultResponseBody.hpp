// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLABELTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLABELTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{
namespace Models
{
  class GetLabelTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLabelTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultDataUrl, resultDataUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tokens, tokens_);
    };
    friend void from_json(const Darabonba::Json& j, GetLabelTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultDataUrl, resultDataUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
    };
    GetLabelTaskResultResponseBody() = default ;
    GetLabelTaskResultResponseBody(const GetLabelTaskResultResponseBody &) = default ;
    GetLabelTaskResultResponseBody(GetLabelTaskResultResponseBody &&) = default ;
    GetLabelTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLabelTaskResultResponseBody() = default ;
    GetLabelTaskResultResponseBody& operator=(const GetLabelTaskResultResponseBody &) = default ;
    GetLabelTaskResultResponseBody& operator=(GetLabelTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultDataUrl_ == nullptr && this->status_ == nullptr && this->tokens_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLabelTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultDataUrl Field Functions 
    bool hasResultDataUrl() const { return this->resultDataUrl_ != nullptr;};
    void deleteResultDataUrl() { this->resultDataUrl_ = nullptr;};
    inline string getResultDataUrl() const { DARABONBA_PTR_GET_DEFAULT(resultDataUrl_, "") };
    inline GetLabelTaskResultResponseBody& setResultDataUrl(string resultDataUrl) { DARABONBA_PTR_SET_VALUE(resultDataUrl_, resultDataUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLabelTaskResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline string getTokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, "") };
    inline GetLabelTaskResultResponseBody& setTokens(string tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultDataUrl_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> tokens_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301
#endif
