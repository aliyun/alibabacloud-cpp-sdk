// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHealthCheckListResponseBodyHealthCheckList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHealthCheckListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckList, healthCheckList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckList, healthCheckList_);
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
    virtual bool empty() const override { this->healthCheckList_ != nullptr
        && this->requestId_ != nullptr; };
    // healthCheckList Field Functions 
    bool hasHealthCheckList() const { return this->healthCheckList_ != nullptr;};
    void deleteHealthCheckList() { this->healthCheckList_ = nullptr;};
    inline const vector<DescribeHealthCheckListResponseBodyHealthCheckList> & healthCheckList() const { DARABONBA_PTR_GET_CONST(healthCheckList_, vector<DescribeHealthCheckListResponseBodyHealthCheckList>) };
    inline vector<DescribeHealthCheckListResponseBodyHealthCheckList> healthCheckList() { DARABONBA_PTR_GET(healthCheckList_, vector<DescribeHealthCheckListResponseBodyHealthCheckList>) };
    inline DescribeHealthCheckListResponseBody& setHealthCheckList(const vector<DescribeHealthCheckListResponseBodyHealthCheckList> & healthCheckList) { DARABONBA_PTR_SET_VALUE(healthCheckList_, healthCheckList) };
    inline DescribeHealthCheckListResponseBody& setHealthCheckList(vector<DescribeHealthCheckListResponseBodyHealthCheckList> && healthCheckList) { DARABONBA_PTR_SET_RVALUE(healthCheckList_, healthCheckList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthCheckListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the health check configuration.
    std::shared_ptr<vector<DescribeHealthCheckListResponseBodyHealthCheckList>> healthCheckList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
