// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeHealthCheckStatusListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckStatusListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckStatusList, healthCheckStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckStatusListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckStatusList, healthCheckStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHealthCheckStatusListResponseBody() = default ;
    DescribeHealthCheckStatusListResponseBody(const DescribeHealthCheckStatusListResponseBody &) = default ;
    DescribeHealthCheckStatusListResponseBody(DescribeHealthCheckStatusListResponseBody &&) = default ;
    DescribeHealthCheckStatusListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckStatusListResponseBody() = default ;
    DescribeHealthCheckStatusListResponseBody& operator=(const DescribeHealthCheckStatusListResponseBody &) = default ;
    DescribeHealthCheckStatusListResponseBody& operator=(DescribeHealthCheckStatusListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthCheckStatusList_ != nullptr
        && this->requestId_ != nullptr; };
    // healthCheckStatusList Field Functions 
    bool hasHealthCheckStatusList() const { return this->healthCheckStatusList_ != nullptr;};
    void deleteHealthCheckStatusList() { this->healthCheckStatusList_ = nullptr;};
    inline const vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList> & healthCheckStatusList() const { DARABONBA_PTR_GET_CONST(healthCheckStatusList_, vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList>) };
    inline vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList> healthCheckStatusList() { DARABONBA_PTR_GET(healthCheckStatusList_, vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList>) };
    inline DescribeHealthCheckStatusListResponseBody& setHealthCheckStatusList(const vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList> & healthCheckStatusList) { DARABONBA_PTR_SET_VALUE(healthCheckStatusList_, healthCheckStatusList) };
    inline DescribeHealthCheckStatusListResponseBody& setHealthCheckStatusList(vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList> && healthCheckStatusList) { DARABONBA_PTR_SET_RVALUE(healthCheckStatusList_, healthCheckStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthCheckStatusListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList>> healthCheckStatusList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
