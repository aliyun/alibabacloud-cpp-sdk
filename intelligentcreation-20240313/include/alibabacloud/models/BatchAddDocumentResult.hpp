// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDDOCUMENTRESULT_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDDOCUMENTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDocumentResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchAddDocumentResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddDocumentResult& obj) { 
      DARABONBA_PTR_TO_JSON(addDocumentResults, addDocumentResults_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddDocumentResult& obj) { 
      DARABONBA_PTR_FROM_JSON(addDocumentResults, addDocumentResults_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    BatchAddDocumentResult() = default ;
    BatchAddDocumentResult(const BatchAddDocumentResult &) = default ;
    BatchAddDocumentResult(BatchAddDocumentResult &&) = default ;
    BatchAddDocumentResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddDocumentResult() = default ;
    BatchAddDocumentResult& operator=(const BatchAddDocumentResult &) = default ;
    BatchAddDocumentResult& operator=(BatchAddDocumentResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addDocumentResults_ == nullptr
        && this->requestId_ == nullptr; };
    // addDocumentResults Field Functions 
    bool hasAddDocumentResults() const { return this->addDocumentResults_ != nullptr;};
    void deleteAddDocumentResults() { this->addDocumentResults_ = nullptr;};
    inline const vector<AddDocumentResult> & getAddDocumentResults() const { DARABONBA_PTR_GET_CONST(addDocumentResults_, vector<AddDocumentResult>) };
    inline vector<AddDocumentResult> getAddDocumentResults() { DARABONBA_PTR_GET(addDocumentResults_, vector<AddDocumentResult>) };
    inline BatchAddDocumentResult& setAddDocumentResults(const vector<AddDocumentResult> & addDocumentResults) { DARABONBA_PTR_SET_VALUE(addDocumentResults_, addDocumentResults) };
    inline BatchAddDocumentResult& setAddDocumentResults(vector<AddDocumentResult> && addDocumentResults) { DARABONBA_PTR_SET_RVALUE(addDocumentResults_, addDocumentResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchAddDocumentResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<AddDocumentResult>> addDocumentResults_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
