// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKDATAHUBPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKDATAHUBPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDataHubParametersBody.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDataHubParametersProject.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDataHubParametersRoleName.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopic.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicSchema.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkDataHubParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSchema, topicSchema_);
      DARABONBA_PTR_TO_JSON(TopicType, topicType_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSchema, topicSchema_);
      DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
    };
    GetEventStreamingResponseBodyDataSinkSinkDataHubParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkDataHubParameters(const GetEventStreamingResponseBodyDataSinkSinkDataHubParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDataHubParameters(GetEventStreamingResponseBodyDataSinkSinkDataHubParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDataHubParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkDataHubParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkDataHubParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkDataHubParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->project_ != nullptr && this->roleName_ != nullptr && this->topic_ != nullptr && this->topicSchema_ != nullptr && this->topicType_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersBody) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersBody body() { DARABONBA_PTR_GET(body_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersBody) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setBody(const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setBody(Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersProject & project() const { DARABONBA_PTR_GET_CONST(project_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersProject) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersProject project() { DARABONBA_PTR_GET(project_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersProject) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setProject(const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setProject(Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersRoleName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersRoleName) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setRoleName(const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setRoleName(Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopic) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopic) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setTopic(const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setTopic(Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // topicSchema Field Functions 
    bool hasTopicSchema() const { return this->topicSchema_ != nullptr;};
    void deleteTopicSchema() { this->topicSchema_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicSchema & topicSchema() const { DARABONBA_PTR_GET_CONST(topicSchema_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicSchema) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicSchema topicSchema() { DARABONBA_PTR_GET(topicSchema_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicSchema) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setTopicSchema(const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicSchema & topicSchema) { DARABONBA_PTR_SET_VALUE(topicSchema_, topicSchema) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setTopicSchema(Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicSchema && topicSchema) { DARABONBA_PTR_SET_RVALUE(topicSchema_, topicSchema) };


    // topicType Field Functions 
    bool hasTopicType() const { return this->topicType_ != nullptr;};
    void deleteTopicType() { this->topicType_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicType & topicType() const { DARABONBA_PTR_GET_CONST(topicType_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicType topicType() { DARABONBA_PTR_GET(topicType_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicType) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setTopicType(const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicType & topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };
    inline GetEventStreamingResponseBodyDataSinkSinkDataHubParameters& setTopicType(Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicType && topicType) { DARABONBA_PTR_SET_RVALUE(topicType_, topicType) };


  protected:
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersBody> body_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersProject> project_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersRoleName> roleName_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopic> topic_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicSchema> topicSchema_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParametersTopicType> topicType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
