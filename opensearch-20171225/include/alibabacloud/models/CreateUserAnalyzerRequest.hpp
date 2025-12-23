// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERANALYZERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERANALYZERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateUserAnalyzerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserAnalyzerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(business, business_);
      DARABONBA_PTR_TO_JSON(businessAppGroupId, businessAppGroupId_);
      DARABONBA_PTR_TO_JSON(businessType, businessType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserAnalyzerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(business, business_);
      DARABONBA_PTR_FROM_JSON(businessAppGroupId, businessAppGroupId_);
      DARABONBA_PTR_FROM_JSON(businessType, businessType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateUserAnalyzerRequest() = default ;
    CreateUserAnalyzerRequest(const CreateUserAnalyzerRequest &) = default ;
    CreateUserAnalyzerRequest(CreateUserAnalyzerRequest &&) = default ;
    CreateUserAnalyzerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserAnalyzerRequest() = default ;
    CreateUserAnalyzerRequest& operator=(const CreateUserAnalyzerRequest &) = default ;
    CreateUserAnalyzerRequest& operator=(CreateUserAnalyzerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->business_ == nullptr
        && return this->businessAppGroupId_ == nullptr && return this->businessType_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr && return this->dryRun_ == nullptr; };
    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline string business() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
    inline CreateUserAnalyzerRequest& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


    // businessAppGroupId Field Functions 
    bool hasBusinessAppGroupId() const { return this->businessAppGroupId_ != nullptr;};
    void deleteBusinessAppGroupId() { this->businessAppGroupId_ = nullptr;};
    inline string businessAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(businessAppGroupId_, "") };
    inline CreateUserAnalyzerRequest& setBusinessAppGroupId(string businessAppGroupId) { DARABONBA_PTR_SET_VALUE(businessAppGroupId_, businessAppGroupId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateUserAnalyzerRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateUserAnalyzerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateUserAnalyzerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateUserAnalyzerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The basic analyzer.
    std::shared_ptr<string> business_ = nullptr;
    // The application ID of the custom analyzer.
    std::shared_ptr<string> businessAppGroupId_ = nullptr;
    // The basic analyzer type. Valid values: AUTO, MODEL, SYSTEM, and USER.
    std::shared_ptr<string> businessType_ = nullptr;
    // The analyzer name.
    std::shared_ptr<string> name_ = nullptr;
    // The engine type. Valid values: HA3 and ES.
    std::shared_ptr<string> type_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Default value: false.
    // Valid values:
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
