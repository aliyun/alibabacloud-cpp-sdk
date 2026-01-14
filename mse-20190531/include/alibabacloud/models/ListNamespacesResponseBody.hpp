// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNamespacesResponseBody() = default ;
    ListNamespacesResponseBody(const ListNamespacesResponseBody &) = default ;
    ListNamespacesResponseBody(ListNamespacesResponseBody &&) = default ;
    ListNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesResponseBody() = default ;
    ListNamespacesResponseBody& operator=(const ListNamespacesResponseBody &) = default ;
    ListNamespacesResponseBody& operator=(ListNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(AppCount, appCount_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Describe, describe_);
          DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Describe, describe_);
          DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCount_ == nullptr
        && this->createTime_ == nullptr && this->describe_ == nullptr && this->instanceCount_ == nullptr && this->namespace_ == nullptr && this->region_ == nullptr
        && this->updateTime_ == nullptr && this->userId_ == nullptr && this->version_ == nullptr; };
        // appCount Field Functions 
        bool hasAppCount() const { return this->appCount_ != nullptr;};
        void deleteAppCount() { this->appCount_ = nullptr;};
        inline int32_t getAppCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
        inline Results& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Results& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // describe Field Functions 
        bool hasDescribe() const { return this->describe_ != nullptr;};
        void deleteDescribe() { this->describe_ = nullptr;};
        inline string getDescribe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
        inline Results& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


        // instanceCount Field Functions 
        bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
        void deleteInstanceCount() { this->instanceCount_ = nullptr;};
        inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
        inline Results& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Results& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Results& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Results& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Results& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline Results& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<int32_t> appCount_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> describe_ {};
        shared_ptr<int64_t> instanceCount_ {};
        shared_ptr<string> namespace_ {};
        shared_ptr<string> region_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<int32_t> version_ {};
      };

      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AppCount, appCount_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Describe, describe_);
          DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_ANY_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Describe, describe_);
          DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_ANY_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCount_ == nullptr
        && this->createTime_ == nullptr && this->describe_ == nullptr && this->instanceCount_ == nullptr && this->namespace_ == nullptr && this->region_ == nullptr
        && this->tags_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->version_ == nullptr; };
        // appCount Field Functions 
        bool hasAppCount() const { return this->appCount_ != nullptr;};
        void deleteAppCount() { this->appCount_ = nullptr;};
        inline int32_t getAppCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
        inline Result& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // describe Field Functions 
        bool hasDescribe() const { return this->describe_ != nullptr;};
        void deleteDescribe() { this->describe_ = nullptr;};
        inline string getDescribe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
        inline Result& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


        // instanceCount Field Functions 
        bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
        void deleteInstanceCount() { this->instanceCount_ = nullptr;};
        inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
        inline Result& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Result& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Result& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline         const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
        Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
        inline Result& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
        inline Result& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Result& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Result& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline Result& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<int32_t> appCount_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> describe_ {};
        shared_ptr<int64_t> instanceCount_ {};
        shared_ptr<string> namespace_ {};
        shared_ptr<string> region_ {};
        Darabonba::Json tags_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<int32_t> version_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->results_ == nullptr && this->totalSize_ == nullptr; };
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


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Result>> result_ {};
      shared_ptr<vector<Data::Results>> results_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListNamespacesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListNamespacesResponseBody::Data) };
    inline ListNamespacesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListNamespacesResponseBody::Data) };
    inline ListNamespacesResponseBody& setData(const ListNamespacesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNamespacesResponseBody& setData(ListNamespacesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListNamespacesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
