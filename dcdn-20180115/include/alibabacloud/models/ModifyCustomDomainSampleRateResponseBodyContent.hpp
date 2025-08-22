// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATERESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATERESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ModifyCustomDomainSampleRateResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomDomainSampleRateResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomDomainSampleRateResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    ModifyCustomDomainSampleRateResponseBodyContent() = default ;
    ModifyCustomDomainSampleRateResponseBodyContent(const ModifyCustomDomainSampleRateResponseBodyContent &) = default ;
    ModifyCustomDomainSampleRateResponseBodyContent(ModifyCustomDomainSampleRateResponseBodyContent &&) = default ;
    ModifyCustomDomainSampleRateResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomDomainSampleRateResponseBodyContent() = default ;
    ModifyCustomDomainSampleRateResponseBodyContent& operator=(const ModifyCustomDomainSampleRateResponseBodyContent &) = default ;
    ModifyCustomDomainSampleRateResponseBodyContent& operator=(ModifyCustomDomainSampleRateResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->errMessage_ != nullptr && this->sampleRate_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyCustomDomainSampleRateResponseBodyContent& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModifyCustomDomainSampleRateResponseBodyContent& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline float sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline ModifyCustomDomainSampleRateResponseBodyContent& setSampleRate(float sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<float> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
