// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIEXPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIEXPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiExportsResponseBodyApiExports.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApiExportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiExportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiExports, apiExports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiExportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiExports, apiExports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeApiExportsResponseBody() = default ;
    DescribeApiExportsResponseBody(const DescribeApiExportsResponseBody &) = default ;
    DescribeApiExportsResponseBody(DescribeApiExportsResponseBody &&) = default ;
    DescribeApiExportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiExportsResponseBody() = default ;
    DescribeApiExportsResponseBody& operator=(const DescribeApiExportsResponseBody &) = default ;
    DescribeApiExportsResponseBody& operator=(DescribeApiExportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiExports_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // apiExports Field Functions 
    bool hasApiExports() const { return this->apiExports_ != nullptr;};
    void deleteApiExports() { this->apiExports_ = nullptr;};
    inline const vector<DescribeApiExportsResponseBodyApiExports> & apiExports() const { DARABONBA_PTR_GET_CONST(apiExports_, vector<DescribeApiExportsResponseBodyApiExports>) };
    inline vector<DescribeApiExportsResponseBodyApiExports> apiExports() { DARABONBA_PTR_GET(apiExports_, vector<DescribeApiExportsResponseBodyApiExports>) };
    inline DescribeApiExportsResponseBody& setApiExports(const vector<DescribeApiExportsResponseBodyApiExports> & apiExports) { DARABONBA_PTR_SET_VALUE(apiExports_, apiExports) };
    inline DescribeApiExportsResponseBody& setApiExports(vector<DescribeApiExportsResponseBodyApiExports> && apiExports) { DARABONBA_PTR_SET_RVALUE(apiExports_, apiExports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiExportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeApiExportsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The returned data export tasks.
    std::shared_ptr<vector<DescribeApiExportsResponseBodyApiExports>> apiExports_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the data export task. Valid values:
    // 
    // *   **expired**: The file is expired.
    // *   **exporting**: Data is being exported.
    // *   **completed**: Data is exported.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
