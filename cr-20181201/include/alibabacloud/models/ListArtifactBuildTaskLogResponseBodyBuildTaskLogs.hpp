// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTBUILDTASKLOGRESPONSEBODYBUILDTASKLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTBUILDTASKLOGRESPONSEBODYBUILDTASKLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListArtifactBuildTaskLogResponseBodyBuildTaskLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactBuildTaskLogResponseBodyBuildTaskLogs& obj) { 
      DARABONBA_PTR_TO_JSON(LineNumber, lineNumber_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactBuildTaskLogResponseBodyBuildTaskLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(LineNumber, lineNumber_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ListArtifactBuildTaskLogResponseBodyBuildTaskLogs() = default ;
    ListArtifactBuildTaskLogResponseBodyBuildTaskLogs(const ListArtifactBuildTaskLogResponseBodyBuildTaskLogs &) = default ;
    ListArtifactBuildTaskLogResponseBodyBuildTaskLogs(ListArtifactBuildTaskLogResponseBodyBuildTaskLogs &&) = default ;
    ListArtifactBuildTaskLogResponseBodyBuildTaskLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactBuildTaskLogResponseBodyBuildTaskLogs() = default ;
    ListArtifactBuildTaskLogResponseBodyBuildTaskLogs& operator=(const ListArtifactBuildTaskLogResponseBodyBuildTaskLogs &) = default ;
    ListArtifactBuildTaskLogResponseBodyBuildTaskLogs& operator=(ListArtifactBuildTaskLogResponseBodyBuildTaskLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lineNumber_ == nullptr
        && return this->message_ == nullptr; };
    // lineNumber Field Functions 
    bool hasLineNumber() const { return this->lineNumber_ != nullptr;};
    void deleteLineNumber() { this->lineNumber_ = nullptr;};
    inline int32_t lineNumber() const { DARABONBA_PTR_GET_DEFAULT(lineNumber_, 0) };
    inline ListArtifactBuildTaskLogResponseBodyBuildTaskLogs& setLineNumber(int32_t lineNumber) { DARABONBA_PTR_SET_VALUE(lineNumber_, lineNumber) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListArtifactBuildTaskLogResponseBodyBuildTaskLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The row number of the log entry.
    std::shared_ptr<int32_t> lineNumber_ = nullptr;
    // The log data.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
