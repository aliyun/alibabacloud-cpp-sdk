// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODYERRORCHECKCUSTOMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODYERRORCHECKCUSTOMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
    };
    VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig() = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig(const VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig &) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig(VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig &&) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig() = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig& operator=(const VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig &) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig& operator=(VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


  protected:
    // Error code when failed. This parameter is not returned upon success. 
    // - **CspmVerifyCheckCustomItemNoPass**: The asset did not pass the set custom rules. 
    // - **CspmVerifyCheckCustomItemError**: Verification error, there is an issue with the input rule.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Error message
    std::shared_ptr<string> errorMsg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
