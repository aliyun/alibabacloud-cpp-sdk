// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_WORKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class Workflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Workflow& obj) { 
      DARABONBA_PTR_TO_JSON(LatestEndTime, latestEndTime_);
      DARABONBA_PTR_TO_JSON(LatestInstanceId, latestInstanceId_);
      DARABONBA_PTR_TO_JSON(LatestInstanceStatus, latestInstanceStatus_);
      DARABONBA_PTR_TO_JSON(LatestStartTime, latestStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, Workflow& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestEndTime, latestEndTime_);
      DARABONBA_PTR_FROM_JSON(LatestInstanceId, latestInstanceId_);
      DARABONBA_PTR_FROM_JSON(LatestInstanceStatus, latestInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(LatestStartTime, latestStartTime_);
    };
    Workflow() = default ;
    Workflow(const Workflow &) = default ;
    Workflow(Workflow &&) = default ;
    Workflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Workflow() = default ;
    Workflow& operator=(const Workflow &) = default ;
    Workflow& operator=(Workflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latestEndTime_ == nullptr
        && return this->latestInstanceId_ == nullptr && return this->latestInstanceStatus_ == nullptr && return this->latestStartTime_ == nullptr; };
    // latestEndTime Field Functions 
    bool hasLatestEndTime() const { return this->latestEndTime_ != nullptr;};
    void deleteLatestEndTime() { this->latestEndTime_ = nullptr;};
    inline string latestEndTime() const { DARABONBA_PTR_GET_DEFAULT(latestEndTime_, "") };
    inline Workflow& setLatestEndTime(string latestEndTime) { DARABONBA_PTR_SET_VALUE(latestEndTime_, latestEndTime) };


    // latestInstanceId Field Functions 
    bool hasLatestInstanceId() const { return this->latestInstanceId_ != nullptr;};
    void deleteLatestInstanceId() { this->latestInstanceId_ = nullptr;};
    inline string latestInstanceId() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceId_, "") };
    inline Workflow& setLatestInstanceId(string latestInstanceId) { DARABONBA_PTR_SET_VALUE(latestInstanceId_, latestInstanceId) };


    // latestInstanceStatus Field Functions 
    bool hasLatestInstanceStatus() const { return this->latestInstanceStatus_ != nullptr;};
    void deleteLatestInstanceStatus() { this->latestInstanceStatus_ = nullptr;};
    inline string latestInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceStatus_, "") };
    inline Workflow& setLatestInstanceStatus(string latestInstanceStatus) { DARABONBA_PTR_SET_VALUE(latestInstanceStatus_, latestInstanceStatus) };


    // latestStartTime Field Functions 
    bool hasLatestStartTime() const { return this->latestStartTime_ != nullptr;};
    void deleteLatestStartTime() { this->latestStartTime_ = nullptr;};
    inline string latestStartTime() const { DARABONBA_PTR_GET_DEFAULT(latestStartTime_, "") };
    inline Workflow& setLatestStartTime(string latestStartTime) { DARABONBA_PTR_SET_VALUE(latestStartTime_, latestStartTime) };


  protected:
    std::shared_ptr<string> latestEndTime_ = nullptr;
    std::shared_ptr<string> latestInstanceId_ = nullptr;
    std::shared_ptr<string> latestInstanceStatus_ = nullptr;
    std::shared_ptr<string> latestStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
