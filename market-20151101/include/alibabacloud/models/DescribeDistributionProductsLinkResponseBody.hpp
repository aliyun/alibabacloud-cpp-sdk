// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSLINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSLINKRESPONSEBODY_HPP_
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
  class DescribeDistributionProductsLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributionProductsLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistributionProductsLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDistributionProductsLinkResponseBody() = default ;
    DescribeDistributionProductsLinkResponseBody(const DescribeDistributionProductsLinkResponseBody &) = default ;
    DescribeDistributionProductsLinkResponseBody(DescribeDistributionProductsLinkResponseBody &&) = default ;
    DescribeDistributionProductsLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributionProductsLinkResponseBody() = default ;
    DescribeDistributionProductsLinkResponseBody& operator=(const DescribeDistributionProductsLinkResponseBody &) = default ;
    DescribeDistributionProductsLinkResponseBody& operator=(DescribeDistributionProductsLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->url_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Result& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Result& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDistributionProductsLinkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeDistributionProductsLinkResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeDistributionProductsLinkResponseBody::Result>) };
    inline vector<DescribeDistributionProductsLinkResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeDistributionProductsLinkResponseBody::Result>) };
    inline DescribeDistributionProductsLinkResponseBody& setResult(const vector<DescribeDistributionProductsLinkResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeDistributionProductsLinkResponseBody& setResult(vector<DescribeDistributionProductsLinkResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDistributionProductsLinkResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDistributionProductsLinkResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeDistributionProductsLinkResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
