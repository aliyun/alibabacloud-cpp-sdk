// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKMSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKMSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKmsInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKmsInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstances, kmsInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKmsInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstances, kmsInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKmsInstancesResponseBody() = default ;
    ListKmsInstancesResponseBody(const ListKmsInstancesResponseBody &) = default ;
    ListKmsInstancesResponseBody(ListKmsInstancesResponseBody &&) = default ;
    ListKmsInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKmsInstancesResponseBody() = default ;
    ListKmsInstancesResponseBody& operator=(const ListKmsInstancesResponseBody &) = default ;
    ListKmsInstancesResponseBody& operator=(ListKmsInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KmsInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KmsInstances& obj) { 
        DARABONBA_PTR_TO_JSON(KmsInstance, kmsInstance_);
      };
      friend void from_json(const Darabonba::Json& j, KmsInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(KmsInstance, kmsInstance_);
      };
      KmsInstances() = default ;
      KmsInstances(const KmsInstances &) = default ;
      KmsInstances(KmsInstances &&) = default ;
      KmsInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KmsInstances() = default ;
      KmsInstances& operator=(const KmsInstances &) = default ;
      KmsInstances& operator=(KmsInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KmsInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KmsInstance& obj) { 
          DARABONBA_PTR_TO_JSON(KmsInstanceArn, kmsInstanceArn_);
          DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, KmsInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(KmsInstanceArn, kmsInstanceArn_);
          DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
        };
        KmsInstance() = default ;
        KmsInstance(const KmsInstance &) = default ;
        KmsInstance(KmsInstance &&) = default ;
        KmsInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KmsInstance() = default ;
        KmsInstance& operator=(const KmsInstance &) = default ;
        KmsInstance& operator=(KmsInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->kmsInstanceArn_ == nullptr
        && this->kmsInstanceId_ == nullptr; };
        // kmsInstanceArn Field Functions 
        bool hasKmsInstanceArn() const { return this->kmsInstanceArn_ != nullptr;};
        void deleteKmsInstanceArn() { this->kmsInstanceArn_ = nullptr;};
        inline string getKmsInstanceArn() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceArn_, "") };
        inline KmsInstance& setKmsInstanceArn(string kmsInstanceArn) { DARABONBA_PTR_SET_VALUE(kmsInstanceArn_, kmsInstanceArn) };


        // kmsInstanceId Field Functions 
        bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
        void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
        inline string getKmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
        inline KmsInstance& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


      protected:
        shared_ptr<string> kmsInstanceArn_ {};
        shared_ptr<string> kmsInstanceId_ {};
      };

      virtual bool empty() const override { return this->kmsInstance_ == nullptr; };
      // kmsInstance Field Functions 
      bool hasKmsInstance() const { return this->kmsInstance_ != nullptr;};
      void deleteKmsInstance() { this->kmsInstance_ = nullptr;};
      inline const vector<KmsInstances::KmsInstance> & getKmsInstance() const { DARABONBA_PTR_GET_CONST(kmsInstance_, vector<KmsInstances::KmsInstance>) };
      inline vector<KmsInstances::KmsInstance> getKmsInstance() { DARABONBA_PTR_GET(kmsInstance_, vector<KmsInstances::KmsInstance>) };
      inline KmsInstances& setKmsInstance(const vector<KmsInstances::KmsInstance> & kmsInstance) { DARABONBA_PTR_SET_VALUE(kmsInstance_, kmsInstance) };
      inline KmsInstances& setKmsInstance(vector<KmsInstances::KmsInstance> && kmsInstance) { DARABONBA_PTR_SET_RVALUE(kmsInstance_, kmsInstance) };


    protected:
      shared_ptr<vector<KmsInstances::KmsInstance>> kmsInstance_ {};
    };

    virtual bool empty() const override { return this->kmsInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // kmsInstances Field Functions 
    bool hasKmsInstances() const { return this->kmsInstances_ != nullptr;};
    void deleteKmsInstances() { this->kmsInstances_ = nullptr;};
    inline const ListKmsInstancesResponseBody::KmsInstances & getKmsInstances() const { DARABONBA_PTR_GET_CONST(kmsInstances_, ListKmsInstancesResponseBody::KmsInstances) };
    inline ListKmsInstancesResponseBody::KmsInstances getKmsInstances() { DARABONBA_PTR_GET(kmsInstances_, ListKmsInstancesResponseBody::KmsInstances) };
    inline ListKmsInstancesResponseBody& setKmsInstances(const ListKmsInstancesResponseBody::KmsInstances & kmsInstances) { DARABONBA_PTR_SET_VALUE(kmsInstances_, kmsInstances) };
    inline ListKmsInstancesResponseBody& setKmsInstances(ListKmsInstancesResponseBody::KmsInstances && kmsInstances) { DARABONBA_PTR_SET_RVALUE(kmsInstances_, kmsInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListKmsInstancesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListKmsInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKmsInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListKmsInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListKmsInstancesResponseBody::KmsInstances> kmsInstances_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of KMS instances returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of KMS instances.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
