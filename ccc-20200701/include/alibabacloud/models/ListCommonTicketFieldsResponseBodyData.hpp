// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMONTICKETFIELDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMONTICKETFIELDSRESPONSEBODYDATA_HPP_
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
  class ListCommonTicketFieldsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommonTicketFieldsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommonTicketFieldsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    ListCommonTicketFieldsResponseBodyData() = default ;
    ListCommonTicketFieldsResponseBodyData(const ListCommonTicketFieldsResponseBodyData &) = default ;
    ListCommonTicketFieldsResponseBodyData(ListCommonTicketFieldsResponseBodyData &&) = default ;
    ListCommonTicketFieldsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommonTicketFieldsResponseBodyData() = default ;
    ListCommonTicketFieldsResponseBodyData& operator=(const ListCommonTicketFieldsResponseBodyData &) = default ;
    ListCommonTicketFieldsResponseBodyData& operator=(ListCommonTicketFieldsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->properties_ == nullptr && return this->updatedTime_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListCommonTicketFieldsResponseBodyData& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListCommonTicketFieldsResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCommonTicketFieldsResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const map<string, Models::DataPropertiesValue> & properties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, Models::DataPropertiesValue>) };
    inline map<string, Models::DataPropertiesValue> properties() { DARABONBA_PTR_GET(properties_, map<string, Models::DataPropertiesValue>) };
    inline ListCommonTicketFieldsResponseBodyData& setProperties(const map<string, Models::DataPropertiesValue> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ListCommonTicketFieldsResponseBodyData& setProperties(map<string, Models::DataPropertiesValue> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline ListCommonTicketFieldsResponseBodyData& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    // Schema ID。
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<map<string, Models::DataPropertiesValue>> properties_ = nullptr;
    std::shared_ptr<string> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
