// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSREQUEST_HPP_
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
  class DescribeInvocationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(IncludeInvokeDesktops, includeInvokeDesktops_);
      DARABONBA_PTR_TO_JSON(IncludeOutput, includeOutput_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(InvokeStatus, invokeStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(IncludeInvokeDesktops, includeInvokeDesktops_);
      DARABONBA_PTR_FROM_JSON(IncludeOutput, includeOutput_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(InvokeStatus, invokeStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeInvocationsRequest() = default ;
    DescribeInvocationsRequest(const DescribeInvocationsRequest &) = default ;
    DescribeInvocationsRequest(DescribeInvocationsRequest &&) = default ;
    DescribeInvocationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsRequest() = default ;
    DescribeInvocationsRequest& operator=(const DescribeInvocationsRequest &) = default ;
    DescribeInvocationsRequest& operator=(DescribeInvocationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandType_ == nullptr
        && this->contentEncoding_ == nullptr && this->desktopId_ == nullptr && this->desktopIds_ == nullptr && this->endUserId_ == nullptr && this->includeInvokeDesktops_ == nullptr
        && this->includeOutput_ == nullptr && this->invokeId_ == nullptr && this->invokeStatus_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->regionId_ == nullptr; };
    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline DescribeInvocationsRequest& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline DescribeInvocationsRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeInvocationsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopIds Field Functions 
    bool hasDesktopIds() const { return this->desktopIds_ != nullptr;};
    void deleteDesktopIds() { this->desktopIds_ = nullptr;};
    inline const vector<string> & getDesktopIds() const { DARABONBA_PTR_GET_CONST(desktopIds_, vector<string>) };
    inline vector<string> getDesktopIds() { DARABONBA_PTR_GET(desktopIds_, vector<string>) };
    inline DescribeInvocationsRequest& setDesktopIds(const vector<string> & desktopIds) { DARABONBA_PTR_SET_VALUE(desktopIds_, desktopIds) };
    inline DescribeInvocationsRequest& setDesktopIds(vector<string> && desktopIds) { DARABONBA_PTR_SET_RVALUE(desktopIds_, desktopIds) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeInvocationsRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // includeInvokeDesktops Field Functions 
    bool hasIncludeInvokeDesktops() const { return this->includeInvokeDesktops_ != nullptr;};
    void deleteIncludeInvokeDesktops() { this->includeInvokeDesktops_ = nullptr;};
    inline bool getIncludeInvokeDesktops() const { DARABONBA_PTR_GET_DEFAULT(includeInvokeDesktops_, false) };
    inline DescribeInvocationsRequest& setIncludeInvokeDesktops(bool includeInvokeDesktops) { DARABONBA_PTR_SET_VALUE(includeInvokeDesktops_, includeInvokeDesktops) };


    // includeOutput Field Functions 
    bool hasIncludeOutput() const { return this->includeOutput_ != nullptr;};
    void deleteIncludeOutput() { this->includeOutput_ = nullptr;};
    inline bool getIncludeOutput() const { DARABONBA_PTR_GET_DEFAULT(includeOutput_, false) };
    inline DescribeInvocationsRequest& setIncludeOutput(bool includeOutput) { DARABONBA_PTR_SET_VALUE(includeOutput_, includeOutput) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeInvocationsRequest& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // invokeStatus Field Functions 
    bool hasInvokeStatus() const { return this->invokeStatus_ != nullptr;};
    void deleteInvokeStatus() { this->invokeStatus_ = nullptr;};
    inline string getInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeStatus_, "") };
    inline DescribeInvocationsRequest& setInvokeStatus(string invokeStatus) { DARABONBA_PTR_SET_VALUE(invokeStatus_, invokeStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInvocationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInvocationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInvocationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The command type.
    // 
    // Valid values:
    // 
    // *   RunPowerShellScript: the PowerShell command.
    // *   RunBatScript: the Bat command.
    shared_ptr<string> commandType_ {};
    // The encoding method of the command content and outputs.
    // 
    // Valid values:
    // 
    // *   Base64 (default): returns the Base64-encoded command content and command outputs.
    // *   PlainText: returns the original command content and outputs in plain text.
    shared_ptr<string> contentEncoding_ {};
    // The cloud computer ID. If you specify a cloud computer, all command execution records of the cloud computer are queried.
    shared_ptr<string> desktopId_ {};
    // The cloud computer IDs.
    // 
    // >  The `DesktopId` parameter will be deprecated. We recommend using the DesktopIds parameter to specify cloud computer IDs instead.
    shared_ptr<vector<string>> desktopIds_ {};
    // The user ID.
    shared_ptr<string> endUserId_ {};
    // Specifies whether to return the execution results of the remote command on all cloud computers when executed across multiple cloud computers.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> includeInvokeDesktops_ {};
    // Specifies whether to return command outputs in the response.
    // 
    // Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> includeOutput_ {};
    // The execution ID of the command. You can obtain the value by calling the [RunCommand](~~RunCommand~~) operation.
    shared_ptr<string> invokeId_ {};
    // The execution status of the command. The value of this parameter is determined by the execution states of the command on all participating cloud computers.
    // 
    // Valid values:
    // 
    // *   Finished: The command execution completes on all cloud computers. Alternatively, the command execution is manually stopped on some cloud computers while it completes on the others.
    // *   Stopped: The command execution stops.
    // *   Failed: The command execution failed on all cloud computers.
    // *   Running: Once there is a command execution in progress, the execution status defaults to Running.
    // *   PartialFailed: If the command execution failed on part of the cloud computers, the execution status is considered partially failed.
    shared_ptr<string> invokeStatus_ {};
    // The number of entries per page.
    // 
    // *   Valid values: 1 to 50.
    // *   Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The query token. Set the value to the NextToken value that is returned from the last call to the previous DescribeInvocations operation.
    shared_ptr<string> nextToken_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
