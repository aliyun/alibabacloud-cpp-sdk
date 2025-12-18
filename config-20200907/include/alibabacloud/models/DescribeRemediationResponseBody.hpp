// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREMEDIATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREMEDIATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRemediationResponseBodyRemediation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DescribeRemediationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRemediationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Remediation, remediation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRemediationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Remediation, remediation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRemediationResponseBody() = default ;
    DescribeRemediationResponseBody(const DescribeRemediationResponseBody &) = default ;
    DescribeRemediationResponseBody(DescribeRemediationResponseBody &&) = default ;
    DescribeRemediationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRemediationResponseBody() = default ;
    DescribeRemediationResponseBody& operator=(const DescribeRemediationResponseBody &) = default ;
    DescribeRemediationResponseBody& operator=(DescribeRemediationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediation_ == nullptr
        && return this->requestId_ == nullptr; };
    // remediation Field Functions 
    bool hasRemediation() const { return this->remediation_ != nullptr;};
    void deleteRemediation() { this->remediation_ = nullptr;};
    inline const DescribeRemediationResponseBodyRemediation & remediation() const { DARABONBA_PTR_GET_CONST(remediation_, DescribeRemediationResponseBodyRemediation) };
    inline DescribeRemediationResponseBodyRemediation remediation() { DARABONBA_PTR_GET(remediation_, DescribeRemediationResponseBodyRemediation) };
    inline DescribeRemediationResponseBody& setRemediation(const DescribeRemediationResponseBodyRemediation & remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };
    inline DescribeRemediationResponseBody& setRemediation(DescribeRemediationResponseBodyRemediation && remediation) { DARABONBA_PTR_SET_RVALUE(remediation_, remediation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRemediationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the remediation configuration.
    std::shared_ptr<DescribeRemediationResponseBodyRemediation> remediation_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
