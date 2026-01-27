// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDPDEPARTMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDPDEPARTMENTSRESPONSEBODY_HPP_
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
  class ListIdpDepartmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdpDepartmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdpDepartmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIdpDepartmentsResponseBody() = default ;
    ListIdpDepartmentsResponseBody(const ListIdpDepartmentsResponseBody &) = default ;
    ListIdpDepartmentsResponseBody(ListIdpDepartmentsResponseBody &&) = default ;
    ListIdpDepartmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdpDepartmentsResponseBody() = default ;
    ListIdpDepartmentsResponseBody& operator=(const ListIdpDepartmentsResponseBody &) = default ;
    ListIdpDepartmentsResponseBody& operator=(ListIdpDepartmentsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DataList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->idpConfigId_ == nullptr && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idpConfigId Field Functions 
        bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
        void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
        inline string getIdpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
        inline DataList& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> idpConfigId_ {};
        shared_ptr<string> name_ {};
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
    inline const ListIdpDepartmentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListIdpDepartmentsResponseBody::Data) };
    inline ListIdpDepartmentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListIdpDepartmentsResponseBody::Data) };
    inline ListIdpDepartmentsResponseBody& setData(const ListIdpDepartmentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIdpDepartmentsResponseBody& setData(ListIdpDepartmentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdpDepartmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListIdpDepartmentsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
