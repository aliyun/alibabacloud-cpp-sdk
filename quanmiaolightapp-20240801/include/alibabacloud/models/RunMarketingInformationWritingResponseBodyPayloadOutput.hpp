// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunMarketingInformationWritingResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMarketingInformationWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(reasonContent, reasonContent_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunMarketingInformationWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(reasonContent, reasonContent_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    RunMarketingInformationWritingResponseBodyPayloadOutput() = default ;
    RunMarketingInformationWritingResponseBodyPayloadOutput(const RunMarketingInformationWritingResponseBodyPayloadOutput &) = default ;
    RunMarketingInformationWritingResponseBodyPayloadOutput(RunMarketingInformationWritingResponseBodyPayloadOutput &&) = default ;
    RunMarketingInformationWritingResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMarketingInformationWritingResponseBodyPayloadOutput() = default ;
    RunMarketingInformationWritingResponseBodyPayloadOutput& operator=(const RunMarketingInformationWritingResponseBodyPayloadOutput &) = default ;
    RunMarketingInformationWritingResponseBodyPayloadOutput& operator=(RunMarketingInformationWritingResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reasonContent_ == nullptr
        && return this->text_ == nullptr; };
    // reasonContent Field Functions 
    bool hasReasonContent() const { return this->reasonContent_ != nullptr;};
    void deleteReasonContent() { this->reasonContent_ = nullptr;};
    inline string reasonContent() const { DARABONBA_PTR_GET_DEFAULT(reasonContent_, "") };
    inline RunMarketingInformationWritingResponseBodyPayloadOutput& setReasonContent(string reasonContent) { DARABONBA_PTR_SET_VALUE(reasonContent_, reasonContent) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunMarketingInformationWritingResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> reasonContent_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
