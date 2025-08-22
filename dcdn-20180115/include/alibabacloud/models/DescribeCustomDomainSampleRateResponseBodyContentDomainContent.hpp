// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMDOMAINSAMPLERATERESPONSEBODYCONTENTDOMAINCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMDOMAINSAMPLERATERESPONSEBODYCONTENTDOMAINCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeCustomDomainSampleRateResponseBodyContentDomainContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomDomainSampleRateResponseBodyContentDomainContent& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomDomainSampleRateResponseBodyContentDomainContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    DescribeCustomDomainSampleRateResponseBodyContentDomainContent() = default ;
    DescribeCustomDomainSampleRateResponseBodyContentDomainContent(const DescribeCustomDomainSampleRateResponseBodyContentDomainContent &) = default ;
    DescribeCustomDomainSampleRateResponseBodyContentDomainContent(DescribeCustomDomainSampleRateResponseBodyContentDomainContent &&) = default ;
    DescribeCustomDomainSampleRateResponseBodyContentDomainContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomDomainSampleRateResponseBodyContentDomainContent() = default ;
    DescribeCustomDomainSampleRateResponseBodyContentDomainContent& operator=(const DescribeCustomDomainSampleRateResponseBodyContentDomainContent &) = default ;
    DescribeCustomDomainSampleRateResponseBodyContentDomainContent& operator=(DescribeCustomDomainSampleRateResponseBodyContentDomainContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->sampleRate_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCustomDomainSampleRateResponseBodyContentDomainContent& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline float sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline DescribeCustomDomainSampleRateResponseBodyContentDomainContent& setSampleRate(float sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<float> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
