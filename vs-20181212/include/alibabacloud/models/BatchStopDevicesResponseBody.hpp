// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTOPDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTOPDEVICESRESPONSEBODY_HPP_
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
  class BatchStopDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStopDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStopDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchStopDevicesResponseBody() = default ;
    BatchStopDevicesResponseBody(const BatchStopDevicesResponseBody &) = default ;
    BatchStopDevicesResponseBody(BatchStopDevicesResponseBody &&) = default ;
    BatchStopDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStopDevicesResponseBody() = default ;
    BatchStopDevicesResponseBody& operator=(const BatchStopDevicesResponseBody &) = default ;
    BatchStopDevicesResponseBody& operator=(BatchStopDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Streams, streams_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Streams, streams_);
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
      class Streams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Streams& obj) { 
          DARABONBA_PTR_TO_JSON(Error, error_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Streams& obj) { 
          DARABONBA_PTR_FROM_JSON(Error, error_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Streams() = default ;
        Streams(const Streams &) = default ;
        Streams(Streams &&) = default ;
        Streams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Streams() = default ;
        Streams& operator=(const Streams &) = default ;
        Streams& operator=(Streams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->error_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // error Field Functions 
        bool hasError() const { return this->error_ != nullptr;};
        void deleteError() { this->error_ = nullptr;};
        inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
        inline Streams& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Streams& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Streams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> error_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->streams_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Results& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // streams Field Functions 
      bool hasStreams() const { return this->streams_ != nullptr;};
      void deleteStreams() { this->streams_ = nullptr;};
      inline const vector<Results::Streams> & getStreams() const { DARABONBA_PTR_GET_CONST(streams_, vector<Results::Streams>) };
      inline vector<Results::Streams> getStreams() { DARABONBA_PTR_GET(streams_, vector<Results::Streams>) };
      inline Results& setStreams(const vector<Results::Streams> & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
      inline Results& setStreams(vector<Results::Streams> && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<vector<Results::Streams>> streams_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchStopDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchStopDevicesResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchStopDevicesResponseBody::Results>) };
    inline vector<BatchStopDevicesResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchStopDevicesResponseBody::Results>) };
    inline BatchStopDevicesResponseBody& setResults(const vector<BatchStopDevicesResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchStopDevicesResponseBody& setResults(vector<BatchStopDevicesResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchStopDevicesResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
