// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKSLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKSLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkSLSParametersBody.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkSLSParametersContentSchema.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkSLSParametersContentType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkSLSParametersLogStore.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkSLSParametersProject.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkSLSParametersRoleName.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkSLSParametersTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkSLSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkSLSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ContentSchema, contentSchema_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkSLSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ContentSchema, contentSchema_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    UpdateEventStreamingRequestSinkSinkSLSParameters() = default ;
    UpdateEventStreamingRequestSinkSinkSLSParameters(const UpdateEventStreamingRequestSinkSinkSLSParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkSLSParameters(UpdateEventStreamingRequestSinkSinkSLSParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkSLSParameters() = default ;
    UpdateEventStreamingRequestSinkSinkSLSParameters& operator=(const UpdateEventStreamingRequestSinkSinkSLSParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkSLSParameters& operator=(UpdateEventStreamingRequestSinkSinkSLSParameters &&) = default ;
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
    inline const Models::UpdateEventStreamingRequestSinkSinkSLSParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersBody) };
    inline Models::UpdateEventStreamingRequestSinkSinkSLSParametersBody body() { DARABONBA_PTR_GET(body_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersBody) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setBody(const Models::UpdateEventStreamingRequestSinkSinkSLSParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setBody(Models::UpdateEventStreamingRequestSinkSinkSLSParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // contentSchema Field Functions 
    bool hasContentSchema() const { return this->contentSchema_ != nullptr;};
    void deleteContentSchema() { this->contentSchema_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentSchema & contentSchema() const { DARABONBA_PTR_GET_CONST(contentSchema_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentSchema) };
    inline Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentSchema contentSchema() { DARABONBA_PTR_GET(contentSchema_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentSchema) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setContentSchema(const Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentSchema & contentSchema) { DARABONBA_PTR_SET_VALUE(contentSchema_, contentSchema) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setContentSchema(Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentSchema && contentSchema) { DARABONBA_PTR_SET_RVALUE(contentSchema_, contentSchema) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentType & contentType() const { DARABONBA_PTR_GET_CONST(contentType_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentType) };
    inline Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentType contentType() { DARABONBA_PTR_GET(contentType_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentType) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setContentType(const Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentType & contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setContentType(Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentType && contentType) { DARABONBA_PTR_SET_RVALUE(contentType_, contentType) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkSLSParametersLogStore & logStore() const { DARABONBA_PTR_GET_CONST(logStore_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersLogStore) };
    inline Models::UpdateEventStreamingRequestSinkSinkSLSParametersLogStore logStore() { DARABONBA_PTR_GET(logStore_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersLogStore) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setLogStore(const Models::UpdateEventStreamingRequestSinkSinkSLSParametersLogStore & logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setLogStore(Models::UpdateEventStreamingRequestSinkSinkSLSParametersLogStore && logStore) { DARABONBA_PTR_SET_RVALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkSLSParametersProject & project() const { DARABONBA_PTR_GET_CONST(project_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersProject) };
    inline Models::UpdateEventStreamingRequestSinkSinkSLSParametersProject project() { DARABONBA_PTR_GET(project_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersProject) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setProject(const Models::UpdateEventStreamingRequestSinkSinkSLSParametersProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setProject(Models::UpdateEventStreamingRequestSinkSinkSLSParametersProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkSLSParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersRoleName) };
    inline Models::UpdateEventStreamingRequestSinkSinkSLSParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersRoleName) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setRoleName(const Models::UpdateEventStreamingRequestSinkSinkSLSParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setRoleName(Models::UpdateEventStreamingRequestSinkSinkSLSParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkSLSParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersTopic) };
    inline Models::UpdateEventStreamingRequestSinkSinkSLSParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::UpdateEventStreamingRequestSinkSinkSLSParametersTopic) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setTopic(const Models::UpdateEventStreamingRequestSinkSinkSLSParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline UpdateEventStreamingRequestSinkSinkSLSParameters& setTopic(Models::UpdateEventStreamingRequestSinkSinkSLSParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


  protected:
    // The message body that you want to deliver to Simple Log Service.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkSLSParametersBody> body_ = nullptr;
    // The key-value pair of custom logs. This parameter takes effect only if you set ContentType to KeyValue. Each key-value pair is in the Key_n, Value_n format.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentSchema> contentSchema_ = nullptr;
    // The format of the Simple Log Service data. Valid values:
    // 
    // *   JSON
    // *   KeyValue
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkSLSParametersContentType> contentType_ = nullptr;
    // The Simple Log Service Logstore.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkSLSParametersLogStore> logStore_ = nullptr;
    // The Simple Log Service project.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkSLSParametersProject> project_ = nullptr;
    // The role name. If you want to authorize EventBridge to use this role to read logs in Simple Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the Resource Access Management (RAM) console.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkSLSParametersRoleName> roleName_ = nullptr;
    // The topic that you want to use to store logs. This parameter corresponds to the reserved field topic in Simple Log Service.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkSLSParametersTopic> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
