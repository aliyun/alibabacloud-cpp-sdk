// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTBUILDLOGSRESPONSEBODYBUILDLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTBUILDLOGSRESPONSEBODYBUILDLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactBuildLogsResponseBodyBuildLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactBuildLogsResponseBodyBuildLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactBuildLogsResponseBodyBuildLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListArtifactBuildLogsResponseBodyBuildLogs() = default ;
    ListArtifactBuildLogsResponseBodyBuildLogs(const ListArtifactBuildLogsResponseBodyBuildLogs &) = default ;
    ListArtifactBuildLogsResponseBodyBuildLogs(ListArtifactBuildLogsResponseBodyBuildLogs &&) = default ;
    ListArtifactBuildLogsResponseBodyBuildLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactBuildLogsResponseBodyBuildLogs() = default ;
    ListArtifactBuildLogsResponseBodyBuildLogs& operator=(const ListArtifactBuildLogsResponseBodyBuildLogs &) = default ;
    ListArtifactBuildLogsResponseBodyBuildLogs& operator=(ListArtifactBuildLogsResponseBodyBuildLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->timestamp_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListArtifactBuildLogsResponseBodyBuildLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListArtifactBuildLogsResponseBodyBuildLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
