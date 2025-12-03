// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODYINSTANCELISTINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODYINSTANCELISTINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterInfoResponseBodyInstanceListInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterInfoResponseBodyInstanceListInstance& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterInfoResponseBodyInstanceListInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstanceClusterInfoResponseBodyInstanceListInstance() = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceListInstance(const DescribeInstanceClusterInfoResponseBodyInstanceListInstance &) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceListInstance(DescribeInstanceClusterInfoResponseBodyInstanceListInstance &&) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceListInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterInfoResponseBodyInstanceListInstance() = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceListInstance& operator=(const DescribeInstanceClusterInfoResponseBodyInstanceListInstance &) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceListInstance& operator=(DescribeInstanceClusterInfoResponseBodyInstanceListInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->status_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceListInstance& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceListInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceListInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceListInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if the call fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
