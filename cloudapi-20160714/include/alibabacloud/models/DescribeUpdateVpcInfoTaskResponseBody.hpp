// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPDATEVPCINFOTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPDATEVPCINFOTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeUpdateVpcInfoTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpdateVpcInfoTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUpdateVpcInfoResults, apiUpdateVpcInfoResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpdateVpcInfoTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUpdateVpcInfoResults, apiUpdateVpcInfoResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpdateVpcInfoTaskResponseBody() = default ;
    DescribeUpdateVpcInfoTaskResponseBody(const DescribeUpdateVpcInfoTaskResponseBody &) = default ;
    DescribeUpdateVpcInfoTaskResponseBody(DescribeUpdateVpcInfoTaskResponseBody &&) = default ;
    DescribeUpdateVpcInfoTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpdateVpcInfoTaskResponseBody() = default ;
    DescribeUpdateVpcInfoTaskResponseBody& operator=(const DescribeUpdateVpcInfoTaskResponseBody &) = default ;
    DescribeUpdateVpcInfoTaskResponseBody& operator=(DescribeUpdateVpcInfoTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiUpdateVpcInfoResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // apiUpdateVpcInfoResults Field Functions 
    bool hasApiUpdateVpcInfoResults() const { return this->apiUpdateVpcInfoResults_ != nullptr;};
    void deleteApiUpdateVpcInfoResults() { this->apiUpdateVpcInfoResults_ = nullptr;};
    inline const DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults & apiUpdateVpcInfoResults() const { DARABONBA_PTR_GET_CONST(apiUpdateVpcInfoResults_, DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults) };
    inline DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults apiUpdateVpcInfoResults() { DARABONBA_PTR_GET(apiUpdateVpcInfoResults_, DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults) };
    inline DescribeUpdateVpcInfoTaskResponseBody& setApiUpdateVpcInfoResults(const DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults & apiUpdateVpcInfoResults) { DARABONBA_PTR_SET_VALUE(apiUpdateVpcInfoResults_, apiUpdateVpcInfoResults) };
    inline DescribeUpdateVpcInfoTaskResponseBody& setApiUpdateVpcInfoResults(DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults && apiUpdateVpcInfoResults) { DARABONBA_PTR_SET_RVALUE(apiUpdateVpcInfoResults_, apiUpdateVpcInfoResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpdateVpcInfoTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults> apiUpdateVpcInfoResults_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
