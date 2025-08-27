// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROJECTMODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROJECTMODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ProjectModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProjectModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
    };
    friend void from_json(const Darabonba::Json& j, ProjectModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
    };
    ProjectModifyRequest() = default ;
    ProjectModifyRequest(const ProjectModifyRequest &) = default ;
    ProjectModifyRequest(ProjectModifyRequest &&) = default ;
    ProjectModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProjectModifyRequest() = default ;
    ProjectModifyRequest& operator=(const ProjectModifyRequest &) = default ;
    ProjectModifyRequest& operator=(ProjectModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->projectName_ != nullptr && this->thirdPartCostCenterId_ != nullptr && this->thirdPartId_ != nullptr && this->thirdPartInvoiceId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ProjectModifyRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ProjectModifyRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // thirdPartCostCenterId Field Functions 
    bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
    void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
    inline string thirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
    inline ProjectModifyRequest& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline ProjectModifyRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline ProjectModifyRequest& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> thirdPartCostCenterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
