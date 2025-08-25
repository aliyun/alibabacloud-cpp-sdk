// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSchemaRequestProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSchemaRequest() = default ;
    CreateSchemaRequest(const CreateSchemaRequest &) = default ;
    CreateSchemaRequest(CreateSchemaRequest &&) = default ;
    CreateSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSchemaRequest() = default ;
    CreateSchemaRequest& operator=(const CreateSchemaRequest &) = default ;
    CreateSchemaRequest& operator=(CreateSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->id_ != nullptr && this->instanceId_ != nullptr && this->properties_ != nullptr && this->requestId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSchemaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateSchemaRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSchemaRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<CreateSchemaRequestProperties> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<CreateSchemaRequestProperties>) };
    inline vector<CreateSchemaRequestProperties> properties() { DARABONBA_PTR_GET(properties_, vector<CreateSchemaRequestProperties>) };
    inline CreateSchemaRequest& setProperties(const vector<CreateSchemaRequestProperties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline CreateSchemaRequest& setProperties(vector<CreateSchemaRequestProperties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSchemaRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // schema id
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<CreateSchemaRequestProperties>> properties_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
