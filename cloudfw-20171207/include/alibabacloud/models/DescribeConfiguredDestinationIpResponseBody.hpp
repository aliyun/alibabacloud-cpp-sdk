// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDESTINATIONIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDESTINATIONIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConfiguredDestinationIPResponseBodyDestinations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeConfiguredDestinationIPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfiguredDestinationIPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Destinations, destinations_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfiguredDestinationIPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Destinations, destinations_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeConfiguredDestinationIPResponseBody() = default ;
    DescribeConfiguredDestinationIPResponseBody(const DescribeConfiguredDestinationIPResponseBody &) = default ;
    DescribeConfiguredDestinationIPResponseBody(DescribeConfiguredDestinationIPResponseBody &&) = default ;
    DescribeConfiguredDestinationIPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfiguredDestinationIPResponseBody() = default ;
    DescribeConfiguredDestinationIPResponseBody& operator=(const DescribeConfiguredDestinationIPResponseBody &) = default ;
    DescribeConfiguredDestinationIPResponseBody& operator=(DescribeConfiguredDestinationIPResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinations_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // destinations Field Functions 
    bool hasDestinations() const { return this->destinations_ != nullptr;};
    void deleteDestinations() { this->destinations_ = nullptr;};
    inline const vector<DescribeConfiguredDestinationIPResponseBodyDestinations> & destinations() const { DARABONBA_PTR_GET_CONST(destinations_, vector<DescribeConfiguredDestinationIPResponseBodyDestinations>) };
    inline vector<DescribeConfiguredDestinationIPResponseBodyDestinations> destinations() { DARABONBA_PTR_GET(destinations_, vector<DescribeConfiguredDestinationIPResponseBodyDestinations>) };
    inline DescribeConfiguredDestinationIPResponseBody& setDestinations(const vector<DescribeConfiguredDestinationIPResponseBodyDestinations> & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
    inline DescribeConfiguredDestinationIPResponseBody& setDestinations(vector<DescribeConfiguredDestinationIPResponseBodyDestinations> && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeConfiguredDestinationIPResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeConfiguredDestinationIPResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfiguredDestinationIPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeConfiguredDestinationIPResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeConfiguredDestinationIPResponseBodyDestinations>> destinations_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
