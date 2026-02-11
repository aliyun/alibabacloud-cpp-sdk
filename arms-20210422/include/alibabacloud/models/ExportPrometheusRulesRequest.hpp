// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTPROMETHEUSRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTPROMETHEUSRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ExportPrometheusRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportPrometheusRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportPrometheusRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ExportPrometheusRulesRequest() = default ;
    ExportPrometheusRulesRequest(const ExportPrometheusRulesRequest &) = default ;
    ExportPrometheusRulesRequest(ExportPrometheusRulesRequest &&) = default ;
    ExportPrometheusRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportPrometheusRulesRequest() = default ;
    ExportPrometheusRulesRequest& operator=(const ExportPrometheusRulesRequest &) = default ;
    ExportPrometheusRulesRequest& operator=(ExportPrometheusRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->name_ == nullptr && this->nameSpace_ == nullptr && this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExportPrometheusRulesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExportPrometheusRulesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameSpace Field Functions 
    bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
    void deleteNameSpace() { this->nameSpace_ = nullptr;};
    inline string getNameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
    inline ExportPrometheusRulesRequest& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportPrometheusRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> nameSpace_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
