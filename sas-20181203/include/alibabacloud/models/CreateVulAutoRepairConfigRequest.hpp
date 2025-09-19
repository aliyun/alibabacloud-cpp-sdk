// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVULAUTOREPAIRCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVULAUTOREPAIRCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVulAutoRepairConfigRequestVulAutoRepairConfigList.hpp>
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
    virtual bool empty() const override { this->reason_ != nullptr
        && this->type_ != nullptr && this->vulAutoRepairConfigList_ != nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateVulAutoRepairConfigRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateVulAutoRepairConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vulAutoRepairConfigList Field Functions 
    bool hasVulAutoRepairConfigList() const { return this->vulAutoRepairConfigList_ != nullptr;};
    void deleteVulAutoRepairConfigList() { this->vulAutoRepairConfigList_ = nullptr;};
    inline const vector<CreateVulAutoRepairConfigRequestVulAutoRepairConfigList> & vulAutoRepairConfigList() const { DARABONBA_PTR_GET_CONST(vulAutoRepairConfigList_, vector<CreateVulAutoRepairConfigRequestVulAutoRepairConfigList>) };
    inline vector<CreateVulAutoRepairConfigRequestVulAutoRepairConfigList> vulAutoRepairConfigList() { DARABONBA_PTR_GET(vulAutoRepairConfigList_, vector<CreateVulAutoRepairConfigRequestVulAutoRepairConfigList>) };
    inline CreateVulAutoRepairConfigRequest& setVulAutoRepairConfigList(const vector<CreateVulAutoRepairConfigRequestVulAutoRepairConfigList> & vulAutoRepairConfigList) { DARABONBA_PTR_SET_VALUE(vulAutoRepairConfigList_, vulAutoRepairConfigList) };
    inline CreateVulAutoRepairConfigRequest& setVulAutoRepairConfigList(vector<CreateVulAutoRepairConfigRequestVulAutoRepairConfigList> && vulAutoRepairConfigList) { DARABONBA_PTR_SET_RVALUE(vulAutoRepairConfigList_, vulAutoRepairConfigList) };


  protected:
    // The reason why the vulnerability can be automatically fixed.
    std::shared_ptr<string> reason_ = nullptr;
    // The type of the vulnerability. Valid values: -**cve**: Linux software vulnerability -**sys**: Windows system vulnerability
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The vulnerabilities that can be automatically fixed.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateVulAutoRepairConfigRequestVulAutoRepairConfigList>> vulAutoRepairConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
