// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEMETAENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEMETAENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetaEntityWriteResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchDeleteMetaEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteMetaEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteMetaEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchDeleteMetaEntitiesResponseBody() = default ;
    BatchDeleteMetaEntitiesResponseBody(const BatchDeleteMetaEntitiesResponseBody &) = default ;
    BatchDeleteMetaEntitiesResponseBody(BatchDeleteMetaEntitiesResponseBody &&) = default ;
    BatchDeleteMetaEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteMetaEntitiesResponseBody() = default ;
    BatchDeleteMetaEntitiesResponseBody& operator=(const BatchDeleteMetaEntitiesResponseBody &) = default ;
    BatchDeleteMetaEntitiesResponseBody& operator=(BatchDeleteMetaEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDeleteMetaEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<MetaEntityWriteResult> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<MetaEntityWriteResult>) };
    inline vector<MetaEntityWriteResult> getResults() { DARABONBA_PTR_GET(results_, vector<MetaEntityWriteResult>) };
    inline BatchDeleteMetaEntitiesResponseBody& setResults(const vector<MetaEntityWriteResult> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchDeleteMetaEntitiesResponseBody& setResults(vector<MetaEntityWriteResult> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchDeleteMetaEntitiesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // An array of deletion results, one for each requested entity. Each result indicates whether the deletion was successful and includes an error message upon failure.
    shared_ptr<vector<MetaEntityWriteResult>> results_ {};
    // Indicates whether the request was successful. This parameter returns true even if the deletion of some entities fails. To check the status of each individual deletion, see the Success and ErrorMessage fields in the Results array.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
