// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGRUNSENSIDENTIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGRUNSENSIDENTIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DsgRunSensIdentifyRequestEsMetaParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgRunSensIdentifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgRunSensIdentifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EsMetaParams, esMetaParams_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DsgRunSensIdentifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EsMetaParams, esMetaParams_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DsgRunSensIdentifyRequest() = default ;
    DsgRunSensIdentifyRequest(const DsgRunSensIdentifyRequest &) = default ;
    DsgRunSensIdentifyRequest(DsgRunSensIdentifyRequest &&) = default ;
    DsgRunSensIdentifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgRunSensIdentifyRequest() = default ;
    DsgRunSensIdentifyRequest& operator=(const DsgRunSensIdentifyRequest &) = default ;
    DsgRunSensIdentifyRequest& operator=(DsgRunSensIdentifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->esMetaParams_ != nullptr
        && this->tenantId_ != nullptr; };
    // esMetaParams Field Functions 
    bool hasEsMetaParams() const { return this->esMetaParams_ != nullptr;};
    void deleteEsMetaParams() { this->esMetaParams_ = nullptr;};
    inline const vector<DsgRunSensIdentifyRequestEsMetaParams> & esMetaParams() const { DARABONBA_PTR_GET_CONST(esMetaParams_, vector<DsgRunSensIdentifyRequestEsMetaParams>) };
    inline vector<DsgRunSensIdentifyRequestEsMetaParams> esMetaParams() { DARABONBA_PTR_GET(esMetaParams_, vector<DsgRunSensIdentifyRequestEsMetaParams>) };
    inline DsgRunSensIdentifyRequest& setEsMetaParams(const vector<DsgRunSensIdentifyRequestEsMetaParams> & esMetaParams) { DARABONBA_PTR_SET_VALUE(esMetaParams_, esMetaParams) };
    inline DsgRunSensIdentifyRequest& setEsMetaParams(vector<DsgRunSensIdentifyRequestEsMetaParams> && esMetaParams) { DARABONBA_PTR_SET_RVALUE(esMetaParams_, esMetaParams) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DsgRunSensIdentifyRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The parameters that you need to configure to scan specified metadata.
    std::shared_ptr<vector<DsgRunSensIdentifyRequestEsMetaParams>> esMetaParams_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
