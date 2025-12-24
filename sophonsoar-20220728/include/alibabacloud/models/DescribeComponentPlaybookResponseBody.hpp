// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeComponentPlaybookResponseBodyPlaybooks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComponentPlaybookResponseBody() = default ;
    DescribeComponentPlaybookResponseBody(const DescribeComponentPlaybookResponseBody &) = default ;
    DescribeComponentPlaybookResponseBody(DescribeComponentPlaybookResponseBody &&) = default ;
    DescribeComponentPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentPlaybookResponseBody() = default ;
    DescribeComponentPlaybookResponseBody& operator=(const DescribeComponentPlaybookResponseBody &) = default ;
    DescribeComponentPlaybookResponseBody& operator=(DescribeComponentPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playbooks_ == nullptr
        && return this->requestId_ == nullptr; };
    // playbooks Field Functions 
    bool hasPlaybooks() const { return this->playbooks_ != nullptr;};
    void deletePlaybooks() { this->playbooks_ = nullptr;};
    inline const vector<DescribeComponentPlaybookResponseBodyPlaybooks> & playbooks() const { DARABONBA_PTR_GET_CONST(playbooks_, vector<DescribeComponentPlaybookResponseBodyPlaybooks>) };
    inline vector<DescribeComponentPlaybookResponseBodyPlaybooks> playbooks() { DARABONBA_PTR_GET(playbooks_, vector<DescribeComponentPlaybookResponseBodyPlaybooks>) };
    inline DescribeComponentPlaybookResponseBody& setPlaybooks(const vector<DescribeComponentPlaybookResponseBodyPlaybooks> & playbooks) { DARABONBA_PTR_SET_VALUE(playbooks_, playbooks) };
    inline DescribeComponentPlaybookResponseBody& setPlaybooks(vector<DescribeComponentPlaybookResponseBodyPlaybooks> && playbooks) { DARABONBA_PTR_SET_RVALUE(playbooks_, playbooks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the predefined components.
    std::shared_ptr<vector<DescribeComponentPlaybookResponseBodyPlaybooks>> playbooks_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
