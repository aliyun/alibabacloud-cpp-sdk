// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROJECTADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROJECTADDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ProjectAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProjectAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(has_manager, hasManager_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
    };
    friend void from_json(const Darabonba::Json& j, ProjectAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(has_manager, hasManager_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
    };
    ProjectAddRequest() = default ;
    ProjectAddRequest(const ProjectAddRequest &) = default ;
    ProjectAddRequest(ProjectAddRequest &&) = default ;
    ProjectAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProjectAddRequest() = default ;
    ProjectAddRequest& operator=(const ProjectAddRequest &) = default ;
    ProjectAddRequest& operator=(ProjectAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasManager_ == nullptr && this->projectName_ == nullptr && this->thirdPartCostCenterId_ == nullptr && this->thirdPartId_ == nullptr && this->thirdPartInvoiceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ProjectAddRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasManager Field Functions 
    bool hasHasManager() const { return this->hasManager_ != nullptr;};
    void deleteHasManager() { this->hasManager_ = nullptr;};
    inline bool getHasManager() const { DARABONBA_PTR_GET_DEFAULT(hasManager_, false) };
    inline ProjectAddRequest& setHasManager(bool hasManager) { DARABONBA_PTR_SET_VALUE(hasManager_, hasManager) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ProjectAddRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // thirdPartCostCenterId Field Functions 
    bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
    void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
    inline string getThirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
    inline ProjectAddRequest& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string getThirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline ProjectAddRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string getThirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline ProjectAddRequest& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> code_ {};
    shared_ptr<bool> hasManager_ {};
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    shared_ptr<string> thirdPartCostCenterId_ {};
    // This parameter is required.
    shared_ptr<string> thirdPartId_ {};
    shared_ptr<string> thirdPartInvoiceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
