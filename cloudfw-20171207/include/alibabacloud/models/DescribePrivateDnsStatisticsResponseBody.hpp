// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class PrivateDnsRegionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateDnsRegionList& obj) { 
        DARABONBA_PTR_TO_JSON(DomainNameCount, domainNameCount_);
        DARABONBA_PTR_TO_JSON(NewDomainNameCount, newDomainNameCount_);
        DARABONBA_PTR_TO_JSON(PrivateDnsCount, privateDnsCount_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateDnsRegionList& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainNameCount, domainNameCount_);
        DARABONBA_PTR_FROM_JSON(NewDomainNameCount, newDomainNameCount_);
        DARABONBA_PTR_FROM_JSON(PrivateDnsCount, privateDnsCount_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      };
      PrivateDnsRegionList() = default ;
      PrivateDnsRegionList(const PrivateDnsRegionList &) = default ;
      PrivateDnsRegionList(PrivateDnsRegionList &&) = default ;
      PrivateDnsRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateDnsRegionList() = default ;
      PrivateDnsRegionList& operator=(const PrivateDnsRegionList &) = default ;
      PrivateDnsRegionList& operator=(PrivateDnsRegionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainNameCount_ == nullptr
        && this->newDomainNameCount_ == nullptr && this->privateDnsCount_ == nullptr && this->regionNo_ == nullptr; };
      // domainNameCount Field Functions 
      bool hasDomainNameCount() const { return this->domainNameCount_ != nullptr;};
      void deleteDomainNameCount() { this->domainNameCount_ = nullptr;};
      inline int64_t getDomainNameCount() const { DARABONBA_PTR_GET_DEFAULT(domainNameCount_, 0L) };
      inline PrivateDnsRegionList& setDomainNameCount(int64_t domainNameCount) { DARABONBA_PTR_SET_VALUE(domainNameCount_, domainNameCount) };


      // newDomainNameCount Field Functions 
      bool hasNewDomainNameCount() const { return this->newDomainNameCount_ != nullptr;};
      void deleteNewDomainNameCount() { this->newDomainNameCount_ = nullptr;};
      inline int64_t getNewDomainNameCount() const { DARABONBA_PTR_GET_DEFAULT(newDomainNameCount_, 0L) };
      inline PrivateDnsRegionList& setNewDomainNameCount(int64_t newDomainNameCount) { DARABONBA_PTR_SET_VALUE(newDomainNameCount_, newDomainNameCount) };


      // privateDnsCount Field Functions 
      bool hasPrivateDnsCount() const { return this->privateDnsCount_ != nullptr;};
      void deletePrivateDnsCount() { this->privateDnsCount_ = nullptr;};
      inline int64_t getPrivateDnsCount() const { DARABONBA_PTR_GET_DEFAULT(privateDnsCount_, 0L) };
      inline PrivateDnsRegionList& setPrivateDnsCount(int64_t privateDnsCount) { DARABONBA_PTR_SET_VALUE(privateDnsCount_, privateDnsCount) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline PrivateDnsRegionList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    protected:
      shared_ptr<int64_t> domainNameCount_ {};
      shared_ptr<int64_t> newDomainNameCount_ {};
      shared_ptr<int64_t> privateDnsCount_ {};
      shared_ptr<string> regionNo_ {};
    };

    virtual bool empty() const override { return this->abnormalPrivateDnsCount_ == nullptr
        && this->createdPrivateDnsCount_ == nullptr && this->domainNameTotalCount_ == nullptr && this->newDomainNameTotalCount_ == nullptr && this->normalPrivateDnsCount_ == nullptr && this->privateDnsRegionList_ == nullptr
        && this->requestId_ == nullptr; };
    // abnormalPrivateDnsCount Field Functions 
    bool hasAbnormalPrivateDnsCount() const { return this->abnormalPrivateDnsCount_ != nullptr;};
    void deleteAbnormalPrivateDnsCount() { this->abnormalPrivateDnsCount_ = nullptr;};
    inline int64_t getAbnormalPrivateDnsCount() const { DARABONBA_PTR_GET_DEFAULT(abnormalPrivateDnsCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setAbnormalPrivateDnsCount(int64_t abnormalPrivateDnsCount) { DARABONBA_PTR_SET_VALUE(abnormalPrivateDnsCount_, abnormalPrivateDnsCount) };


    // createdPrivateDnsCount Field Functions 
    bool hasCreatedPrivateDnsCount() const { return this->createdPrivateDnsCount_ != nullptr;};
    void deleteCreatedPrivateDnsCount() { this->createdPrivateDnsCount_ = nullptr;};
    inline int64_t getCreatedPrivateDnsCount() const { DARABONBA_PTR_GET_DEFAULT(createdPrivateDnsCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setCreatedPrivateDnsCount(int64_t createdPrivateDnsCount) { DARABONBA_PTR_SET_VALUE(createdPrivateDnsCount_, createdPrivateDnsCount) };


    // domainNameTotalCount Field Functions 
    bool hasDomainNameTotalCount() const { return this->domainNameTotalCount_ != nullptr;};
    void deleteDomainNameTotalCount() { this->domainNameTotalCount_ = nullptr;};
    inline int64_t getDomainNameTotalCount() const { DARABONBA_PTR_GET_DEFAULT(domainNameTotalCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setDomainNameTotalCount(int64_t domainNameTotalCount) { DARABONBA_PTR_SET_VALUE(domainNameTotalCount_, domainNameTotalCount) };


    // newDomainNameTotalCount Field Functions 
    bool hasNewDomainNameTotalCount() const { return this->newDomainNameTotalCount_ != nullptr;};
    void deleteNewDomainNameTotalCount() { this->newDomainNameTotalCount_ = nullptr;};
    inline int64_t getNewDomainNameTotalCount() const { DARABONBA_PTR_GET_DEFAULT(newDomainNameTotalCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setNewDomainNameTotalCount(int64_t newDomainNameTotalCount) { DARABONBA_PTR_SET_VALUE(newDomainNameTotalCount_, newDomainNameTotalCount) };


    // normalPrivateDnsCount Field Functions 
    bool hasNormalPrivateDnsCount() const { return this->normalPrivateDnsCount_ != nullptr;};
    void deleteNormalPrivateDnsCount() { this->normalPrivateDnsCount_ = nullptr;};
    inline int64_t getNormalPrivateDnsCount() const { DARABONBA_PTR_GET_DEFAULT(normalPrivateDnsCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBody& setNormalPrivateDnsCount(int64_t normalPrivateDnsCount) { DARABONBA_PTR_SET_VALUE(normalPrivateDnsCount_, normalPrivateDnsCount) };


    // privateDnsRegionList Field Functions 
    bool hasPrivateDnsRegionList() const { return this->privateDnsRegionList_ != nullptr;};
    void deletePrivateDnsRegionList() { this->privateDnsRegionList_ = nullptr;};
    inline const vector<DescribePrivateDnsStatisticsResponseBody::PrivateDnsRegionList> & getPrivateDnsRegionList() const { DARABONBA_PTR_GET_CONST(privateDnsRegionList_, vector<DescribePrivateDnsStatisticsResponseBody::PrivateDnsRegionList>) };
    inline vector<DescribePrivateDnsStatisticsResponseBody::PrivateDnsRegionList> getPrivateDnsRegionList() { DARABONBA_PTR_GET(privateDnsRegionList_, vector<DescribePrivateDnsStatisticsResponseBody::PrivateDnsRegionList>) };
    inline DescribePrivateDnsStatisticsResponseBody& setPrivateDnsRegionList(const vector<DescribePrivateDnsStatisticsResponseBody::PrivateDnsRegionList> & privateDnsRegionList) { DARABONBA_PTR_SET_VALUE(privateDnsRegionList_, privateDnsRegionList) };
    inline DescribePrivateDnsStatisticsResponseBody& setPrivateDnsRegionList(vector<DescribePrivateDnsStatisticsResponseBody::PrivateDnsRegionList> && privateDnsRegionList) { DARABONBA_PTR_SET_RVALUE(privateDnsRegionList_, privateDnsRegionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrivateDnsStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> abnormalPrivateDnsCount_ {};
    shared_ptr<int64_t> createdPrivateDnsCount_ {};
    shared_ptr<int64_t> domainNameTotalCount_ {};
    shared_ptr<int64_t> newDomainNameTotalCount_ {};
    shared_ptr<int64_t> normalPrivateDnsCount_ {};
    shared_ptr<vector<DescribePrivateDnsStatisticsResponseBody::PrivateDnsRegionList>> privateDnsRegionList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
