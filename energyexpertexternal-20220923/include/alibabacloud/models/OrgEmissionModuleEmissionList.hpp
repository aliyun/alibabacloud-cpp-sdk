// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORGEMISSIONMODULEEMISSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_ORGEMISSIONMODULEEMISSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class OrgEmissionModuleEmissionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrgEmissionModuleEmissionList& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
    };
    friend void from_json(const Darabonba::Json& j, OrgEmissionModuleEmissionList& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
    };
    OrgEmissionModuleEmissionList() = default ;
    OrgEmissionModuleEmissionList(const OrgEmissionModuleEmissionList &) = default ;
    OrgEmissionModuleEmissionList(OrgEmissionModuleEmissionList &&) = default ;
    OrgEmissionModuleEmissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrgEmissionModuleEmissionList() = default ;
    OrgEmissionModuleEmissionList& operator=(const OrgEmissionModuleEmissionList &) = default ;
    OrgEmissionModuleEmissionList& operator=(OrgEmissionModuleEmissionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->carbonEmissionData_ != nullptr
        && this->name_ != nullptr && this->nameKey_ != nullptr && this->ratio_ != nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline OrgEmissionModuleEmissionList& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OrgEmissionModuleEmissionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline OrgEmissionModuleEmissionList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline OrgEmissionModuleEmissionList& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


  protected:
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameKey_ = nullptr;
    std::shared_ptr<double> ratio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
