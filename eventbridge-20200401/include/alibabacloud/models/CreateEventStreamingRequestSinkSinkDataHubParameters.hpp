// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKDATAHUBPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKDATAHUBPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDataHubParametersBody.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDataHubParametersProject.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDataHubParametersRoleName.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDataHubParametersTopic.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDataHubParametersTopicType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkDataHubParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkDataHubParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSchema, topicSchema_);
      DARABONBA_PTR_TO_JSON(TopicType, topicType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkDataHubParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSchema, topicSchema_);
      DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
    };
    CreateEventStreamingRequestSinkSinkDataHubParameters() = default ;
    CreateEventStreamingRequestSinkSinkDataHubParameters(const CreateEventStreamingRequestSinkSinkDataHubParameters &) = default ;
    CreateEventStreamingRequestSinkSinkDataHubParameters(CreateEventStreamingRequestSinkSinkDataHubParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkDataHubParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkDataHubParameters() = default ;
    CreateEventStreamingRequestSinkSinkDataHubParameters& operator=(const CreateEventStreamingRequestSinkSinkDataHubParameters &) = default ;
    CreateEventStreamingRequestSinkSinkDataHubParameters& operator=(CreateEventStreamingRequestSinkSinkDataHubParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->project_ != nullptr && this->roleName_ != nullptr && this->topic_ != nullptr && this->topicSchema_ != nullptr && this->topicType_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDataHubParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersBody) };
    inline Models::CreateEventStreamingRequestSinkSinkDataHubParametersBody body() { DARABONBA_PTR_GET(body_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersBody) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setBody(const Models::CreateEventStreamingRequestSinkSinkDataHubParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setBody(Models::CreateEventStreamingRequestSinkSinkDataHubParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDataHubParametersProject & project() const { DARABONBA_PTR_GET_CONST(project_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersProject) };
    inline Models::CreateEventStreamingRequestSinkSinkDataHubParametersProject project() { DARABONBA_PTR_GET(project_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersProject) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setProject(const Models::CreateEventStreamingRequestSinkSinkDataHubParametersProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setProject(Models::CreateEventStreamingRequestSinkSinkDataHubParametersProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDataHubParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersRoleName) };
    inline Models::CreateEventStreamingRequestSinkSinkDataHubParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersRoleName) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setRoleName(const Models::CreateEventStreamingRequestSinkSinkDataHubParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setRoleName(Models::CreateEventStreamingRequestSinkSinkDataHubParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopic) };
    inline Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopic) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setTopic(const Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setTopic(Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // topicSchema Field Functions 
    bool hasTopicSchema() const { return this->topicSchema_ != nullptr;};
    void deleteTopicSchema() { this->topicSchema_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema & topicSchema() const { DARABONBA_PTR_GET_CONST(topicSchema_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema) };
    inline Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema topicSchema() { DARABONBA_PTR_GET(topicSchema_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setTopicSchema(const Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema & topicSchema) { DARABONBA_PTR_SET_VALUE(topicSchema_, topicSchema) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setTopicSchema(Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema && topicSchema) { DARABONBA_PTR_SET_RVALUE(topicSchema_, topicSchema) };


    // topicType Field Functions 
    bool hasTopicType() const { return this->topicType_ != nullptr;};
    void deleteTopicType() { this->topicType_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicType & topicType() const { DARABONBA_PTR_GET_CONST(topicType_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicType) };
    inline Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicType topicType() { DARABONBA_PTR_GET(topicType_, Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicType) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setTopicType(const Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicType & topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };
    inline CreateEventStreamingRequestSinkSinkDataHubParameters& setTopicType(Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicType && topicType) { DARABONBA_PTR_SET_RVALUE(topicType_, topicType) };


  protected:
    // The BLOB topic.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDataHubParametersBody> body_ = nullptr;
    // The name of the DataHub project.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDataHubParametersProject> project_ = nullptr;
    // The role name.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDataHubParametersRoleName> roleName_ = nullptr;
    // The name of the DataHub topic.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopic> topic_ = nullptr;
    // The TUBLE topic.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema> topicSchema_ = nullptr;
    // The topic type. Valid values:
    // 
    // *   TUPLE
    // *   BLOB
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDataHubParametersTopicType> topicType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
