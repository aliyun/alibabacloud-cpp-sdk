// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDIAGNOSEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDIAGNOSEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingGroupDiagnoseDetailsResponseBodyDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDiagnoseDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDiagnoseDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDiagnoseDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeScalingGroupDiagnoseDetailsResponseBody() = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody(const DescribeScalingGroupDiagnoseDetailsResponseBody &) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody(DescribeScalingGroupDiagnoseDetailsResponseBody &&) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDiagnoseDetailsResponseBody() = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody& operator=(const DescribeScalingGroupDiagnoseDetailsResponseBody &) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody& operator=(DescribeScalingGroupDiagnoseDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->details_ != nullptr
        && this->requestId_ != nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<DescribeScalingGroupDiagnoseDetailsResponseBodyDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<DescribeScalingGroupDiagnoseDetailsResponseBodyDetails>) };
    inline vector<DescribeScalingGroupDiagnoseDetailsResponseBodyDetails> details() { DARABONBA_PTR_GET(details_, vector<DescribeScalingGroupDiagnoseDetailsResponseBodyDetails>) };
    inline DescribeScalingGroupDiagnoseDetailsResponseBody& setDetails(const vector<DescribeScalingGroupDiagnoseDetailsResponseBodyDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeScalingGroupDiagnoseDetailsResponseBody& setDetails(vector<DescribeScalingGroupDiagnoseDetailsResponseBodyDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingGroupDiagnoseDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostic reports.
    std::shared_ptr<vector<DescribeScalingGroupDiagnoseDetailsResponseBodyDetails>> details_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
