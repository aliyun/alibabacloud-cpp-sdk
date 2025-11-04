// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCROBOTINSTANCERESPONSEBODYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCROBOTINSTANCERESPONSEBODYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeRtcRobotInstanceResponseBodyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcRobotInstanceResponseBodyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcRobotInstanceResponseBodyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
    };
    DescribeRtcRobotInstanceResponseBodyConfig() = default ;
    DescribeRtcRobotInstanceResponseBodyConfig(const DescribeRtcRobotInstanceResponseBodyConfig &) = default ;
    DescribeRtcRobotInstanceResponseBodyConfig(DescribeRtcRobotInstanceResponseBodyConfig &&) = default ;
    DescribeRtcRobotInstanceResponseBodyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcRobotInstanceResponseBodyConfig() = default ;
    DescribeRtcRobotInstanceResponseBodyConfig& operator=(const DescribeRtcRobotInstanceResponseBodyConfig &) = default ;
    DescribeRtcRobotInstanceResponseBodyConfig& operator=(DescribeRtcRobotInstanceResponseBodyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableVoiceInterrupt_ == nullptr
        && return this->greeting_ == nullptr && return this->voiceId_ == nullptr; };
    // enableVoiceInterrupt Field Functions 
    bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
    void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
    inline bool enableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
    inline DescribeRtcRobotInstanceResponseBodyConfig& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline DescribeRtcRobotInstanceResponseBodyConfig& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline DescribeRtcRobotInstanceResponseBodyConfig& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
    std::shared_ptr<bool> enableVoiceInterrupt_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<string> voiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
