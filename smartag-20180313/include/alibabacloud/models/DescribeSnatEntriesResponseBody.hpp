// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATENTRIESRESPONSEBODY_HPP_
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
  class DescribeSnatEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnatEntries, snatEntries_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnatEntries, snatEntries_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSnatEntriesResponseBody() = default ;
    DescribeSnatEntriesResponseBody(const DescribeSnatEntriesResponseBody &) = default ;
    DescribeSnatEntriesResponseBody(DescribeSnatEntriesResponseBody &&) = default ;
    DescribeSnatEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatEntriesResponseBody() = default ;
    DescribeSnatEntriesResponseBody& operator=(const DescribeSnatEntriesResponseBody &) = default ;
    DescribeSnatEntriesResponseBody& operator=(DescribeSnatEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnatEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnatEntries& obj) { 
        DARABONBA_PTR_TO_JSON(SnatEntry, snatEntry_);
      };
      friend void from_json(const Darabonba::Json& j, SnatEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(SnatEntry, snatEntry_);
      };
      SnatEntries() = default ;
      SnatEntries(const SnatEntries &) = default ;
      SnatEntries(SnatEntries &&) = default ;
      SnatEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnatEntries() = default ;
      SnatEntries& operator=(const SnatEntries &) = default ;
      SnatEntries& operator=(SnatEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnatEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnatEntry& obj) { 
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
        };
        friend void from_json(const Darabonba::Json& j, SnatEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
        };
        SnatEntry() = default ;
        SnatEntry(const SnatEntry &) = default ;
        SnatEntry(SnatEntry &&) = default ;
        SnatEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnatEntry() = default ;
        SnatEntry& operator=(const SnatEntry &) = default ;
        SnatEntry& operator=(SnatEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->snatIp_ == nullptr; };
        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline SnatEntry& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SnatEntry& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SnatEntry& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // snatIp Field Functions 
        bool hasSnatIp() const { return this->snatIp_ != nullptr;};
        void deleteSnatIp() { this->snatIp_ = nullptr;};
        inline string getSnatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
        inline SnatEntry& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


      protected:
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> snatIp_ {};
      };

      virtual bool empty() const override { return this->snatEntry_ == nullptr; };
      // snatEntry Field Functions 
      bool hasSnatEntry() const { return this->snatEntry_ != nullptr;};
      void deleteSnatEntry() { this->snatEntry_ = nullptr;};
      inline const vector<SnatEntries::SnatEntry> & getSnatEntry() const { DARABONBA_PTR_GET_CONST(snatEntry_, vector<SnatEntries::SnatEntry>) };
      inline vector<SnatEntries::SnatEntry> getSnatEntry() { DARABONBA_PTR_GET(snatEntry_, vector<SnatEntries::SnatEntry>) };
      inline SnatEntries& setSnatEntry(const vector<SnatEntries::SnatEntry> & snatEntry) { DARABONBA_PTR_SET_VALUE(snatEntry_, snatEntry) };
      inline SnatEntries& setSnatEntry(vector<SnatEntries::SnatEntry> && snatEntry) { DARABONBA_PTR_SET_RVALUE(snatEntry_, snatEntry) };


    protected:
      shared_ptr<vector<SnatEntries::SnatEntry>> snatEntry_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->snatEntries_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnatEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnatEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnatEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snatEntries Field Functions 
    bool hasSnatEntries() const { return this->snatEntries_ != nullptr;};
    void deleteSnatEntries() { this->snatEntries_ = nullptr;};
    inline const DescribeSnatEntriesResponseBody::SnatEntries & getSnatEntries() const { DARABONBA_PTR_GET_CONST(snatEntries_, DescribeSnatEntriesResponseBody::SnatEntries) };
    inline DescribeSnatEntriesResponseBody::SnatEntries getSnatEntries() { DARABONBA_PTR_GET(snatEntries_, DescribeSnatEntriesResponseBody::SnatEntries) };
    inline DescribeSnatEntriesResponseBody& setSnatEntries(const DescribeSnatEntriesResponseBody::SnatEntries & snatEntries) { DARABONBA_PTR_SET_VALUE(snatEntries_, snatEntries) };
    inline DescribeSnatEntriesResponseBody& setSnatEntries(DescribeSnatEntriesResponseBody::SnatEntries && snatEntries) { DARABONBA_PTR_SET_RVALUE(snatEntries_, snatEntries) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnatEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeSnatEntriesResponseBody::SnatEntries> snatEntries_ {};
    // The total number of SNAT entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
