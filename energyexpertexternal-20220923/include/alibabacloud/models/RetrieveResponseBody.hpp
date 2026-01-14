// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChunkItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class RetrieveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RetrieveResponseBody() = default ;
    RetrieveResponseBody(const RetrieveResponseBody &) = default ;
    RetrieveResponseBody(RetrieveResponseBody &&) = default ;
    RetrieveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveResponseBody() = default ;
    RetrieveResponseBody& operator=(const RetrieveResponseBody &) = default ;
    RetrieveResponseBody& operator=(RetrieveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(jobId, jobId_);
        DARABONBA_PTR_TO_JSON(results, results_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(jobId, jobId_);
        DARABONBA_PTR_FROM_JSON(results, results_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->jobId_ == nullptr
        && this->results_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<ChunkItem> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<ChunkItem>) };
      inline vector<ChunkItem> getResults() { DARABONBA_PTR_GET(results_, vector<ChunkItem>) };
      inline Data& setResults(const vector<ChunkItem> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<ChunkItem> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      shared_ptr<string> jobId_ {};
      shared_ptr<vector<ChunkItem>> results_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RetrieveResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RetrieveResponseBody::Data) };
    inline RetrieveResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RetrieveResponseBody::Data) };
    inline RetrieveResponseBody& setData(const RetrieveResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RetrieveResponseBody& setData(RetrieveResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetrieveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RetrieveResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
