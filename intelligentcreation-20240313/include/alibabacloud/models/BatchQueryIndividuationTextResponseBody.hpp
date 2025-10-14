// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYINDIVIDUATIONTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYINDIVIDUATIONTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchQueryIndividuationTextResponseBodyTextList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchQueryIndividuationTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryIndividuationTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(textList, textList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryIndividuationTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(textList, textList_);
    };
    BatchQueryIndividuationTextResponseBody() = default ;
    BatchQueryIndividuationTextResponseBody(const BatchQueryIndividuationTextResponseBody &) = default ;
    BatchQueryIndividuationTextResponseBody(BatchQueryIndividuationTextResponseBody &&) = default ;
    BatchQueryIndividuationTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryIndividuationTextResponseBody() = default ;
    BatchQueryIndividuationTextResponseBody& operator=(const BatchQueryIndividuationTextResponseBody &) = default ;
    BatchQueryIndividuationTextResponseBody& operator=(BatchQueryIndividuationTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->textList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryIndividuationTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // textList Field Functions 
    bool hasTextList() const { return this->textList_ != nullptr;};
    void deleteTextList() { this->textList_ = nullptr;};
    inline const vector<BatchQueryIndividuationTextResponseBodyTextList> & textList() const { DARABONBA_PTR_GET_CONST(textList_, vector<BatchQueryIndividuationTextResponseBodyTextList>) };
    inline vector<BatchQueryIndividuationTextResponseBodyTextList> textList() { DARABONBA_PTR_GET(textList_, vector<BatchQueryIndividuationTextResponseBodyTextList>) };
    inline BatchQueryIndividuationTextResponseBody& setTextList(const vector<BatchQueryIndividuationTextResponseBodyTextList> & textList) { DARABONBA_PTR_SET_VALUE(textList_, textList) };
    inline BatchQueryIndividuationTextResponseBody& setTextList(vector<BatchQueryIndividuationTextResponseBodyTextList> && textList) { DARABONBA_PTR_SET_RVALUE(textList_, textList) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<BatchQueryIndividuationTextResponseBodyTextList>> textList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
