// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYEVENTMARKMISSINDIVIDUALLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYEVENTMARKMISSINDIVIDUALLYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifySecurityEventMarkMissIndividuallyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityEventMarkMissIndividuallyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteMarkMissParam, deleteMarkMissParam_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(InsertMarkMissParam, insertMarkMissParam_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityEventMarkMissIndividuallyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteMarkMissParam, deleteMarkMissParam_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(InsertMarkMissParam, insertMarkMissParam_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    ModifySecurityEventMarkMissIndividuallyRequest() = default ;
    ModifySecurityEventMarkMissIndividuallyRequest(const ModifySecurityEventMarkMissIndividuallyRequest &) = default ;
    ModifySecurityEventMarkMissIndividuallyRequest(ModifySecurityEventMarkMissIndividuallyRequest &&) = default ;
    ModifySecurityEventMarkMissIndividuallyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityEventMarkMissIndividuallyRequest() = default ;
    ModifySecurityEventMarkMissIndividuallyRequest& operator=(const ModifySecurityEventMarkMissIndividuallyRequest &) = default ;
    ModifySecurityEventMarkMissIndividuallyRequest& operator=(ModifySecurityEventMarkMissIndividuallyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteMarkMissParam_ == nullptr
        && this->from_ == nullptr && this->insertMarkMissParam_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr; };
    // deleteMarkMissParam Field Functions 
    bool hasDeleteMarkMissParam() const { return this->deleteMarkMissParam_ != nullptr;};
    void deleteDeleteMarkMissParam() { this->deleteMarkMissParam_ = nullptr;};
    inline string getDeleteMarkMissParam() const { DARABONBA_PTR_GET_DEFAULT(deleteMarkMissParam_, "") };
    inline ModifySecurityEventMarkMissIndividuallyRequest& setDeleteMarkMissParam(string deleteMarkMissParam) { DARABONBA_PTR_SET_VALUE(deleteMarkMissParam_, deleteMarkMissParam) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline ModifySecurityEventMarkMissIndividuallyRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // insertMarkMissParam Field Functions 
    bool hasInsertMarkMissParam() const { return this->insertMarkMissParam_ != nullptr;};
    void deleteInsertMarkMissParam() { this->insertMarkMissParam_ = nullptr;};
    inline string getInsertMarkMissParam() const { DARABONBA_PTR_GET_DEFAULT(insertMarkMissParam_, "") };
    inline ModifySecurityEventMarkMissIndividuallyRequest& setInsertMarkMissParam(string insertMarkMissParam) { DARABONBA_PTR_SET_VALUE(insertMarkMissParam_, insertMarkMissParam) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifySecurityEventMarkMissIndividuallyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifySecurityEventMarkMissIndividuallyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The alert handling rule that you want to delete.
    shared_ptr<string> deleteMarkMissParam_ {};
    // The ID of the request source. Set the value to **sas**.
    shared_ptr<string> from_ {};
    // The alert handling that you want to add.
    shared_ptr<string> insertMarkMissParam_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
