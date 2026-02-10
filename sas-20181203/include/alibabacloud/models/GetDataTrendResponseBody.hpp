// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDataTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataTrendResponseBody() = default ;
    GetDataTrendResponseBody(const GetDataTrendResponseBody &) = default ;
    GetDataTrendResponseBody(GetDataTrendResponseBody &&) = default ;
    GetDataTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrendResponseBody() = default ;
    GetDataTrendResponseBody& operator=(const GetDataTrendResponseBody &) = default ;
    GetDataTrendResponseBody& operator=(GetDataTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DateList, dateList_);
        DARABONBA_PTR_TO_JSON(DateStrList, dateStrList_);
        DARABONBA_PTR_TO_JSON(ItemList, itemList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DateList, dateList_);
        DARABONBA_PTR_FROM_JSON(DateStrList, dateStrList_);
        DARABONBA_PTR_FROM_JSON(ItemList, itemList_);
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
      class ItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemList& obj) { 
          DARABONBA_PTR_TO_JSON(CountList, countList_);
          DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        };
        friend void from_json(const Darabonba::Json& j, ItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(CountList, countList_);
          DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        };
        ItemList() = default ;
        ItemList(const ItemList &) = default ;
        ItemList(ItemList &&) = default ;
        ItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemList() = default ;
        ItemList& operator=(const ItemList &) = default ;
        ItemList& operator=(ItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->countList_ == nullptr
        && this->keyName_ == nullptr; };
        // countList Field Functions 
        bool hasCountList() const { return this->countList_ != nullptr;};
        void deleteCountList() { this->countList_ = nullptr;};
        inline const vector<int64_t> & getCountList() const { DARABONBA_PTR_GET_CONST(countList_, vector<int64_t>) };
        inline vector<int64_t> getCountList() { DARABONBA_PTR_GET(countList_, vector<int64_t>) };
        inline ItemList& setCountList(const vector<int64_t> & countList) { DARABONBA_PTR_SET_VALUE(countList_, countList) };
        inline ItemList& setCountList(vector<int64_t> && countList) { DARABONBA_PTR_SET_RVALUE(countList_, countList) };


        // keyName Field Functions 
        bool hasKeyName() const { return this->keyName_ != nullptr;};
        void deleteKeyName() { this->keyName_ = nullptr;};
        inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
        inline ItemList& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


      protected:
        // The statistical values of the trend data.
        shared_ptr<vector<int64_t>> countList_ {};
        // The type of the security data. Valid values:
        // 
        // *   **HC_NEW**: the number of new baseline risks.
        // *   **HC_OPERATE**: the number of handled baseline risks.
        // *   **VUL_NEW**: the number of new vulnerabilities.
        // *   **VUL_OPERATE**: the number of handled vulnerabilities.
        // *   **SUSP_NEW**: the number of new alerts.
        // *   **SUSP_OPERATE**: the number of handled alerts.
        shared_ptr<string> keyName_ {};
      };

      virtual bool empty() const override { return this->dateList_ == nullptr
        && this->dateStrList_ == nullptr && this->itemList_ == nullptr; };
      // dateList Field Functions 
      bool hasDateList() const { return this->dateList_ != nullptr;};
      void deleteDateList() { this->dateList_ = nullptr;};
      inline const vector<int32_t> & getDateList() const { DARABONBA_PTR_GET_CONST(dateList_, vector<int32_t>) };
      inline vector<int32_t> getDateList() { DARABONBA_PTR_GET(dateList_, vector<int32_t>) };
      inline Data& setDateList(const vector<int32_t> & dateList) { DARABONBA_PTR_SET_VALUE(dateList_, dateList) };
      inline Data& setDateList(vector<int32_t> && dateList) { DARABONBA_PTR_SET_RVALUE(dateList_, dateList) };


      // dateStrList Field Functions 
      bool hasDateStrList() const { return this->dateStrList_ != nullptr;};
      void deleteDateStrList() { this->dateStrList_ = nullptr;};
      inline const vector<string> & getDateStrList() const { DARABONBA_PTR_GET_CONST(dateStrList_, vector<string>) };
      inline vector<string> getDateStrList() { DARABONBA_PTR_GET(dateStrList_, vector<string>) };
      inline Data& setDateStrList(const vector<string> & dateStrList) { DARABONBA_PTR_SET_VALUE(dateStrList_, dateStrList) };
      inline Data& setDateStrList(vector<string> && dateStrList) { DARABONBA_PTR_SET_RVALUE(dateStrList_, dateStrList) };


      // itemList Field Functions 
      bool hasItemList() const { return this->itemList_ != nullptr;};
      void deleteItemList() { this->itemList_ = nullptr;};
      inline const vector<Data::ItemList> & getItemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<Data::ItemList>) };
      inline vector<Data::ItemList> getItemList() { DARABONBA_PTR_GET(itemList_, vector<Data::ItemList>) };
      inline Data& setItemList(const vector<Data::ItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
      inline Data& setItemList(vector<Data::ItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


    protected:
      // The statistical timestamps of the trend data.
      shared_ptr<vector<int32_t>> dateList_ {};
      // The statistical dates and time for the trend data.
      shared_ptr<vector<string>> dateStrList_ {};
      // The returned data.
      shared_ptr<vector<Data::ItemList>> itemList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataTrendResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataTrendResponseBody::Data) };
    inline GetDataTrendResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataTrendResponseBody::Data) };
    inline GetDataTrendResponseBody& setData(const GetDataTrendResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataTrendResponseBody& setData(GetDataTrendResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetDataTrendResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
