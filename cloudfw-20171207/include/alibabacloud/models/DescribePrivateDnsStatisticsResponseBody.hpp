// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrivateDnsStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateDnsStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalPrivateDnsCount, abnormalPrivateDnsCount_);
      DARABONBA_PTR_TO_JSON(CreatedPrivateDnsCount, createdPrivateDnsCount_);
      DARABONBA_PTR_TO_JSON(DomainNameTotalCount, domainNameTotalCount_);
      DARABONBA_PTR_TO_JSON(NewDomainNameTotalCount, newDomainNameTotalCount_);
      DARABONBA_PTR_TO_JSON(NormalPrivateDnsCount, normalPrivateDnsCount_);
      DARABONBA_PTR_TO_JSON(PrivateDnsRegionList, privateDnsRegionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateDnsStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalPrivateDnsCount, abnormalPrivateDnsCount_);
      DARABONBA_PTR_FROM_JSON(CreatedPrivateDnsCount, createdPrivateDnsCount_);
      DARABONBA_PTR_FROM_JSON(DomainNameTotalCount, domainNameTotalCount_);
      DARABONBA_PTR_FROM_JSON(NewDomainNameTotalCount, newDomainNameTotalCount_);
      DARABONBA_PTR_FROM_JSON(NormalPrivateDnsCount, normalPrivateDnsCount_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsRegionList, privateDnsRegionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrivateDnsStatisticsResponseBody() = default ;
    DescribePrivateDnsStatisticsResponseBody(const DescribePrivateDnsStatisticsResponseBody &) = default ;
    DescribePrivateDnsStatisticsResponseBody(DescribePrivateDnsStatisticsResponseBody &&) = default ;
    DescribePrivateDnsStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateDnsStatisticsResponseBody() = default ;
    DescribePrivateDnsStatisticsResponseBody& operator=(const DescribePrivateDnsStatisticsResponseBody &) = default ;
    DescribePrivateDnsStatisticsResponseBody& operator=(DescribePrivateDnsStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalPrivateDnsCount_ == nullptr
        && return this->createdPrivateDnsCount_ == nullptr && return this->domainNameTotalCount_ == nullptr && return this->newDomainNameTotalCount_ == nullptr && return this->normalPrivateDnsCount_ == nullptr && return this->privateDnsRegionList_ == nullptr
        && return this->requestId_ == nullptr; };
    // abnormalPrivateDnsCount Field Functions 
    bool hasAbnormalPrivateDnsCount() const { return this->abnormalPrivateDnsCount_ != nullptr;};
    void deleteAbnormalPrivateDnsCount() { this->abnormalPrivateDnsCount_ = nullptr;};
    inline int64_t abnormalPrivateDnsCount() const { DARABONBA_PTR_GET_DEFAULT(abnormalPrivateDnsCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setAbnormalPrivateDnsCount(int64_t abnormalPrivateDnsCount) { DARABONBA_PTR_SET_VALUE(abnormalPrivateDnsCount_, abnormalPrivateDnsCount) };


    // createdPrivateDnsCount Field Functions 
    bool hasCreatedPrivateDnsCount() const { return this->createdPrivateDnsCount_ != nullptr;};
    void deleteCreatedPrivateDnsCount() { this->createdPrivateDnsCount_ = nullptr;};
    inline int64_t createdPrivateDnsCount() const { DARABONBA_PTR_GET_DEFAULT(createdPrivateDnsCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setCreatedPrivateDnsCount(int64_t createdPrivateDnsCount) { DARABONBA_PTR_SET_VALUE(createdPrivateDnsCount_, createdPrivateDnsCount) };


    // domainNameTotalCount Field Functions 
    bool hasDomainNameTotalCount() const { return this->domainNameTotalCount_ != nullptr;};
    void deleteDomainNameTotalCount() { this->domainNameTotalCount_ = nullptr;};
    inline int64_t domainNameTotalCount() const { DARABONBA_PTR_GET_DEFAULT(domainNameTotalCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setDomainNameTotalCount(int64_t domainNameTotalCount) { DARABONBA_PTR_SET_VALUE(domainNameTotalCount_, domainNameTotalCount) };


    // newDomainNameTotalCount Field Functions 
    bool hasNewDomainNameTotalCount() const { return this->newDomainNameTotalCount_ != nullptr;};
    void deleteNewDomainNameTotalCount() { this->newDomainNameTotalCount_ = nullptr;};
    inline int64_t newDomainNameTotalCount() const { DARABONBA_PTR_GET_DEFAULT(newDomainNameTotalCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setNewDomainNameTotalCount(int64_t newDomainNameTotalCount) { DARABONBA_PTR_SET_VALUE(newDomainNameTotalCount_, newDomainNameTotalCount) };


    // normalPrivateDnsCount Field Functions 
    bool hasNormalPrivateDnsCount() const { return this->normalPrivateDnsCount_ != nullptr;};
    void deleteNormalPrivateDnsCount() { this->normalPrivateDnsCount_ = nullptr;};
    inline int64_t normalPrivateDnsCount() const { DARABONBA_PTR_GET_DEFAULT(normalPrivateDnsCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setNormalPrivateDnsCount(int64_t normalPrivateDnsCount) { DARABONBA_PTR_SET_VALUE(normalPrivateDnsCount_, normalPrivateDnsCount) };


    // privateDnsRegionList Field Functions 
    bool hasPrivateDnsRegionList() const { return this->privateDnsRegionList_ != nullptr;};
    void deletePrivateDnsRegionList() { this->privateDnsRegionList_ = nullptr;};
    inline const vector<DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList> & privateDnsRegionList() const { DARABONBA_PTR_GET_CONST(privateDnsRegionList_, vector<DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList>) };
    inline vector<DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList> privateDnsRegionList() { DARABONBA_PTR_GET(privateDnsRegionList_, vector<DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList>) };
    inline DescribePrivateDnsStatisticsResponseBody& setPrivateDnsRegionList(const vector<DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList> & privateDnsRegionList) { DARABONBA_PTR_SET_VALUE(privateDnsRegionList_, privateDnsRegionList) };
    inline DescribePrivateDnsStatisticsResponseBody& setPrivateDnsRegionList(vector<DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList> && privateDnsRegionList) { DARABONBA_PTR_SET_RVALUE(privateDnsRegionList_, privateDnsRegionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrivateDnsStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> abnormalPrivateDnsCount_ = nullptr;
    std::shared_ptr<int64_t> createdPrivateDnsCount_ = nullptr;
    std::shared_ptr<int64_t> domainNameTotalCount_ = nullptr;
    std::shared_ptr<int64_t> newDomainNameTotalCount_ = nullptr;
    std::shared_ptr<int64_t> normalPrivateDnsCount_ = nullptr;
    std::shared_ptr<vector<DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList>> privateDnsRegionList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
