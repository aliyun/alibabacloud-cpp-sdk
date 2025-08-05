// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKSLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKSLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentSchema.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentType.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkSLSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkSLSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ContentSchema, contentSchema_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkSLSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ContentSchema, contentSchema_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    GetEventStreamingResponseBodyDataSinkSinkSLSParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkSLSParameters(const GetEventStreamingResponseBodyDataSinkSinkSLSParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkSLSParameters(GetEventStreamingResponseBodyDataSinkSinkSLSParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkSLSParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkSLSParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkSLSParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkSLSParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkSLSParameters &&) = default ;
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
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody body() { DARABONBA_PTR_GET(body_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setBody(const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setBody(Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // contentSchema Field Functions 
    bool hasContentSchema() const { return this->contentSchema_ != nullptr;};
    void deleteContentSchema() { this->contentSchema_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentSchema & contentSchema() const { DARABONBA_PTR_GET_CONST(contentSchema_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentSchema) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentSchema contentSchema() { DARABONBA_PTR_GET(contentSchema_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentSchema) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setContentSchema(const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentSchema & contentSchema) { DARABONBA_PTR_SET_VALUE(contentSchema_, contentSchema) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setContentSchema(Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentSchema && contentSchema) { DARABONBA_PTR_SET_RVALUE(contentSchema_, contentSchema) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentType & contentType() const { DARABONBA_PTR_GET_CONST(contentType_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentType contentType() { DARABONBA_PTR_GET(contentType_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentType) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setContentType(const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentType & contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setContentType(Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentType && contentType) { DARABONBA_PTR_SET_RVALUE(contentType_, contentType) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore & logStore() const { DARABONBA_PTR_GET_CONST(logStore_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore logStore() { DARABONBA_PTR_GET(logStore_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setLogStore(const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore & logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setLogStore(Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore && logStore) { DARABONBA_PTR_SET_RVALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject & project() const { DARABONBA_PTR_GET_CONST(project_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject project() { DARABONBA_PTR_GET(project_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setProject(const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setProject(Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setRoleName(const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setRoleName(Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setTopic(const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline GetEventStreamingResponseBodyDataSinkSinkSLSParameters& setTopic(Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


  protected:
    // The message content.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody> body_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentSchema> contentSchema_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersContentType> contentType_ = nullptr;
    // The Simple Log Service Logstore.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore> logStore_ = nullptr;
    // The Simple Log Service project.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject> project_ = nullptr;
    // The role name. If you want to authorize EventBridge to use this role to read logs in Simple Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the Resource Access Management (RAM) console.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName> roleName_ = nullptr;
    // The name of the topic in which logs are stored. The topic corresponds to the topic reserved field in Simple Log Service.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
