// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetTopicRequest() = default ;
    GetTopicRequest(const GetTopicRequest &) = default ;
    GetTopicRequest(GetTopicRequest &&) = default ;
    GetTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicRequest() = default ;
    GetTopicRequest& operator=(const GetTopicRequest &) = default ;
    GetTopicRequest& operator=(GetTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr
        && this->topicName_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetTopicRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTopicRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
