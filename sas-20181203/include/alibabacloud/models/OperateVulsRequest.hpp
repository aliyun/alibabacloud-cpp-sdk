// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEVULSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEVULSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateVulsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateVulsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(VulNames, vulNames_);
    };
    friend void from_json(const Darabonba::Json& j, OperateVulsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(VulNames, vulNames_);
    };
    OperateVulsRequest() = default ;
    OperateVulsRequest(const OperateVulsRequest &) = default ;
    OperateVulsRequest(OperateVulsRequest &&) = default ;
    OperateVulsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateVulsRequest() = default ;
    OperateVulsRequest& operator=(const OperateVulsRequest &) = default ;
    OperateVulsRequest& operator=(OperateVulsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateType_ == nullptr
        && return this->type_ == nullptr && return this->uuids_ == nullptr && return this->vulNames_ == nullptr; };
    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline OperateVulsRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateVulsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & uuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> uuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline OperateVulsRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline OperateVulsRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


    // vulNames Field Functions 
    bool hasVulNames() const { return this->vulNames_ != nullptr;};
    void deleteVulNames() { this->vulNames_ = nullptr;};
    inline const vector<string> & vulNames() const { DARABONBA_PTR_GET_CONST(vulNames_, vector<string>) };
    inline vector<string> vulNames() { DARABONBA_PTR_GET(vulNames_, vector<string>) };
    inline OperateVulsRequest& setVulNames(const vector<string> & vulNames) { DARABONBA_PTR_SET_VALUE(vulNames_, vulNames) };
    inline OperateVulsRequest& setVulNames(vector<string> && vulNames) { DARABONBA_PTR_SET_RVALUE(vulNames_, vulNames) };


  protected:
    // The operation on the vulnerabilities. Set the value to **vul_fix**, which indicates vulnerability fixing.
    // 
    // This parameter is required.
    std::shared_ptr<string> operateType_ = nullptr;
    // The type of the vulnerabilities that you want to fix. Set the value to **cve**, which indicates Linux software vulnerabilities.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The UUIDs of servers for which you want to fix vulnerabilities.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> uuids_ = nullptr;
    // The names of the vulnerabilities that you want to fix.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> vulNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
