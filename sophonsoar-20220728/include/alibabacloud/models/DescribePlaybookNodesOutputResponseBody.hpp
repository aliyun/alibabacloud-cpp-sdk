// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNODESOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNODESOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookNodesOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookNodesOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookNodesOutput, playbookNodesOutput_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookNodesOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookNodesOutput, playbookNodesOutput_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookNodesOutputResponseBody() = default ;
    DescribePlaybookNodesOutputResponseBody(const DescribePlaybookNodesOutputResponseBody &) = default ;
    DescribePlaybookNodesOutputResponseBody(DescribePlaybookNodesOutputResponseBody &&) = default ;
    DescribePlaybookNodesOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookNodesOutputResponseBody() = default ;
    DescribePlaybookNodesOutputResponseBody& operator=(const DescribePlaybookNodesOutputResponseBody &) = default ;
    DescribePlaybookNodesOutputResponseBody& operator=(DescribePlaybookNodesOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playbookNodesOutput_ == nullptr
        && return this->requestId_ == nullptr; };
    // playbookNodesOutput Field Functions 
    bool hasPlaybookNodesOutput() const { return this->playbookNodesOutput_ != nullptr;};
    void deletePlaybookNodesOutput() { this->playbookNodesOutput_ = nullptr;};
    inline const DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput & playbookNodesOutput() const { DARABONBA_PTR_GET_CONST(playbookNodesOutput_, DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput) };
    inline DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput playbookNodesOutput() { DARABONBA_PTR_GET(playbookNodesOutput_, DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput) };
    inline DescribePlaybookNodesOutputResponseBody& setPlaybookNodesOutput(const DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput & playbookNodesOutput) { DARABONBA_PTR_SET_VALUE(playbookNodesOutput_, playbookNodesOutput) };
    inline DescribePlaybookNodesOutputResponseBody& setPlaybookNodesOutput(DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput && playbookNodesOutput) { DARABONBA_PTR_SET_RVALUE(playbookNodesOutput_, playbookNodesOutput) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookNodesOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The output data of the component node.
    std::shared_ptr<DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput> playbookNodesOutput_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
