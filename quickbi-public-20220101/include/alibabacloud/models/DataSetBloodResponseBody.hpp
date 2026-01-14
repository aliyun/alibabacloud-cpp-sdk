// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETBLOODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DATASETBLOODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DataSetBloodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSetBloodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DataSetBloodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DataSetBloodResponseBody() = default ;
    DataSetBloodResponseBody(const DataSetBloodResponseBody &) = default ;
    DataSetBloodResponseBody(DataSetBloodResponseBody &&) = default ;
    DataSetBloodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSetBloodResponseBody() = default ;
    DataSetBloodResponseBody& operator=(const DataSetBloodResponseBody &) = default ;
    DataSetBloodResponseBody& operator=(DataSetBloodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(WorksId, worksId_);
        DARABONBA_PTR_TO_JSON(WorksType, worksType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
        DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
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
      virtual bool empty() const override { return this->worksId_ == nullptr
        && this->worksType_ == nullptr; };
      // worksId Field Functions 
      bool hasWorksId() const { return this->worksId_ != nullptr;};
      void deleteWorksId() { this->worksId_ = nullptr;};
      inline string getWorksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
      inline Result& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


      // worksType Field Functions 
      bool hasWorksType() const { return this->worksType_ != nullptr;};
      void deleteWorksType() { this->worksType_ = nullptr;};
      inline string getWorksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
      inline Result& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


    protected:
      // Work ID.
      shared_ptr<string> worksId_ {};
      // Work types: - REPORT: 
      // - REPORT: Workbooks
      // - dashboardOfflineQuery: Downloads
      // - DASHBOARD: Dashboard
      // - ANALYSIS: Ad Hoc Analysis
      // - SCREEN: Visualization Screen
      // - PAGE: Old dashboard
      shared_ptr<string> worksType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DataSetBloodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DataSetBloodResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DataSetBloodResponseBody::Result>) };
    inline vector<DataSetBloodResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DataSetBloodResponseBody::Result>) };
    inline DataSetBloodResponseBody& setResult(const vector<DataSetBloodResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DataSetBloodResponseBody& setResult(vector<DataSetBloodResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DataSetBloodResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Array of works.
    shared_ptr<vector<DataSetBloodResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: Request succeeded
    // - false: Request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
