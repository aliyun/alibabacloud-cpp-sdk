// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListAsyncTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListAsyncTasksResponseBody() = default ;
    ListAsyncTasksResponseBody(const ListAsyncTasksResponseBody &) = default ;
    ListAsyncTasksResponseBody(ListAsyncTasksResponseBody &&) = default ;
    ListAsyncTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTasksResponseBody() = default ;
    ListAsyncTasksResponseBody& operator=(const ListAsyncTasksResponseBody &) = default ;
    ListAsyncTasksResponseBody& operator=(ListAsyncTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(dataId, dataId_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(dataId, dataId_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->dataId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->result_ == nullptr && this->serviceId_ == nullptr
        && this->serviceType_ == nullptr && this->status_ == nullptr && this->updated_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline Result& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline int32_t getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, 0) };
      inline Result& setDataId(int32_t dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Result& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Result& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Result& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int64_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0L) };
      inline Result& setUpdated(int64_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // The creation timestamp.
      shared_ptr<int64_t> created_ {};
      // The trial data ID.
      shared_ptr<int32_t> dataId_ {};
      // The asynchronous task ID.
      shared_ptr<string> id_ {};
      // The file name.
      shared_ptr<string> name_ {};
      // The task execution result.
      shared_ptr<string> result_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service type.
      // 
      // - document-analyze.
      shared_ptr<string> serviceType_ {};
      // The task status. Valid values:
      // - PENDING: in progress.
      // - SUCCESS: parsing succeeded.
      // - FAILED: parsing failed.
      shared_ptr<string> status_ {};
      // The update time.
      shared_ptr<int64_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAsyncTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAsyncTasksResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAsyncTasksResponseBody::Result>) };
    inline vector<ListAsyncTasksResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListAsyncTasksResponseBody::Result>) };
    inline ListAsyncTasksResponseBody& setResult(const vector<ListAsyncTasksResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAsyncTasksResponseBody& setResult(vector<ListAsyncTasksResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListAsyncTasksResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
