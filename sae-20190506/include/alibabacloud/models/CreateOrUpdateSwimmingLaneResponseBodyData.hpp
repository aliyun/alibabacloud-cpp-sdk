// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
    };
    CreateOrUpdateSwimmingLaneResponseBodyData() = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData(const CreateOrUpdateSwimmingLaneResponseBodyData &) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData(CreateOrUpdateSwimmingLaneResponseBodyData &&) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneResponseBodyData() = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData& operator=(const CreateOrUpdateSwimmingLaneResponseBodyData &) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData& operator=(CreateOrUpdateSwimmingLaneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->laneId_ == nullptr; };
    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


  protected:
    std::shared_ptr<int64_t> laneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
