// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListHotelOrderRequest() = default ;
    ListHotelOrderRequest(const ListHotelOrderRequest &) = default ;
    ListHotelOrderRequest(ListHotelOrderRequest &&) = default ;
    ListHotelOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelOrderRequest() = default ;
    ListHotelOrderRequest& operator=(const ListHotelOrderRequest &) = default ;
    ListHotelOrderRequest& operator=(ListHotelOrderRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Page, page_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
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
      class Page : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Page& obj) { 
          DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        };
        friend void from_json(const Darabonba::Json& j, Page& obj) { 
          DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        };
        Page() = default ;
        Page(const Page &) = default ;
        Page(Page &&) = default ;
        Page(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Page() = default ;
        Page& operator=(const Page &) = default ;
        Page& operator=(Page &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
        inline Page& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
        inline Page& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      protected:
        // This parameter is required.
        shared_ptr<int64_t> pageNumber_ {};
        // This parameter is required.
        shared_ptr<int64_t> pageSize_ {};
      };

      virtual bool empty() const override { return this->page_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline const Payload::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, Payload::Page) };
      inline Payload::Page getPage() { DARABONBA_PTR_GET(page_, Payload::Page) };
      inline Payload& setPage(const Payload::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
      inline Payload& setPage(Payload::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    protected:
      // This parameter is required.
      shared_ptr<Payload::Page> page_ {};
    };

    virtual bool empty() const override { return this->payload_ == nullptr
        && this->userInfo_ == nullptr; };
    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const ListHotelOrderRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, ListHotelOrderRequest::Payload) };
    inline ListHotelOrderRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, ListHotelOrderRequest::Payload) };
    inline ListHotelOrderRequest& setPayload(const ListHotelOrderRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline ListHotelOrderRequest& setPayload(ListHotelOrderRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListHotelOrderRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListHotelOrderRequest::UserInfo) };
    inline ListHotelOrderRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, ListHotelOrderRequest::UserInfo) };
    inline ListHotelOrderRequest& setUserInfo(const ListHotelOrderRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListHotelOrderRequest& setUserInfo(ListHotelOrderRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    shared_ptr<ListHotelOrderRequest::Payload> payload_ {};
    // This parameter is required.
    shared_ptr<ListHotelOrderRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
