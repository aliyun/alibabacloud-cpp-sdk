// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELANGFUSEORGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELANGFUSEORGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeLangfuseOrgsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLangfuseOrgsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLangfuseOrgsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLangfuseOrgsResponseBody() = default ;
    DescribeLangfuseOrgsResponseBody(const DescribeLangfuseOrgsResponseBody &) = default ;
    DescribeLangfuseOrgsResponseBody(DescribeLangfuseOrgsResponseBody &&) = default ;
    DescribeLangfuseOrgsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLangfuseOrgsResponseBody() = default ;
    DescribeLangfuseOrgsResponseBody& operator=(const DescribeLangfuseOrgsResponseBody &) = default ;
    DescribeLangfuseOrgsResponseBody& operator=(DescribeLangfuseOrgsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Organizations, organizations_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Organizations, organizations_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Organizations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Organizations& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, Organizations& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        };
        Organizations() = default ;
        Organizations(const Organizations &) = default ;
        Organizations(Organizations &&) = default ;
        Organizations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Organizations() = default ;
        Organizations& operator=(const Organizations &) = default ;
        Organizations& operator=(Organizations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->name_ == nullptr && this->organizationId_ == nullptr && this->updatedAt_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Organizations& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Organizations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline Organizations& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Organizations& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        shared_ptr<string> createdAt_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> organizationId_ {};
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->organizations_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // organizations Field Functions 
      bool hasOrganizations() const { return this->organizations_ != nullptr;};
      void deleteOrganizations() { this->organizations_ = nullptr;};
      inline const vector<Data::Organizations> & getOrganizations() const { DARABONBA_PTR_GET_CONST(organizations_, vector<Data::Organizations>) };
      inline vector<Data::Organizations> getOrganizations() { DARABONBA_PTR_GET(organizations_, vector<Data::Organizations>) };
      inline Data& setOrganizations(const vector<Data::Organizations> & organizations) { DARABONBA_PTR_SET_VALUE(organizations_, organizations) };
      inline Data& setOrganizations(vector<Data::Organizations> && organizations) { DARABONBA_PTR_SET_RVALUE(organizations_, organizations) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::Organizations>> organizations_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeLangfuseOrgsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeLangfuseOrgsResponseBody::Data) };
    inline DescribeLangfuseOrgsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeLangfuseOrgsResponseBody::Data) };
    inline DescribeLangfuseOrgsResponseBody& setData(const DescribeLangfuseOrgsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLangfuseOrgsResponseBody& setData(DescribeLangfuseOrgsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLangfuseOrgsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLangfuseOrgsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
