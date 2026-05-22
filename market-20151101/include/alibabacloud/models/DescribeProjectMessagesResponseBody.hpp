// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTMESSAGESRESPONSEBODY_HPP_
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
  class DescribeProjectMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeProjectMessagesResponseBody() = default ;
    DescribeProjectMessagesResponseBody(const DescribeProjectMessagesResponseBody &) = default ;
    DescribeProjectMessagesResponseBody(DescribeProjectMessagesResponseBody &&) = default ;
    DescribeProjectMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectMessagesResponseBody() = default ;
    DescribeProjectMessagesResponseBody& operator=(const DescribeProjectMessagesResponseBody &) = default ;
    DescribeProjectMessagesResponseBody& operator=(DescribeProjectMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_TO_JSON(OperatorRole, operatorRole_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->gmtCreate_ == nullptr && this->operator_ == nullptr && this->operatorName_ == nullptr && this->operatorRole_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


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
      shared_ptr<string> content_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> operator_ {};
      shared_ptr<string> operatorName_ {};
      shared_ptr<string> operatorRole_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProjectMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeProjectMessagesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeProjectMessagesResponseBody::Result>) };
    inline vector<DescribeProjectMessagesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeProjectMessagesResponseBody::Result>) };
    inline DescribeProjectMessagesResponseBody& setResult(const vector<DescribeProjectMessagesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeProjectMessagesResponseBody& setResult(vector<DescribeProjectMessagesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeProjectMessagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeProjectMessagesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeProjectMessagesResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
