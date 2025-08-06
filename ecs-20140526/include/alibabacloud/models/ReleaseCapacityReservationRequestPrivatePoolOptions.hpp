// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASECAPACITYRESERVATIONREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RELEASECAPACITYRESERVATIONREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ReleaseCapacityReservationRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseCapacityReservationRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseCapacityReservationRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ReleaseCapacityReservationRequestPrivatePoolOptions() = default ;
    ReleaseCapacityReservationRequestPrivatePoolOptions(const ReleaseCapacityReservationRequestPrivatePoolOptions &) = default ;
    ReleaseCapacityReservationRequestPrivatePoolOptions(ReleaseCapacityReservationRequestPrivatePoolOptions &&) = default ;
    ReleaseCapacityReservationRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseCapacityReservationRequestPrivatePoolOptions() = default ;
    ReleaseCapacityReservationRequestPrivatePoolOptions& operator=(const ReleaseCapacityReservationRequestPrivatePoolOptions &) = default ;
    ReleaseCapacityReservationRequestPrivatePoolOptions& operator=(ReleaseCapacityReservationRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ReleaseCapacityReservationRequestPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the capacity reservation.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
