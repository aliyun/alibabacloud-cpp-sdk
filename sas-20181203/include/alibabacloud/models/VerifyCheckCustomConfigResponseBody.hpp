// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VerifyCheckCustomConfigResponseBodyErrorCheckConfigs.hpp>
#include <alibabacloud/models/VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig.hpp>
#include <alibabacloud/models/VerifyCheckCustomConfigResponseBodyErrorRepairConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCheckConfigs, errorCheckConfigs_);
      DARABONBA_PTR_TO_JSON(ErrorCheckCustomConfig, errorCheckCustomConfig_);
      DARABONBA_PTR_TO_JSON(ErrorRepairConfigs, errorRepairConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCheckConfigs, errorCheckConfigs_);
      DARABONBA_PTR_FROM_JSON(ErrorCheckCustomConfig, errorCheckCustomConfig_);
      DARABONBA_PTR_FROM_JSON(ErrorRepairConfigs, errorRepairConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyCheckCustomConfigResponseBody() = default ;
    VerifyCheckCustomConfigResponseBody(const VerifyCheckCustomConfigResponseBody &) = default ;
    VerifyCheckCustomConfigResponseBody(VerifyCheckCustomConfigResponseBody &&) = default ;
    VerifyCheckCustomConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigResponseBody() = default ;
    VerifyCheckCustomConfigResponseBody& operator=(const VerifyCheckCustomConfigResponseBody &) = default ;
    VerifyCheckCustomConfigResponseBody& operator=(VerifyCheckCustomConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCheckConfigs_ != nullptr
        && this->errorCheckCustomConfig_ != nullptr && this->errorRepairConfigs_ != nullptr && this->requestId_ != nullptr; };
    // errorCheckConfigs Field Functions 
    bool hasErrorCheckConfigs() const { return this->errorCheckConfigs_ != nullptr;};
    void deleteErrorCheckConfigs() { this->errorCheckConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigResponseBodyErrorCheckConfigs> & errorCheckConfigs() const { DARABONBA_PTR_GET_CONST(errorCheckConfigs_, vector<VerifyCheckCustomConfigResponseBodyErrorCheckConfigs>) };
    inline vector<VerifyCheckCustomConfigResponseBodyErrorCheckConfigs> errorCheckConfigs() { DARABONBA_PTR_GET(errorCheckConfigs_, vector<VerifyCheckCustomConfigResponseBodyErrorCheckConfigs>) };
    inline VerifyCheckCustomConfigResponseBody& setErrorCheckConfigs(const vector<VerifyCheckCustomConfigResponseBodyErrorCheckConfigs> & errorCheckConfigs) { DARABONBA_PTR_SET_VALUE(errorCheckConfigs_, errorCheckConfigs) };
    inline VerifyCheckCustomConfigResponseBody& setErrorCheckConfigs(vector<VerifyCheckCustomConfigResponseBodyErrorCheckConfigs> && errorCheckConfigs) { DARABONBA_PTR_SET_RVALUE(errorCheckConfigs_, errorCheckConfigs) };


    // errorCheckCustomConfig Field Functions 
    bool hasErrorCheckCustomConfig() const { return this->errorCheckCustomConfig_ != nullptr;};
    void deleteErrorCheckCustomConfig() { this->errorCheckCustomConfig_ = nullptr;};
    inline const VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig & errorCheckCustomConfig() const { DARABONBA_PTR_GET_CONST(errorCheckCustomConfig_, VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig) };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig errorCheckCustomConfig() { DARABONBA_PTR_GET(errorCheckCustomConfig_, VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig) };
    inline VerifyCheckCustomConfigResponseBody& setErrorCheckCustomConfig(const VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig & errorCheckCustomConfig) { DARABONBA_PTR_SET_VALUE(errorCheckCustomConfig_, errorCheckCustomConfig) };
    inline VerifyCheckCustomConfigResponseBody& setErrorCheckCustomConfig(VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig && errorCheckCustomConfig) { DARABONBA_PTR_SET_RVALUE(errorCheckCustomConfig_, errorCheckCustomConfig) };


    // errorRepairConfigs Field Functions 
    bool hasErrorRepairConfigs() const { return this->errorRepairConfigs_ != nullptr;};
    void deleteErrorRepairConfigs() { this->errorRepairConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigResponseBodyErrorRepairConfigs> & errorRepairConfigs() const { DARABONBA_PTR_GET_CONST(errorRepairConfigs_, vector<VerifyCheckCustomConfigResponseBodyErrorRepairConfigs>) };
    inline vector<VerifyCheckCustomConfigResponseBodyErrorRepairConfigs> errorRepairConfigs() { DARABONBA_PTR_GET(errorRepairConfigs_, vector<VerifyCheckCustomConfigResponseBodyErrorRepairConfigs>) };
    inline VerifyCheckCustomConfigResponseBody& setErrorRepairConfigs(const vector<VerifyCheckCustomConfigResponseBodyErrorRepairConfigs> & errorRepairConfigs) { DARABONBA_PTR_SET_VALUE(errorRepairConfigs_, errorRepairConfigs) };
    inline VerifyCheckCustomConfigResponseBody& setErrorRepairConfigs(vector<VerifyCheckCustomConfigResponseBodyErrorRepairConfigs> && errorRepairConfigs) { DARABONBA_PTR_SET_RVALUE(errorRepairConfigs_, errorRepairConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyCheckCustomConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of check parameters with configuration errors.
    std::shared_ptr<vector<VerifyCheckCustomConfigResponseBodyErrorCheckConfigs>> errorCheckConfigs_ = nullptr;
    // Check the error code returned by the custom check item.
    std::shared_ptr<VerifyCheckCustomConfigResponseBodyErrorCheckCustomConfig> errorCheckCustomConfig_ = nullptr;
    // List of repair parameters with configuration check errors.
    std::shared_ptr<vector<VerifyCheckCustomConfigResponseBodyErrorRepairConfigs>> errorRepairConfigs_ = nullptr;
    // The ID of this call request, a unique identifier generated by Alibaba Cloud for the request, which can be used for troubleshooting and problem localization.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
