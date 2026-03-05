// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULERESULTSVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULERESULTSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ModuleResultsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleResultsValue& obj) { 
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleResultsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
    };
    ModuleResultsValue() = default ;
    ModuleResultsValue(const ModuleResultsValue &) = default ;
    ModuleResultsValue(ModuleResultsValue &&) = default ;
    ModuleResultsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleResultsValue() = default ;
    ModuleResultsValue& operator=(const ModuleResultsValue &) = default ;
    ModuleResultsValue& operator=(ModuleResultsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passed_ == nullptr
        && this->resourceCode_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr; };
    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline bool getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
    inline ModuleResultsValue& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // resourceCode Field Functions 
    bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
    void deleteResourceCode() { this->resourceCode_ = nullptr;};
    inline string getResourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
    inline ModuleResultsValue& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ModuleResultsValue& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ModuleResultsValue& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


  protected:
    shared_ptr<bool> passed_ {};
    shared_ptr<string> resourceCode_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
