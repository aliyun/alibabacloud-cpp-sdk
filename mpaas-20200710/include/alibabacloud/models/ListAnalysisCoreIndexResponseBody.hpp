// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISCOREINDEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISCOREINDEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAnalysisCoreIndexResponseBodyResultContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class ListAnalysisCoreIndexResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisCoreIndexResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnalysisCoreIndexResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAnalysisCoreIndexResponseBody() = default ;
    ListAnalysisCoreIndexResponseBody(const ListAnalysisCoreIndexResponseBody &) = default ;
    ListAnalysisCoreIndexResponseBody(ListAnalysisCoreIndexResponseBody &&) = default ;
    ListAnalysisCoreIndexResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisCoreIndexResponseBody() = default ;
    ListAnalysisCoreIndexResponseBody& operator=(const ListAnalysisCoreIndexResponseBody &) = default ;
    ListAnalysisCoreIndexResponseBody& operator=(ListAnalysisCoreIndexResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resultCode_ != nullptr && this->resultContent_ != nullptr && this->resultMessage_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAnalysisCoreIndexResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListAnalysisCoreIndexResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const ListAnalysisCoreIndexResponseBodyResultContent & resultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, ListAnalysisCoreIndexResponseBodyResultContent) };
    inline ListAnalysisCoreIndexResponseBodyResultContent resultContent() { DARABONBA_PTR_GET(resultContent_, ListAnalysisCoreIndexResponseBodyResultContent) };
    inline ListAnalysisCoreIndexResponseBody& setResultContent(const ListAnalysisCoreIndexResponseBodyResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline ListAnalysisCoreIndexResponseBody& setResultContent(ListAnalysisCoreIndexResponseBodyResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListAnalysisCoreIndexResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAnalysisCoreIndexResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<ListAnalysisCoreIndexResponseBodyResultContent> resultContent_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
