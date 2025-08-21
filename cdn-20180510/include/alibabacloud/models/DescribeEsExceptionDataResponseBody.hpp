// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEESEXCEPTIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEESEXCEPTIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEsExceptionDataResponseBodyContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeEsExceptionDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEsExceptionDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEsExceptionDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEsExceptionDataResponseBody() = default ;
    DescribeEsExceptionDataResponseBody(const DescribeEsExceptionDataResponseBody &) = default ;
    DescribeEsExceptionDataResponseBody(DescribeEsExceptionDataResponseBody &&) = default ;
    DescribeEsExceptionDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEsExceptionDataResponseBody() = default ;
    DescribeEsExceptionDataResponseBody& operator=(const DescribeEsExceptionDataResponseBody &) = default ;
    DescribeEsExceptionDataResponseBody& operator=(DescribeEsExceptionDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contents_ != nullptr
        && this->requestId_ != nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<DescribeEsExceptionDataResponseBodyContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<DescribeEsExceptionDataResponseBodyContents>) };
    inline vector<DescribeEsExceptionDataResponseBodyContents> contents() { DARABONBA_PTR_GET(contents_, vector<DescribeEsExceptionDataResponseBodyContents>) };
    inline DescribeEsExceptionDataResponseBody& setContents(const vector<DescribeEsExceptionDataResponseBodyContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline DescribeEsExceptionDataResponseBody& setContents(vector<DescribeEsExceptionDataResponseBodyContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEsExceptionDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the script for which an error was reported.
    std::shared_ptr<vector<DescribeEsExceptionDataResponseBodyContents>> contents_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
