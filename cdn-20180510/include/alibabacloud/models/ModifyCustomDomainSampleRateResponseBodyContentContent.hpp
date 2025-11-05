// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATERESPONSEBODYCONTENTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATERESPONSEBODYCONTENTCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ModifyCustomDomainSampleRateResponseBodyContentContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomDomainSampleRateResponseBodyContentContent& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomDomainSampleRateResponseBodyContentContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    ModifyCustomDomainSampleRateResponseBodyContentContent() = default ;
    ModifyCustomDomainSampleRateResponseBodyContentContent(const ModifyCustomDomainSampleRateResponseBodyContentContent &) = default ;
    ModifyCustomDomainSampleRateResponseBodyContentContent(ModifyCustomDomainSampleRateResponseBodyContentContent &&) = default ;
    ModifyCustomDomainSampleRateResponseBodyContentContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomDomainSampleRateResponseBodyContentContent() = default ;
    ModifyCustomDomainSampleRateResponseBodyContentContent& operator=(const ModifyCustomDomainSampleRateResponseBodyContentContent &) = default ;
    ModifyCustomDomainSampleRateResponseBodyContentContent& operator=(ModifyCustomDomainSampleRateResponseBodyContentContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->errMessage_ == nullptr && return this->sampleRate_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyCustomDomainSampleRateResponseBodyContentContent& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModifyCustomDomainSampleRateResponseBodyContentContent& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline float sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline ModifyCustomDomainSampleRateResponseBodyContentContent& setSampleRate(float sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<float> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
