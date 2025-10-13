// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceInfo.hpp>
#include <map>
#include <alibabacloud/models/VersionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListInstancesOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesOutput& obj) { 
      DARABONBA_PTR_TO_JSON(currentError, currentError_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(versionStatus, versionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(currentError, currentError_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(versionStatus, versionStatus_);
    };
    ListInstancesOutput() = default ;
    ListInstancesOutput(const ListInstancesOutput &) = default ;
    ListInstancesOutput(ListInstancesOutput &&) = default ;
    ListInstancesOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesOutput() = default ;
    ListInstancesOutput& operator=(const ListInstancesOutput &) = default ;
    ListInstancesOutput& operator=(ListInstancesOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentError_ == nullptr
        && return this->instances_ == nullptr && return this->requestId_ == nullptr && return this->versionStatus_ == nullptr; };
    // currentError Field Functions 
    bool hasCurrentError() const { return this->currentError_ != nullptr;};
    void deleteCurrentError() { this->currentError_ = nullptr;};
    inline string currentError() const { DARABONBA_PTR_GET_DEFAULT(currentError_, "") };
    inline ListInstancesOutput& setCurrentError(string currentError) { DARABONBA_PTR_SET_VALUE(currentError_, currentError) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<InstanceInfo> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<InstanceInfo>) };
    inline vector<InstanceInfo> instances() { DARABONBA_PTR_GET(instances_, vector<InstanceInfo>) };
    inline ListInstancesOutput& setInstances(const vector<InstanceInfo> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstancesOutput& setInstances(vector<InstanceInfo> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versionStatus Field Functions 
    bool hasVersionStatus() const { return this->versionStatus_ != nullptr;};
    void deleteVersionStatus() { this->versionStatus_ = nullptr;};
    inline const map<string, VersionStatus> & versionStatus() const { DARABONBA_PTR_GET_CONST(versionStatus_, map<string, VersionStatus>) };
    inline map<string, VersionStatus> versionStatus() { DARABONBA_PTR_GET(versionStatus_, map<string, VersionStatus>) };
    inline ListInstancesOutput& setVersionStatus(const map<string, VersionStatus> & versionStatus) { DARABONBA_PTR_SET_VALUE(versionStatus_, versionStatus) };
    inline ListInstancesOutput& setVersionStatus(map<string, VersionStatus> && versionStatus) { DARABONBA_PTR_SET_RVALUE(versionStatus_, versionStatus) };


  protected:
    std::shared_ptr<string> currentError_ = nullptr;
    std::shared_ptr<vector<InstanceInfo>> instances_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<map<string, VersionStatus>> versionStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
