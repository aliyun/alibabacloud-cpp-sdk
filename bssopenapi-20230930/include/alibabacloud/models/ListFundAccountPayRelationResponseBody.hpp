// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNDACCOUNTPAYRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNDACCOUNTPAYRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListFundAccountPayRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFundAccountPayRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFundAccountPayRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFundAccountPayRelationResponseBody() = default ;
    ListFundAccountPayRelationResponseBody(const ListFundAccountPayRelationResponseBody &) = default ;
    ListFundAccountPayRelationResponseBody(ListFundAccountPayRelationResponseBody &&) = default ;
    ListFundAccountPayRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFundAccountPayRelationResponseBody() = default ;
    ListFundAccountPayRelationResponseBody& operator=(const ListFundAccountPayRelationResponseBody &) = default ;
    ListFundAccountPayRelationResponseBody& operator=(ListFundAccountPayRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(Ecid, ecid_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
        DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
        DARABONBA_PTR_TO_JSON(IneffectiveTime, ineffectiveTime_);
        DARABONBA_PTR_TO_JSON(Nbid, nbid_);
        DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_TO_JSON(OperatorNo, operatorNo_);
        DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(Site, site_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(Ecid, ecid_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
        DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
        DARABONBA_PTR_FROM_JSON(IneffectiveTime, ineffectiveTime_);
        DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
        DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_FROM_JSON(OperatorNo, operatorNo_);
        DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(Site, site_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->ecid_ == nullptr && this->effectiveTime_ == nullptr && this->fundAccountId_ == nullptr && this->fundAccountOwnerAccountId_ == nullptr
        && this->ineffectiveTime_ == nullptr && this->nbid_ == nullptr && this->operatorName_ == nullptr && this->operatorNo_ == nullptr && this->operatorType_ == nullptr
        && this->relationType_ == nullptr && this->site_ == nullptr && this->status_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // ecid Field Functions 
      bool hasEcid() const { return this->ecid_ != nullptr;};
      void deleteEcid() { this->ecid_ = nullptr;};
      inline string getEcid() const { DARABONBA_PTR_GET_DEFAULT(ecid_, "") };
      inline Data& setEcid(string ecid) { DARABONBA_PTR_SET_VALUE(ecid_, ecid) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline Data& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // fundAccountId Field Functions 
      bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
      void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
      inline string getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
      inline Data& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


      // fundAccountOwnerAccountId Field Functions 
      bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
      void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
      inline string getFundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, "") };
      inline Data& setFundAccountOwnerAccountId(string fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


      // ineffectiveTime Field Functions 
      bool hasIneffectiveTime() const { return this->ineffectiveTime_ != nullptr;};
      void deleteIneffectiveTime() { this->ineffectiveTime_ = nullptr;};
      inline string getIneffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(ineffectiveTime_, "") };
      inline Data& setIneffectiveTime(string ineffectiveTime) { DARABONBA_PTR_SET_VALUE(ineffectiveTime_, ineffectiveTime) };


      // nbid Field Functions 
      bool hasNbid() const { return this->nbid_ != nullptr;};
      void deleteNbid() { this->nbid_ = nullptr;};
      inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
      inline Data& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline Data& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // operatorNo Field Functions 
      bool hasOperatorNo() const { return this->operatorNo_ != nullptr;};
      void deleteOperatorNo() { this->operatorNo_ = nullptr;};
      inline string getOperatorNo() const { DARABONBA_PTR_GET_DEFAULT(operatorNo_, "") };
      inline Data& setOperatorNo(string operatorNo) { DARABONBA_PTR_SET_VALUE(operatorNo_, operatorNo) };


      // operatorType Field Functions 
      bool hasOperatorType() const { return this->operatorType_ != nullptr;};
      void deleteOperatorType() { this->operatorType_ = nullptr;};
      inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
      inline Data& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline Data& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // site Field Functions 
      bool hasSite() const { return this->site_ != nullptr;};
      void deleteSite() { this->site_ = nullptr;};
      inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
      inline Data& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<string> accountName_ {};
      shared_ptr<string> ecid_ {};
      shared_ptr<string> effectiveTime_ {};
      shared_ptr<string> fundAccountId_ {};
      shared_ptr<string> fundAccountOwnerAccountId_ {};
      shared_ptr<string> ineffectiveTime_ {};
      shared_ptr<string> nbid_ {};
      shared_ptr<string> operatorName_ {};
      shared_ptr<string> operatorNo_ {};
      shared_ptr<string> operatorType_ {};
      shared_ptr<string> relationType_ {};
      shared_ptr<string> site_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->metadata_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListFundAccountPayRelationResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListFundAccountPayRelationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListFundAccountPayRelationResponseBody::Data>) };
    inline vector<ListFundAccountPayRelationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListFundAccountPayRelationResponseBody::Data>) };
    inline ListFundAccountPayRelationResponseBody& setData(const vector<ListFundAccountPayRelationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFundAccountPayRelationResponseBody& setData(vector<ListFundAccountPayRelationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline ListFundAccountPayRelationResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListFundAccountPayRelationResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFundAccountPayRelationResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFundAccountPayRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFundAccountPayRelationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<ListFundAccountPayRelationResponseBody::Data>> data_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
