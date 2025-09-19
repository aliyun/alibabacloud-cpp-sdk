// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODYERRORCHECKCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODYERRORCHECKCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigResponseBodyErrorCheckConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(LinkErrorConfigs, linkErrorConfigs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(LinkErrorConfigs, linkErrorConfigs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigs() = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigs(const VerifyCheckCustomConfigResponseBodyErrorCheckConfigs &) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigs(VerifyCheckCustomConfigResponseBodyErrorCheckConfigs &&) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigResponseBodyErrorCheckConfigs() = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& operator=(const VerifyCheckCustomConfigResponseBodyErrorCheckConfigs &) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& operator=(VerifyCheckCustomConfigResponseBodyErrorCheckConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMsg_ != nullptr && this->linkErrorConfigs_ != nullptr && this->name_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // linkErrorConfigs Field Functions 
    bool hasLinkErrorConfigs() const { return this->linkErrorConfigs_ != nullptr;};
    void deleteLinkErrorConfigs() { this->linkErrorConfigs_ = nullptr;};
    inline const vector<Models::VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs> & linkErrorConfigs() const { DARABONBA_PTR_GET_CONST(linkErrorConfigs_, vector<Models::VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs>) };
    inline vector<Models::VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs> linkErrorConfigs() { DARABONBA_PTR_GET(linkErrorConfigs_, vector<Models::VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs>) };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& setLinkErrorConfigs(const vector<Models::VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs> & linkErrorConfigs) { DARABONBA_PTR_SET_VALUE(linkErrorConfigs_, linkErrorConfigs) };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& setLinkErrorConfigs(vector<Models::VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs> && linkErrorConfigs) { DARABONBA_PTR_SET_RVALUE(linkErrorConfigs_, linkErrorConfigs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Related configurations causing this error.
    std::shared_ptr<vector<Models::VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs>> linkErrorConfigs_ = nullptr;
    // Name of the custom configuration item for the check item, unique within the same check item.
    std::shared_ptr<string> name_ = nullptr;
    // Type of the erroneous parameter:
    // - custom: Custom configuration parameter
    std::shared_ptr<string> type_ = nullptr;
    // User-configured value string for the custom configuration item of the check item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
