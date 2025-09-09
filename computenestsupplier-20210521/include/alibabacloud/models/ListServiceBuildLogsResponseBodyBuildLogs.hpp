// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEBUILDLOGSRESPONSEBODYBUILDLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEBUILDLOGSRESPONSEBODYBUILDLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceBuildLogsResponseBodyBuildLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceBuildLogsResponseBodyBuildLogs& obj) { 
      DARABONBA_PTR_TO_JSON(BuildStep, buildStep_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceBuildLogsResponseBodyBuildLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildStep, buildStep_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListServiceBuildLogsResponseBodyBuildLogs() = default ;
    ListServiceBuildLogsResponseBodyBuildLogs(const ListServiceBuildLogsResponseBodyBuildLogs &) = default ;
    ListServiceBuildLogsResponseBodyBuildLogs(ListServiceBuildLogsResponseBodyBuildLogs &&) = default ;
    ListServiceBuildLogsResponseBodyBuildLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceBuildLogsResponseBodyBuildLogs() = default ;
    ListServiceBuildLogsResponseBodyBuildLogs& operator=(const ListServiceBuildLogsResponseBodyBuildLogs &) = default ;
    ListServiceBuildLogsResponseBodyBuildLogs& operator=(ListServiceBuildLogsResponseBodyBuildLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildStep_ != nullptr
        && this->content_ != nullptr && this->timestamp_ != nullptr; };
    // buildStep Field Functions 
    bool hasBuildStep() const { return this->buildStep_ != nullptr;};
    void deleteBuildStep() { this->buildStep_ = nullptr;};
    inline string buildStep() const { DARABONBA_PTR_GET_DEFAULT(buildStep_, "") };
    inline ListServiceBuildLogsResponseBodyBuildLogs& setBuildStep(string buildStep) { DARABONBA_PTR_SET_VALUE(buildStep_, buildStep) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListServiceBuildLogsResponseBodyBuildLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListServiceBuildLogsResponseBodyBuildLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> buildStep_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
