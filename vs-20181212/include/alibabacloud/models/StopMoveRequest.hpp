// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPMOVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPMOVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StopMoveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopMoveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Pan, pan_);
      DARABONBA_PTR_TO_JSON(Tilt, tilt_);
      DARABONBA_PTR_TO_JSON(Zoom, zoom_);
    };
    friend void from_json(const Darabonba::Json& j, StopMoveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Pan, pan_);
      DARABONBA_PTR_FROM_JSON(Tilt, tilt_);
      DARABONBA_PTR_FROM_JSON(Zoom, zoom_);
    };
    StopMoveRequest() = default ;
    StopMoveRequest(const StopMoveRequest &) = default ;
    StopMoveRequest(StopMoveRequest &&) = default ;
    StopMoveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopMoveRequest() = default ;
    StopMoveRequest& operator=(const StopMoveRequest &) = default ;
    StopMoveRequest& operator=(StopMoveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->ownerId_ == nullptr && return this->pan_ == nullptr && return this->tilt_ == nullptr && return this->zoom_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline StopMoveRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StopMoveRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pan Field Functions 
    bool hasPan() const { return this->pan_ != nullptr;};
    void deletePan() { this->pan_ = nullptr;};
    inline bool pan() const { DARABONBA_PTR_GET_DEFAULT(pan_, false) };
    inline StopMoveRequest& setPan(bool pan) { DARABONBA_PTR_SET_VALUE(pan_, pan) };


    // tilt Field Functions 
    bool hasTilt() const { return this->tilt_ != nullptr;};
    void deleteTilt() { this->tilt_ = nullptr;};
    inline bool tilt() const { DARABONBA_PTR_GET_DEFAULT(tilt_, false) };
    inline StopMoveRequest& setTilt(bool tilt) { DARABONBA_PTR_SET_VALUE(tilt_, tilt) };


    // zoom Field Functions 
    bool hasZoom() const { return this->zoom_ != nullptr;};
    void deleteZoom() { this->zoom_ = nullptr;};
    inline bool zoom() const { DARABONBA_PTR_GET_DEFAULT(zoom_, false) };
    inline StopMoveRequest& setZoom(bool zoom) { DARABONBA_PTR_SET_VALUE(zoom_, zoom) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<bool> pan_ = nullptr;
    std::shared_ptr<bool> tilt_ = nullptr;
    std::shared_ptr<bool> zoom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
