// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDATAHUBPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDATAHUBPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParametersBody.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParametersContentSchema.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParametersContentType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParametersProject.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParametersRoleName.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParametersTopic.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParametersTopicSchema.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParametersTopicType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkDataHubParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkDataHubParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ContentSchema, contentSchema_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSchema, topicSchema_);
      DARABONBA_PTR_TO_JSON(TopicType, topicType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkDataHubParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ContentSchema, contentSchema_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSchema, topicSchema_);
      DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
    };
    UpdateEventStreamingRequestSinkSinkDataHubParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDataHubParameters(const UpdateEventStreamingRequestSinkSinkDataHubParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDataHubParameters(UpdateEventStreamingRequestSinkSinkDataHubParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkDataHubParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkDataHubParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDataHubParameters& operator=(const UpdateEventStreamingRequestSinkSinkDataHubParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDataHubParameters& operator=(UpdateEventStreamingRequestSinkSinkDataHubParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->contentSchema_ != nullptr && this->contentType_ != nullptr && this->project_ != nullptr && this->roleName_ != nullptr && this->topic_ != nullptr
        && this->topicSchema_ != nullptr && this->topicType_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersBody) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParametersBody body() { DARABONBA_PTR_GET(body_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersBody) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setBody(const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setBody(Models::UpdateEventStreamingRequestSinkSinkDataHubParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // contentSchema Field Functions 
    bool hasContentSchema() const { return this->contentSchema_ != nullptr;};
    void deleteContentSchema() { this->contentSchema_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentSchema & contentSchema() const { DARABONBA_PTR_GET_CONST(contentSchema_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentSchema) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentSchema contentSchema() { DARABONBA_PTR_GET(contentSchema_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentSchema) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setContentSchema(const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentSchema & contentSchema) { DARABONBA_PTR_SET_VALUE(contentSchema_, contentSchema) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setContentSchema(Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentSchema && contentSchema) { DARABONBA_PTR_SET_RVALUE(contentSchema_, contentSchema) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentType & contentType() const { DARABONBA_PTR_GET_CONST(contentType_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentType) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentType contentType() { DARABONBA_PTR_GET(contentType_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentType) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setContentType(const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentType & contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setContentType(Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentType && contentType) { DARABONBA_PTR_SET_RVALUE(contentType_, contentType) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersProject & project() const { DARABONBA_PTR_GET_CONST(project_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersProject) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParametersProject project() { DARABONBA_PTR_GET(project_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersProject) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setProject(const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setProject(Models::UpdateEventStreamingRequestSinkSinkDataHubParametersProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersRoleName) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersRoleName) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setRoleName(const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setRoleName(Models::UpdateEventStreamingRequestSinkSinkDataHubParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopic) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopic) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setTopic(const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setTopic(Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // topicSchema Field Functions 
    bool hasTopicSchema() const { return this->topicSchema_ != nullptr;};
    void deleteTopicSchema() { this->topicSchema_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicSchema & topicSchema() const { DARABONBA_PTR_GET_CONST(topicSchema_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicSchema) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicSchema topicSchema() { DARABONBA_PTR_GET(topicSchema_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicSchema) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setTopicSchema(const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicSchema & topicSchema) { DARABONBA_PTR_SET_VALUE(topicSchema_, topicSchema) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setTopicSchema(Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicSchema && topicSchema) { DARABONBA_PTR_SET_RVALUE(topicSchema_, topicSchema) };


    // topicType Field Functions 
    bool hasTopicType() const { return this->topicType_ != nullptr;};
    void deleteTopicType() { this->topicType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicType & topicType() const { DARABONBA_PTR_GET_CONST(topicType_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicType) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicType topicType() { DARABONBA_PTR_GET(topicType_, Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicType) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setTopicType(const Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicType & topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };
    inline UpdateEventStreamingRequestSinkSinkDataHubParameters& setTopicType(Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicType && topicType) { DARABONBA_PTR_SET_RVALUE(topicType_, topicType) };


  protected:
    // The data is of the BLOB type, and a template is defined for the record.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParametersBody> body_ = nullptr;
    // The key-value pair of custom logs. This parameter takes effect only if you set ContentType to KeyValue. Each key-value pair is in the Key_n, Value_n format.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentSchema> contentSchema_ = nullptr;
    // The data format. Valid values:
    // 
    // *   JSON
    // *   KeyValue
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParametersContentType> contentType_ = nullptr;
    // The name of the DataHub project.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParametersProject> project_ = nullptr;
    // The role name.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParametersRoleName> roleName_ = nullptr;
    // The name of the DataHub topic.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopic> topic_ = nullptr;
    // The data is of the TUBLE type, and a schema is defined for the DataHub topic.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicSchema> topicSchema_ = nullptr;
    // The data type of the DataHub topic. Valid values:
    // 
    // *   TUPLE
    // *   BLOB
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParametersTopicType> topicType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
