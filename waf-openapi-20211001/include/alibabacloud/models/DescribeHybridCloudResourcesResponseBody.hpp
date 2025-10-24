// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudResourcesResponseBodyDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudResourcesResponseBody() = default ;
    DescribeHybridCloudResourcesResponseBody(const DescribeHybridCloudResourcesResponseBody &) = default ;
    DescribeHybridCloudResourcesResponseBody(DescribeHybridCloudResourcesResponseBody &&) = default ;
    DescribeHybridCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourcesResponseBody() = default ;
    DescribeHybridCloudResourcesResponseBody& operator=(const DescribeHybridCloudResourcesResponseBody &) = default ;
    DescribeHybridCloudResourcesResponseBody& operator=(DescribeHybridCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<DescribeHybridCloudResourcesResponseBodyDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<DescribeHybridCloudResourcesResponseBodyDomains>) };
    inline vector<DescribeHybridCloudResourcesResponseBodyDomains> domains() { DARABONBA_PTR_GET(domains_, vector<DescribeHybridCloudResourcesResponseBodyDomains>) };
    inline DescribeHybridCloudResourcesResponseBody& setDomains(const vector<DescribeHybridCloudResourcesResponseBodyDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeHybridCloudResourcesResponseBody& setDomains(vector<DescribeHybridCloudResourcesResponseBodyDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeHybridCloudResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names.
    std::shared_ptr<vector<DescribeHybridCloudResourcesResponseBodyDomains>> domains_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
