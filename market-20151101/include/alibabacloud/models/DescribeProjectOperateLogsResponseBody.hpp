// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTOPERATELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTOPERATELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProjectOperateLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectOperateLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectOperateLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeProjectOperateLogsResponseBody() = default ;
    DescribeProjectOperateLogsResponseBody(const DescribeProjectOperateLogsResponseBody &) = default ;
    DescribeProjectOperateLogsResponseBody(DescribeProjectOperateLogsResponseBody &&) = default ;
    DescribeProjectOperateLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectOperateLogsResponseBody() = default ;
    DescribeProjectOperateLogsResponseBody& operator=(const DescribeProjectOperateLogsResponseBody &) = default ;
    DescribeProjectOperateLogsResponseBody& operator=(DescribeProjectOperateLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_TO_JSON(OperatorRole, operatorRole_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_FROM_JSON(OperatorRole, operatorRole_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->gmtCreate_ == nullptr && this->operator_ == nullptr && this->operatorName_ == nullptr && this->operatorRole_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Result& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline int64_t getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
      inline Result& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline Result& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // operatorRole Field Functions 
      bool hasOperatorRole() const { return this->operatorRole_ != nullptr;};
      void deleteOperatorRole() { this->operatorRole_ = nullptr;};
      inline string getOperatorRole() const { DARABONBA_PTR_GET_DEFAULT(operatorRole_, "") };
      inline Result& setOperatorRole(string operatorRole) { DARABONBA_PTR_SET_VALUE(operatorRole_, operatorRole) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> operator_ {};
      shared_ptr<string> operatorName_ {};
      shared_ptr<string> operatorRole_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProjectOperateLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeProjectOperateLogsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeProjectOperateLogsResponseBody::Result>) };
    inline vector<DescribeProjectOperateLogsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeProjectOperateLogsResponseBody::Result>) };
    inline DescribeProjectOperateLogsResponseBody& setResult(const vector<DescribeProjectOperateLogsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeProjectOperateLogsResponseBody& setResult(vector<DescribeProjectOperateLogsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeProjectOperateLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeProjectOperateLogsResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
