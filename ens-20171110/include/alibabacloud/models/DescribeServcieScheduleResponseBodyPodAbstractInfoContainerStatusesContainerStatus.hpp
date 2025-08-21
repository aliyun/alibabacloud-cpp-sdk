// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODYPODABSTRACTINFOCONTAINERSTATUSESCONTAINERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODYPODABSTRACTINFOCONTAINERSTATUSESCONTAINERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus() = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus(const DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus &) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus(DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus &&) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus() = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus& operator=(const DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus &) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus& operator=(DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerId_ != nullptr
        && this->name_ != nullptr; };
    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
