// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVETRANSCODEJOBREQUESTTRANSCODEOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVETRANSCODEJOBREQUESTTRANSCODEOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveTranscodeJobRequestTranscodeOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveTranscodeJobRequestTranscodeOutput& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveTranscodeJobRequestTranscodeOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitLiveTranscodeJobRequestTranscodeOutput() = default ;
    SubmitLiveTranscodeJobRequestTranscodeOutput(const SubmitLiveTranscodeJobRequestTranscodeOutput &) = default ;
    SubmitLiveTranscodeJobRequestTranscodeOutput(SubmitLiveTranscodeJobRequestTranscodeOutput &&) = default ;
    SubmitLiveTranscodeJobRequestTranscodeOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveTranscodeJobRequestTranscodeOutput() = default ;
    SubmitLiveTranscodeJobRequestTranscodeOutput& operator=(const SubmitLiveTranscodeJobRequestTranscodeOutput &) = default ;
    SubmitLiveTranscodeJobRequestTranscodeOutput& operator=(SubmitLiveTranscodeJobRequestTranscodeOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->type_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SubmitLiveTranscodeJobRequestTranscodeOutput& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitLiveTranscodeJobRequestTranscodeOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The streaming domain name of ApsaraVideo Live.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the output stream. A value of LiveCenter indicates that the URL of the output stream is generated based on the domain name of ApsaraVideo Live. The value can only be LiveCenter.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
