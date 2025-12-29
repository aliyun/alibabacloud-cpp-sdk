// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTELSCENEBOOKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTELSCENEBOOKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateHotelSceneBookItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotelSceneBookItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(UpdateHotelSceneBookReq, updateHotelSceneBookReq_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotelSceneBookItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(UpdateHotelSceneBookReq, updateHotelSceneBookReq_);
    };
    UpdateHotelSceneBookItemRequest() = default ;
    UpdateHotelSceneBookItemRequest(const UpdateHotelSceneBookItemRequest &) = default ;
    UpdateHotelSceneBookItemRequest(UpdateHotelSceneBookItemRequest &&) = default ;
    UpdateHotelSceneBookItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotelSceneBookItemRequest() = default ;
    UpdateHotelSceneBookItemRequest& operator=(const UpdateHotelSceneBookItemRequest &) = default ;
    UpdateHotelSceneBookItemRequest& operator=(UpdateHotelSceneBookItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateHotelSceneBookReq : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateHotelSceneBookReq& obj) { 
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Price, price_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateHotelSceneBookReq& obj) { 
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
      };
      UpdateHotelSceneBookReq() = default ;
      UpdateHotelSceneBookReq(const UpdateHotelSceneBookReq &) = default ;
      UpdateHotelSceneBookReq(UpdateHotelSceneBookReq &&) = default ;
      UpdateHotelSceneBookReq(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateHotelSceneBookReq() = default ;
      UpdateHotelSceneBookReq& operator=(const UpdateHotelSceneBookReq &) = default ;
      UpdateHotelSceneBookReq& operator=(UpdateHotelSceneBookReq &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->icon_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->price_ == nullptr; };
      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline UpdateHotelSceneBookReq& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpdateHotelSceneBookReq& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateHotelSceneBookReq& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
      inline UpdateHotelSceneBookReq& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    protected:
      // icon
      // 
      // This parameter is required.
      shared_ptr<string> icon_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<int64_t> price_ {};
    };

    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->updateHotelSceneBookReq_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateHotelSceneBookItemRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // updateHotelSceneBookReq Field Functions 
    bool hasUpdateHotelSceneBookReq() const { return this->updateHotelSceneBookReq_ != nullptr;};
    void deleteUpdateHotelSceneBookReq() { this->updateHotelSceneBookReq_ = nullptr;};
    inline const UpdateHotelSceneBookItemRequest::UpdateHotelSceneBookReq & getUpdateHotelSceneBookReq() const { DARABONBA_PTR_GET_CONST(updateHotelSceneBookReq_, UpdateHotelSceneBookItemRequest::UpdateHotelSceneBookReq) };
    inline UpdateHotelSceneBookItemRequest::UpdateHotelSceneBookReq getUpdateHotelSceneBookReq() { DARABONBA_PTR_GET(updateHotelSceneBookReq_, UpdateHotelSceneBookItemRequest::UpdateHotelSceneBookReq) };
    inline UpdateHotelSceneBookItemRequest& setUpdateHotelSceneBookReq(const UpdateHotelSceneBookItemRequest::UpdateHotelSceneBookReq & updateHotelSceneBookReq) { DARABONBA_PTR_SET_VALUE(updateHotelSceneBookReq_, updateHotelSceneBookReq) };
    inline UpdateHotelSceneBookItemRequest& setUpdateHotelSceneBookReq(UpdateHotelSceneBookItemRequest::UpdateHotelSceneBookReq && updateHotelSceneBookReq) { DARABONBA_PTR_SET_RVALUE(updateHotelSceneBookReq_, updateHotelSceneBookReq) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // updateHotelSceneBookReq
    // 
    // This parameter is required.
    shared_ptr<UpdateHotelSceneBookItemRequest::UpdateHotelSceneBookReq> updateHotelSceneBookReq_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
