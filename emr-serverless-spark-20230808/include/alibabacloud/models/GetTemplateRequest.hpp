// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(templateBizId, templateBizId_);
      DARABONBA_PTR_TO_JSON(templateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(templateBizId, templateBizId_);
      DARABONBA_PTR_FROM_JSON(templateType, templateType_);
    };
    GetTemplateRequest() = default ;
    GetTemplateRequest(const GetTemplateRequest &) = default ;
    GetTemplateRequest(GetTemplateRequest &&) = default ;
    GetTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateRequest() = default ;
    GetTemplateRequest& operator=(const GetTemplateRequest &) = default ;
    GetTemplateRequest& operator=(GetTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->templateBizId_ != nullptr && this->templateType_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateBizId Field Functions 
    bool hasTemplateBizId() const { return this->templateBizId_ != nullptr;};
    void deleteTemplateBizId() { this->templateBizId_ = nullptr;};
    inline string templateBizId() const { DARABONBA_PTR_GET_DEFAULT(templateBizId_, "") };
    inline GetTemplateRequest& setTemplateBizId(string templateBizId) { DARABONBA_PTR_SET_VALUE(templateBizId_, templateBizId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline GetTemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> templateBizId_ = nullptr;
    // The template type.
    // 
    // Valid values:
    // 
    // *   TASK
    // *   SESSION
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
