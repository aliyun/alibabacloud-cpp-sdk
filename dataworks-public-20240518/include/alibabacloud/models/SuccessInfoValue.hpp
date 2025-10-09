// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUCCESSINFOVALUE_HPP_
#define ALIBABACLOUD_MODELS_SUCCESSINFOVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class SuccessInfoValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuccessInfoValue& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, SuccessInfoValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    SuccessInfoValue() = default ;
    SuccessInfoValue(const SuccessInfoValue &) = default ;
    SuccessInfoValue(SuccessInfoValue &&) = default ;
    SuccessInfoValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuccessInfoValue() = default ;
    SuccessInfoValue& operator=(const SuccessInfoValue &) = default ;
    SuccessInfoValue& operator=(SuccessInfoValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr
        && this->message_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SuccessInfoValue& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SuccessInfoValue& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
