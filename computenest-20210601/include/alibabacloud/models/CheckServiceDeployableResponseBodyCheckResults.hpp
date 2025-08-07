// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEDEPLOYABLERESPONSEBODYCHECKRESULTS_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEDEPLOYABLERESPONSEBODYCHECKRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CheckServiceDeployableResponseBodyCheckResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceDeployableResponseBodyCheckResults& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceDeployableResponseBodyCheckResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CheckServiceDeployableResponseBodyCheckResults() = default ;
    CheckServiceDeployableResponseBodyCheckResults(const CheckServiceDeployableResponseBodyCheckResults &) = default ;
    CheckServiceDeployableResponseBodyCheckResults(CheckServiceDeployableResponseBodyCheckResults &&) = default ;
    CheckServiceDeployableResponseBodyCheckResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceDeployableResponseBodyCheckResults() = default ;
    CheckServiceDeployableResponseBodyCheckResults& operator=(const CheckServiceDeployableResponseBodyCheckResults &) = default ;
    CheckServiceDeployableResponseBodyCheckResults& operator=(CheckServiceDeployableResponseBodyCheckResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckServiceDeployableResponseBodyCheckResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckServiceDeployableResponseBodyCheckResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CheckServiceDeployableResponseBodyCheckResults& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Returns a hint message for the result.
    std::shared_ptr<string> message_ = nullptr;
    // Check type, invalid values:
    // 
    // - Balance ：Account balance.
    // 
    // - Quota:  Account quota.
    std::shared_ptr<string> type_ = nullptr;
    // Inspection result.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
