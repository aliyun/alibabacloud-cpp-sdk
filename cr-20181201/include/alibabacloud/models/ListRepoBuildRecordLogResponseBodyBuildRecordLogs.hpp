// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDLOGRESPONSEBODYBUILDRECORDLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDLOGRESPONSEBODYBUILDRECORDLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoBuildRecordLogResponseBodyBuildRecordLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoBuildRecordLogResponseBodyBuildRecordLogs& obj) { 
      DARABONBA_PTR_TO_JSON(BuildStage, buildStage_);
      DARABONBA_PTR_TO_JSON(LineNumber, lineNumber_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoBuildRecordLogResponseBodyBuildRecordLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildStage, buildStage_);
      DARABONBA_PTR_FROM_JSON(LineNumber, lineNumber_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ListRepoBuildRecordLogResponseBodyBuildRecordLogs() = default ;
    ListRepoBuildRecordLogResponseBodyBuildRecordLogs(const ListRepoBuildRecordLogResponseBodyBuildRecordLogs &) = default ;
    ListRepoBuildRecordLogResponseBodyBuildRecordLogs(ListRepoBuildRecordLogResponseBodyBuildRecordLogs &&) = default ;
    ListRepoBuildRecordLogResponseBodyBuildRecordLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoBuildRecordLogResponseBodyBuildRecordLogs() = default ;
    ListRepoBuildRecordLogResponseBodyBuildRecordLogs& operator=(const ListRepoBuildRecordLogResponseBodyBuildRecordLogs &) = default ;
    ListRepoBuildRecordLogResponseBodyBuildRecordLogs& operator=(ListRepoBuildRecordLogResponseBodyBuildRecordLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildStage_ == nullptr
        && return this->lineNumber_ == nullptr && return this->message_ == nullptr; };
    // buildStage Field Functions 
    bool hasBuildStage() const { return this->buildStage_ != nullptr;};
    void deleteBuildStage() { this->buildStage_ = nullptr;};
    inline string buildStage() const { DARABONBA_PTR_GET_DEFAULT(buildStage_, "") };
    inline ListRepoBuildRecordLogResponseBodyBuildRecordLogs& setBuildStage(string buildStage) { DARABONBA_PTR_SET_VALUE(buildStage_, buildStage) };


    // lineNumber Field Functions 
    bool hasLineNumber() const { return this->lineNumber_ != nullptr;};
    void deleteLineNumber() { this->lineNumber_ = nullptr;};
    inline int32_t lineNumber() const { DARABONBA_PTR_GET_DEFAULT(lineNumber_, 0) };
    inline ListRepoBuildRecordLogResponseBodyBuildRecordLogs& setLineNumber(int32_t lineNumber) { DARABONBA_PTR_SET_VALUE(lineNumber_, lineNumber) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRepoBuildRecordLogResponseBodyBuildRecordLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The stage of the building that is recorded in the log entry.
    std::shared_ptr<string> buildStage_ = nullptr;
    // The line number of the log entry.
    std::shared_ptr<int32_t> lineNumber_ = nullptr;
    // The content of the log.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
