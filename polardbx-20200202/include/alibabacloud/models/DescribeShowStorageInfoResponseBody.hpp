// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWSTORAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWSTORAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeShowStorageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowStorageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowStorageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeShowStorageInfoResponseBody() = default ;
    DescribeShowStorageInfoResponseBody(const DescribeShowStorageInfoResponseBody &) = default ;
    DescribeShowStorageInfoResponseBody(DescribeShowStorageInfoResponseBody &&) = default ;
    DescribeShowStorageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowStorageInfoResponseBody() = default ;
    DescribeShowStorageInfoResponseBody& operator=(const DescribeShowStorageInfoResponseBody &) = default ;
    DescribeShowStorageInfoResponseBody& operator=(DescribeShowStorageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(StorageInfos, storageInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(StorageInfos, storageInfos_);
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
      class StorageInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Class, class_);
          DARABONBA_PTR_TO_JSON(DbCount, dbCount_);
          DARABONBA_PTR_TO_JSON(Deletable, deletable_);
          DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_TO_JSON(InstKind, instKind_);
          DARABONBA_PTR_TO_JSON(IsHealthy, isHealthy_);
          DARABONBA_PTR_TO_JSON(LeaderNode, leaderNode_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageInstName, storageInstName_);
        };
        friend void from_json(const Darabonba::Json& j, StorageInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Class, class_);
          DARABONBA_PTR_FROM_JSON(DbCount, dbCount_);
          DARABONBA_PTR_FROM_JSON(Deletable, deletable_);
          DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_FROM_JSON(InstKind, instKind_);
          DARABONBA_PTR_FROM_JSON(IsHealthy, isHealthy_);
          DARABONBA_PTR_FROM_JSON(LeaderNode, leaderNode_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageInstName, storageInstName_);
        };
        StorageInfos() = default ;
        StorageInfos(const StorageInfos &) = default ;
        StorageInfos(StorageInfos &&) = default ;
        StorageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageInfos() = default ;
        StorageInfos& operator=(const StorageInfos &) = default ;
        StorageInfos& operator=(StorageInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->class_ == nullptr
        && this->dbCount_ == nullptr && this->deletable_ == nullptr && this->groupCount_ == nullptr && this->instKind_ == nullptr && this->isHealthy_ == nullptr
        && this->leaderNode_ == nullptr && this->status_ == nullptr && this->storageInstName_ == nullptr; };
        // class Field Functions 
        bool hasClass() const { return this->class_ != nullptr;};
        void deleteClass() { this->class_ = nullptr;};
        inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
        inline StorageInfos& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


        // dbCount Field Functions 
        bool hasDbCount() const { return this->dbCount_ != nullptr;};
        void deleteDbCount() { this->dbCount_ = nullptr;};
        inline int64_t getDbCount() const { DARABONBA_PTR_GET_DEFAULT(dbCount_, 0L) };
        inline StorageInfos& setDbCount(int64_t dbCount) { DARABONBA_PTR_SET_VALUE(dbCount_, dbCount) };


        // deletable Field Functions 
        bool hasDeletable() const { return this->deletable_ != nullptr;};
        void deleteDeletable() { this->deletable_ = nullptr;};
        inline bool getDeletable() const { DARABONBA_PTR_GET_DEFAULT(deletable_, false) };
        inline StorageInfos& setDeletable(bool deletable) { DARABONBA_PTR_SET_VALUE(deletable_, deletable) };


        // groupCount Field Functions 
        bool hasGroupCount() const { return this->groupCount_ != nullptr;};
        void deleteGroupCount() { this->groupCount_ = nullptr;};
        inline int64_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0L) };
        inline StorageInfos& setGroupCount(int64_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


        // instKind Field Functions 
        bool hasInstKind() const { return this->instKind_ != nullptr;};
        void deleteInstKind() { this->instKind_ = nullptr;};
        inline string getInstKind() const { DARABONBA_PTR_GET_DEFAULT(instKind_, "") };
        inline StorageInfos& setInstKind(string instKind) { DARABONBA_PTR_SET_VALUE(instKind_, instKind) };


        // isHealthy Field Functions 
        bool hasIsHealthy() const { return this->isHealthy_ != nullptr;};
        void deleteIsHealthy() { this->isHealthy_ = nullptr;};
        inline bool getIsHealthy() const { DARABONBA_PTR_GET_DEFAULT(isHealthy_, false) };
        inline StorageInfos& setIsHealthy(bool isHealthy) { DARABONBA_PTR_SET_VALUE(isHealthy_, isHealthy) };


        // leaderNode Field Functions 
        bool hasLeaderNode() const { return this->leaderNode_ != nullptr;};
        void deleteLeaderNode() { this->leaderNode_ = nullptr;};
        inline string getLeaderNode() const { DARABONBA_PTR_GET_DEFAULT(leaderNode_, "") };
        inline StorageInfos& setLeaderNode(string leaderNode) { DARABONBA_PTR_SET_VALUE(leaderNode_, leaderNode) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline StorageInfos& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageInstName Field Functions 
        bool hasStorageInstName() const { return this->storageInstName_ != nullptr;};
        void deleteStorageInstName() { this->storageInstName_ = nullptr;};
        inline string getStorageInstName() const { DARABONBA_PTR_GET_DEFAULT(storageInstName_, "") };
        inline StorageInfos& setStorageInstName(string storageInstName) { DARABONBA_PTR_SET_VALUE(storageInstName_, storageInstName) };


      protected:
        shared_ptr<string> class_ {};
        shared_ptr<int64_t> dbCount_ {};
        shared_ptr<bool> deletable_ {};
        shared_ptr<int64_t> groupCount_ {};
        shared_ptr<string> instKind_ {};
        shared_ptr<bool> isHealthy_ {};
        shared_ptr<string> leaderNode_ {};
        shared_ptr<int64_t> status_ {};
        shared_ptr<string> storageInstName_ {};
      };

      virtual bool empty() const override { return this->storageInfos_ == nullptr; };
      // storageInfos Field Functions 
      bool hasStorageInfos() const { return this->storageInfos_ != nullptr;};
      void deleteStorageInfos() { this->storageInfos_ = nullptr;};
      inline const vector<Data::StorageInfos> & getStorageInfos() const { DARABONBA_PTR_GET_CONST(storageInfos_, vector<Data::StorageInfos>) };
      inline vector<Data::StorageInfos> getStorageInfos() { DARABONBA_PTR_GET(storageInfos_, vector<Data::StorageInfos>) };
      inline Data& setStorageInfos(const vector<Data::StorageInfos> & storageInfos) { DARABONBA_PTR_SET_VALUE(storageInfos_, storageInfos) };
      inline Data& setStorageInfos(vector<Data::StorageInfos> && storageInfos) { DARABONBA_PTR_SET_RVALUE(storageInfos_, storageInfos) };


    protected:
      shared_ptr<vector<Data::StorageInfos>> storageInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeShowStorageInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeShowStorageInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeShowStorageInfoResponseBody::Data) };
    inline DescribeShowStorageInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeShowStorageInfoResponseBody::Data) };
    inline DescribeShowStorageInfoResponseBody& setData(const DescribeShowStorageInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeShowStorageInfoResponseBody& setData(DescribeShowStorageInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeShowStorageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeShowStorageInfoResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
