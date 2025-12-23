// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONVERSIONRESPONSEBODYRESULTVERSIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONVERSIONRESPONSEBODYRESULTVERSIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFunctionVersionResponseBodyResultVersionConfigCreateParameters.hpp>
#include <alibabacloud/models/GetFunctionVersionResponseBodyResultVersionConfigDepends.hpp>
#include <alibabacloud/models/GetFunctionVersionResponseBodyResultVersionConfigUsageParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionVersionResponseBodyResultVersionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionVersionResponseBodyResultVersionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CreateParameters, createParameters_);
      DARABONBA_PTR_TO_JSON(Depends, depends_);
      DARABONBA_PTR_TO_JSON(UsageParameters, usageParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionVersionResponseBodyResultVersionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateParameters, createParameters_);
      DARABONBA_PTR_FROM_JSON(Depends, depends_);
      DARABONBA_PTR_FROM_JSON(UsageParameters, usageParameters_);
    };
    GetFunctionVersionResponseBodyResultVersionConfig() = default ;
    GetFunctionVersionResponseBodyResultVersionConfig(const GetFunctionVersionResponseBodyResultVersionConfig &) = default ;
    GetFunctionVersionResponseBodyResultVersionConfig(GetFunctionVersionResponseBodyResultVersionConfig &&) = default ;
    GetFunctionVersionResponseBodyResultVersionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionVersionResponseBodyResultVersionConfig() = default ;
    GetFunctionVersionResponseBodyResultVersionConfig& operator=(const GetFunctionVersionResponseBodyResultVersionConfig &) = default ;
    GetFunctionVersionResponseBodyResultVersionConfig& operator=(GetFunctionVersionResponseBodyResultVersionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createParameters_ == nullptr
        && return this->depends_ == nullptr && return this->usageParameters_ == nullptr; };
    // createParameters Field Functions 
    bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
    void deleteCreateParameters() { this->createParameters_ = nullptr;};
    inline const vector<Models::GetFunctionVersionResponseBodyResultVersionConfigCreateParameters> & createParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<Models::GetFunctionVersionResponseBodyResultVersionConfigCreateParameters>) };
    inline vector<Models::GetFunctionVersionResponseBodyResultVersionConfigCreateParameters> createParameters() { DARABONBA_PTR_GET(createParameters_, vector<Models::GetFunctionVersionResponseBodyResultVersionConfigCreateParameters>) };
    inline GetFunctionVersionResponseBodyResultVersionConfig& setCreateParameters(const vector<Models::GetFunctionVersionResponseBodyResultVersionConfigCreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
    inline GetFunctionVersionResponseBodyResultVersionConfig& setCreateParameters(vector<Models::GetFunctionVersionResponseBodyResultVersionConfigCreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


    // depends Field Functions 
    bool hasDepends() const { return this->depends_ != nullptr;};
    void deleteDepends() { this->depends_ = nullptr;};
    inline const vector<Models::GetFunctionVersionResponseBodyResultVersionConfigDepends> & depends() const { DARABONBA_PTR_GET_CONST(depends_, vector<Models::GetFunctionVersionResponseBodyResultVersionConfigDepends>) };
    inline vector<Models::GetFunctionVersionResponseBodyResultVersionConfigDepends> depends() { DARABONBA_PTR_GET(depends_, vector<Models::GetFunctionVersionResponseBodyResultVersionConfigDepends>) };
    inline GetFunctionVersionResponseBodyResultVersionConfig& setDepends(const vector<Models::GetFunctionVersionResponseBodyResultVersionConfigDepends> & depends) { DARABONBA_PTR_SET_VALUE(depends_, depends) };
    inline GetFunctionVersionResponseBodyResultVersionConfig& setDepends(vector<Models::GetFunctionVersionResponseBodyResultVersionConfigDepends> && depends) { DARABONBA_PTR_SET_RVALUE(depends_, depends) };


    // usageParameters Field Functions 
    bool hasUsageParameters() const { return this->usageParameters_ != nullptr;};
    void deleteUsageParameters() { this->usageParameters_ = nullptr;};
    inline const vector<Models::GetFunctionVersionResponseBodyResultVersionConfigUsageParameters> & usageParameters() const { DARABONBA_PTR_GET_CONST(usageParameters_, vector<Models::GetFunctionVersionResponseBodyResultVersionConfigUsageParameters>) };
    inline vector<Models::GetFunctionVersionResponseBodyResultVersionConfigUsageParameters> usageParameters() { DARABONBA_PTR_GET(usageParameters_, vector<Models::GetFunctionVersionResponseBodyResultVersionConfigUsageParameters>) };
    inline GetFunctionVersionResponseBodyResultVersionConfig& setUsageParameters(const vector<Models::GetFunctionVersionResponseBodyResultVersionConfigUsageParameters> & usageParameters) { DARABONBA_PTR_SET_VALUE(usageParameters_, usageParameters) };
    inline GetFunctionVersionResponseBodyResultVersionConfig& setUsageParameters(vector<Models::GetFunctionVersionResponseBodyResultVersionConfigUsageParameters> && usageParameters) { DARABONBA_PTR_SET_RVALUE(usageParameters_, usageParameters) };


  protected:
    // The parameters that are used to create the instance.
    std::shared_ptr<vector<Models::GetFunctionVersionResponseBodyResultVersionConfigCreateParameters>> createParameters_ = nullptr;
    // The dependencies of the instance.
    std::shared_ptr<vector<Models::GetFunctionVersionResponseBodyResultVersionConfigDepends>> depends_ = nullptr;
    // The parameters that are used during online use of the instance.
    std::shared_ptr<vector<Models::GetFunctionVersionResponseBodyResultVersionConfigUsageParameters>> usageParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
