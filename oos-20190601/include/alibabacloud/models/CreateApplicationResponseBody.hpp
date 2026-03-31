// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationResponseBody() = default ;
    CreateApplicationResponseBody(const CreateApplicationResponseBody &) = default ;
    CreateApplicationResponseBody(CreateApplicationResponseBody &&) = default ;
    CreateApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationResponseBody() = default ;
    CreateApplicationResponseBody& operator=(const CreateApplicationResponseBody &) = default ;
    CreateApplicationResponseBody& operator=(CreateApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Application : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Application& obj) { 
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, Application& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
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
      virtual bool empty() const override { return this->createDate_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->tags_ == nullptr && this->updateDate_ == nullptr; };
      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Application& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


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


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
      inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
      inline Application& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Application& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline Application& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The time when the application was created.
      shared_ptr<string> createDate_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The tags.
      shared_ptr<map<string, string>> tags_ {};
      // The time when the application was updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->application_ == nullptr
        && this->requestId_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const CreateApplicationResponseBody::Application & getApplication() const { DARABONBA_PTR_GET_CONST(application_, CreateApplicationResponseBody::Application) };
    inline CreateApplicationResponseBody::Application getApplication() { DARABONBA_PTR_GET(application_, CreateApplicationResponseBody::Application) };
    inline CreateApplicationResponseBody& setApplication(const CreateApplicationResponseBody::Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline CreateApplicationResponseBody& setApplication(CreateApplicationResponseBody::Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application.
    shared_ptr<CreateApplicationResponseBody::Application> application_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
