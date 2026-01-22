// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHBINDDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHBINDDIRECTORIESRESPONSEBODY_HPP_
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
  class BatchBindDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchBindDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchBindDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchBindDirectoriesResponseBody() = default ;
    BatchBindDirectoriesResponseBody(const BatchBindDirectoriesResponseBody &) = default ;
    BatchBindDirectoriesResponseBody(BatchBindDirectoriesResponseBody &&) = default ;
    BatchBindDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchBindDirectoriesResponseBody() = default ;
    BatchBindDirectoriesResponseBody& operator=(const BatchBindDirectoriesResponseBody &) = default ;
    BatchBindDirectoriesResponseBody& operator=(BatchBindDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(Error, error_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
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
      virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->directoryId_ == nullptr && this->error_ == nullptr; };
      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Results& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Results& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Results& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    protected:
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> directoryId_ {};
      shared_ptr<string> error_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchBindDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchBindDirectoriesResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchBindDirectoriesResponseBody::Results>) };
    inline vector<BatchBindDirectoriesResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchBindDirectoriesResponseBody::Results>) };
    inline BatchBindDirectoriesResponseBody& setResults(const vector<BatchBindDirectoriesResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchBindDirectoriesResponseBody& setResults(vector<BatchBindDirectoriesResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchBindDirectoriesResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
