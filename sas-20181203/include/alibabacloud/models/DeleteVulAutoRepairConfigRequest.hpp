// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVULAUTOREPAIRCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVULAUTOREPAIRCONFIGREQUEST_HPP_
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
  class DeleteVulAutoRepairConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVulAutoRepairConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(ConfigIdList, configIdList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVulAutoRepairConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(ConfigIdList, configIdList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DeleteVulAutoRepairConfigRequest() = default ;
    DeleteVulAutoRepairConfigRequest(const DeleteVulAutoRepairConfigRequest &) = default ;
    DeleteVulAutoRepairConfigRequest(DeleteVulAutoRepairConfigRequest &&) = default ;
    DeleteVulAutoRepairConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVulAutoRepairConfigRequest() = default ;
    DeleteVulAutoRepairConfigRequest& operator=(const DeleteVulAutoRepairConfigRequest &) = default ;
    DeleteVulAutoRepairConfigRequest& operator=(DeleteVulAutoRepairConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->configIdList_ == nullptr && this->type_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DeleteVulAutoRepairConfigRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // configIdList Field Functions 
    bool hasConfigIdList() const { return this->configIdList_ != nullptr;};
    void deleteConfigIdList() { this->configIdList_ = nullptr;};
    inline const vector<int64_t> & getConfigIdList() const { DARABONBA_PTR_GET_CONST(configIdList_, vector<int64_t>) };
    inline vector<int64_t> getConfigIdList() { DARABONBA_PTR_GET(configIdList_, vector<int64_t>) };
    inline DeleteVulAutoRepairConfigRequest& setConfigIdList(const vector<int64_t> & configIdList) { DARABONBA_PTR_SET_VALUE(configIdList_, configIdList) };
    inline DeleteVulAutoRepairConfigRequest& setConfigIdList(vector<int64_t> && configIdList) { DARABONBA_PTR_SET_RVALUE(configIdList_, configIdList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteVulAutoRepairConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The alias of the vulnerability.
    shared_ptr<string> aliasName_ {};
    // The IDs of the configurations.
    // 
    // >  You can call the [ListVulAutoRepairConfig](~~ListVulAutoRepairConfig~~) operation to query the IDs.
    shared_ptr<vector<int64_t>> configIdList_ {};
    // The type of the vulnerability. Valid values:
    // 
    // *   cve: Linux software vulnerability
    // *   sys: Windows system vulnerability
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
