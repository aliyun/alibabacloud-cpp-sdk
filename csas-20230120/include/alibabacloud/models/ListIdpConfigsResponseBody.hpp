// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDPCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDPCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListIdpConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdpConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdpConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIdpConfigsResponseBody() = default ;
    ListIdpConfigsResponseBody(const ListIdpConfigsResponseBody &) = default ;
    ListIdpConfigsResponseBody(ListIdpConfigsResponseBody &&) = default ;
    ListIdpConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdpConfigsResponseBody() = default ;
    ListIdpConfigsResponseBody& operator=(const ListIdpConfigsResponseBody &) = default ;
    ListIdpConfigsResponseBody& operator=(ListIdpConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataList, dataList_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataList, dataList_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
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
      class DataList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Mfa, mfa_);
          DARABONBA_PTR_TO_JSON(MobileLoginType, mobileLoginType_);
          DARABONBA_PTR_TO_JSON(MobileMfaConfigType, mobileMfaConfigType_);
          DARABONBA_PTR_TO_JSON(MultiIdpInfo, multiIdpInfo_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PcLoginType, pcLoginType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, DataList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Mfa, mfa_);
          DARABONBA_PTR_FROM_JSON(MobileLoginType, mobileLoginType_);
          DARABONBA_PTR_FROM_JSON(MobileMfaConfigType, mobileMfaConfigType_);
          DARABONBA_PTR_FROM_JSON(MultiIdpInfo, multiIdpInfo_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PcLoginType, pcLoginType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        DataList() = default ;
        DataList(const DataList &) = default ;
        DataList(DataList &&) = default ;
        DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataList() = default ;
        DataList& operator=(const DataList &) = default ;
        DataList& operator=(DataList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->mfa_ == nullptr && this->mobileLoginType_ == nullptr && this->mobileMfaConfigType_ == nullptr && this->multiIdpInfo_ == nullptr
        && this->name_ == nullptr && this->pcLoginType_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // mfa Field Functions 
        bool hasMfa() const { return this->mfa_ != nullptr;};
        void deleteMfa() { this->mfa_ = nullptr;};
        inline string getMfa() const { DARABONBA_PTR_GET_DEFAULT(mfa_, "") };
        inline DataList& setMfa(string mfa) { DARABONBA_PTR_SET_VALUE(mfa_, mfa) };


        // mobileLoginType Field Functions 
        bool hasMobileLoginType() const { return this->mobileLoginType_ != nullptr;};
        void deleteMobileLoginType() { this->mobileLoginType_ = nullptr;};
        inline string getMobileLoginType() const { DARABONBA_PTR_GET_DEFAULT(mobileLoginType_, "") };
        inline DataList& setMobileLoginType(string mobileLoginType) { DARABONBA_PTR_SET_VALUE(mobileLoginType_, mobileLoginType) };


        // mobileMfaConfigType Field Functions 
        bool hasMobileMfaConfigType() const { return this->mobileMfaConfigType_ != nullptr;};
        void deleteMobileMfaConfigType() { this->mobileMfaConfigType_ = nullptr;};
        inline string getMobileMfaConfigType() const { DARABONBA_PTR_GET_DEFAULT(mobileMfaConfigType_, "") };
        inline DataList& setMobileMfaConfigType(string mobileMfaConfigType) { DARABONBA_PTR_SET_VALUE(mobileMfaConfigType_, mobileMfaConfigType) };


        // multiIdpInfo Field Functions 
        bool hasMultiIdpInfo() const { return this->multiIdpInfo_ != nullptr;};
        void deleteMultiIdpInfo() { this->multiIdpInfo_ = nullptr;};
        inline string getMultiIdpInfo() const { DARABONBA_PTR_GET_DEFAULT(multiIdpInfo_, "") };
        inline DataList& setMultiIdpInfo(string multiIdpInfo) { DARABONBA_PTR_SET_VALUE(multiIdpInfo_, multiIdpInfo) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pcLoginType Field Functions 
        bool hasPcLoginType() const { return this->pcLoginType_ != nullptr;};
        void deletePcLoginType() { this->pcLoginType_ = nullptr;};
        inline string getPcLoginType() const { DARABONBA_PTR_GET_DEFAULT(pcLoginType_, "") };
        inline DataList& setPcLoginType(string pcLoginType) { DARABONBA_PTR_SET_VALUE(pcLoginType_, pcLoginType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline DataList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> mfa_ {};
        shared_ptr<string> mobileLoginType_ {};
        shared_ptr<string> mobileMfaConfigType_ {};
        shared_ptr<string> multiIdpInfo_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> pcLoginType_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->dataList_ == nullptr
        && this->totalNum_ == nullptr; };
      // dataList Field Functions 
      bool hasDataList() const { return this->dataList_ != nullptr;};
      void deleteDataList() { this->dataList_ = nullptr;};
      inline const vector<Data::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Data::DataList>) };
      inline vector<Data::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<Data::DataList>) };
      inline Data& setDataList(const vector<Data::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
      inline Data& setDataList(vector<Data::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
      inline Data& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      shared_ptr<vector<Data::DataList>> dataList_ {};
      shared_ptr<int64_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListIdpConfigsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListIdpConfigsResponseBody::Data) };
    inline ListIdpConfigsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListIdpConfigsResponseBody::Data) };
    inline ListIdpConfigsResponseBody& setData(const ListIdpConfigsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIdpConfigsResponseBody& setData(ListIdpConfigsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdpConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListIdpConfigsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
