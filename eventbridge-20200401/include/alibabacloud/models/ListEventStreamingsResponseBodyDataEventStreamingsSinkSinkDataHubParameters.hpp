// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKDATAHUBPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKDATAHUBPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersBody.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersProject.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersRoleName.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopic.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicSchema.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSchema, topicSchema_);
      DARABONBA_PTR_TO_JSON(TopicType, topicType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSchema, topicSchema_);
      DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->project_ != nullptr && this->roleName_ != nullptr && this->topic_ != nullptr && this->topicSchema_ != nullptr && this->topicType_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersBody) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersBody body() { DARABONBA_PTR_GET(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersBody) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setBody(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setBody(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersProject & project() const { DARABONBA_PTR_GET_CONST(project_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersProject) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersProject project() { DARABONBA_PTR_GET(project_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersProject) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setProject(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setProject(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersRoleName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersRoleName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setRoleName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setRoleName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopic) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopic) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setTopic(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setTopic(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // topicSchema Field Functions 
    bool hasTopicSchema() const { return this->topicSchema_ != nullptr;};
    void deleteTopicSchema() { this->topicSchema_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicSchema & topicSchema() const { DARABONBA_PTR_GET_CONST(topicSchema_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicSchema) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicSchema topicSchema() { DARABONBA_PTR_GET(topicSchema_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicSchema) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setTopicSchema(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicSchema & topicSchema) { DARABONBA_PTR_SET_VALUE(topicSchema_, topicSchema) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setTopicSchema(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicSchema && topicSchema) { DARABONBA_PTR_SET_RVALUE(topicSchema_, topicSchema) };


    // topicType Field Functions 
    bool hasTopicType() const { return this->topicType_ != nullptr;};
    void deleteTopicType() { this->topicType_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicType & topicType() const { DARABONBA_PTR_GET_CONST(topicType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicType) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicType topicType() { DARABONBA_PTR_GET(topicType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setTopicType(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicType & topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters& setTopicType(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicType && topicType) { DARABONBA_PTR_SET_RVALUE(topicType_, topicType) };


  protected:
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersBody> body_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersProject> project_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersRoleName> roleName_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopic> topic_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicSchema> topicSchema_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParametersTopicType> topicType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
