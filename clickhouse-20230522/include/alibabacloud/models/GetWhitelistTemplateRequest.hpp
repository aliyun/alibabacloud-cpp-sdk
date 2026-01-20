// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWHITELISTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWHITELISTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class GetWhitelistTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWhitelistTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWhitelistTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetWhitelistTemplateRequest() = default ;
    GetWhitelistTemplateRequest(const GetWhitelistTemplateRequest &) = default ;
    GetWhitelistTemplateRequest(GetWhitelistTemplateRequest &&) = default ;
    GetWhitelistTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWhitelistTemplateRequest() = default ;
    GetWhitelistTemplateRequest& operator=(const GetWhitelistTemplateRequest &) = default ;
    GetWhitelistTemplateRequest& operator=(GetWhitelistTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->templateId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetWhitelistTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetWhitelistTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
