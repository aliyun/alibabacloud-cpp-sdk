// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesDefaultEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultEndpoint, defaultEndpoint_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultEndpoint, defaultEndpoint_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstancesResponseBodyInstances() = default ;
    ListInstancesResponseBodyInstances(const ListInstancesResponseBodyInstances &) = default ;
    ListInstancesResponseBodyInstances(ListInstancesResponseBodyInstances &&) = default ;
    ListInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstances() = default ;
    ListInstancesResponseBodyInstances& operator=(const ListInstancesResponseBodyInstances &) = default ;
    ListInstancesResponseBodyInstances& operator=(ListInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->defaultEndpoint_ != nullptr && this->description_ != nullptr && this->instanceId_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListInstancesResponseBodyInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultEndpoint Field Functions 
    bool hasDefaultEndpoint() const { return this->defaultEndpoint_ != nullptr;};
    void deleteDefaultEndpoint() { this->defaultEndpoint_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesDefaultEndpoint & defaultEndpoint() const { DARABONBA_PTR_GET_CONST(defaultEndpoint_, Models::ListInstancesResponseBodyInstancesDefaultEndpoint) };
    inline Models::ListInstancesResponseBodyInstancesDefaultEndpoint defaultEndpoint() { DARABONBA_PTR_GET(defaultEndpoint_, Models::ListInstancesResponseBodyInstancesDefaultEndpoint) };
    inline ListInstancesResponseBodyInstances& setDefaultEndpoint(const Models::ListInstancesResponseBodyInstancesDefaultEndpoint & defaultEndpoint) { DARABONBA_PTR_SET_VALUE(defaultEndpoint_, defaultEndpoint) };
    inline ListInstancesResponseBodyInstances& setDefaultEndpoint(Models::ListInstancesResponseBodyInstancesDefaultEndpoint && defaultEndpoint) { DARABONBA_PTR_SET_RVALUE(defaultEndpoint_, defaultEndpoint) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstancesResponseBodyInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the instance was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The default endpoint of the instance.
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesDefaultEndpoint> defaultEndpoint_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   creating
    // *   running
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
