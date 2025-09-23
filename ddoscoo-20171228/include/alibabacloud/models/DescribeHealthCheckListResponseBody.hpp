// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHealthCheckListResponseBodyListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeHealthCheckListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHealthCheckListResponseBody() = default ;
    DescribeHealthCheckListResponseBody(const DescribeHealthCheckListResponseBody &) = default ;
    DescribeHealthCheckListResponseBody(DescribeHealthCheckListResponseBody &&) = default ;
    DescribeHealthCheckListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckListResponseBody() = default ;
    DescribeHealthCheckListResponseBody& operator=(const DescribeHealthCheckListResponseBody &) = default ;
    DescribeHealthCheckListResponseBody& operator=(DescribeHealthCheckListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listeners_ != nullptr
        && this->requestId_ != nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<DescribeHealthCheckListResponseBodyListeners> & listeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<DescribeHealthCheckListResponseBodyListeners>) };
    inline vector<DescribeHealthCheckListResponseBodyListeners> listeners() { DARABONBA_PTR_GET(listeners_, vector<DescribeHealthCheckListResponseBodyListeners>) };
    inline DescribeHealthCheckListResponseBody& setListeners(const vector<DescribeHealthCheckListResponseBodyListeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeHealthCheckListResponseBody& setListeners(vector<DescribeHealthCheckListResponseBodyListeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthCheckListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeHealthCheckListResponseBodyListeners>> listeners_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
