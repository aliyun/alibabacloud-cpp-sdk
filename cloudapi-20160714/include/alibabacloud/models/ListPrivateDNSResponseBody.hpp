// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEDNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEDNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ListPrivateDNSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateDNSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrivateDNSList, privateDNSList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateDNSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrivateDNSList, privateDNSList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPrivateDNSResponseBody() = default ;
    ListPrivateDNSResponseBody(const ListPrivateDNSResponseBody &) = default ;
    ListPrivateDNSResponseBody(ListPrivateDNSResponseBody &&) = default ;
    ListPrivateDNSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateDNSResponseBody() = default ;
    ListPrivateDNSResponseBody& operator=(const ListPrivateDNSResponseBody &) = default ;
    ListPrivateDNSResponseBody& operator=(ListPrivateDNSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrivateDNSList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateDNSList& obj) { 
        DARABONBA_PTR_TO_JSON(BindInstances, bindInstances_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateDNSList& obj) { 
        DARABONBA_PTR_FROM_JSON(BindInstances, bindInstances_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      PrivateDNSList() = default ;
      PrivateDNSList(const PrivateDNSList &) = default ;
      PrivateDNSList(PrivateDNSList &&) = default ;
      PrivateDNSList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateDNSList() = default ;
      PrivateDNSList& operator=(const PrivateDNSList &) = default ;
      PrivateDNSList& operator=(PrivateDNSList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(Record, record_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(Record, record_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->record_ == nullptr
        && this->weight_ == nullptr; };
        // record Field Functions 
        bool hasRecord() const { return this->record_ != nullptr;};
        void deleteRecord() { this->record_ = nullptr;};
        inline string getRecord() const { DARABONBA_PTR_GET_DEFAULT(record_, "") };
        inline Records& setRecord(string record) { DARABONBA_PTR_SET_VALUE(record_, record) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Records& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The resolution record.
        shared_ptr<string> record_ {};
        // The weight of the record.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->bindInstances_ == nullptr
        && this->createdTime_ == nullptr && this->intranetDomain_ == nullptr && this->records_ == nullptr && this->type_ == nullptr; };
      // bindInstances Field Functions 
      bool hasBindInstances() const { return this->bindInstances_ != nullptr;};
      void deleteBindInstances() { this->bindInstances_ = nullptr;};
      inline const vector<string> & getBindInstances() const { DARABONBA_PTR_GET_CONST(bindInstances_, vector<string>) };
      inline vector<string> getBindInstances() { DARABONBA_PTR_GET(bindInstances_, vector<string>) };
      inline PrivateDNSList& setBindInstances(const vector<string> & bindInstances) { DARABONBA_PTR_SET_VALUE(bindInstances_, bindInstances) };
      inline PrivateDNSList& setBindInstances(vector<string> && bindInstances) { DARABONBA_PTR_SET_RVALUE(bindInstances_, bindInstances) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline PrivateDNSList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // intranetDomain Field Functions 
      bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
      void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
      inline string getIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
      inline PrivateDNSList& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<PrivateDNSList::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<PrivateDNSList::Records>) };
      inline vector<PrivateDNSList::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<PrivateDNSList::Records>) };
      inline PrivateDNSList& setRecords(const vector<PrivateDNSList::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline PrivateDNSList& setRecords(vector<PrivateDNSList::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PrivateDNSList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The instances that are associated with the resolution.
      shared_ptr<vector<string>> bindInstances_ {};
      // The time when the resolution was created. The time is displayed in UTC.
      shared_ptr<string> createdTime_ {};
      // The internal domain name.
      shared_ptr<string> intranetDomain_ {};
      // The resolution records.
      shared_ptr<vector<PrivateDNSList::Records>> records_ {};
      // The internal domain name resolution type. Valid values:
      // 
      // *   VPC: resolution for VPC access authorizations. A resolution of this type can be bound only to traditional dedicated instances.
      // *   A: resolution that supports A records. A resolution of this type can be bound only to VPC integration dedicated instances.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->privateDNSList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPrivateDNSResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPrivateDNSResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privateDNSList Field Functions 
    bool hasPrivateDNSList() const { return this->privateDNSList_ != nullptr;};
    void deletePrivateDNSList() { this->privateDNSList_ = nullptr;};
    inline const vector<ListPrivateDNSResponseBody::PrivateDNSList> & getPrivateDNSList() const { DARABONBA_PTR_GET_CONST(privateDNSList_, vector<ListPrivateDNSResponseBody::PrivateDNSList>) };
    inline vector<ListPrivateDNSResponseBody::PrivateDNSList> getPrivateDNSList() { DARABONBA_PTR_GET(privateDNSList_, vector<ListPrivateDNSResponseBody::PrivateDNSList>) };
    inline ListPrivateDNSResponseBody& setPrivateDNSList(const vector<ListPrivateDNSResponseBody::PrivateDNSList> & privateDNSList) { DARABONBA_PTR_SET_VALUE(privateDNSList_, privateDNSList) };
    inline ListPrivateDNSResponseBody& setPrivateDNSList(vector<ListPrivateDNSResponseBody::PrivateDNSList> && privateDNSList) { DARABONBA_PTR_SET_RVALUE(privateDNSList_, privateDNSList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateDNSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPrivateDNSResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The internal domain name resolutions.
    shared_ptr<vector<ListPrivateDNSResponseBody::PrivateDNSList>> privateDNSList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
