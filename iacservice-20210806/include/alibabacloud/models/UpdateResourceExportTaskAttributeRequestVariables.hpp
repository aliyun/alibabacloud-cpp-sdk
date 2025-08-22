// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEEXPORTTASKATTRIBUTEREQUESTVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEEXPORTTASKATTRIBUTEREQUESTVARIABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateResourceExportTaskAttributeRequestVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceExportTaskAttributeRequestVariables& obj) { 
      DARABONBA_PTR_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceExportTaskAttributeRequestVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    UpdateResourceExportTaskAttributeRequestVariables() = default ;
    UpdateResourceExportTaskAttributeRequestVariables(const UpdateResourceExportTaskAttributeRequestVariables &) = default ;
    UpdateResourceExportTaskAttributeRequestVariables(UpdateResourceExportTaskAttributeRequestVariables &&) = default ;
    UpdateResourceExportTaskAttributeRequestVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceExportTaskAttributeRequestVariables() = default ;
    UpdateResourceExportTaskAttributeRequestVariables& operator=(const UpdateResourceExportTaskAttributeRequestVariables &) = default ;
    UpdateResourceExportTaskAttributeRequestVariables& operator=(UpdateResourceExportTaskAttributeRequestVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->properties_ != nullptr
        && this->resourceType_ != nullptr; };
    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<string> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<string>) };
    inline vector<string> properties() { DARABONBA_PTR_GET(properties_, vector<string>) };
    inline UpdateResourceExportTaskAttributeRequestVariables& setProperties(const vector<string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline UpdateResourceExportTaskAttributeRequestVariables& setProperties(vector<string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateResourceExportTaskAttributeRequestVariables& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<vector<string>> properties_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
