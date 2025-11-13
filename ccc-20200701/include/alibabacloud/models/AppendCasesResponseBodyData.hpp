// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDCASESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_APPENDCASESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AppendCasesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendCasesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
    };
    friend void from_json(const Darabonba::Json& j, AppendCasesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
    };
    AppendCasesResponseBodyData() = default ;
    AppendCasesResponseBodyData(const AppendCasesResponseBodyData &) = default ;
    AppendCasesResponseBodyData(AppendCasesResponseBodyData &&) = default ;
    AppendCasesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppendCasesResponseBodyData() = default ;
    AppendCasesResponseBodyData& operator=(const AppendCasesResponseBodyData &) = default ;
    AppendCasesResponseBodyData& operator=(AppendCasesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customVariables_ == nullptr
        && return this->phoneNumber_ == nullptr && return this->referenceId_ == nullptr; };
    // customVariables Field Functions 
    bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
    void deleteCustomVariables() { this->customVariables_ = nullptr;};
    inline string customVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
    inline AppendCasesResponseBodyData& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline AppendCasesResponseBodyData& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline AppendCasesResponseBodyData& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


  protected:
    std::shared_ptr<string> customVariables_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> referenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
