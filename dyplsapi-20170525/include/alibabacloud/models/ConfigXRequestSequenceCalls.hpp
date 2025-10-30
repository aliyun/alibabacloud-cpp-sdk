// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGXREQUESTSEQUENCECALLS_HPP_
#define ALIBABACLOUD_MODELS_CONFIGXREQUESTSEQUENCECALLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class ConfigXRequestSequenceCalls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigXRequestSequenceCalls& obj) { 
      DARABONBA_PTR_TO_JSON(SequenceCallNoPlayCode, sequenceCallNoPlayCode_);
      DARABONBA_PTR_TO_JSON(SequenceCalledNo, sequenceCalledNo_);
      DARABONBA_PTR_TO_JSON(SequenceCalledPlayCode, sequenceCalledPlayCode_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigXRequestSequenceCalls& obj) { 
      DARABONBA_PTR_FROM_JSON(SequenceCallNoPlayCode, sequenceCallNoPlayCode_);
      DARABONBA_PTR_FROM_JSON(SequenceCalledNo, sequenceCalledNo_);
      DARABONBA_PTR_FROM_JSON(SequenceCalledPlayCode, sequenceCalledPlayCode_);
    };
    ConfigXRequestSequenceCalls() = default ;
    ConfigXRequestSequenceCalls(const ConfigXRequestSequenceCalls &) = default ;
    ConfigXRequestSequenceCalls(ConfigXRequestSequenceCalls &&) = default ;
    ConfigXRequestSequenceCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigXRequestSequenceCalls() = default ;
    ConfigXRequestSequenceCalls& operator=(const ConfigXRequestSequenceCalls &) = default ;
    ConfigXRequestSequenceCalls& operator=(ConfigXRequestSequenceCalls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sequenceCallNoPlayCode_ == nullptr
        && return this->sequenceCalledNo_ == nullptr && return this->sequenceCalledPlayCode_ == nullptr; };
    // sequenceCallNoPlayCode Field Functions 
    bool hasSequenceCallNoPlayCode() const { return this->sequenceCallNoPlayCode_ != nullptr;};
    void deleteSequenceCallNoPlayCode() { this->sequenceCallNoPlayCode_ = nullptr;};
    inline string sequenceCallNoPlayCode() const { DARABONBA_PTR_GET_DEFAULT(sequenceCallNoPlayCode_, "") };
    inline ConfigXRequestSequenceCalls& setSequenceCallNoPlayCode(string sequenceCallNoPlayCode) { DARABONBA_PTR_SET_VALUE(sequenceCallNoPlayCode_, sequenceCallNoPlayCode) };


    // sequenceCalledNo Field Functions 
    bool hasSequenceCalledNo() const { return this->sequenceCalledNo_ != nullptr;};
    void deleteSequenceCalledNo() { this->sequenceCalledNo_ = nullptr;};
    inline string sequenceCalledNo() const { DARABONBA_PTR_GET_DEFAULT(sequenceCalledNo_, "") };
    inline ConfigXRequestSequenceCalls& setSequenceCalledNo(string sequenceCalledNo) { DARABONBA_PTR_SET_VALUE(sequenceCalledNo_, sequenceCalledNo) };


    // sequenceCalledPlayCode Field Functions 
    bool hasSequenceCalledPlayCode() const { return this->sequenceCalledPlayCode_ != nullptr;};
    void deleteSequenceCalledPlayCode() { this->sequenceCalledPlayCode_ = nullptr;};
    inline string sequenceCalledPlayCode() const { DARABONBA_PTR_GET_DEFAULT(sequenceCalledPlayCode_, "") };
    inline ConfigXRequestSequenceCalls& setSequenceCalledPlayCode(string sequenceCalledPlayCode) { DARABONBA_PTR_SET_VALUE(sequenceCalledPlayCode_, sequenceCalledPlayCode) };


  protected:
    // 顺振提示音放音编号，格式如callNoPlayCode
    std::shared_ptr<string> sequenceCallNoPlayCode_ = nullptr;
    // 顺振被叫号码
    std::shared_ptr<string> sequenceCalledNo_ = nullptr;
    // 接通后主被叫放音编号，格式如calledPlayCode
    std::shared_ptr<string> sequenceCalledPlayCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
