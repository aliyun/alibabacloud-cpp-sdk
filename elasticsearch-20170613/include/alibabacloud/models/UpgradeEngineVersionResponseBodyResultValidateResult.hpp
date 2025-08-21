// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONRESPONSEBODYRESULTVALIDATERESULT_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONRESPONSEBODYRESULTVALIDATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpgradeEngineVersionResponseBodyResultValidateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeEngineVersionResponseBodyResultValidateResult& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(errorType, errorType_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeEngineVersionResponseBodyResultValidateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(errorType, errorType_);
    };
    UpgradeEngineVersionResponseBodyResultValidateResult() = default ;
    UpgradeEngineVersionResponseBodyResultValidateResult(const UpgradeEngineVersionResponseBodyResultValidateResult &) = default ;
    UpgradeEngineVersionResponseBodyResultValidateResult(UpgradeEngineVersionResponseBodyResultValidateResult &&) = default ;
    UpgradeEngineVersionResponseBodyResultValidateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeEngineVersionResponseBodyResultValidateResult() = default ;
    UpgradeEngineVersionResponseBodyResultValidateResult& operator=(const UpgradeEngineVersionResponseBodyResultValidateResult &) = default ;
    UpgradeEngineVersionResponseBodyResultValidateResult& operator=(UpgradeEngineVersionResponseBodyResultValidateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMsg_ != nullptr && this->errorType_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpgradeEngineVersionResponseBodyResultValidateResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline UpgradeEngineVersionResponseBodyResultValidateResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string errorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline UpgradeEngineVersionResponseBodyResultValidateResult& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The verification is passed. Valid values:
    // 
    // *   success: through
    // *   failed: failed
    std::shared_ptr<string> errorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
