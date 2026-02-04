// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ModifyCustomDomainSampleRateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomDomainSampleRateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseConfigID, baseConfigID_);
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(SinkID, sinkID_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomDomainSampleRateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseConfigID, baseConfigID_);
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(SinkID, sinkID_);
    };
    ModifyCustomDomainSampleRateRequest() = default ;
    ModifyCustomDomainSampleRateRequest(const ModifyCustomDomainSampleRateRequest &) = default ;
    ModifyCustomDomainSampleRateRequest(ModifyCustomDomainSampleRateRequest &&) = default ;
    ModifyCustomDomainSampleRateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomDomainSampleRateRequest() = default ;
    ModifyCustomDomainSampleRateRequest& operator=(const ModifyCustomDomainSampleRateRequest &) = default ;
    ModifyCustomDomainSampleRateRequest& operator=(ModifyCustomDomainSampleRateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseConfigID_ == nullptr
        && this->domainNames_ == nullptr && this->sampleRate_ == nullptr && this->sinkID_ == nullptr; };
    // baseConfigID Field Functions 
    bool hasBaseConfigID() const { return this->baseConfigID_ != nullptr;};
    void deleteBaseConfigID() { this->baseConfigID_ = nullptr;};
    inline string getBaseConfigID() const { DARABONBA_PTR_GET_DEFAULT(baseConfigID_, "") };
    inline ModifyCustomDomainSampleRateRequest& setBaseConfigID(string baseConfigID) { DARABONBA_PTR_SET_VALUE(baseConfigID_, baseConfigID) };


    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string getDomainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline ModifyCustomDomainSampleRateRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline float getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline ModifyCustomDomainSampleRateRequest& setSampleRate(float sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // sinkID Field Functions 
    bool hasSinkID() const { return this->sinkID_ != nullptr;};
    void deleteSinkID() { this->sinkID_ = nullptr;};
    inline int64_t getSinkID() const { DARABONBA_PTR_GET_DEFAULT(sinkID_, 0L) };
    inline ModifyCustomDomainSampleRateRequest& setSinkID(int64_t sinkID) { DARABONBA_PTR_SET_VALUE(sinkID_, sinkID) };


  protected:
    shared_ptr<string> baseConfigID_ {};
    shared_ptr<string> domainNames_ {};
    shared_ptr<float> sampleRate_ {};
    shared_ptr<int64_t> sinkID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
