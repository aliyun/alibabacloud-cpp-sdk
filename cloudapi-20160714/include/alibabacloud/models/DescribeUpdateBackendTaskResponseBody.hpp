// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPDATEBACKENDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPDATEBACKENDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeUpdateBackendTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpdateBackendTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUpdateBackendResults, apiUpdateBackendResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpdateBackendTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUpdateBackendResults, apiUpdateBackendResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpdateBackendTaskResponseBody() = default ;
    DescribeUpdateBackendTaskResponseBody(const DescribeUpdateBackendTaskResponseBody &) = default ;
    DescribeUpdateBackendTaskResponseBody(DescribeUpdateBackendTaskResponseBody &&) = default ;
    DescribeUpdateBackendTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpdateBackendTaskResponseBody() = default ;
    DescribeUpdateBackendTaskResponseBody& operator=(const DescribeUpdateBackendTaskResponseBody &) = default ;
    DescribeUpdateBackendTaskResponseBody& operator=(DescribeUpdateBackendTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiUpdateBackendResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // apiUpdateBackendResults Field Functions 
    bool hasApiUpdateBackendResults() const { return this->apiUpdateBackendResults_ != nullptr;};
    void deleteApiUpdateBackendResults() { this->apiUpdateBackendResults_ = nullptr;};
    inline const DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults & apiUpdateBackendResults() const { DARABONBA_PTR_GET_CONST(apiUpdateBackendResults_, DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults) };
    inline DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults apiUpdateBackendResults() { DARABONBA_PTR_GET(apiUpdateBackendResults_, DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults) };
    inline DescribeUpdateBackendTaskResponseBody& setApiUpdateBackendResults(const DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults & apiUpdateBackendResults) { DARABONBA_PTR_SET_VALUE(apiUpdateBackendResults_, apiUpdateBackendResults) };
    inline DescribeUpdateBackendTaskResponseBody& setApiUpdateBackendResults(DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults && apiUpdateBackendResults) { DARABONBA_PTR_SET_RVALUE(apiUpdateBackendResults_, apiUpdateBackendResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpdateBackendTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults> apiUpdateBackendResults_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
