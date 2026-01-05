// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEPROPERTIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEPROPERTIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class GetInstancePropertiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancePropertiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyTemplateModel, propertyTemplateModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancePropertiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyTemplateModel, propertyTemplateModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstancePropertiesResponseBody() = default ;
    GetInstancePropertiesResponseBody(const GetInstancePropertiesResponseBody &) = default ;
    GetInstancePropertiesResponseBody(GetInstancePropertiesResponseBody &&) = default ;
    GetInstancePropertiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancePropertiesResponseBody() = default ;
    GetInstancePropertiesResponseBody& operator=(const GetInstancePropertiesResponseBody &) = default ;
    GetInstancePropertiesResponseBody& operator=(GetInstancePropertiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyTemplateModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyTemplateModel& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyTemplateModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
      };
      PropertyTemplateModel() = default ;
      PropertyTemplateModel(const PropertyTemplateModel &) = default ;
      PropertyTemplateModel(PropertyTemplateModel &&) = default ;
      PropertyTemplateModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyTemplateModel() = default ;
      PropertyTemplateModel& operator=(const PropertyTemplateModel &) = default ;
      PropertyTemplateModel& operator=(PropertyTemplateModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline PropertyTemplateModel& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    protected:
      shared_ptr<string> content_ {};
    };

    virtual bool empty() const override { return this->propertyTemplateModel_ == nullptr
        && this->requestId_ == nullptr; };
    // propertyTemplateModel Field Functions 
    bool hasPropertyTemplateModel() const { return this->propertyTemplateModel_ != nullptr;};
    void deletePropertyTemplateModel() { this->propertyTemplateModel_ = nullptr;};
    inline const GetInstancePropertiesResponseBody::PropertyTemplateModel & getPropertyTemplateModel() const { DARABONBA_PTR_GET_CONST(propertyTemplateModel_, GetInstancePropertiesResponseBody::PropertyTemplateModel) };
    inline GetInstancePropertiesResponseBody::PropertyTemplateModel getPropertyTemplateModel() { DARABONBA_PTR_GET(propertyTemplateModel_, GetInstancePropertiesResponseBody::PropertyTemplateModel) };
    inline GetInstancePropertiesResponseBody& setPropertyTemplateModel(const GetInstancePropertiesResponseBody::PropertyTemplateModel & propertyTemplateModel) { DARABONBA_PTR_SET_VALUE(propertyTemplateModel_, propertyTemplateModel) };
    inline GetInstancePropertiesResponseBody& setPropertyTemplateModel(GetInstancePropertiesResponseBody::PropertyTemplateModel && propertyTemplateModel) { DARABONBA_PTR_SET_RVALUE(propertyTemplateModel_, propertyTemplateModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstancePropertiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetInstancePropertiesResponseBody::PropertyTemplateModel> propertyTemplateModel_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
