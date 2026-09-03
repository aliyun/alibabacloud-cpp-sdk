// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RunCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(CommandRole, commandRole_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(CommandRole, commandRole_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RunCommandRequest() = default ;
    RunCommandRequest(const RunCommandRequest &) = default ;
    RunCommandRequest(RunCommandRequest &&) = default ;
    RunCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommandRequest() = default ;
    RunCommandRequest& operator=(const RunCommandRequest &) = default ;
    RunCommandRequest& operator=(RunCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandContent_ == nullptr
        && this->commandRole_ == nullptr && this->contentEncoding_ == nullptr && this->desktopId_ == nullptr && this->endUserId_ == nullptr && this->regionId_ == nullptr
        && this->timeout_ == nullptr && this->type_ == nullptr; };
    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunCommandRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // commandRole Field Functions 
    bool hasCommandRole() const { return this->commandRole_ != nullptr;};
    void deleteCommandRole() { this->commandRole_ = nullptr;};
    inline string getCommandRole() const { DARABONBA_PTR_GET_DEFAULT(commandRole_, "") };
    inline RunCommandRequest& setCommandRole(string commandRole) { DARABONBA_PTR_SET_VALUE(commandRole_, commandRole) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline RunCommandRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline RunCommandRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline RunCommandRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline RunCommandRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunCommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline RunCommandRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunCommandRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The plaintext or Base64-encoded content of the script. The Base64-encoded script content cannot exceed 16 KB.
    // 
    // > If the script content is Base64-encoded, set the ContentEncoding parameter to Base64.
    // 
    // This parameter is required.
    shared_ptr<string> commandContent_ {};
    // The role used when the command is executed on the cloud computer.
    shared_ptr<string> commandRole_ {};
    // The encoding method of the script content.
    // 
    // > If the specified value is not within the valid values, the value is treated as PlainText.
    shared_ptr<string> contentEncoding_ {};
    // The IDs of cloud computers. Valid values of N: 1 to 50. If you specify multiple cloud computers, the API call succeeds as long as the script is successfully executed on at least one cloud computer. If the script fails to be executed on all specified cloud computers, reset this parameter.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> desktopId_ {};
    // The ID of the end user. If this parameter is specified, the command is executed with the permissions of the end user.
    // 
    // > The user must have a session record on the cloud computer (the user has logged on and connected to the cloud computer after it is started, and the connection was not preempted by another user). This parameter is not supported for Linux cloud computers.
    shared_ptr<string> endUserId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The timeout period for executing the script. Unit: seconds. Default value: 300. A timeout may occur when the script cannot run due to process issues, missing modules, or missing Cloud Assistant Agent. After a timeout, the script process is forcefully terminated.
    shared_ptr<int64_t> timeout_ {};
    // The language type of the O&M script.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
