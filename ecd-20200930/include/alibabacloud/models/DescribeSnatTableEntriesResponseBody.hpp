// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSnatTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnatTableEntries, snatTableEntries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnatTableEntries, snatTableEntries_);
    };
    DescribeSnatTableEntriesResponseBody() = default ;
    DescribeSnatTableEntriesResponseBody(const DescribeSnatTableEntriesResponseBody &) = default ;
    DescribeSnatTableEntriesResponseBody(DescribeSnatTableEntriesResponseBody &&) = default ;
    DescribeSnatTableEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesResponseBody() = default ;
    DescribeSnatTableEntriesResponseBody& operator=(const DescribeSnatTableEntriesResponseBody &) = default ;
    DescribeSnatTableEntriesResponseBody& operator=(DescribeSnatTableEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnatTableEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnatTableEntries& obj) { 
        DARABONBA_PTR_TO_JSON(EipAffinity, eipAffinity_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
        DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
        DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
        DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
        DARABONBA_PTR_TO_JSON(SourceCIDR, sourceCIDR_);
        DARABONBA_PTR_TO_JSON(SourceVSwitchId, sourceVSwitchId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SnatTableEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(EipAffinity, eipAffinity_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
        DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
        DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
        DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
        DARABONBA_PTR_FROM_JSON(SourceCIDR, sourceCIDR_);
        DARABONBA_PTR_FROM_JSON(SourceVSwitchId, sourceVSwitchId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SnatTableEntries() = default ;
      SnatTableEntries(const SnatTableEntries &) = default ;
      SnatTableEntries(SnatTableEntries &&) = default ;
      SnatTableEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnatTableEntries() = default ;
      SnatTableEntries& operator=(const SnatTableEntries &) = default ;
      SnatTableEntries& operator=(SnatTableEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eipAffinity_ == nullptr
        && this->natGatewayId_ == nullptr && this->snatEntryId_ == nullptr && this->snatEntryName_ == nullptr && this->snatIp_ == nullptr && this->snatTableId_ == nullptr
        && this->sourceCIDR_ == nullptr && this->sourceVSwitchId_ == nullptr && this->status_ == nullptr; };
      // eipAffinity Field Functions 
      bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
      void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
      inline string getEipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, "") };
      inline SnatTableEntries& setEipAffinity(string eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline SnatTableEntries& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // snatEntryId Field Functions 
      bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
      void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
      inline string getSnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
      inline SnatTableEntries& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


      // snatEntryName Field Functions 
      bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
      void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
      inline string getSnatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
      inline SnatTableEntries& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


      // snatIp Field Functions 
      bool hasSnatIp() const { return this->snatIp_ != nullptr;};
      void deleteSnatIp() { this->snatIp_ = nullptr;};
      inline string getSnatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
      inline SnatTableEntries& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


      // snatTableId Field Functions 
      bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
      void deleteSnatTableId() { this->snatTableId_ = nullptr;};
      inline string getSnatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
      inline SnatTableEntries& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


      // sourceCIDR Field Functions 
      bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
      void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
      inline string getSourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
      inline SnatTableEntries& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


      // sourceVSwitchId Field Functions 
      bool hasSourceVSwitchId() const { return this->sourceVSwitchId_ != nullptr;};
      void deleteSourceVSwitchId() { this->sourceVSwitchId_ = nullptr;};
      inline string getSourceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(sourceVSwitchId_, "") };
      inline SnatTableEntries& setSourceVSwitchId(string sourceVSwitchId) { DARABONBA_PTR_SET_VALUE(sourceVSwitchId_, sourceVSwitchId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SnatTableEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> eipAffinity_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> snatEntryId_ {};
      shared_ptr<string> snatEntryName_ {};
      shared_ptr<string> snatIp_ {};
      shared_ptr<string> snatTableId_ {};
      shared_ptr<string> sourceCIDR_ {};
      shared_ptr<string> sourceVSwitchId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->snatTableEntries_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnatTableEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnatTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snatTableEntries Field Functions 
    bool hasSnatTableEntries() const { return this->snatTableEntries_ != nullptr;};
    void deleteSnatTableEntries() { this->snatTableEntries_ = nullptr;};
    inline const vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries> & getSnatTableEntries() const { DARABONBA_PTR_GET_CONST(snatTableEntries_, vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries>) };
    inline vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries> getSnatTableEntries() { DARABONBA_PTR_GET(snatTableEntries_, vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries>) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(const vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries> & snatTableEntries) { DARABONBA_PTR_SET_VALUE(snatTableEntries_, snatTableEntries) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries> && snatTableEntries) { DARABONBA_PTR_SET_RVALUE(snatTableEntries_, snatTableEntries) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries>> snatTableEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
