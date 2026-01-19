// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGMONITORINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGMONITORINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperationLogMonitoringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperationLogMonitoringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperationLogMonitoringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeOperationLogMonitoringResponseBody() = default ;
    DescribeOperationLogMonitoringResponseBody(const DescribeOperationLogMonitoringResponseBody &) = default ;
    DescribeOperationLogMonitoringResponseBody(DescribeOperationLogMonitoringResponseBody &&) = default ;
    DescribeOperationLogMonitoringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperationLogMonitoringResponseBody() = default ;
    DescribeOperationLogMonitoringResponseBody& operator=(const DescribeOperationLogMonitoringResponseBody &) = default ;
    DescribeOperationLogMonitoringResponseBody& operator=(DescribeOperationLogMonitoringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(dateGrouped, dateGrouped_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(dateGrouped, dateGrouped_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dateGrouped_ == nullptr
        && this->totalCount_ == nullptr; };
      // dateGrouped Field Functions 
      bool hasDateGrouped() const { return this->dateGrouped_ != nullptr;};
      void deleteDateGrouped() { this->dateGrouped_ = nullptr;};
      inline string getDateGrouped() const { DARABONBA_PTR_GET_DEFAULT(dateGrouped_, "") };
      inline ResultObject& setDateGrouped(string dateGrouped) { DARABONBA_PTR_SET_VALUE(dateGrouped_, dateGrouped) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline ResultObject& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Time axis slice.
      shared_ptr<string> dateGrouped_ {};
      // Total count.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOperationLogMonitoringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeOperationLogMonitoringResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeOperationLogMonitoringResponseBody::ResultObject>) };
    inline vector<DescribeOperationLogMonitoringResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeOperationLogMonitoringResponseBody::ResultObject>) };
    inline DescribeOperationLogMonitoringResponseBody& setResultObject(const vector<DescribeOperationLogMonitoringResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeOperationLogMonitoringResponseBody& setResultObject(vector<DescribeOperationLogMonitoringResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object.
    shared_ptr<vector<DescribeOperationLogMonitoringResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
