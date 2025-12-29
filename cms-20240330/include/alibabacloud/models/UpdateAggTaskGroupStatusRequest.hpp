// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGTASKGROUPSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGTASKGROUPSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateAggTaskGroupStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggTaskGroupStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggTaskGroupStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateAggTaskGroupStatusRequest() = default ;
    UpdateAggTaskGroupStatusRequest(const UpdateAggTaskGroupStatusRequest &) = default ;
    UpdateAggTaskGroupStatusRequest(UpdateAggTaskGroupStatusRequest &&) = default ;
    UpdateAggTaskGroupStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggTaskGroupStatusRequest() = default ;
    UpdateAggTaskGroupStatusRequest& operator=(const UpdateAggTaskGroupStatusRequest &) = default ;
    UpdateAggTaskGroupStatusRequest& operator=(UpdateAggTaskGroupStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAggTaskGroupStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Status of the aggregation task group, either “Running” or “Stopped”. Default is Running.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
