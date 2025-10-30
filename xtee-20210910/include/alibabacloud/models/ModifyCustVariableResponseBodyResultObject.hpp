// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTVARIABLERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTVARIABLERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModifyCustVariableResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustVariableResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(failType, failType_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustVariableResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(failType, failType_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModifyCustVariableResponseBodyResultObject() = default ;
    ModifyCustVariableResponseBodyResultObject(const ModifyCustVariableResponseBodyResultObject &) = default ;
    ModifyCustVariableResponseBodyResultObject(ModifyCustVariableResponseBodyResultObject &&) = default ;
    ModifyCustVariableResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustVariableResponseBodyResultObject() = default ;
    ModifyCustVariableResponseBodyResultObject& operator=(const ModifyCustVariableResponseBodyResultObject &) = default ;
    ModifyCustVariableResponseBodyResultObject& operator=(ModifyCustVariableResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failType_ == nullptr
        && return this->message_ == nullptr && return this->success_ == nullptr; };
    // failType Field Functions 
    bool hasFailType() const { return this->failType_ != nullptr;};
    void deleteFailType() { this->failType_ = nullptr;};
    inline string failType() const { DARABONBA_PTR_GET_DEFAULT(failType_, "") };
    inline ModifyCustVariableResponseBodyResultObject& setFailType(string failType) { DARABONBA_PTR_SET_VALUE(failType_, failType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyCustVariableResponseBodyResultObject& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyCustVariableResponseBodyResultObject& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Failure type
    std::shared_ptr<string> failType_ = nullptr;
    // Detailed information.
    std::shared_ptr<string> message_ = nullptr;
    // Whether the operation was successful
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
