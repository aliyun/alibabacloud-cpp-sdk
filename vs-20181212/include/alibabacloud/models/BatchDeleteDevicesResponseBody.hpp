// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchDeleteDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchDeleteDevicesResponseBody() = default ;
    BatchDeleteDevicesResponseBody(const BatchDeleteDevicesResponseBody &) = default ;
    BatchDeleteDevicesResponseBody(BatchDeleteDevicesResponseBody &&) = default ;
    BatchDeleteDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDevicesResponseBody() = default ;
    BatchDeleteDevicesResponseBody& operator=(const BatchDeleteDevicesResponseBody &) = default ;
    BatchDeleteDevicesResponseBody& operator=(BatchDeleteDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
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
      virtual bool empty() const override { return this->error_ == nullptr
        && this->id_ == nullptr; };
      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Results& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Results& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      shared_ptr<string> error_ {};
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDeleteDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchDeleteDevicesResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchDeleteDevicesResponseBody::Results>) };
    inline vector<BatchDeleteDevicesResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchDeleteDevicesResponseBody::Results>) };
    inline BatchDeleteDevicesResponseBody& setResults(const vector<BatchDeleteDevicesResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchDeleteDevicesResponseBody& setResults(vector<BatchDeleteDevicesResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchDeleteDevicesResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
