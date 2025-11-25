// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSPRIVATEASSOCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSPRIVATEASSOCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeIpsPrivateAssocResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpsPrivateAssocResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpsPrivateAssoc, ipsPrivateAssoc_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalOpenCount, totalOpenCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpsPrivateAssocResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpsPrivateAssoc, ipsPrivateAssoc_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalOpenCount, totalOpenCount_);
    };
    DescribeIpsPrivateAssocResponseBody() = default ;
    DescribeIpsPrivateAssocResponseBody(const DescribeIpsPrivateAssocResponseBody &) = default ;
    DescribeIpsPrivateAssocResponseBody(DescribeIpsPrivateAssocResponseBody &&) = default ;
    DescribeIpsPrivateAssocResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpsPrivateAssocResponseBody() = default ;
    DescribeIpsPrivateAssocResponseBody& operator=(const DescribeIpsPrivateAssocResponseBody &) = default ;
    DescribeIpsPrivateAssocResponseBody& operator=(DescribeIpsPrivateAssocResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipsPrivateAssoc_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->totalOpenCount_ == nullptr; };
    // ipsPrivateAssoc Field Functions 
    bool hasIpsPrivateAssoc() const { return this->ipsPrivateAssoc_ != nullptr;};
    void deleteIpsPrivateAssoc() { this->ipsPrivateAssoc_ = nullptr;};
    inline const vector<DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc> & ipsPrivateAssoc() const { DARABONBA_PTR_GET_CONST(ipsPrivateAssoc_, vector<DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc>) };
    inline vector<DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc> ipsPrivateAssoc() { DARABONBA_PTR_GET(ipsPrivateAssoc_, vector<DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc>) };
    inline DescribeIpsPrivateAssocResponseBody& setIpsPrivateAssoc(const vector<DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc> & ipsPrivateAssoc) { DARABONBA_PTR_SET_VALUE(ipsPrivateAssoc_, ipsPrivateAssoc) };
    inline DescribeIpsPrivateAssocResponseBody& setIpsPrivateAssoc(vector<DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc> && ipsPrivateAssoc) { DARABONBA_PTR_SET_RVALUE(ipsPrivateAssoc_, ipsPrivateAssoc) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpsPrivateAssocResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeIpsPrivateAssocResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalOpenCount Field Functions 
    bool hasTotalOpenCount() const { return this->totalOpenCount_ != nullptr;};
    void deleteTotalOpenCount() { this->totalOpenCount_ = nullptr;};
    inline int64_t totalOpenCount() const { DARABONBA_PTR_GET_DEFAULT(totalOpenCount_, 0L) };
    inline DescribeIpsPrivateAssocResponseBody& setTotalOpenCount(int64_t totalOpenCount) { DARABONBA_PTR_SET_VALUE(totalOpenCount_, totalOpenCount) };


  protected:
    std::shared_ptr<vector<DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc>> ipsPrivateAssoc_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> totalOpenCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
