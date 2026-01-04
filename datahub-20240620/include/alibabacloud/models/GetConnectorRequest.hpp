// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetConnectorRequest() = default ;
    GetConnectorRequest(const GetConnectorRequest &) = default ;
    GetConnectorRequest(GetConnectorRequest &&) = default ;
    GetConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectorRequest() = default ;
    GetConnectorRequest& operator=(const GetConnectorRequest &) = default ;
    GetConnectorRequest& operator=(GetConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr
        && this->projectName_ == nullptr && this->topicName_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline GetConnectorRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetConnectorRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetConnectorRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
