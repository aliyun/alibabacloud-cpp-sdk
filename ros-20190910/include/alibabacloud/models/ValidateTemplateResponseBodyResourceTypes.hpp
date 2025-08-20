// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODYRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODYRESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ValidateTemplateResponseBodyResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateResponseBodyResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateResponseBodyResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ValidateTemplateResponseBodyResourceTypes() = default ;
    ValidateTemplateResponseBodyResourceTypes(const ValidateTemplateResponseBodyResourceTypes &) = default ;
    ValidateTemplateResponseBodyResourceTypes(ValidateTemplateResponseBodyResourceTypes &&) = default ;
    ValidateTemplateResponseBodyResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateResponseBodyResourceTypes() = default ;
    ValidateTemplateResponseBodyResourceTypes& operator=(const ValidateTemplateResponseBodyResourceTypes &) = default ;
    ValidateTemplateResponseBodyResourceTypes& operator=(ValidateTemplateResponseBodyResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSources_ != nullptr
        && this->resources_ != nullptr; };
    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<string> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<string>) };
    inline vector<string> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<string>) };
    inline ValidateTemplateResponseBodyResourceTypes& setDataSources(const vector<string> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline ValidateTemplateResponseBodyResourceTypes& setDataSources(vector<string> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> resources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline ValidateTemplateResponseBodyResourceTypes& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ValidateTemplateResponseBodyResourceTypes& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The DataSource resource types that are used in the template. The value is deduplicated.
    std::shared_ptr<vector<string>> dataSources_ = nullptr;
    // The regular resource types that are used in the template. The value is deduplicated.
    std::shared_ptr<vector<string>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
