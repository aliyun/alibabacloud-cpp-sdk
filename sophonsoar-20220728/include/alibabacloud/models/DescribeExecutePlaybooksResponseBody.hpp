// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTEPLAYBOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTEPLAYBOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExecutePlaybooksResponseBodyPlaybookMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeExecutePlaybooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookMetrics, playbookMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookMetrics, playbookMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExecutePlaybooksResponseBody() = default ;
    DescribeExecutePlaybooksResponseBody(const DescribeExecutePlaybooksResponseBody &) = default ;
    DescribeExecutePlaybooksResponseBody(DescribeExecutePlaybooksResponseBody &&) = default ;
    DescribeExecutePlaybooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutePlaybooksResponseBody() = default ;
    DescribeExecutePlaybooksResponseBody& operator=(const DescribeExecutePlaybooksResponseBody &) = default ;
    DescribeExecutePlaybooksResponseBody& operator=(DescribeExecutePlaybooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playbookMetrics_ == nullptr
        && return this->requestId_ == nullptr; };
    // playbookMetrics Field Functions 
    bool hasPlaybookMetrics() const { return this->playbookMetrics_ != nullptr;};
    void deletePlaybookMetrics() { this->playbookMetrics_ = nullptr;};
    inline const vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics> & playbookMetrics() const { DARABONBA_PTR_GET_CONST(playbookMetrics_, vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics>) };
    inline vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics> playbookMetrics() { DARABONBA_PTR_GET(playbookMetrics_, vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics>) };
    inline DescribeExecutePlaybooksResponseBody& setPlaybookMetrics(const vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics> & playbookMetrics) { DARABONBA_PTR_SET_VALUE(playbookMetrics_, playbookMetrics) };
    inline DescribeExecutePlaybooksResponseBody& setPlaybookMetrics(vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics> && playbookMetrics) { DARABONBA_PTR_SET_RVALUE(playbookMetrics_, playbookMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExecutePlaybooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The playbook.
    std::shared_ptr<vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics>> playbookMetrics_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
