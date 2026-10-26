// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATABASESPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATABASESPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyDatabasesProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatabasesProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatabasesProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ModifyDatabasesProjectResponseBody() = default ;
    ModifyDatabasesProjectResponseBody(const ModifyDatabasesProjectResponseBody &) = default ;
    ModifyDatabasesProjectResponseBody(ModifyDatabasesProjectResponseBody &&) = default ;
    ModifyDatabasesProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatabasesProjectResponseBody() = default ;
    ModifyDatabasesProjectResponseBody& operator=(const ModifyDatabasesProjectResponseBody &) = default ;
    ModifyDatabasesProjectResponseBody& operator=(ModifyDatabasesProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(AssetId, assetId_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr; };
      // assetId Field Functions 
      bool hasAssetId() const { return this->assetId_ != nullptr;};
      void deleteAssetId() { this->assetId_ = nullptr;};
      inline string getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
      inline Results& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The database instance ID.
      shared_ptr<string> assetId_ {};
      // The error code. An error code of **200** indicates that the operation is successful. Other error codes indicate that the operation failed.
      shared_ptr<string> code_ {};
      // The result message.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr && this->successCount_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDatabasesProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<ModifyDatabasesProjectResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<ModifyDatabasesProjectResponseBody::Results>) };
    inline vector<ModifyDatabasesProjectResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<ModifyDatabasesProjectResponseBody::Results>) };
    inline ModifyDatabasesProjectResponseBody& setResults(const vector<ModifyDatabasesProjectResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ModifyDatabasesProjectResponseBody& setResults(vector<ModifyDatabasesProjectResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline ModifyDatabasesProjectResponseBody& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ModifyDatabasesProjectResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The results of the operation.
    shared_ptr<vector<ModifyDatabasesProjectResponseBody::Results>> results_ {};
    // The number of successful operations.
    shared_ptr<int64_t> successCount_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
