// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTINCTRELEASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTINCTRELEASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDistinctReleasesResponseBodyRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeDistinctReleasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistinctReleasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistinctReleasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDistinctReleasesResponseBody() = default ;
    DescribeDistinctReleasesResponseBody(const DescribeDistinctReleasesResponseBody &) = default ;
    DescribeDistinctReleasesResponseBody(DescribeDistinctReleasesResponseBody &&) = default ;
    DescribeDistinctReleasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistinctReleasesResponseBody() = default ;
    DescribeDistinctReleasesResponseBody& operator=(const DescribeDistinctReleasesResponseBody &) = default ;
    DescribeDistinctReleasesResponseBody& operator=(DescribeDistinctReleasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->records_ == nullptr
        && return this->requestId_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeDistinctReleasesResponseBodyRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeDistinctReleasesResponseBodyRecords>) };
    inline vector<DescribeDistinctReleasesResponseBodyRecords> records() { DARABONBA_PTR_GET(records_, vector<DescribeDistinctReleasesResponseBodyRecords>) };
    inline DescribeDistinctReleasesResponseBody& setRecords(const vector<DescribeDistinctReleasesResponseBodyRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeDistinctReleasesResponseBody& setRecords(vector<DescribeDistinctReleasesResponseBodyRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDistinctReleasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about versions.
    std::shared_ptr<vector<DescribeDistinctReleasesResponseBodyRecords>> records_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
