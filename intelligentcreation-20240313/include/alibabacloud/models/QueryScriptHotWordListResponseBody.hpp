// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCRIPTHOTWORDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCRIPTHOTWORDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AICoachScriptHotWordItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryScriptHotWordListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScriptHotWordListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptHotWordList, scriptHotWordList_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScriptHotWordListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptHotWordList, scriptHotWordList_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    QueryScriptHotWordListResponseBody() = default ;
    QueryScriptHotWordListResponseBody(const QueryScriptHotWordListResponseBody &) = default ;
    QueryScriptHotWordListResponseBody(QueryScriptHotWordListResponseBody &&) = default ;
    QueryScriptHotWordListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScriptHotWordListResponseBody() = default ;
    QueryScriptHotWordListResponseBody& operator=(const QueryScriptHotWordListResponseBody &) = default ;
    QueryScriptHotWordListResponseBody& operator=(QueryScriptHotWordListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->scriptHotWordList_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryScriptHotWordListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryScriptHotWordListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryScriptHotWordListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptHotWordList Field Functions 
    bool hasScriptHotWordList() const { return this->scriptHotWordList_ != nullptr;};
    void deleteScriptHotWordList() { this->scriptHotWordList_ = nullptr;};
    inline const vector<AICoachScriptHotWordItem> & getScriptHotWordList() const { DARABONBA_PTR_GET_CONST(scriptHotWordList_, vector<AICoachScriptHotWordItem>) };
    inline vector<AICoachScriptHotWordItem> getScriptHotWordList() { DARABONBA_PTR_GET(scriptHotWordList_, vector<AICoachScriptHotWordItem>) };
    inline QueryScriptHotWordListResponseBody& setScriptHotWordList(const vector<AICoachScriptHotWordItem> & scriptHotWordList) { DARABONBA_PTR_SET_VALUE(scriptHotWordList_, scriptHotWordList) };
    inline QueryScriptHotWordListResponseBody& setScriptHotWordList(vector<AICoachScriptHotWordItem> && scriptHotWordList) { DARABONBA_PTR_SET_RVALUE(scriptHotWordList_, scriptHotWordList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryScriptHotWordListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline QueryScriptHotWordListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<AICoachScriptHotWordItem>> scriptHotWordList_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
