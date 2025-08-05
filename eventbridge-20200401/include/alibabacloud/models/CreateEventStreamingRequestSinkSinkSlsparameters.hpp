// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKSLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKSLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkSLSParametersBody.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkSLSParametersContentSchema.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkSLSParametersContentType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkSLSParametersLogStore.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkSLSParametersProject.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkSLSParametersRoleName.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkSLSParametersTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkSLSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkSLSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ContentSchema, contentSchema_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkSLSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ContentSchema, contentSchema_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    CreateEventStreamingRequestSinkSinkSLSParameters() = default ;
    CreateEventStreamingRequestSinkSinkSLSParameters(const CreateEventStreamingRequestSinkSinkSLSParameters &) = default ;
    CreateEventStreamingRequestSinkSinkSLSParameters(CreateEventStreamingRequestSinkSinkSLSParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkSLSParameters() = default ;
    CreateEventStreamingRequestSinkSinkSLSParameters& operator=(const CreateEventStreamingRequestSinkSinkSLSParameters &) = default ;
    CreateEventStreamingRequestSinkSinkSLSParameters& operator=(CreateEventStreamingRequestSinkSinkSLSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->contentSchema_ != nullptr && this->contentType_ != nullptr && this->logStore_ != nullptr && this->project_ != nullptr && this->roleName_ != nullptr
        && this->topic_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkSLSParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::CreateEventStreamingRequestSinkSinkSLSParametersBody) };
    inline Models::CreateEventStreamingRequestSinkSinkSLSParametersBody body() { DARABONBA_PTR_GET(body_, Models::CreateEventStreamingRequestSinkSinkSLSParametersBody) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setBody(const Models::CreateEventStreamingRequestSinkSinkSLSParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setBody(Models::CreateEventStreamingRequestSinkSinkSLSParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // contentSchema Field Functions 
    bool hasContentSchema() const { return this->contentSchema_ != nullptr;};
    void deleteContentSchema() { this->contentSchema_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkSLSParametersContentSchema & contentSchema() const { DARABONBA_PTR_GET_CONST(contentSchema_, Models::CreateEventStreamingRequestSinkSinkSLSParametersContentSchema) };
    inline Models::CreateEventStreamingRequestSinkSinkSLSParametersContentSchema contentSchema() { DARABONBA_PTR_GET(contentSchema_, Models::CreateEventStreamingRequestSinkSinkSLSParametersContentSchema) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setContentSchema(const Models::CreateEventStreamingRequestSinkSinkSLSParametersContentSchema & contentSchema) { DARABONBA_PTR_SET_VALUE(contentSchema_, contentSchema) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setContentSchema(Models::CreateEventStreamingRequestSinkSinkSLSParametersContentSchema && contentSchema) { DARABONBA_PTR_SET_RVALUE(contentSchema_, contentSchema) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkSLSParametersContentType & contentType() const { DARABONBA_PTR_GET_CONST(contentType_, Models::CreateEventStreamingRequestSinkSinkSLSParametersContentType) };
    inline Models::CreateEventStreamingRequestSinkSinkSLSParametersContentType contentType() { DARABONBA_PTR_GET(contentType_, Models::CreateEventStreamingRequestSinkSinkSLSParametersContentType) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setContentType(const Models::CreateEventStreamingRequestSinkSinkSLSParametersContentType & contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setContentType(Models::CreateEventStreamingRequestSinkSinkSLSParametersContentType && contentType) { DARABONBA_PTR_SET_RVALUE(contentType_, contentType) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkSLSParametersLogStore & logStore() const { DARABONBA_PTR_GET_CONST(logStore_, Models::CreateEventStreamingRequestSinkSinkSLSParametersLogStore) };
    inline Models::CreateEventStreamingRequestSinkSinkSLSParametersLogStore logStore() { DARABONBA_PTR_GET(logStore_, Models::CreateEventStreamingRequestSinkSinkSLSParametersLogStore) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setLogStore(const Models::CreateEventStreamingRequestSinkSinkSLSParametersLogStore & logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setLogStore(Models::CreateEventStreamingRequestSinkSinkSLSParametersLogStore && logStore) { DARABONBA_PTR_SET_RVALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkSLSParametersProject & project() const { DARABONBA_PTR_GET_CONST(project_, Models::CreateEventStreamingRequestSinkSinkSLSParametersProject) };
    inline Models::CreateEventStreamingRequestSinkSinkSLSParametersProject project() { DARABONBA_PTR_GET(project_, Models::CreateEventStreamingRequestSinkSinkSLSParametersProject) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setProject(const Models::CreateEventStreamingRequestSinkSinkSLSParametersProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setProject(Models::CreateEventStreamingRequestSinkSinkSLSParametersProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkSLSParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::CreateEventStreamingRequestSinkSinkSLSParametersRoleName) };
    inline Models::CreateEventStreamingRequestSinkSinkSLSParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::CreateEventStreamingRequestSinkSinkSLSParametersRoleName) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setRoleName(const Models::CreateEventStreamingRequestSinkSinkSLSParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setRoleName(Models::CreateEventStreamingRequestSinkSinkSLSParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkSLSParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::CreateEventStreamingRequestSinkSinkSLSParametersTopic) };
    inline Models::CreateEventStreamingRequestSinkSinkSLSParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::CreateEventStreamingRequestSinkSinkSLSParametersTopic) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setTopic(const Models::CreateEventStreamingRequestSinkSinkSLSParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline CreateEventStreamingRequestSinkSinkSLSParameters& setTopic(Models::CreateEventStreamingRequestSinkSinkSLSParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


  protected:
    // The message body that you want to deliver to Simple Log Service.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkSLSParametersBody> body_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkSLSParametersContentSchema> contentSchema_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkSLSParametersContentType> contentType_ = nullptr;
    // The Simple Log Service Logstore.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkSLSParametersLogStore> logStore_ = nullptr;
    // The Simple Log Service project.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkSLSParametersProject> project_ = nullptr;
    // The role name. If you want to authorize EventBridge to use this role to read logs in Simple Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the RAM console.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkSLSParametersRoleName> roleName_ = nullptr;
    // The topic that you want to use to store logs. This parameter corresponds to the reserved field **topic** in Simple Log Service.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkSLSParametersTopic> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
