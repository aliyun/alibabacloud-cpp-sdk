// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRELEASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRELEASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePlaybookReleasesResponseBodyPage.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlaybookReleasesResponseBodyRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookReleasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookReleasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookReleasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookReleasesResponseBody() = default ;
    DescribePlaybookReleasesResponseBody(const DescribePlaybookReleasesResponseBody &) = default ;
    DescribePlaybookReleasesResponseBody(DescribePlaybookReleasesResponseBody &&) = default ;
    DescribePlaybookReleasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookReleasesResponseBody() = default ;
    DescribePlaybookReleasesResponseBody& operator=(const DescribePlaybookReleasesResponseBody &) = default ;
    DescribePlaybookReleasesResponseBody& operator=(DescribePlaybookReleasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && return this->records_ == nullptr && return this->requestId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribePlaybookReleasesResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, DescribePlaybookReleasesResponseBodyPage) };
    inline DescribePlaybookReleasesResponseBodyPage page() { DARABONBA_PTR_GET(page_, DescribePlaybookReleasesResponseBodyPage) };
    inline DescribePlaybookReleasesResponseBody& setPage(const DescribePlaybookReleasesResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribePlaybookReleasesResponseBody& setPage(DescribePlaybookReleasesResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribePlaybookReleasesResponseBodyRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribePlaybookReleasesResponseBodyRecords>) };
    inline vector<DescribePlaybookReleasesResponseBodyRecords> records() { DARABONBA_PTR_GET(records_, vector<DescribePlaybookReleasesResponseBodyRecords>) };
    inline DescribePlaybookReleasesResponseBody& setRecords(const vector<DescribePlaybookReleasesResponseBodyRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribePlaybookReleasesResponseBody& setRecords(vector<DescribePlaybookReleasesResponseBodyRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookReleasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePlaybookReleasesResponseBodyPage> page_ = nullptr;
    // The information about the playbook version.
    std::shared_ptr<vector<DescribePlaybookReleasesResponseBodyRecords>> records_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
