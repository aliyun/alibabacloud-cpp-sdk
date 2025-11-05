// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEESEXECUTEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEESEXECUTEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEsExecuteDataResponseBodyContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeEsExecuteDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEsExecuteDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEsExecuteDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEsExecuteDataResponseBody() = default ;
    DescribeEsExecuteDataResponseBody(const DescribeEsExecuteDataResponseBody &) = default ;
    DescribeEsExecuteDataResponseBody(DescribeEsExecuteDataResponseBody &&) = default ;
    DescribeEsExecuteDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEsExecuteDataResponseBody() = default ;
    DescribeEsExecuteDataResponseBody& operator=(const DescribeEsExecuteDataResponseBody &) = default ;
    DescribeEsExecuteDataResponseBody& operator=(DescribeEsExecuteDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contents_ == nullptr
        && return this->requestId_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<DescribeEsExecuteDataResponseBodyContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<DescribeEsExecuteDataResponseBodyContents>) };
    inline vector<DescribeEsExecuteDataResponseBodyContents> contents() { DARABONBA_PTR_GET(contents_, vector<DescribeEsExecuteDataResponseBodyContents>) };
    inline DescribeEsExecuteDataResponseBody& setContents(const vector<DescribeEsExecuteDataResponseBodyContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline DescribeEsExecuteDataResponseBody& setContents(vector<DescribeEsExecuteDataResponseBodyContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEsExecuteDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the script.
    std::shared_ptr<vector<DescribeEsExecuteDataResponseBodyContents>> contents_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
