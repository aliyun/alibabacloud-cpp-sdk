// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDatasetsResponseBodyCustomSemanticSearchConfig.hpp>
#include <vector>
#include <alibabacloud/models/ListDatasetsResponseBodyData.hpp>
#include <alibabacloud/models/ListDatasetsResponseBodyThirdSearchConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDatasetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomSemanticSearchConfig, customSemanticSearchConfig_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(ThirdSearchConfig, thirdSearchConfig_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomSemanticSearchConfig, customSemanticSearchConfig_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(ThirdSearchConfig, thirdSearchConfig_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody(ListDatasetsResponseBody &&) = default ;
    ListDatasetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody& operator=(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody& operator=(ListDatasetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->customSemanticSearchConfig_ != nullptr && this->data_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->thirdSearchConfig_ != nullptr && this->totalCount_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDatasetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customSemanticSearchConfig Field Functions 
    bool hasCustomSemanticSearchConfig() const { return this->customSemanticSearchConfig_ != nullptr;};
    void deleteCustomSemanticSearchConfig() { this->customSemanticSearchConfig_ = nullptr;};
    inline const ListDatasetsResponseBodyCustomSemanticSearchConfig & customSemanticSearchConfig() const { DARABONBA_PTR_GET_CONST(customSemanticSearchConfig_, ListDatasetsResponseBodyCustomSemanticSearchConfig) };
    inline ListDatasetsResponseBodyCustomSemanticSearchConfig customSemanticSearchConfig() { DARABONBA_PTR_GET(customSemanticSearchConfig_, ListDatasetsResponseBodyCustomSemanticSearchConfig) };
    inline ListDatasetsResponseBody& setCustomSemanticSearchConfig(const ListDatasetsResponseBodyCustomSemanticSearchConfig & customSemanticSearchConfig) { DARABONBA_PTR_SET_VALUE(customSemanticSearchConfig_, customSemanticSearchConfig) };
    inline ListDatasetsResponseBody& setCustomSemanticSearchConfig(ListDatasetsResponseBodyCustomSemanticSearchConfig && customSemanticSearchConfig) { DARABONBA_PTR_SET_RVALUE(customSemanticSearchConfig_, customSemanticSearchConfig) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDatasetsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDatasetsResponseBodyData>) };
    inline vector<ListDatasetsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListDatasetsResponseBodyData>) };
    inline ListDatasetsResponseBody& setData(const vector<ListDatasetsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDatasetsResponseBody& setData(vector<ListDatasetsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDatasetsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDatasetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDatasetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // thirdSearchConfig Field Functions 
    bool hasThirdSearchConfig() const { return this->thirdSearchConfig_ != nullptr;};
    void deleteThirdSearchConfig() { this->thirdSearchConfig_ = nullptr;};
    inline const ListDatasetsResponseBodyThirdSearchConfig & thirdSearchConfig() const { DARABONBA_PTR_GET_CONST(thirdSearchConfig_, ListDatasetsResponseBodyThirdSearchConfig) };
    inline ListDatasetsResponseBodyThirdSearchConfig thirdSearchConfig() { DARABONBA_PTR_GET(thirdSearchConfig_, ListDatasetsResponseBodyThirdSearchConfig) };
    inline ListDatasetsResponseBody& setThirdSearchConfig(const ListDatasetsResponseBodyThirdSearchConfig & thirdSearchConfig) { DARABONBA_PTR_SET_VALUE(thirdSearchConfig_, thirdSearchConfig) };
    inline ListDatasetsResponseBody& setThirdSearchConfig(ListDatasetsResponseBodyThirdSearchConfig && thirdSearchConfig) { DARABONBA_PTR_SET_RVALUE(thirdSearchConfig_, thirdSearchConfig) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDatasetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<ListDatasetsResponseBodyCustomSemanticSearchConfig> customSemanticSearchConfig_ = nullptr;
    std::shared_ptr<vector<ListDatasetsResponseBodyData>> data_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<ListDatasetsResponseBodyThirdSearchConfig> thirdSearchConfig_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
