// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMPLIANCEMETADATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMPLIANCEMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceRequestComplianceMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestComplianceMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePacks, compliancePacks_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestComplianceMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePacks, compliancePacks_);
    };
    UpdateServiceRequestComplianceMetadata() = default ;
    UpdateServiceRequestComplianceMetadata(const UpdateServiceRequestComplianceMetadata &) = default ;
    UpdateServiceRequestComplianceMetadata(UpdateServiceRequestComplianceMetadata &&) = default ;
    UpdateServiceRequestComplianceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestComplianceMetadata() = default ;
    UpdateServiceRequestComplianceMetadata& operator=(const UpdateServiceRequestComplianceMetadata &) = default ;
    UpdateServiceRequestComplianceMetadata& operator=(UpdateServiceRequestComplianceMetadata &&) = default ;
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
    inline UpdateServiceRequestComplianceMetadata& setCompliancePacks(const vector<string> & compliancePacks) { DARABONBA_PTR_SET_VALUE(compliancePacks_, compliancePacks) };
    inline UpdateServiceRequestComplianceMetadata& setCompliancePacks(vector<string> && compliancePacks) { DARABONBA_PTR_SET_RVALUE(compliancePacks_, compliancePacks) };


  protected:
    // The compliance pack.
    std::shared_ptr<vector<string>> compliancePacks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
