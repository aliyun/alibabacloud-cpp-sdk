// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMAJORPROTECTIONBLACKIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMAJORPROTECTIONBLACKIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMajorProtectionBlackIpsResponseBodyIpList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeMajorProtectionBlackIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMajorProtectionBlackIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMajorProtectionBlackIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMajorProtectionBlackIpsResponseBody() = default ;
    DescribeMajorProtectionBlackIpsResponseBody(const DescribeMajorProtectionBlackIpsResponseBody &) = default ;
    DescribeMajorProtectionBlackIpsResponseBody(DescribeMajorProtectionBlackIpsResponseBody &&) = default ;
    DescribeMajorProtectionBlackIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMajorProtectionBlackIpsResponseBody() = default ;
    DescribeMajorProtectionBlackIpsResponseBody& operator=(const DescribeMajorProtectionBlackIpsResponseBody &) = default ;
    DescribeMajorProtectionBlackIpsResponseBody& operator=(DescribeMajorProtectionBlackIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipList_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<DescribeMajorProtectionBlackIpsResponseBodyIpList> & ipList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<DescribeMajorProtectionBlackIpsResponseBodyIpList>) };
    inline vector<DescribeMajorProtectionBlackIpsResponseBodyIpList> ipList() { DARABONBA_PTR_GET(ipList_, vector<DescribeMajorProtectionBlackIpsResponseBodyIpList>) };
    inline DescribeMajorProtectionBlackIpsResponseBody& setIpList(const vector<DescribeMajorProtectionBlackIpsResponseBodyIpList> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline DescribeMajorProtectionBlackIpsResponseBody& setIpList(vector<DescribeMajorProtectionBlackIpsResponseBodyIpList> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMajorProtectionBlackIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeMajorProtectionBlackIpsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array of IP addresses in the IP address blacklist.
    std::shared_ptr<vector<DescribeMajorProtectionBlackIpsResponseBodyIpList>> ipList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of IP addresses in the blacklist.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
