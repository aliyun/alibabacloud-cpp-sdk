// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateModelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(modelCardIds, modelCardIds_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(modelCardIds, modelCardIds_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateModelGroupRequest() = default ;
    CreateModelGroupRequest(const CreateModelGroupRequest &) = default ;
    CreateModelGroupRequest(CreateModelGroupRequest &&) = default ;
    CreateModelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelGroupRequest() = default ;
    CreateModelGroupRequest& operator=(const CreateModelGroupRequest &) = default ;
    CreateModelGroupRequest& operator=(CreateModelGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->gatewayId_ == nullptr && this->modelCardIds_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateModelGroupRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // modelCardIds Field Functions 
    bool hasModelCardIds() const { return this->modelCardIds_ != nullptr;};
    void deleteModelCardIds() { this->modelCardIds_ = nullptr;};
    inline const vector<string> & getModelCardIds() const { DARABONBA_PTR_GET_CONST(modelCardIds_, vector<string>) };
    inline vector<string> getModelCardIds() { DARABONBA_PTR_GET(modelCardIds_, vector<string>) };
    inline CreateModelGroupRequest& setModelCardIds(const vector<string> & modelCardIds) { DARABONBA_PTR_SET_VALUE(modelCardIds_, modelCardIds) };
    inline CreateModelGroupRequest& setModelCardIds(vector<string> && modelCardIds) { DARABONBA_PTR_SET_RVALUE(modelCardIds_, modelCardIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModelGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the model group. The description can be up to 1,024 UTF-16 code units in length and can be left empty.
    shared_ptr<string> description_ {};
    // The ID of the AI gateway instance to which the resource belongs.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // The IDs of the actual or logical model cards within the same instance. The list can be empty and must not contain duplicate values. Model groups are not accepted as members.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> modelCardIds_ {};
    // The unique name within the instance. The name must be 1 to 128 UTF-8 bytes in length after trimming.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
