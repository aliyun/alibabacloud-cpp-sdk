// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPRODSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPRODSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAllProdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllProdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllProdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAllProdsResponseBody() = default ;
    ListAllProdsResponseBody(const ListAllProdsResponseBody &) = default ;
    ListAllProdsResponseBody(ListAllProdsResponseBody &&) = default ;
    ListAllProdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllProdsResponseBody() = default ;
    ListAllProdsResponseBody& operator=(const ListAllProdsResponseBody &) = default ;
    ListAllProdsResponseBody& operator=(ListAllProdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProdList, prodList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProdList, prodList_);
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
      class ProdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProdList& obj) { 
          DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
          DARABONBA_PTR_TO_JSON(ImportedLogCount, importedLogCount_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
          DARABONBA_PTR_TO_JSON(TotalLogCount, totalLogCount_);
        };
        friend void from_json(const Darabonba::Json& j, ProdList& obj) { 
          DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
          DARABONBA_PTR_FROM_JSON(ImportedLogCount, importedLogCount_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
          DARABONBA_PTR_FROM_JSON(TotalLogCount, totalLogCount_);
        };
        ProdList() = default ;
        ProdList(const ProdList &) = default ;
        ProdList(ProdList &&) = default ;
        ProdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProdList() = default ;
        ProdList& operator=(const ProdList &) = default ;
        ProdList& operator=(ProdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cloudCode_ == nullptr
        && this->importedLogCount_ == nullptr && this->modifyTime_ == nullptr && this->prodCode_ == nullptr && this->totalLogCount_ == nullptr; };
        // cloudCode Field Functions 
        bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
        void deleteCloudCode() { this->cloudCode_ = nullptr;};
        inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
        inline ProdList& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


        // importedLogCount Field Functions 
        bool hasImportedLogCount() const { return this->importedLogCount_ != nullptr;};
        void deleteImportedLogCount() { this->importedLogCount_ = nullptr;};
        inline int32_t getImportedLogCount() const { DARABONBA_PTR_GET_DEFAULT(importedLogCount_, 0) };
        inline ProdList& setImportedLogCount(int32_t importedLogCount) { DARABONBA_PTR_SET_VALUE(importedLogCount_, importedLogCount) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline ProdList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // prodCode Field Functions 
        bool hasProdCode() const { return this->prodCode_ != nullptr;};
        void deleteProdCode() { this->prodCode_ = nullptr;};
        inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
        inline ProdList& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


        // totalLogCount Field Functions 
        bool hasTotalLogCount() const { return this->totalLogCount_ != nullptr;};
        void deleteTotalLogCount() { this->totalLogCount_ = nullptr;};
        inline int32_t getTotalLogCount() const { DARABONBA_PTR_GET_DEFAULT(totalLogCount_, 0) };
        inline ProdList& setTotalLogCount(int32_t totalLogCount) { DARABONBA_PTR_SET_VALUE(totalLogCount_, totalLogCount) };


      protected:
        // The code of the cloud service provider. Valid values:
        // 
        // *   qcloud: Tencent Cloud.
        // *   aliyun: Alibaba Cloud.
        // *   hcloud: Huawei Cloud.
        shared_ptr<string> cloudCode_ {};
        // The number of logs within the cloud service that are added to the threat analysis feature.
        shared_ptr<int32_t> importedLogCount_ {};
        // The time when the logs within the cloud service were last added to the threat analysis feature.
        shared_ptr<string> modifyTime_ {};
        // The code of the cloud service.
        shared_ptr<string> prodCode_ {};
        // The total number of logs within the cloud service.
        shared_ptr<int32_t> totalLogCount_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->prodList_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // prodList Field Functions 
      bool hasProdList() const { return this->prodList_ != nullptr;};
      void deleteProdList() { this->prodList_ = nullptr;};
      inline const vector<Data::ProdList> & getProdList() const { DARABONBA_PTR_GET_CONST(prodList_, vector<Data::ProdList>) };
      inline vector<Data::ProdList> getProdList() { DARABONBA_PTR_GET(prodList_, vector<Data::ProdList>) };
      inline Data& setProdList(const vector<Data::ProdList> & prodList) { DARABONBA_PTR_SET_VALUE(prodList_, prodList) };
      inline Data& setProdList(vector<Data::ProdList> && prodList) { DARABONBA_PTR_SET_RVALUE(prodList_, prodList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The cloud services.
      shared_ptr<vector<Data::ProdList>> prodList_ {};
      // The total number of logs.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAllProdsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAllProdsResponseBody::Data) };
    inline ListAllProdsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAllProdsResponseBody::Data) };
    inline ListAllProdsResponseBody& setData(const ListAllProdsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAllProdsResponseBody& setData(ListAllProdsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllProdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<ListAllProdsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
