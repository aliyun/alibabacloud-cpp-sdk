// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCHEDULETASKREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_DELETESCHEDULETASKREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeleteScheduleTaskRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScheduleTaskRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScheduleTaskRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteScheduleTaskRequestPayload() = default ;
    DeleteScheduleTaskRequestPayload(const DeleteScheduleTaskRequestPayload &) = default ;
    DeleteScheduleTaskRequestPayload(DeleteScheduleTaskRequestPayload &&) = default ;
    DeleteScheduleTaskRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScheduleTaskRequestPayload() = default ;
    DeleteScheduleTaskRequestPayload& operator=(const DeleteScheduleTaskRequestPayload &) = default ;
    DeleteScheduleTaskRequestPayload& operator=(DeleteScheduleTaskRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteScheduleTaskRequestPayload& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
