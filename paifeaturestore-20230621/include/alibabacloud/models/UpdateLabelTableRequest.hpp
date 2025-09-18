// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELABELTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELABELTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLabelTableRequestFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class UpdateLabelTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLabelTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLabelTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateLabelTableRequest() = default ;
    UpdateLabelTableRequest(const UpdateLabelTableRequest &) = default ;
    UpdateLabelTableRequest(UpdateLabelTableRequest &&) = default ;
    UpdateLabelTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLabelTableRequest() = default ;
    UpdateLabelTableRequest& operator=(const UpdateLabelTableRequest &) = default ;
    UpdateLabelTableRequest& operator=(UpdateLabelTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasourceId_ != nullptr
        && this->fields_ != nullptr && this->name_ != nullptr; };
    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline UpdateLabelTableRequest& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<UpdateLabelTableRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<UpdateLabelTableRequestFields>) };
    inline vector<UpdateLabelTableRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<UpdateLabelTableRequestFields>) };
    inline UpdateLabelTableRequest& setFields(const vector<UpdateLabelTableRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline UpdateLabelTableRequest& setFields(vector<UpdateLabelTableRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLabelTableRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> datasourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UpdateLabelTableRequestFields>> fields_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
