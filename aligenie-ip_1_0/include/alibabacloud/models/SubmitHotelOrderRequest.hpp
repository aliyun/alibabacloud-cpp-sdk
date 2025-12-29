// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTELORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTELORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class SubmitHotelOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotelOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotelOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    SubmitHotelOrderRequest() = default ;
    SubmitHotelOrderRequest(const SubmitHotelOrderRequest &) = default ;
    SubmitHotelOrderRequest(SubmitHotelOrderRequest &&) = default ;
    SubmitHotelOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotelOrderRequest() = default ;
    SubmitHotelOrderRequest& operator=(const SubmitHotelOrderRequest &) = default ;
    SubmitHotelOrderRequest& operator=(SubmitHotelOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // This parameter is required.
      shared_ptr<string> id_ {};
      // This parameter is required.
      shared_ptr<string> idType_ {};
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(ItemList, itemList_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemList, itemList_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemList& obj) { 
          DARABONBA_PTR_TO_JSON(ItemId, itemId_);
          DARABONBA_PTR_TO_JSON(Quantity, quantity_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, ItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
          DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
        };
        ItemList() = default ;
        ItemList(const ItemList &) = default ;
        ItemList(ItemList &&) = default ;
        ItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemList() = default ;
        ItemList& operator=(const ItemList &) = default ;
        ItemList& operator=(ItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->itemId_ == nullptr
        && this->quantity_ == nullptr && this->remark_ == nullptr; };
        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
        inline ItemList& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
        inline ItemList& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline ItemList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        // This parameter is required.
        shared_ptr<int64_t> itemId_ {};
        // This parameter is required.
        shared_ptr<int64_t> quantity_ {};
        shared_ptr<string> remark_ {};
      };

      virtual bool empty() const override { return this->itemList_ == nullptr
        && this->type_ == nullptr; };
      // itemList Field Functions 
      bool hasItemList() const { return this->itemList_ != nullptr;};
      void deleteItemList() { this->itemList_ = nullptr;};
      inline const vector<Payload::ItemList> & getItemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<Payload::ItemList>) };
      inline vector<Payload::ItemList> getItemList() { DARABONBA_PTR_GET(itemList_, vector<Payload::ItemList>) };
      inline Payload& setItemList(const vector<Payload::ItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
      inline Payload& setItemList(vector<Payload::ItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Payload& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<vector<Payload::ItemList>> itemList_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->payload_ == nullptr
        && this->userInfo_ == nullptr; };
    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const SubmitHotelOrderRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, SubmitHotelOrderRequest::Payload) };
    inline SubmitHotelOrderRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, SubmitHotelOrderRequest::Payload) };
    inline SubmitHotelOrderRequest& setPayload(const SubmitHotelOrderRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline SubmitHotelOrderRequest& setPayload(SubmitHotelOrderRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const SubmitHotelOrderRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, SubmitHotelOrderRequest::UserInfo) };
    inline SubmitHotelOrderRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, SubmitHotelOrderRequest::UserInfo) };
    inline SubmitHotelOrderRequest& setUserInfo(const SubmitHotelOrderRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline SubmitHotelOrderRequest& setUserInfo(SubmitHotelOrderRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    shared_ptr<SubmitHotelOrderRequest::Payload> payload_ {};
    // This parameter is required.
    shared_ptr<SubmitHotelOrderRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
