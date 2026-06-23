// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEMETAENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEMETAENTITIESRESPONSEBODY_HPP_
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
  class BatchCreateMetaEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateMetaEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateMetaEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchCreateMetaEntitiesResponseBody() = default ;
    BatchCreateMetaEntitiesResponseBody(const BatchCreateMetaEntitiesResponseBody &) = default ;
    BatchCreateMetaEntitiesResponseBody(BatchCreateMetaEntitiesResponseBody &&) = default ;
    BatchCreateMetaEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateMetaEntitiesResponseBody() = default ;
    BatchCreateMetaEntitiesResponseBody& operator=(const BatchCreateMetaEntitiesResponseBody &) = default ;
    BatchCreateMetaEntitiesResponseBody& operator=(BatchCreateMetaEntitiesResponseBody &&) = default ;
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
    inline BatchCreateMetaEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<MetaEntityWriteResult> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<MetaEntityWriteResult>) };
    inline vector<MetaEntityWriteResult> getResults() { DARABONBA_PTR_GET(results_, vector<MetaEntityWriteResult>) };
    inline BatchCreateMetaEntitiesResponseBody& setResults(const vector<MetaEntityWriteResult> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchCreateMetaEntitiesResponseBody& setResults(vector<MetaEntityWriteResult> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchCreateMetaEntitiesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A list of results for the batch creation operation. This list provides the success status and any error messages for each individual entity in the request.
    shared_ptr<vector<MetaEntityWriteResult>> results_ {};
    // Indicates whether the request was successful. This parameter returns `true` even if creating some entities fails. To determine the outcome for each entity, check the `Success` and `ErrorMessage` fields in the `Results` array.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
