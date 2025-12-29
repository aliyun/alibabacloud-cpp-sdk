// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSERVICECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSERVICECATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelServiceCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelServiceCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelServiceCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
    };
    ListHotelServiceCategoryRequest() = default ;
    ListHotelServiceCategoryRequest(const ListHotelServiceCategoryRequest &) = default ;
    ListHotelServiceCategoryRequest(ListHotelServiceCategoryRequest &&) = default ;
    ListHotelServiceCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelServiceCategoryRequest() = default ;
    ListHotelServiceCategoryRequest& operator=(const ListHotelServiceCategoryRequest &) = default ;
    ListHotelServiceCategoryRequest& operator=(ListHotelServiceCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
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
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Payload& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->payload_ == nullptr; };
    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const ListHotelServiceCategoryRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, ListHotelServiceCategoryRequest::Payload) };
    inline ListHotelServiceCategoryRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, ListHotelServiceCategoryRequest::Payload) };
    inline ListHotelServiceCategoryRequest& setPayload(const ListHotelServiceCategoryRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline ListHotelServiceCategoryRequest& setPayload(ListHotelServiceCategoryRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


  protected:
    // This parameter is required.
    shared_ptr<ListHotelServiceCategoryRequest::Payload> payload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
