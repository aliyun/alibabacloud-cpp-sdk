// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEEXPORTTASKREQUESTVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEEXPORTTASKREQUESTVARIABLES_HPP_
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
  class CreateResourceExportTaskRequestVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceExportTaskRequestVariables& obj) { 
      DARABONBA_PTR_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceExportTaskRequestVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    CreateResourceExportTaskRequestVariables() = default ;
    CreateResourceExportTaskRequestVariables(const CreateResourceExportTaskRequestVariables &) = default ;
    CreateResourceExportTaskRequestVariables(CreateResourceExportTaskRequestVariables &&) = default ;
    CreateResourceExportTaskRequestVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceExportTaskRequestVariables() = default ;
    CreateResourceExportTaskRequestVariables& operator=(const CreateResourceExportTaskRequestVariables &) = default ;
    CreateResourceExportTaskRequestVariables& operator=(CreateResourceExportTaskRequestVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->properties_ == nullptr
        && return this->resourceType_ == nullptr; };
    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<string> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<string>) };
    inline vector<string> properties() { DARABONBA_PTR_GET(properties_, vector<string>) };
    inline CreateResourceExportTaskRequestVariables& setProperties(const vector<string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline CreateResourceExportTaskRequestVariables& setProperties(vector<string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateResourceExportTaskRequestVariables& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<vector<string>> properties_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
