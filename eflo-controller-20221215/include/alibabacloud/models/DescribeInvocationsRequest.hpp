// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeInvocationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(IncludeOutput, includeOutput_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(IncludeOutput, includeOutput_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
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
    virtual bool empty() const override { return this->contentEncoding_ == nullptr
        && this->includeOutput_ == nullptr && this->invokeId_ == nullptr && this->nodeId_ == nullptr; };
    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline DescribeInvocationsRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


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


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeInvocationsRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The encoding mode of the `CommandContent` and `Output` response parameters. Valid values:
    // 
    // *   PlainText: returns the original command content and command outputs.
    // *   Base64 (default): returns the Base64-encoded command content and command output.
    shared_ptr<string> contentEncoding_ {};
    // Specifies whether to return the command outputs in the response.
    // 
    // *   true: returns the command outputs. When this parameter is set to true, you must specify `InvokeId`, `InstanceId`, or both.
    // *   false (default)
    shared_ptr<bool> includeOutput_ {};
    // The execution ID.
    // 
    // This parameter is required.
    shared_ptr<string> invokeId_ {};
    // The instance ID.
    shared_ptr<string> nodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
