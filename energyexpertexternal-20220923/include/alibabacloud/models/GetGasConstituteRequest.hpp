// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGASCONSTITUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGASCONSTITUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGasConstituteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGasConstituteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(moduleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(moduleType, moduleType_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, GetGasConstituteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(moduleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(moduleType, moduleType_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    GetGasConstituteRequest() = default ;
    GetGasConstituteRequest(const GetGasConstituteRequest &) = default ;
    GetGasConstituteRequest(GetGasConstituteRequest &&) = default ;
    GetGasConstituteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGasConstituteRequest() = default ;
    GetGasConstituteRequest& operator=(const GetGasConstituteRequest &) = default ;
    GetGasConstituteRequest& operator=(GetGasConstituteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->moduleCode_ == nullptr && return this->moduleType_ == nullptr && return this->year_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGasConstituteRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetGasConstituteRequest& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleType Field Functions 
    bool hasModuleType() const { return this->moduleType_ != nullptr;};
    void deleteModuleType() { this->moduleType_ = nullptr;};
    inline int32_t moduleType() const { DARABONBA_PTR_GET_DEFAULT(moduleType_, 0) };
    inline GetGasConstituteRequest& setModuleType(int32_t moduleType) { DARABONBA_PTR_SET_VALUE(moduleType_, moduleType) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline GetGasConstituteRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // Module code.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // Module type.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> moduleType_ = nullptr;
    // Year
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
