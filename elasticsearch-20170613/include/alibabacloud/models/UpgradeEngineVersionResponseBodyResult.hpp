// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpgradeEngineVersionResponseBodyResultValidateResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpgradeEngineVersionResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeEngineVersionResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(validateResult, validateResult_);
      DARABONBA_PTR_TO_JSON(validateType, validateType_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeEngineVersionResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(validateResult, validateResult_);
      DARABONBA_PTR_FROM_JSON(validateType, validateType_);
    };
    UpgradeEngineVersionResponseBodyResult() = default ;
    UpgradeEngineVersionResponseBodyResult(const UpgradeEngineVersionResponseBodyResult &) = default ;
    UpgradeEngineVersionResponseBodyResult(UpgradeEngineVersionResponseBodyResult &&) = default ;
    UpgradeEngineVersionResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeEngineVersionResponseBodyResult() = default ;
    UpgradeEngineVersionResponseBodyResult& operator=(const UpgradeEngineVersionResponseBodyResult &) = default ;
    UpgradeEngineVersionResponseBodyResult& operator=(UpgradeEngineVersionResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->validateResult_ != nullptr && this->validateType_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpgradeEngineVersionResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // validateResult Field Functions 
    bool hasValidateResult() const { return this->validateResult_ != nullptr;};
    void deleteValidateResult() { this->validateResult_ = nullptr;};
    inline const vector<Models::UpgradeEngineVersionResponseBodyResultValidateResult> & validateResult() const { DARABONBA_PTR_GET_CONST(validateResult_, vector<Models::UpgradeEngineVersionResponseBodyResultValidateResult>) };
    inline vector<Models::UpgradeEngineVersionResponseBodyResultValidateResult> validateResult() { DARABONBA_PTR_GET(validateResult_, vector<Models::UpgradeEngineVersionResponseBodyResultValidateResult>) };
    inline UpgradeEngineVersionResponseBodyResult& setValidateResult(const vector<Models::UpgradeEngineVersionResponseBodyResultValidateResult> & validateResult) { DARABONBA_PTR_SET_VALUE(validateResult_, validateResult) };
    inline UpgradeEngineVersionResponseBodyResult& setValidateResult(vector<Models::UpgradeEngineVersionResponseBodyResultValidateResult> && validateResult) { DARABONBA_PTR_SET_RVALUE(validateResult_, validateResult) };


    // validateType Field Functions 
    bool hasValidateType() const { return this->validateType_ != nullptr;};
    void deleteValidateType() { this->validateType_ = nullptr;};
    inline string validateType() const { DARABONBA_PTR_GET_DEFAULT(validateType_, "") };
    inline UpgradeEngineVersionResponseBodyResult& setValidateType(string validateType) { DARABONBA_PTR_SET_VALUE(validateType_, validateType) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    // The error message returned.
    std::shared_ptr<vector<Models::UpgradeEngineVersionResponseBodyResultValidateResult>> validateResult_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> validateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
