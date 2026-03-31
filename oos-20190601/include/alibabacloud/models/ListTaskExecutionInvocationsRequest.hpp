// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKEXECUTIONINVOCATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKEXECUTIONINVOCATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTaskExecutionInvocationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskExecutionInvocationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskExecutionInvocationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
    };
    ListTaskExecutionInvocationsRequest() = default ;
    ListTaskExecutionInvocationsRequest(const ListTaskExecutionInvocationsRequest &) = default ;
    ListTaskExecutionInvocationsRequest(ListTaskExecutionInvocationsRequest &&) = default ;
    ListTaskExecutionInvocationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskExecutionInvocationsRequest() = default ;
    ListTaskExecutionInvocationsRequest& operator=(const ListTaskExecutionInvocationsRequest &) = default ;
    ListTaskExecutionInvocationsRequest& operator=(ListTaskExecutionInvocationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->status_ == nullptr && this->taskExecutionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTaskExecutionInvocationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTaskExecutionInvocationsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskExecutionId Field Functions 
    bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
    void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
    inline string getTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
    inline ListTaskExecutionInvocationsRequest& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> taskExecutionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
