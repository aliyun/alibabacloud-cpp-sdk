// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELABELTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELABELTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateLabelTableRequestFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateLabelTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLabelTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLabelTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateLabelTableRequest() = default ;
    CreateLabelTableRequest(const CreateLabelTableRequest &) = default ;
    CreateLabelTableRequest(CreateLabelTableRequest &&) = default ;
    CreateLabelTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLabelTableRequest() = default ;
    CreateLabelTableRequest& operator=(const CreateLabelTableRequest &) = default ;
    CreateLabelTableRequest& operator=(CreateLabelTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasourceId_ != nullptr
        && this->fields_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr; };
    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline CreateLabelTableRequest& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<CreateLabelTableRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<CreateLabelTableRequestFields>) };
    inline vector<CreateLabelTableRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<CreateLabelTableRequestFields>) };
    inline CreateLabelTableRequest& setFields(const vector<CreateLabelTableRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline CreateLabelTableRequest& setFields(vector<CreateLabelTableRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLabelTableRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateLabelTableRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> datasourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateLabelTableRequestFields>> fields_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
