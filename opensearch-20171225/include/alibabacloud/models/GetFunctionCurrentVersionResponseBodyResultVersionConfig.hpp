// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONRESPONSEBODYRESULTVERSIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONRESPONSEBODYRESULTVERSIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters.hpp>
#include <alibabacloud/models/GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends.hpp>
#include <alibabacloud/models/GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionCurrentVersionResponseBodyResultVersionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionCurrentVersionResponseBodyResultVersionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CreateParameters, createParameters_);
      DARABONBA_PTR_TO_JSON(Depends, depends_);
      DARABONBA_PTR_TO_JSON(UsageParameters, usageParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionCurrentVersionResponseBodyResultVersionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateParameters, createParameters_);
      DARABONBA_PTR_FROM_JSON(Depends, depends_);
      DARABONBA_PTR_FROM_JSON(UsageParameters, usageParameters_);
    };
    GetFunctionCurrentVersionResponseBodyResultVersionConfig() = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfig(const GetFunctionCurrentVersionResponseBodyResultVersionConfig &) = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfig(GetFunctionCurrentVersionResponseBodyResultVersionConfig &&) = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionCurrentVersionResponseBodyResultVersionConfig() = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfig& operator=(const GetFunctionCurrentVersionResponseBodyResultVersionConfig &) = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfig& operator=(GetFunctionCurrentVersionResponseBodyResultVersionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createParameters_ == nullptr
        && return this->depends_ == nullptr && return this->usageParameters_ == nullptr; };
    // createParameters Field Functions 
    bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
    void deleteCreateParameters() { this->createParameters_ = nullptr;};
    inline const vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters> & createParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters>) };
    inline vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters> createParameters() { DARABONBA_PTR_GET(createParameters_, vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters>) };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfig& setCreateParameters(const vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfig& setCreateParameters(vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


    // depends Field Functions 
    bool hasDepends() const { return this->depends_ != nullptr;};
    void deleteDepends() { this->depends_ = nullptr;};
    inline const vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends> & depends() const { DARABONBA_PTR_GET_CONST(depends_, vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends>) };
    inline vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends> depends() { DARABONBA_PTR_GET(depends_, vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends>) };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfig& setDepends(const vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends> & depends) { DARABONBA_PTR_SET_VALUE(depends_, depends) };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfig& setDepends(vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends> && depends) { DARABONBA_PTR_SET_RVALUE(depends_, depends) };


    // usageParameters Field Functions 
    bool hasUsageParameters() const { return this->usageParameters_ != nullptr;};
    void deleteUsageParameters() { this->usageParameters_ = nullptr;};
    inline const vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters> & usageParameters() const { DARABONBA_PTR_GET_CONST(usageParameters_, vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters>) };
    inline vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters> usageParameters() { DARABONBA_PTR_GET(usageParameters_, vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters>) };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfig& setUsageParameters(const vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters> & usageParameters) { DARABONBA_PTR_SET_VALUE(usageParameters_, usageParameters) };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfig& setUsageParameters(vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters> && usageParameters) { DARABONBA_PTR_SET_RVALUE(usageParameters_, usageParameters) };


  protected:
    // The parameters that are used to create the instance.
    std::shared_ptr<vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters>> createParameters_ = nullptr;
    // The dependencies of the instance.
    std::shared_ptr<vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends>> depends_ = nullptr;
    // The parameters that are used to use the instance online.
    std::shared_ptr<vector<Models::GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters>> usageParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
