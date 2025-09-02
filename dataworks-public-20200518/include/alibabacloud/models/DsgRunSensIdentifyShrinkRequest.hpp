// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGRUNSENSIDENTIFYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGRUNSENSIDENTIFYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgRunSensIdentifyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgRunSensIdentifyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EsMetaParams, esMetaParamsShrink_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DsgRunSensIdentifyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EsMetaParams, esMetaParamsShrink_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DsgRunSensIdentifyShrinkRequest() = default ;
    DsgRunSensIdentifyShrinkRequest(const DsgRunSensIdentifyShrinkRequest &) = default ;
    DsgRunSensIdentifyShrinkRequest(DsgRunSensIdentifyShrinkRequest &&) = default ;
    DsgRunSensIdentifyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgRunSensIdentifyShrinkRequest() = default ;
    DsgRunSensIdentifyShrinkRequest& operator=(const DsgRunSensIdentifyShrinkRequest &) = default ;
    DsgRunSensIdentifyShrinkRequest& operator=(DsgRunSensIdentifyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->esMetaParamsShrink_ != nullptr
        && this->tenantId_ != nullptr; };
    // esMetaParamsShrink Field Functions 
    bool hasEsMetaParamsShrink() const { return this->esMetaParamsShrink_ != nullptr;};
    void deleteEsMetaParamsShrink() { this->esMetaParamsShrink_ = nullptr;};
    inline string esMetaParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(esMetaParamsShrink_, "") };
    inline DsgRunSensIdentifyShrinkRequest& setEsMetaParamsShrink(string esMetaParamsShrink) { DARABONBA_PTR_SET_VALUE(esMetaParamsShrink_, esMetaParamsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DsgRunSensIdentifyShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The parameters that you need to configure to scan specified metadata.
    std::shared_ptr<string> esMetaParamsShrink_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
