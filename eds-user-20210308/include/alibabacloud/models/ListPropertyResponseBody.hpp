// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROPERTYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROPERTYRESPONSEBODY_HPP_
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
  class ListPropertyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPropertyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPropertyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPropertyResponseBody() = default ;
    ListPropertyResponseBody(const ListPropertyResponseBody &) = default ;
    ListPropertyResponseBody(ListPropertyResponseBody &&) = default ;
    ListPropertyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPropertyResponseBody() = default ;
    ListPropertyResponseBody& operator=(const ListPropertyResponseBody &) = default ;
    ListPropertyResponseBody& operator=(ListPropertyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Properties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Properties& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
        DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
        DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
      };
      friend void from_json(const Darabonba::Json& j, Properties& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
        DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
        DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
      };
      Properties() = default ;
      Properties(const Properties &) = default ;
      Properties(Properties &&) = default ;
      Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Properties() = default ;
      Properties& operator=(const Properties &) = default ;
      Properties& operator=(Properties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PropertyValues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PropertyValues& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
          DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
        };
        friend void from_json(const Darabonba::Json& j, PropertyValues& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
          DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
        };
        PropertyValues() = default ;
        PropertyValues(const PropertyValues &) = default ;
        PropertyValues(PropertyValues &&) = default ;
        PropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PropertyValues() = default ;
        PropertyValues& operator=(const PropertyValues &) = default ;
        PropertyValues& operator=(PropertyValues &&) = default ;
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
        inline PropertyValues& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


        // propertyValueId Field Functions 
        bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
        void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
        inline int64_t getPropertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
        inline PropertyValues& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


      protected:
        // The value of the property.
        shared_ptr<string> propertyValue_ {};
        // The ID of the property value.
        shared_ptr<int64_t> propertyValueId_ {};
      };

      virtual bool empty() const override { return this->propertyId_ == nullptr
        && this->propertyKey_ == nullptr && this->propertyValues_ == nullptr; };
      // propertyId Field Functions 
      bool hasPropertyId() const { return this->propertyId_ != nullptr;};
      void deletePropertyId() { this->propertyId_ = nullptr;};
      inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
      inline Properties& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


      // propertyKey Field Functions 
      bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
      void deletePropertyKey() { this->propertyKey_ = nullptr;};
      inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
      inline Properties& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


      // propertyValues Field Functions 
      bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
      void deletePropertyValues() { this->propertyValues_ = nullptr;};
      inline const vector<Properties::PropertyValues> & getPropertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, vector<Properties::PropertyValues>) };
      inline vector<Properties::PropertyValues> getPropertyValues() { DARABONBA_PTR_GET(propertyValues_, vector<Properties::PropertyValues>) };
      inline Properties& setPropertyValues(const vector<Properties::PropertyValues> & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
      inline Properties& setPropertyValues(vector<Properties::PropertyValues> && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


    protected:
      // The ID of the property.
      shared_ptr<int64_t> propertyId_ {};
      // The name of the property.
      shared_ptr<string> propertyKey_ {};
      // Details about the property values.
      shared_ptr<vector<Properties::PropertyValues>> propertyValues_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->properties_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPropertyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<ListPropertyResponseBody::Properties> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<ListPropertyResponseBody::Properties>) };
    inline vector<ListPropertyResponseBody::Properties> getProperties() { DARABONBA_PTR_GET(properties_, vector<ListPropertyResponseBody::Properties>) };
    inline ListPropertyResponseBody& setProperties(const vector<ListPropertyResponseBody::Properties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ListPropertyResponseBody& setProperties(vector<ListPropertyResponseBody::Properties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPropertyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The token that is used for the next query. If this parameter is empty, all results have been returned.
    shared_ptr<string> nextToken_ {};
    // The information about the properties.
    shared_ptr<vector<ListPropertyResponseBody::Properties>> properties_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
