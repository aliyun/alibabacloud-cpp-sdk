// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMPLIANCEMETADATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMPLIANCEMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyComplianceMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyComplianceMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePacks, compliancePacks_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyComplianceMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePacks, compliancePacks_);
    };
    GetServiceResponseBodyComplianceMetadata() = default ;
    GetServiceResponseBodyComplianceMetadata(const GetServiceResponseBodyComplianceMetadata &) = default ;
    GetServiceResponseBodyComplianceMetadata(GetServiceResponseBodyComplianceMetadata &&) = default ;
    GetServiceResponseBodyComplianceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyComplianceMetadata() = default ;
    GetServiceResponseBodyComplianceMetadata& operator=(const GetServiceResponseBodyComplianceMetadata &) = default ;
    GetServiceResponseBodyComplianceMetadata& operator=(GetServiceResponseBodyComplianceMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compliancePacks_ != nullptr; };
    // compliancePacks Field Functions 
    bool hasCompliancePacks() const { return this->compliancePacks_ != nullptr;};
    void deleteCompliancePacks() { this->compliancePacks_ = nullptr;};
    inline const vector<string> & compliancePacks() const { DARABONBA_PTR_GET_CONST(compliancePacks_, vector<string>) };
    inline vector<string> compliancePacks() { DARABONBA_PTR_GET(compliancePacks_, vector<string>) };
    inline GetServiceResponseBodyComplianceMetadata& setCompliancePacks(const vector<string> & compliancePacks) { DARABONBA_PTR_SET_VALUE(compliancePacks_, compliancePacks) };
    inline GetServiceResponseBodyComplianceMetadata& setCompliancePacks(vector<string> && compliancePacks) { DARABONBA_PTR_SET_RVALUE(compliancePacks_, compliancePacks) };


  protected:
    // The compliance pack list.
    std::shared_ptr<vector<string>> compliancePacks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
