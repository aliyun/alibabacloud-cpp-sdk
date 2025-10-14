// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAcls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAclsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAcls, networkAcls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAcls, networkAcls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkAclsResponseBody() = default ;
    DescribeNetworkAclsResponseBody(const DescribeNetworkAclsResponseBody &) = default ;
    DescribeNetworkAclsResponseBody(DescribeNetworkAclsResponseBody &&) = default ;
    DescribeNetworkAclsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBody() = default ;
    DescribeNetworkAclsResponseBody& operator=(const DescribeNetworkAclsResponseBody &) = default ;
    DescribeNetworkAclsResponseBody& operator=(DescribeNetworkAclsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAcls_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // networkAcls Field Functions 
    bool hasNetworkAcls() const { return this->networkAcls_ != nullptr;};
    void deleteNetworkAcls() { this->networkAcls_ = nullptr;};
    inline const vector<DescribeNetworkAclsResponseBodyNetworkAcls> & networkAcls() const { DARABONBA_PTR_GET_CONST(networkAcls_, vector<DescribeNetworkAclsResponseBodyNetworkAcls>) };
    inline vector<DescribeNetworkAclsResponseBodyNetworkAcls> networkAcls() { DARABONBA_PTR_GET(networkAcls_, vector<DescribeNetworkAclsResponseBodyNetworkAcls>) };
    inline DescribeNetworkAclsResponseBody& setNetworkAcls(const vector<DescribeNetworkAclsResponseBodyNetworkAcls> & networkAcls) { DARABONBA_PTR_SET_VALUE(networkAcls_, networkAcls) };
    inline DescribeNetworkAclsResponseBody& setNetworkAcls(vector<DescribeNetworkAclsResponseBodyNetworkAcls> && networkAcls) { DARABONBA_PTR_SET_RVALUE(networkAcls_, networkAcls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeNetworkAclsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeNetworkAclsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkAclsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeNetworkAclsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the network ACLs.
    std::shared_ptr<vector<DescribeNetworkAclsResponseBodyNetworkAcls>> networkAcls_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
