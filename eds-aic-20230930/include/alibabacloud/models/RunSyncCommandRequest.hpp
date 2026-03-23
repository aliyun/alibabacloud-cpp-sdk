// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSYNCCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSYNCCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RunSyncCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSyncCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, RunSyncCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
    };
    RunSyncCommandRequest() = default ;
    RunSyncCommandRequest(const RunSyncCommandRequest &) = default ;
    RunSyncCommandRequest(RunSyncCommandRequest &&) = default ;
    RunSyncCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSyncCommandRequest() = default ;
    RunSyncCommandRequest& operator=(const RunSyncCommandRequest &) = default ;
    RunSyncCommandRequest& operator=(RunSyncCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandContent_ == nullptr
        && this->contentEncoding_ == nullptr && this->instanceIds_ == nullptr && this->waitTime_ == nullptr; };
    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunSyncCommandRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline RunSyncCommandRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RunSyncCommandRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RunSyncCommandRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline int64_t getWaitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0L) };
    inline RunSyncCommandRequest& setWaitTime(int64_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    shared_ptr<string> commandContent_ {};
    shared_ptr<string> contentEncoding_ {};
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<int64_t> waitTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
