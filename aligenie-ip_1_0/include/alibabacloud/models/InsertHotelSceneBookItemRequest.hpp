// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTHOTELSCENEBOOKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTHOTELSCENEBOOKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class InsertHotelSceneBookItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertHotelSceneBookItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddHotelSceneItemReq, addHotelSceneItemReq_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertHotelSceneBookItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddHotelSceneItemReq, addHotelSceneItemReq_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    InsertHotelSceneBookItemRequest() = default ;
    InsertHotelSceneBookItemRequest(const InsertHotelSceneBookItemRequest &) = default ;
    InsertHotelSceneBookItemRequest(InsertHotelSceneBookItemRequest &&) = default ;
    InsertHotelSceneBookItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertHotelSceneBookItemRequest() = default ;
    InsertHotelSceneBookItemRequest& operator=(const InsertHotelSceneBookItemRequest &) = default ;
    InsertHotelSceneBookItemRequest& operator=(InsertHotelSceneBookItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddHotelSceneItemReq : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddHotelSceneItemReq& obj) { 
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AddHotelSceneItemReq& obj) { 
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AddHotelSceneItemReq() = default ;
      AddHotelSceneItemReq(const AddHotelSceneItemReq &) = default ;
      AddHotelSceneItemReq(AddHotelSceneItemReq &&) = default ;
      AddHotelSceneItemReq(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddHotelSceneItemReq() = default ;
      AddHotelSceneItemReq& operator=(const AddHotelSceneItemReq &) = default ;
      AddHotelSceneItemReq& operator=(AddHotelSceneItemReq &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->icon_ == nullptr
        && this->name_ == nullptr && this->price_ == nullptr && this->type_ == nullptr; };
      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline AddHotelSceneItemReq& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AddHotelSceneItemReq& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
      inline AddHotelSceneItemReq& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AddHotelSceneItemReq& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // icon
      // 
      // This parameter is required.
      shared_ptr<string> icon_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<int64_t> price_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->addHotelSceneItemReq_ == nullptr
        && this->hotelId_ == nullptr; };
    // addHotelSceneItemReq Field Functions 
    bool hasAddHotelSceneItemReq() const { return this->addHotelSceneItemReq_ != nullptr;};
    void deleteAddHotelSceneItemReq() { this->addHotelSceneItemReq_ = nullptr;};
    inline const InsertHotelSceneBookItemRequest::AddHotelSceneItemReq & getAddHotelSceneItemReq() const { DARABONBA_PTR_GET_CONST(addHotelSceneItemReq_, InsertHotelSceneBookItemRequest::AddHotelSceneItemReq) };
    inline InsertHotelSceneBookItemRequest::AddHotelSceneItemReq getAddHotelSceneItemReq() { DARABONBA_PTR_GET(addHotelSceneItemReq_, InsertHotelSceneBookItemRequest::AddHotelSceneItemReq) };
    inline InsertHotelSceneBookItemRequest& setAddHotelSceneItemReq(const InsertHotelSceneBookItemRequest::AddHotelSceneItemReq & addHotelSceneItemReq) { DARABONBA_PTR_SET_VALUE(addHotelSceneItemReq_, addHotelSceneItemReq) };
    inline InsertHotelSceneBookItemRequest& setAddHotelSceneItemReq(InsertHotelSceneBookItemRequest::AddHotelSceneItemReq && addHotelSceneItemReq) { DARABONBA_PTR_SET_RVALUE(addHotelSceneItemReq_, addHotelSceneItemReq) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline InsertHotelSceneBookItemRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    // addHotelSceneItemReq
    // 
    // This parameter is required.
    shared_ptr<InsertHotelSceneBookItemRequest::AddHotelSceneItemReq> addHotelSceneItemReq_ {};
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
