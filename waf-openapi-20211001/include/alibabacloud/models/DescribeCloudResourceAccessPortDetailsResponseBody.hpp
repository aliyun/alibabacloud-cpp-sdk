// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourceAccessPortDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceAccessPortDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPortDetails, accessPortDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceAccessPortDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPortDetails, accessPortDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudResourceAccessPortDetailsResponseBody() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody(const DescribeCloudResourceAccessPortDetailsResponseBody &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody(DescribeCloudResourceAccessPortDetailsResponseBody &&) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceAccessPortDetailsResponseBody() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody& operator=(const DescribeCloudResourceAccessPortDetailsResponseBody &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody& operator=(DescribeCloudResourceAccessPortDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPortDetails_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // accessPortDetails Field Functions 
    bool hasAccessPortDetails() const { return this->accessPortDetails_ != nullptr;};
    void deleteAccessPortDetails() { this->accessPortDetails_ = nullptr;};
    inline const vector<DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails> & accessPortDetails() const { DARABONBA_PTR_GET_CONST(accessPortDetails_, vector<DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails>) };
    inline vector<DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails> accessPortDetails() { DARABONBA_PTR_GET(accessPortDetails_, vector<DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails>) };
    inline DescribeCloudResourceAccessPortDetailsResponseBody& setAccessPortDetails(const vector<DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails> & accessPortDetails) { DARABONBA_PTR_SET_VALUE(accessPortDetails_, accessPortDetails) };
    inline DescribeCloudResourceAccessPortDetailsResponseBody& setAccessPortDetails(vector<DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails> && accessPortDetails) { DARABONBA_PTR_SET_RVALUE(accessPortDetails_, accessPortDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the ports of cloud services that are added to WAF.
    std::shared_ptr<vector<DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails>> accessPortDetails_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
