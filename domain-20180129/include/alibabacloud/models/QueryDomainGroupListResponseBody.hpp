// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDomainGroupListResponseBody() = default ;
    QueryDomainGroupListResponseBody(const QueryDomainGroupListResponseBody &) = default ;
    QueryDomainGroupListResponseBody(QueryDomainGroupListResponseBody &&) = default ;
    QueryDomainGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainGroupListResponseBody() = default ;
    QueryDomainGroupListResponseBody& operator=(const QueryDomainGroupListResponseBody &) = default ;
    QueryDomainGroupListResponseBody& operator=(QueryDomainGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DomainGroup, domainGroup_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainGroup, domainGroup_);
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
      class DomainGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainGroup& obj) { 
          DARABONBA_PTR_TO_JSON(BeingDeleted, beingDeleted_);
          DARABONBA_PTR_TO_JSON(CreationDate, creationDate_);
          DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
          DARABONBA_PTR_TO_JSON(DomainGroupName, domainGroupName_);
          DARABONBA_PTR_TO_JSON(DomainGroupStatus, domainGroupStatus_);
          DARABONBA_PTR_TO_JSON(ModificationDate, modificationDate_);
          DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
        };
        friend void from_json(const Darabonba::Json& j, DomainGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(BeingDeleted, beingDeleted_);
          DARABONBA_PTR_FROM_JSON(CreationDate, creationDate_);
          DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
          DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
          DARABONBA_PTR_FROM_JSON(DomainGroupStatus, domainGroupStatus_);
          DARABONBA_PTR_FROM_JSON(ModificationDate, modificationDate_);
          DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
        };
        DomainGroup() = default ;
        DomainGroup(const DomainGroup &) = default ;
        DomainGroup(DomainGroup &&) = default ;
        DomainGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainGroup() = default ;
        DomainGroup& operator=(const DomainGroup &) = default ;
        DomainGroup& operator=(DomainGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beingDeleted_ == nullptr
        && this->creationDate_ == nullptr && this->domainGroupId_ == nullptr && this->domainGroupName_ == nullptr && this->domainGroupStatus_ == nullptr && this->modificationDate_ == nullptr
        && this->totalNumber_ == nullptr; };
        // beingDeleted Field Functions 
        bool hasBeingDeleted() const { return this->beingDeleted_ != nullptr;};
        void deleteBeingDeleted() { this->beingDeleted_ = nullptr;};
        inline bool getBeingDeleted() const { DARABONBA_PTR_GET_DEFAULT(beingDeleted_, false) };
        inline DomainGroup& setBeingDeleted(bool beingDeleted) { DARABONBA_PTR_SET_VALUE(beingDeleted_, beingDeleted) };


        // creationDate Field Functions 
        bool hasCreationDate() const { return this->creationDate_ != nullptr;};
        void deleteCreationDate() { this->creationDate_ = nullptr;};
        inline string getCreationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
        inline DomainGroup& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


        // domainGroupId Field Functions 
        bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
        void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
        inline string getDomainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, "") };
        inline DomainGroup& setDomainGroupId(string domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


        // domainGroupName Field Functions 
        bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
        void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
        inline string getDomainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
        inline DomainGroup& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


        // domainGroupStatus Field Functions 
        bool hasDomainGroupStatus() const { return this->domainGroupStatus_ != nullptr;};
        void deleteDomainGroupStatus() { this->domainGroupStatus_ = nullptr;};
        inline string getDomainGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(domainGroupStatus_, "") };
        inline DomainGroup& setDomainGroupStatus(string domainGroupStatus) { DARABONBA_PTR_SET_VALUE(domainGroupStatus_, domainGroupStatus) };


        // modificationDate Field Functions 
        bool hasModificationDate() const { return this->modificationDate_ != nullptr;};
        void deleteModificationDate() { this->modificationDate_ = nullptr;};
        inline string getModificationDate() const { DARABONBA_PTR_GET_DEFAULT(modificationDate_, "") };
        inline DomainGroup& setModificationDate(string modificationDate) { DARABONBA_PTR_SET_VALUE(modificationDate_, modificationDate) };


        // totalNumber Field Functions 
        bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
        void deleteTotalNumber() { this->totalNumber_ = nullptr;};
        inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
        inline DomainGroup& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


      protected:
        shared_ptr<bool> beingDeleted_ {};
        shared_ptr<string> creationDate_ {};
        shared_ptr<string> domainGroupId_ {};
        shared_ptr<string> domainGroupName_ {};
        shared_ptr<string> domainGroupStatus_ {};
        shared_ptr<string> modificationDate_ {};
        shared_ptr<int32_t> totalNumber_ {};
      };

      virtual bool empty() const override { return this->domainGroup_ == nullptr; };
      // domainGroup Field Functions 
      bool hasDomainGroup() const { return this->domainGroup_ != nullptr;};
      void deleteDomainGroup() { this->domainGroup_ = nullptr;};
      inline const vector<Data::DomainGroup> & getDomainGroup() const { DARABONBA_PTR_GET_CONST(domainGroup_, vector<Data::DomainGroup>) };
      inline vector<Data::DomainGroup> getDomainGroup() { DARABONBA_PTR_GET(domainGroup_, vector<Data::DomainGroup>) };
      inline Data& setDomainGroup(const vector<Data::DomainGroup> & domainGroup) { DARABONBA_PTR_SET_VALUE(domainGroup_, domainGroup) };
      inline Data& setDomainGroup(vector<Data::DomainGroup> && domainGroup) { DARABONBA_PTR_SET_RVALUE(domainGroup_, domainGroup) };


    protected:
      shared_ptr<vector<Data::DomainGroup>> domainGroup_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDomainGroupListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDomainGroupListResponseBody::Data) };
    inline QueryDomainGroupListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDomainGroupListResponseBody::Data) };
    inline QueryDomainGroupListResponseBody& setData(const QueryDomainGroupListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDomainGroupListResponseBody& setData(QueryDomainGroupListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryDomainGroupListResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
