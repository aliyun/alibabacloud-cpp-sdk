// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODYPODABSTRACTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODYPODABSTRACTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServcieScheduleResponseBodyPodAbstractInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServcieScheduleResponseBodyPodAbstractInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerService, containerService_);
      DARABONBA_PTR_TO_JSON(ContainerStatuses, containerStatuses_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ResourceScope, resourceScope_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServcieScheduleResponseBodyPodAbstractInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerService, containerService_);
      DARABONBA_PTR_FROM_JSON(ContainerStatuses, containerStatuses_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ResourceScope, resourceScope_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeServcieScheduleResponseBodyPodAbstractInfo() = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfo(const DescribeServcieScheduleResponseBodyPodAbstractInfo &) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfo(DescribeServcieScheduleResponseBodyPodAbstractInfo &&) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServcieScheduleResponseBodyPodAbstractInfo() = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfo& operator=(const DescribeServcieScheduleResponseBodyPodAbstractInfo &) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfo& operator=(DescribeServcieScheduleResponseBodyPodAbstractInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerService_ == nullptr
        && return this->containerStatuses_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->resourceScope_ == nullptr && return this->status_ == nullptr; };
    // containerService Field Functions 
    bool hasContainerService() const { return this->containerService_ != nullptr;};
    void deleteContainerService() { this->containerService_ = nullptr;};
    inline bool containerService() const { DARABONBA_PTR_GET_DEFAULT(containerService_, false) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfo& setContainerService(bool containerService) { DARABONBA_PTR_SET_VALUE(containerService_, containerService) };


    // containerStatuses Field Functions 
    bool hasContainerStatuses() const { return this->containerStatuses_ != nullptr;};
    void deleteContainerStatuses() { this->containerStatuses_ = nullptr;};
    inline const Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses & containerStatuses() const { DARABONBA_PTR_GET_CONST(containerStatuses_, Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses) };
    inline Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses containerStatuses() { DARABONBA_PTR_GET(containerStatuses_, Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfo& setContainerStatuses(const Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses & containerStatuses) { DARABONBA_PTR_SET_VALUE(containerStatuses_, containerStatuses) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfo& setContainerStatuses(Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses && containerStatuses) { DARABONBA_PTR_SET_RVALUE(containerStatuses_, containerStatuses) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline bool name() const { DARABONBA_PTR_GET_DEFAULT(name_, false) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfo& setName(bool name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline bool _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, false) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfo& setNamespace(bool _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceScope Field Functions 
    bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
    void deleteResourceScope() { this->resourceScope_ = nullptr;};
    inline bool resourceScope() const { DARABONBA_PTR_GET_DEFAULT(resourceScope_, false) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfo& setResourceScope(bool resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfo& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the container service.
    std::shared_ptr<bool> containerService_ = nullptr;
    // The information about the container.
    std::shared_ptr<Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses> containerStatuses_ = nullptr;
    // The name of the pod.
    std::shared_ptr<bool> name_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<bool> namespace_ = nullptr;
    // The pod scope.
    std::shared_ptr<bool> resourceScope_ = nullptr;
    // The status of the pod.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
