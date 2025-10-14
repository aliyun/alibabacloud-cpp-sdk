// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODYPODABSTRACTINFOCONTAINERSTATUSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODYPODABSTRACTINFOCONTAINERSTATUSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerStatus, containerStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerStatus, containerStatus_);
    };
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses() = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses(const DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses &) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses(DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses &&) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses() = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses& operator=(const DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses &) = default ;
    DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses& operator=(DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerStatus_ == nullptr; };
    // containerStatus Field Functions 
    bool hasContainerStatus() const { return this->containerStatus_ != nullptr;};
    void deleteContainerStatus() { this->containerStatus_ = nullptr;};
    inline const vector<Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus> & containerStatus() const { DARABONBA_PTR_GET_CONST(containerStatus_, vector<Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus>) };
    inline vector<Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus> containerStatus() { DARABONBA_PTR_GET(containerStatus_, vector<Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus>) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses& setContainerStatus(const vector<Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus> & containerStatus) { DARABONBA_PTR_SET_VALUE(containerStatus_, containerStatus) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatuses& setContainerStatus(vector<Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus> && containerStatus) { DARABONBA_PTR_SET_RVALUE(containerStatus_, containerStatus) };


  protected:
    std::shared_ptr<vector<Models::DescribeServcieScheduleResponseBodyPodAbstractInfoContainerStatusesContainerStatus>> containerStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
