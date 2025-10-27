// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTONSTAGERESPONSEBODYSECURITYEVENTSTAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTONSTAGERESPONSEBODYSECURITYEVENTSTAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeEventOnStageResponseBodySecurityEventStageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventOnStageResponseBodySecurityEventStageResponse& obj) { 
      DARABONBA_ANY_TO_JSON(SecurityEventOnStag, securityEventOnStag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventOnStageResponseBodySecurityEventStageResponse& obj) { 
      DARABONBA_ANY_FROM_JSON(SecurityEventOnStag, securityEventOnStag_);
    };
    DescribeEventOnStageResponseBodySecurityEventStageResponse() = default ;
    DescribeEventOnStageResponseBodySecurityEventStageResponse(const DescribeEventOnStageResponseBodySecurityEventStageResponse &) = default ;
    DescribeEventOnStageResponseBodySecurityEventStageResponse(DescribeEventOnStageResponseBodySecurityEventStageResponse &&) = default ;
    DescribeEventOnStageResponseBodySecurityEventStageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventOnStageResponseBodySecurityEventStageResponse() = default ;
    DescribeEventOnStageResponseBodySecurityEventStageResponse& operator=(const DescribeEventOnStageResponseBodySecurityEventStageResponse &) = default ;
    DescribeEventOnStageResponseBodySecurityEventStageResponse& operator=(DescribeEventOnStageResponseBodySecurityEventStageResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityEventOnStag_ == nullptr; };
    // securityEventOnStag Field Functions 
    bool hasSecurityEventOnStag() const { return this->securityEventOnStag_ != nullptr;};
    void deleteSecurityEventOnStag() { this->securityEventOnStag_ = nullptr;};
    inline     const Darabonba::Json & securityEventOnStag() const { DARABONBA_GET(securityEventOnStag_) };
    Darabonba::Json & securityEventOnStag() { DARABONBA_GET(securityEventOnStag_) };
    inline DescribeEventOnStageResponseBodySecurityEventStageResponse& setSecurityEventOnStag(const Darabonba::Json & securityEventOnStag) { DARABONBA_SET_VALUE(securityEventOnStag_, securityEventOnStag) };
    inline DescribeEventOnStageResponseBodySecurityEventStageResponse& setSecurityEventOnStag(Darabonba::Json & securityEventOnStag) { DARABONBA_SET_RVALUE(securityEventOnStag_, securityEventOnStag) };


  protected:
    // The platform that is supported by the feature of container threat detection. Valid values:
    // 
    // *   **container**
    // *   **linux**
    // *   **windows**
    Darabonba::Json securityEventOnStag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
