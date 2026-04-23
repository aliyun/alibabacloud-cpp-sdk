// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERBILLINGCOSTTABSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERBILLINGCOSTTABSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CostTabDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterBillingCostTabsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterBillingCostTabsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterBillingCostTabsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelRouterBillingCostTabsResponseBody() = default ;
    ModelRouterBillingCostTabsResponseBody(const ModelRouterBillingCostTabsResponseBody &) = default ;
    ModelRouterBillingCostTabsResponseBody(ModelRouterBillingCostTabsResponseBody &&) = default ;
    ModelRouterBillingCostTabsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterBillingCostTabsResponseBody() = default ;
    ModelRouterBillingCostTabsResponseBody& operator=(const ModelRouterBillingCostTabsResponseBody &) = default ;
    ModelRouterBillingCostTabsResponseBody& operator=(ModelRouterBillingCostTabsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CostTabDTO> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CostTabDTO>) };
    inline vector<CostTabDTO> getData() { DARABONBA_PTR_GET(data_, vector<CostTabDTO>) };
    inline ModelRouterBillingCostTabsResponseBody& setData(const vector<CostTabDTO> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelRouterBillingCostTabsResponseBody& setData(vector<CostTabDTO> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelRouterBillingCostTabsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModelRouterBillingCostTabsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelRouterBillingCostTabsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterBillingCostTabsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterBillingCostTabsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterBillingCostTabsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelRouterBillingCostTabsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<CostTabDTO>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
