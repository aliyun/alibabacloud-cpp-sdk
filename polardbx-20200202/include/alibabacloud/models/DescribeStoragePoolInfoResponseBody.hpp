// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPOOLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPOOLINFORESPONSEBODY_HPP_
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
  class DescribeStoragePoolInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePoolInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePoolInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeStoragePoolInfoResponseBody() = default ;
    DescribeStoragePoolInfoResponseBody(const DescribeStoragePoolInfoResponseBody &) = default ;
    DescribeStoragePoolInfoResponseBody(DescribeStoragePoolInfoResponseBody &&) = default ;
    DescribeStoragePoolInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePoolInfoResponseBody() = default ;
    DescribeStoragePoolInfoResponseBody& operator=(const DescribeStoragePoolInfoResponseBody &) = default ;
    DescribeStoragePoolInfoResponseBody& operator=(DescribeStoragePoolInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(StoragePools, storagePools_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(StoragePools, storagePools_);
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
      class StoragePools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StoragePools& obj) { 
          DARABONBA_PTR_TO_JSON(Class, class_);
          DARABONBA_PTR_TO_JSON(DnIdList, dnIdList_);
          DARABONBA_PTR_TO_JSON(DnIdString, dnIdString_);
          DARABONBA_PTR_TO_JSON(Extra, extra_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(IdleDNIdList, idleDNIdList_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UnDeletableDNId, unDeletableDNId_);
        };
        friend void from_json(const Darabonba::Json& j, StoragePools& obj) { 
          DARABONBA_PTR_FROM_JSON(Class, class_);
          DARABONBA_PTR_FROM_JSON(DnIdList, dnIdList_);
          DARABONBA_PTR_FROM_JSON(DnIdString, dnIdString_);
          DARABONBA_PTR_FROM_JSON(Extra, extra_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(IdleDNIdList, idleDNIdList_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UnDeletableDNId, unDeletableDNId_);
        };
        StoragePools() = default ;
        StoragePools(const StoragePools &) = default ;
        StoragePools(StoragePools &&) = default ;
        StoragePools(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StoragePools() = default ;
        StoragePools& operator=(const StoragePools &) = default ;
        StoragePools& operator=(StoragePools &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->class_ == nullptr
        && this->dnIdList_ == nullptr && this->dnIdString_ == nullptr && this->extra_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->idleDNIdList_ == nullptr && this->name_ == nullptr && this->unDeletableDNId_ == nullptr; };
        // class Field Functions 
        bool hasClass() const { return this->class_ != nullptr;};
        void deleteClass() { this->class_ = nullptr;};
        inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
        inline StoragePools& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


        // dnIdList Field Functions 
        bool hasDnIdList() const { return this->dnIdList_ != nullptr;};
        void deleteDnIdList() { this->dnIdList_ = nullptr;};
        inline const vector<string> & getDnIdList() const { DARABONBA_PTR_GET_CONST(dnIdList_, vector<string>) };
        inline vector<string> getDnIdList() { DARABONBA_PTR_GET(dnIdList_, vector<string>) };
        inline StoragePools& setDnIdList(const vector<string> & dnIdList) { DARABONBA_PTR_SET_VALUE(dnIdList_, dnIdList) };
        inline StoragePools& setDnIdList(vector<string> && dnIdList) { DARABONBA_PTR_SET_RVALUE(dnIdList_, dnIdList) };


        // dnIdString Field Functions 
        bool hasDnIdString() const { return this->dnIdString_ != nullptr;};
        void deleteDnIdString() { this->dnIdString_ = nullptr;};
        inline string getDnIdString() const { DARABONBA_PTR_GET_DEFAULT(dnIdString_, "") };
        inline StoragePools& setDnIdString(string dnIdString) { DARABONBA_PTR_SET_VALUE(dnIdString_, dnIdString) };


        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
        inline StoragePools& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline StoragePools& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline StoragePools& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // idleDNIdList Field Functions 
        bool hasIdleDNIdList() const { return this->idleDNIdList_ != nullptr;};
        void deleteIdleDNIdList() { this->idleDNIdList_ = nullptr;};
        inline const vector<string> & getIdleDNIdList() const { DARABONBA_PTR_GET_CONST(idleDNIdList_, vector<string>) };
        inline vector<string> getIdleDNIdList() { DARABONBA_PTR_GET(idleDNIdList_, vector<string>) };
        inline StoragePools& setIdleDNIdList(const vector<string> & idleDNIdList) { DARABONBA_PTR_SET_VALUE(idleDNIdList_, idleDNIdList) };
        inline StoragePools& setIdleDNIdList(vector<string> && idleDNIdList) { DARABONBA_PTR_SET_RVALUE(idleDNIdList_, idleDNIdList) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline StoragePools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // unDeletableDNId Field Functions 
        bool hasUnDeletableDNId() const { return this->unDeletableDNId_ != nullptr;};
        void deleteUnDeletableDNId() { this->unDeletableDNId_ = nullptr;};
        inline string getUnDeletableDNId() const { DARABONBA_PTR_GET_DEFAULT(unDeletableDNId_, "") };
        inline StoragePools& setUnDeletableDNId(string unDeletableDNId) { DARABONBA_PTR_SET_VALUE(unDeletableDNId_, unDeletableDNId) };


      protected:
        shared_ptr<string> class_ {};
        shared_ptr<vector<string>> dnIdList_ {};
        // DN id
        shared_ptr<string> dnIdString_ {};
        shared_ptr<string> extra_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<vector<string>> idleDNIdList_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> unDeletableDNId_ {};
      };

      virtual bool empty() const override { return this->storagePools_ == nullptr; };
      // storagePools Field Functions 
      bool hasStoragePools() const { return this->storagePools_ != nullptr;};
      void deleteStoragePools() { this->storagePools_ = nullptr;};
      inline const vector<Data::StoragePools> & getStoragePools() const { DARABONBA_PTR_GET_CONST(storagePools_, vector<Data::StoragePools>) };
      inline vector<Data::StoragePools> getStoragePools() { DARABONBA_PTR_GET(storagePools_, vector<Data::StoragePools>) };
      inline Data& setStoragePools(const vector<Data::StoragePools> & storagePools) { DARABONBA_PTR_SET_VALUE(storagePools_, storagePools) };
      inline Data& setStoragePools(vector<Data::StoragePools> && storagePools) { DARABONBA_PTR_SET_RVALUE(storagePools_, storagePools) };


    protected:
      shared_ptr<vector<Data::StoragePools>> storagePools_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeStoragePoolInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeStoragePoolInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeStoragePoolInfoResponseBody::Data) };
    inline DescribeStoragePoolInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeStoragePoolInfoResponseBody::Data) };
    inline DescribeStoragePoolInfoResponseBody& setData(const DescribeStoragePoolInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeStoragePoolInfoResponseBody& setData(DescribeStoragePoolInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStoragePoolInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeStoragePoolInfoResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
