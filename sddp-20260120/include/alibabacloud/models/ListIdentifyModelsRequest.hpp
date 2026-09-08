// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTIFYMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTIFYMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListIdentifyModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentifyModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(FilterAuditModel, filterAuditModel_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentifyModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(FilterAuditModel, filterAuditModel_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ListIdentifyModelsRequest() = default ;
    ListIdentifyModelsRequest(const ListIdentifyModelsRequest &) = default ;
    ListIdentifyModelsRequest(ListIdentifyModelsRequest &&) = default ;
    ListIdentifyModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentifyModelsRequest() = default ;
    ListIdentifyModelsRequest& operator=(const ListIdentifyModelsRequest &) = default ;
    ListIdentifyModelsRequest& operator=(ListIdentifyModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureType_ == nullptr
        && this->filterAuditModel_ == nullptr && this->lang_ == nullptr && this->templateId_ == nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline ListIdentifyModelsRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // filterAuditModel Field Functions 
    bool hasFilterAuditModel() const { return this->filterAuditModel_ != nullptr;};
    void deleteFilterAuditModel() { this->filterAuditModel_ = nullptr;};
    inline bool getFilterAuditModel() const { DARABONBA_PTR_GET_DEFAULT(filterAuditModel_, false) };
    inline ListIdentifyModelsRequest& setFilterAuditModel(bool filterAuditModel) { DARABONBA_PTR_SET_VALUE(filterAuditModel_, filterAuditModel) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListIdentifyModelsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ListIdentifyModelsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<int32_t> featureType_ {};
    shared_ptr<bool> filterAuditModel_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
