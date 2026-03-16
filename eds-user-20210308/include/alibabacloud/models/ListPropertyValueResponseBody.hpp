// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROPERTYVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROPERTYVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ListPropertyValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPropertyValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyValueInfos, propertyValueInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPropertyValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyValueInfos, propertyValueInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPropertyValueResponseBody() = default ;
    ListPropertyValueResponseBody(const ListPropertyValueResponseBody &) = default ;
    ListPropertyValueResponseBody(ListPropertyValueResponseBody &&) = default ;
    ListPropertyValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPropertyValueResponseBody() = default ;
    ListPropertyValueResponseBody& operator=(const ListPropertyValueResponseBody &) = default ;
    ListPropertyValueResponseBody& operator=(ListPropertyValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyValueInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyValueInfos& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
        DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyValueInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
        DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
      };
      PropertyValueInfos() = default ;
      PropertyValueInfos(const PropertyValueInfos &) = default ;
      PropertyValueInfos(PropertyValueInfos &&) = default ;
      PropertyValueInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyValueInfos() = default ;
      PropertyValueInfos& operator=(const PropertyValueInfos &) = default ;
      PropertyValueInfos& operator=(PropertyValueInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->propertyValue_ == nullptr
        && this->propertyValueId_ == nullptr; };
      // propertyValue Field Functions 
      bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
      void deletePropertyValue() { this->propertyValue_ = nullptr;};
      inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
      inline PropertyValueInfos& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


      // propertyValueId Field Functions 
      bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
      void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
      inline int64_t getPropertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
      inline PropertyValueInfos& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


    protected:
      // The value of the property.
      shared_ptr<string> propertyValue_ {};
      // The ID of the property value.
      shared_ptr<int64_t> propertyValueId_ {};
    };

    virtual bool empty() const override { return this->propertyValueInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // propertyValueInfos Field Functions 
    bool hasPropertyValueInfos() const { return this->propertyValueInfos_ != nullptr;};
    void deletePropertyValueInfos() { this->propertyValueInfos_ = nullptr;};
    inline const vector<ListPropertyValueResponseBody::PropertyValueInfos> & getPropertyValueInfos() const { DARABONBA_PTR_GET_CONST(propertyValueInfos_, vector<ListPropertyValueResponseBody::PropertyValueInfos>) };
    inline vector<ListPropertyValueResponseBody::PropertyValueInfos> getPropertyValueInfos() { DARABONBA_PTR_GET(propertyValueInfos_, vector<ListPropertyValueResponseBody::PropertyValueInfos>) };
    inline ListPropertyValueResponseBody& setPropertyValueInfos(const vector<ListPropertyValueResponseBody::PropertyValueInfos> & propertyValueInfos) { DARABONBA_PTR_SET_VALUE(propertyValueInfos_, propertyValueInfos) };
    inline ListPropertyValueResponseBody& setPropertyValueInfos(vector<ListPropertyValueResponseBody::PropertyValueInfos> && propertyValueInfos) { DARABONBA_PTR_SET_RVALUE(propertyValueInfos_, propertyValueInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPropertyValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about property values.
    shared_ptr<vector<ListPropertyValueResponseBody::PropertyValueInfos>> propertyValueInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
