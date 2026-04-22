// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInterAuthStatisticsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInterAuthStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurPage, curPage_);
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInterAuthStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurPage, curPage_);
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeInterAuthStatisticsSummaryResponseBody() = default ;
    DescribeInterAuthStatisticsSummaryResponseBody(const DescribeInterAuthStatisticsSummaryResponseBody &) = default ;
    DescribeInterAuthStatisticsSummaryResponseBody(DescribeInterAuthStatisticsSummaryResponseBody &&) = default ;
    DescribeInterAuthStatisticsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInterAuthStatisticsSummaryResponseBody() = default ;
    DescribeInterAuthStatisticsSummaryResponseBody& operator=(const DescribeInterAuthStatisticsSummaryResponseBody &) = default ;
    DescribeInterAuthStatisticsSummaryResponseBody& operator=(DescribeInterAuthStatisticsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageData& obj) { 
        DARABONBA_PTR_TO_JSON(AggrTimestamp, aggrTimestamp_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(FluctuationValue, fluctuationValue_);
        DARABONBA_PTR_TO_JSON(Line, line_);
        DARABONBA_PTR_TO_JSON(PreviousCount, previousCount_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Qtype, qtype_);
        DARABONBA_PTR_TO_JSON(Ratio, ratio_);
        DARABONBA_PTR_TO_JSON(Rcode, rcode_);
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_TO_JSON(SourceIsp, sourceIsp_);
        DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
        DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
      };
      friend void from_json(const Darabonba::Json& j, PageData& obj) { 
        DARABONBA_PTR_FROM_JSON(AggrTimestamp, aggrTimestamp_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(FluctuationValue, fluctuationValue_);
        DARABONBA_PTR_FROM_JSON(Line, line_);
        DARABONBA_PTR_FROM_JSON(PreviousCount, previousCount_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Qtype, qtype_);
        DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
        DARABONBA_PTR_FROM_JSON(Rcode, rcode_);
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_FROM_JSON(SourceIsp, sourceIsp_);
        DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
        DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
      };
      PageData() = default ;
      PageData(const PageData &) = default ;
      PageData(PageData &&) = default ;
      PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageData() = default ;
      PageData& operator=(const PageData &) = default ;
      PageData& operator=(PageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aggrTimestamp_ == nullptr
        && this->count_ == nullptr && this->domainName_ == nullptr && this->fluctuationValue_ == nullptr && this->line_ == nullptr && this->previousCount_ == nullptr
        && this->protocol_ == nullptr && this->qtype_ == nullptr && this->ratio_ == nullptr && this->rcode_ == nullptr && this->sourceIp_ == nullptr
        && this->sourceIsp_ == nullptr && this->sourceRegion_ == nullptr && this->zoneName_ == nullptr; };
      // aggrTimestamp Field Functions 
      bool hasAggrTimestamp() const { return this->aggrTimestamp_ != nullptr;};
      void deleteAggrTimestamp() { this->aggrTimestamp_ = nullptr;};
      inline int64_t getAggrTimestamp() const { DARABONBA_PTR_GET_DEFAULT(aggrTimestamp_, 0L) };
      inline PageData& setAggrTimestamp(int64_t aggrTimestamp) { DARABONBA_PTR_SET_VALUE(aggrTimestamp_, aggrTimestamp) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline PageData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline PageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // fluctuationValue Field Functions 
      bool hasFluctuationValue() const { return this->fluctuationValue_ != nullptr;};
      void deleteFluctuationValue() { this->fluctuationValue_ = nullptr;};
      inline int32_t getFluctuationValue() const { DARABONBA_PTR_GET_DEFAULT(fluctuationValue_, 0) };
      inline PageData& setFluctuationValue(int32_t fluctuationValue) { DARABONBA_PTR_SET_VALUE(fluctuationValue_, fluctuationValue) };


      // line Field Functions 
      bool hasLine() const { return this->line_ != nullptr;};
      void deleteLine() { this->line_ = nullptr;};
      inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
      inline PageData& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


      // previousCount Field Functions 
      bool hasPreviousCount() const { return this->previousCount_ != nullptr;};
      void deletePreviousCount() { this->previousCount_ = nullptr;};
      inline int64_t getPreviousCount() const { DARABONBA_PTR_GET_DEFAULT(previousCount_, 0L) };
      inline PageData& setPreviousCount(int64_t previousCount) { DARABONBA_PTR_SET_VALUE(previousCount_, previousCount) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline PageData& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // qtype Field Functions 
      bool hasQtype() const { return this->qtype_ != nullptr;};
      void deleteQtype() { this->qtype_ = nullptr;};
      inline string getQtype() const { DARABONBA_PTR_GET_DEFAULT(qtype_, "") };
      inline PageData& setQtype(string qtype) { DARABONBA_PTR_SET_VALUE(qtype_, qtype) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline int64_t getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0L) };
      inline PageData& setRatio(int64_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


      // rcode Field Functions 
      bool hasRcode() const { return this->rcode_ != nullptr;};
      void deleteRcode() { this->rcode_ = nullptr;};
      inline string getRcode() const { DARABONBA_PTR_GET_DEFAULT(rcode_, "") };
      inline PageData& setRcode(string rcode) { DARABONBA_PTR_SET_VALUE(rcode_, rcode) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline PageData& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // sourceIsp Field Functions 
      bool hasSourceIsp() const { return this->sourceIsp_ != nullptr;};
      void deleteSourceIsp() { this->sourceIsp_ = nullptr;};
      inline string getSourceIsp() const { DARABONBA_PTR_GET_DEFAULT(sourceIsp_, "") };
      inline PageData& setSourceIsp(string sourceIsp) { DARABONBA_PTR_SET_VALUE(sourceIsp_, sourceIsp) };


      // sourceRegion Field Functions 
      bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
      void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
      inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
      inline PageData& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


      // zoneName Field Functions 
      bool hasZoneName() const { return this->zoneName_ != nullptr;};
      void deleteZoneName() { this->zoneName_ = nullptr;};
      inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
      inline PageData& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


    protected:
      shared_ptr<int64_t> aggrTimestamp_ {};
      shared_ptr<int64_t> count_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<int32_t> fluctuationValue_ {};
      shared_ptr<string> line_ {};
      shared_ptr<int64_t> previousCount_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> qtype_ {};
      shared_ptr<int64_t> ratio_ {};
      shared_ptr<string> rcode_ {};
      shared_ptr<string> sourceIp_ {};
      shared_ptr<string> sourceIsp_ {};
      shared_ptr<string> sourceRegion_ {};
      shared_ptr<string> zoneName_ {};
    };

    virtual bool empty() const override { return this->curPage_ == nullptr
        && this->pageData_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalPage_ == nullptr && this->totalSize_ == nullptr; };
    // curPage Field Functions 
    bool hasCurPage() const { return this->curPage_ != nullptr;};
    void deleteCurPage() { this->curPage_ = nullptr;};
    inline int32_t getCurPage() const { DARABONBA_PTR_GET_DEFAULT(curPage_, 0) };
    inline DescribeInterAuthStatisticsSummaryResponseBody& setCurPage(int32_t curPage) { DARABONBA_PTR_SET_VALUE(curPage_, curPage) };


    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<DescribeInterAuthStatisticsSummaryResponseBody::PageData> & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<DescribeInterAuthStatisticsSummaryResponseBody::PageData>) };
    inline vector<DescribeInterAuthStatisticsSummaryResponseBody::PageData> getPageData() { DARABONBA_PTR_GET(pageData_, vector<DescribeInterAuthStatisticsSummaryResponseBody::PageData>) };
    inline DescribeInterAuthStatisticsSummaryResponseBody& setPageData(const vector<DescribeInterAuthStatisticsSummaryResponseBody::PageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeInterAuthStatisticsSummaryResponseBody& setPageData(vector<DescribeInterAuthStatisticsSummaryResponseBody::PageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInterAuthStatisticsSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInterAuthStatisticsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeInterAuthStatisticsSummaryResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeInterAuthStatisticsSummaryResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    shared_ptr<int32_t> curPage_ {};
    shared_ptr<vector<DescribeInterAuthStatisticsSummaryResponseBody::PageData>> pageData_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalPage_ {};
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
