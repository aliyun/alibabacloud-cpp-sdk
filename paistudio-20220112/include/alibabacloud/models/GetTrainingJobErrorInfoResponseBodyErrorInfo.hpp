// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBERRORINFORESPONSEBODYERRORINFO_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBERRORINFORESPONSEBODYERRORINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobErrorInfoResponseBodyErrorInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobErrorInfoResponseBodyErrorInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobErrorInfoResponseBodyErrorInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    GetTrainingJobErrorInfoResponseBodyErrorInfo() = default ;
    GetTrainingJobErrorInfoResponseBodyErrorInfo(const GetTrainingJobErrorInfoResponseBodyErrorInfo &) = default ;
    GetTrainingJobErrorInfoResponseBodyErrorInfo(GetTrainingJobErrorInfoResponseBodyErrorInfo &&) = default ;
    GetTrainingJobErrorInfoResponseBodyErrorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobErrorInfoResponseBodyErrorInfo() = default ;
    GetTrainingJobErrorInfoResponseBodyErrorInfo& operator=(const GetTrainingJobErrorInfoResponseBodyErrorInfo &) = default ;
    GetTrainingJobErrorInfoResponseBodyErrorInfo& operator=(GetTrainingJobErrorInfoResponseBodyErrorInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalInfo_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr; };
    // additionalInfo Field Functions 
    bool hasAdditionalInfo() const { return this->additionalInfo_ != nullptr;};
    void deleteAdditionalInfo() { this->additionalInfo_ = nullptr;};
    inline string additionalInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalInfo_, "") };
    inline GetTrainingJobErrorInfoResponseBodyErrorInfo& setAdditionalInfo(string additionalInfo) { DARABONBA_PTR_SET_VALUE(additionalInfo_, additionalInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTrainingJobErrorInfoResponseBodyErrorInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTrainingJobErrorInfoResponseBodyErrorInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> additionalInfo_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
