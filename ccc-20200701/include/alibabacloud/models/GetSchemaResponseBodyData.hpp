// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataPropertiesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetSchemaResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemaResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemaResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    GetSchemaResponseBodyData() = default ;
    GetSchemaResponseBodyData(const GetSchemaResponseBodyData &) = default ;
    GetSchemaResponseBodyData(GetSchemaResponseBodyData &&) = default ;
    GetSchemaResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemaResponseBodyData() = default ;
    GetSchemaResponseBodyData& operator=(const GetSchemaResponseBodyData &) = default ;
    GetSchemaResponseBodyData& operator=(GetSchemaResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->deleted_ != nullptr && this->description_ != nullptr && this->id_ != nullptr && this->instanceId_ != nullptr && this->properties_ != nullptr
        && this->updatedTime_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetSchemaResponseBodyData& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline GetSchemaResponseBodyData& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSchemaResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSchemaResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSchemaResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const map<string, Models::DataPropertiesValue> & properties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, Models::DataPropertiesValue>) };
    inline map<string, Models::DataPropertiesValue> properties() { DARABONBA_PTR_GET(properties_, map<string, Models::DataPropertiesValue>) };
    inline GetSchemaResponseBodyData& setProperties(const map<string, Models::DataPropertiesValue> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline GetSchemaResponseBodyData& setProperties(map<string, Models::DataPropertiesValue> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline GetSchemaResponseBodyData& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<bool> deleted_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // schema id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<map<string, Models::DataPropertiesValue>> properties_ = nullptr;
    std::shared_ptr<string> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
