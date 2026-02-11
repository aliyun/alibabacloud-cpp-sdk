// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTPROMETHEUSRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTPROMETHEUSRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ImportPrometheusRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportPrometheusRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportPrometheusRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ImportPrometheusRulesRequest() = default ;
    ImportPrometheusRulesRequest(const ImportPrometheusRulesRequest &) = default ;
    ImportPrometheusRulesRequest(ImportPrometheusRulesRequest &&) = default ;
    ImportPrometheusRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportPrometheusRulesRequest() = default ;
    ImportPrometheusRulesRequest& operator=(const ImportPrometheusRulesRequest &) = default ;
    ImportPrometheusRulesRequest& operator=(ImportPrometheusRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->content_ == nullptr && this->name_ == nullptr && this->nameSpace_ == nullptr && this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ImportPrometheusRulesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ImportPrometheusRulesRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportPrometheusRulesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameSpace Field Functions 
    bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
    void deleteNameSpace() { this->nameSpace_ = nullptr;};
    inline string getNameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
    inline ImportPrometheusRulesRequest& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportPrometheusRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> content_ {};
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
