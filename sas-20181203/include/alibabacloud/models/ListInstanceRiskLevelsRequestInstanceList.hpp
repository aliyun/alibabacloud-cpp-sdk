// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSREQUESTINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSREQUESTINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskLevelsRequestInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskLevelsRequestInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskLevelsRequestInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListInstanceRiskLevelsRequestInstanceList() = default ;
    ListInstanceRiskLevelsRequestInstanceList(const ListInstanceRiskLevelsRequestInstanceList &) = default ;
    ListInstanceRiskLevelsRequestInstanceList(ListInstanceRiskLevelsRequestInstanceList &&) = default ;
    ListInstanceRiskLevelsRequestInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskLevelsRequestInstanceList() = default ;
    ListInstanceRiskLevelsRequestInstanceList& operator=(const ListInstanceRiskLevelsRequestInstanceList &) = default ;
    ListInstanceRiskLevelsRequestInstanceList& operator=(ListInstanceRiskLevelsRequestInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->uuid_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceRiskLevelsRequestInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListInstanceRiskLevelsRequestInstanceList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The serial number of the instance.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
