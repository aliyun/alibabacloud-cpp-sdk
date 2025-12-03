// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSystemParametersResponseBodySystemParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSystemParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemParams, systemParams_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemParams, systemParams_);
    };
    DescribeSystemParametersResponseBody() = default ;
    DescribeSystemParametersResponseBody(const DescribeSystemParametersResponseBody &) = default ;
    DescribeSystemParametersResponseBody(DescribeSystemParametersResponseBody &&) = default ;
    DescribeSystemParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemParametersResponseBody() = default ;
    DescribeSystemParametersResponseBody& operator=(const DescribeSystemParametersResponseBody &) = default ;
    DescribeSystemParametersResponseBody& operator=(DescribeSystemParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->systemParams_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemParams Field Functions 
    bool hasSystemParams() const { return this->systemParams_ != nullptr;};
    void deleteSystemParams() { this->systemParams_ = nullptr;};
    inline const DescribeSystemParametersResponseBodySystemParams & systemParams() const { DARABONBA_PTR_GET_CONST(systemParams_, DescribeSystemParametersResponseBodySystemParams) };
    inline DescribeSystemParametersResponseBodySystemParams systemParams() { DARABONBA_PTR_GET(systemParams_, DescribeSystemParametersResponseBodySystemParams) };
    inline DescribeSystemParametersResponseBody& setSystemParams(const DescribeSystemParametersResponseBodySystemParams & systemParams) { DARABONBA_PTR_SET_VALUE(systemParams_, systemParams) };
    inline DescribeSystemParametersResponseBody& setSystemParams(DescribeSystemParametersResponseBodySystemParams && systemParams) { DARABONBA_PTR_SET_RVALUE(systemParams_, systemParams) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned information about system parameters. It is an array that consists of SystemParam data.
    std::shared_ptr<DescribeSystemParametersResponseBodySystemParams> systemParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
