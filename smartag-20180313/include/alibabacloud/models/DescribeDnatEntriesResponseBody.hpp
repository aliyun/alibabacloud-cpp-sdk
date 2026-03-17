// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNATENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNATENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeDnatEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnatEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnatEntries, dnatEntries_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnatEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnatEntries, dnatEntries_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDnatEntriesResponseBody() = default ;
    DescribeDnatEntriesResponseBody(const DescribeDnatEntriesResponseBody &) = default ;
    DescribeDnatEntriesResponseBody(DescribeDnatEntriesResponseBody &&) = default ;
    DescribeDnatEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnatEntriesResponseBody() = default ;
    DescribeDnatEntriesResponseBody& operator=(const DescribeDnatEntriesResponseBody &) = default ;
    DescribeDnatEntriesResponseBody& operator=(DescribeDnatEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DnatEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnatEntries& obj) { 
        DARABONBA_PTR_TO_JSON(DnatEntry, dnatEntry_);
      };
      friend void from_json(const Darabonba::Json& j, DnatEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(DnatEntry, dnatEntry_);
      };
      DnatEntries() = default ;
      DnatEntries(const DnatEntries &) = default ;
      DnatEntries(DnatEntries &&) = default ;
      DnatEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnatEntries() = default ;
      DnatEntries& operator=(const DnatEntries &) = default ;
      DnatEntries& operator=(DnatEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DnatEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DnatEntry& obj) { 
          DARABONBA_PTR_TO_JSON(DnatEntryId, dnatEntryId_);
          DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
          DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
          DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
          DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_TO_JSON(SagId, sagId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DnatEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(DnatEntryId, dnatEntryId_);
          DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
          DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
          DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
          DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_FROM_JSON(SagId, sagId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DnatEntry() = default ;
        DnatEntry(const DnatEntry &) = default ;
        DnatEntry(DnatEntry &&) = default ;
        DnatEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DnatEntry() = default ;
        DnatEntry& operator=(const DnatEntry &) = default ;
        DnatEntry& operator=(DnatEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dnatEntryId_ == nullptr
        && this->externalIp_ == nullptr && this->externalPort_ == nullptr && this->internalIp_ == nullptr && this->internalPort_ == nullptr && this->ipProtocol_ == nullptr
        && this->sagId_ == nullptr && this->type_ == nullptr; };
        // dnatEntryId Field Functions 
        bool hasDnatEntryId() const { return this->dnatEntryId_ != nullptr;};
        void deleteDnatEntryId() { this->dnatEntryId_ = nullptr;};
        inline string getDnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(dnatEntryId_, "") };
        inline DnatEntry& setDnatEntryId(string dnatEntryId) { DARABONBA_PTR_SET_VALUE(dnatEntryId_, dnatEntryId) };


        // externalIp Field Functions 
        bool hasExternalIp() const { return this->externalIp_ != nullptr;};
        void deleteExternalIp() { this->externalIp_ = nullptr;};
        inline string getExternalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
        inline DnatEntry& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


        // externalPort Field Functions 
        bool hasExternalPort() const { return this->externalPort_ != nullptr;};
        void deleteExternalPort() { this->externalPort_ = nullptr;};
        inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
        inline DnatEntry& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


        // internalIp Field Functions 
        bool hasInternalIp() const { return this->internalIp_ != nullptr;};
        void deleteInternalIp() { this->internalIp_ = nullptr;};
        inline string getInternalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
        inline DnatEntry& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


        // internalPort Field Functions 
        bool hasInternalPort() const { return this->internalPort_ != nullptr;};
        void deleteInternalPort() { this->internalPort_ = nullptr;};
        inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
        inline DnatEntry& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


        // ipProtocol Field Functions 
        bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
        void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
        inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
        inline DnatEntry& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


        // sagId Field Functions 
        bool hasSagId() const { return this->sagId_ != nullptr;};
        void deleteSagId() { this->sagId_ = nullptr;};
        inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
        inline DnatEntry& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DnatEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> dnatEntryId_ {};
        shared_ptr<string> externalIp_ {};
        shared_ptr<string> externalPort_ {};
        shared_ptr<string> internalIp_ {};
        shared_ptr<string> internalPort_ {};
        shared_ptr<string> ipProtocol_ {};
        shared_ptr<string> sagId_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dnatEntry_ == nullptr; };
      // dnatEntry Field Functions 
      bool hasDnatEntry() const { return this->dnatEntry_ != nullptr;};
      void deleteDnatEntry() { this->dnatEntry_ = nullptr;};
      inline const vector<DnatEntries::DnatEntry> & getDnatEntry() const { DARABONBA_PTR_GET_CONST(dnatEntry_, vector<DnatEntries::DnatEntry>) };
      inline vector<DnatEntries::DnatEntry> getDnatEntry() { DARABONBA_PTR_GET(dnatEntry_, vector<DnatEntries::DnatEntry>) };
      inline DnatEntries& setDnatEntry(const vector<DnatEntries::DnatEntry> & dnatEntry) { DARABONBA_PTR_SET_VALUE(dnatEntry_, dnatEntry) };
      inline DnatEntries& setDnatEntry(vector<DnatEntries::DnatEntry> && dnatEntry) { DARABONBA_PTR_SET_RVALUE(dnatEntry_, dnatEntry) };


    protected:
      shared_ptr<vector<DnatEntries::DnatEntry>> dnatEntry_ {};
    };

    virtual bool empty() const override { return this->dnatEntries_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dnatEntries Field Functions 
    bool hasDnatEntries() const { return this->dnatEntries_ != nullptr;};
    void deleteDnatEntries() { this->dnatEntries_ = nullptr;};
    inline const DescribeDnatEntriesResponseBody::DnatEntries & getDnatEntries() const { DARABONBA_PTR_GET_CONST(dnatEntries_, DescribeDnatEntriesResponseBody::DnatEntries) };
    inline DescribeDnatEntriesResponseBody::DnatEntries getDnatEntries() { DARABONBA_PTR_GET(dnatEntries_, DescribeDnatEntriesResponseBody::DnatEntries) };
    inline DescribeDnatEntriesResponseBody& setDnatEntries(const DescribeDnatEntriesResponseBody::DnatEntries & dnatEntries) { DARABONBA_PTR_SET_VALUE(dnatEntries_, dnatEntries) };
    inline DescribeDnatEntriesResponseBody& setDnatEntries(DescribeDnatEntriesResponseBody::DnatEntries && dnatEntries) { DARABONBA_PTR_SET_RVALUE(dnatEntries_, dnatEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDnatEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDnatEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnatEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDnatEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeDnatEntriesResponseBody::DnatEntries> dnatEntries_ {};
    // The page number of the returned page. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Default value: **10**. Maximum value: **50**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
