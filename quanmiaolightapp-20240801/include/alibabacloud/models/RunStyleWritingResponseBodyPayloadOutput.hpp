// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTYLEWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNSTYLEWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunStyleWritingResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStyleWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunStyleWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    RunStyleWritingResponseBodyPayloadOutput() = default ;
    RunStyleWritingResponseBodyPayloadOutput(const RunStyleWritingResponseBodyPayloadOutput &) = default ;
    RunStyleWritingResponseBodyPayloadOutput(RunStyleWritingResponseBodyPayloadOutput &&) = default ;
    RunStyleWritingResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStyleWritingResponseBodyPayloadOutput() = default ;
    RunStyleWritingResponseBodyPayloadOutput& operator=(const RunStyleWritingResponseBodyPayloadOutput &) = default ;
    RunStyleWritingResponseBodyPayloadOutput& operator=(RunStyleWritingResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunStyleWritingResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
