// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/IndexKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(datasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(datasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    CreateDatasetRequest() = default ;
    CreateDatasetRequest(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest(CreateDatasetRequest &&) = default ;
    CreateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequest() = default ;
    CreateDatasetRequest& operator=(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest& operator=(CreateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->description_ == nullptr && this->schema_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateDatasetRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const map<string, IndexKey> & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, map<string, IndexKey>) };
    inline map<string, IndexKey> getSchema() { DARABONBA_PTR_GET(schema_, map<string, IndexKey>) };
    inline CreateDatasetRequest& setSchema(const map<string, IndexKey> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline CreateDatasetRequest& setSchema(map<string, IndexKey> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<map<string, IndexKey>> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
