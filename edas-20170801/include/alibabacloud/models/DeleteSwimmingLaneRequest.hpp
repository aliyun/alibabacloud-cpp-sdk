// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESWIMMINGLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeleteSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
    };
    DeleteSwimmingLaneRequest() = default ;
    DeleteSwimmingLaneRequest(const DeleteSwimmingLaneRequest &) = default ;
    DeleteSwimmingLaneRequest(DeleteSwimmingLaneRequest &&) = default ;
    DeleteSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSwimmingLaneRequest() = default ;
    DeleteSwimmingLaneRequest& operator=(const DeleteSwimmingLaneRequest &) = default ;
    DeleteSwimmingLaneRequest& operator=(DeleteSwimmingLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->laneId_ == nullptr; };
    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline DeleteSwimmingLaneRequest& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


  protected:
    // The ID of the lane.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> laneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
