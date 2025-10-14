// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetProjectTaskResponseBodyResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetProjectTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetProjectTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetProjectTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultList, resultList_);
    };
    BatchGetProjectTaskResponseBody() = default ;
    BatchGetProjectTaskResponseBody(const BatchGetProjectTaskResponseBody &) = default ;
    BatchGetProjectTaskResponseBody(BatchGetProjectTaskResponseBody &&) = default ;
    BatchGetProjectTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetProjectTaskResponseBody() = default ;
    BatchGetProjectTaskResponseBody& operator=(const BatchGetProjectTaskResponseBody &) = default ;
    BatchGetProjectTaskResponseBody& operator=(BatchGetProjectTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetProjectTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<BatchGetProjectTaskResponseBodyResultList> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<BatchGetProjectTaskResponseBodyResultList>) };
    inline vector<BatchGetProjectTaskResponseBodyResultList> resultList() { DARABONBA_PTR_GET(resultList_, vector<BatchGetProjectTaskResponseBodyResultList>) };
    inline BatchGetProjectTaskResponseBody& setResultList(const vector<BatchGetProjectTaskResponseBodyResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline BatchGetProjectTaskResponseBody& setResultList(vector<BatchGetProjectTaskResponseBodyResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<BatchGetProjectTaskResponseBodyResultList>> resultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
