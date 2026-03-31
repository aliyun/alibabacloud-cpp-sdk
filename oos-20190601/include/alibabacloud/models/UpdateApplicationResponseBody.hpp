// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationResponseBody() = default ;
    UpdateApplicationResponseBody(const UpdateApplicationResponseBody &) = default ;
    UpdateApplicationResponseBody(UpdateApplicationResponseBody &&) = default ;
    UpdateApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationResponseBody() = default ;
    UpdateApplicationResponseBody& operator=(const UpdateApplicationResponseBody &) = default ;
    UpdateApplicationResponseBody& operator=(UpdateApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Application : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Application& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      };
      friend void from_json(const Darabonba::Json& j, Application& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
      };
      Application() = default ;
      Application(const Application &) = default ;
      Application(Application &&) = default ;
      Application(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Application() = default ;
      Application& operator=(const Application &) = default ;
      Application& operator=(Application &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdDate_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->updatedDate_ == nullptr; };
      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline Application& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Application& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Application& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Application& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Application& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Application& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline Application& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    protected:
      // The time when the application was created.
      shared_ptr<string> createdDate_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The tags.
      Darabonba::Json tags_ {};
      // The time when the application was updated.
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->application_ == nullptr
        && this->requestId_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const UpdateApplicationResponseBody::Application & getApplication() const { DARABONBA_PTR_GET_CONST(application_, UpdateApplicationResponseBody::Application) };
    inline UpdateApplicationResponseBody::Application getApplication() { DARABONBA_PTR_GET(application_, UpdateApplicationResponseBody::Application) };
    inline UpdateApplicationResponseBody& setApplication(const UpdateApplicationResponseBody::Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline UpdateApplicationResponseBody& setApplication(UpdateApplicationResponseBody::Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application.
    shared_ptr<UpdateApplicationResponseBody::Application> application_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
