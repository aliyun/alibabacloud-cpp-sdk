// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    GetSchemaRequest() = default ;
    GetSchemaRequest(const GetSchemaRequest &) = default ;
    GetSchemaRequest(GetSchemaRequest &&) = default ;
    GetSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemaRequest() = default ;
    GetSchemaRequest& operator=(const GetSchemaRequest &) = default ;
    GetSchemaRequest& operator=(GetSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr
        && this->topicName_ == nullptr && this->versionId_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetSchemaRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetSchemaRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetSchemaRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
    // This parameter is required.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
