// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVULAUTOREPAIRCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVULAUTOREPAIRCONFIGREQUEST_HPP_
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
  class CreateVulAutoRepairConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVulAutoRepairConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VulAutoRepairConfigList, vulAutoRepairConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVulAutoRepairConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VulAutoRepairConfigList, vulAutoRepairConfigList_);
    };
    CreateVulAutoRepairConfigRequest() = default ;
    CreateVulAutoRepairConfigRequest(const CreateVulAutoRepairConfigRequest &) = default ;
    CreateVulAutoRepairConfigRequest(CreateVulAutoRepairConfigRequest &&) = default ;
    CreateVulAutoRepairConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVulAutoRepairConfigRequest() = default ;
    CreateVulAutoRepairConfigRequest& operator=(const CreateVulAutoRepairConfigRequest &) = default ;
    CreateVulAutoRepairConfigRequest& operator=(CreateVulAutoRepairConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulAutoRepairConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulAutoRepairConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, VulAutoRepairConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      VulAutoRepairConfigList() = default ;
      VulAutoRepairConfigList(const VulAutoRepairConfigList &) = default ;
      VulAutoRepairConfigList(VulAutoRepairConfigList &&) = default ;
      VulAutoRepairConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulAutoRepairConfigList() = default ;
      VulAutoRepairConfigList& operator=(const VulAutoRepairConfigList &) = default ;
      VulAutoRepairConfigList& operator=(VulAutoRepairConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->name_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline VulAutoRepairConfigList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VulAutoRepairConfigList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The alias of the vulnerability.
      // 
      // This parameter is required.
      shared_ptr<string> aliasName_ {};
      // The name of the vulnerability.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->reason_ == nullptr
        && this->type_ == nullptr && this->vulAutoRepairConfigList_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateVulAutoRepairConfigRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateVulAutoRepairConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vulAutoRepairConfigList Field Functions 
    bool hasVulAutoRepairConfigList() const { return this->vulAutoRepairConfigList_ != nullptr;};
    void deleteVulAutoRepairConfigList() { this->vulAutoRepairConfigList_ = nullptr;};
    inline const vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList> & getVulAutoRepairConfigList() const { DARABONBA_PTR_GET_CONST(vulAutoRepairConfigList_, vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList>) };
    inline vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList> getVulAutoRepairConfigList() { DARABONBA_PTR_GET(vulAutoRepairConfigList_, vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList>) };
    inline CreateVulAutoRepairConfigRequest& setVulAutoRepairConfigList(const vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList> & vulAutoRepairConfigList) { DARABONBA_PTR_SET_VALUE(vulAutoRepairConfigList_, vulAutoRepairConfigList) };
    inline CreateVulAutoRepairConfigRequest& setVulAutoRepairConfigList(vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList> && vulAutoRepairConfigList) { DARABONBA_PTR_SET_RVALUE(vulAutoRepairConfigList_, vulAutoRepairConfigList) };


  protected:
    // The reason why the vulnerability can be automatically fixed.
    shared_ptr<string> reason_ {};
    // The type of the vulnerability. Valid values: -**cve**: Linux software vulnerability -**sys**: Windows system vulnerability
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The vulnerabilities that can be automatically fixed.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList>> vulAutoRepairConfigList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
