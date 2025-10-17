// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSTATUSRESPONSEBODYINSTANCECLOUDASSISTANTSTATUSSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSTATUSRESPONSEBODYINSTANCECLOUDASSISTANTSTATUSSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCloudAssistantStatus, instanceCloudAssistantStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCloudAssistantStatus, instanceCloudAssistantStatus_);
    };
    DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet() = default ;
    DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet(const DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet &) = default ;
    DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet(DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet &&) = default ;
    DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet() = default ;
    DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& operator=(const DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet &) = default ;
    DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& operator=(DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCloudAssistantStatus_ == nullptr; };
    // instanceCloudAssistantStatus Field Functions 
    bool hasInstanceCloudAssistantStatus() const { return this->instanceCloudAssistantStatus_ != nullptr;};
    void deleteInstanceCloudAssistantStatus() { this->instanceCloudAssistantStatus_ = nullptr;};
    inline const vector<Models::DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus> & instanceCloudAssistantStatus() const { DARABONBA_PTR_GET_CONST(instanceCloudAssistantStatus_, vector<Models::DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus>) };
    inline vector<Models::DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus> instanceCloudAssistantStatus() { DARABONBA_PTR_GET(instanceCloudAssistantStatus_, vector<Models::DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus>) };
    inline DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setInstanceCloudAssistantStatus(const vector<Models::DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus> & instanceCloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(instanceCloudAssistantStatus_, instanceCloudAssistantStatus) };
    inline DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setInstanceCloudAssistantStatus(vector<Models::DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus> && instanceCloudAssistantStatus) { DARABONBA_PTR_SET_RVALUE(instanceCloudAssistantStatus_, instanceCloudAssistantStatus) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus>> instanceCloudAssistantStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
