// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDICTDATAITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDICTDATAITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class QueryDictDataItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDictDataItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDictDataItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDictDataItemResponseBody() = default ;
    QueryDictDataItemResponseBody(const QueryDictDataItemResponseBody &) = default ;
    QueryDictDataItemResponseBody(QueryDictDataItemResponseBody &&) = default ;
    QueryDictDataItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDictDataItemResponseBody() = default ;
    QueryDictDataItemResponseBody& operator=(const QueryDictDataItemResponseBody &) = default ;
    QueryDictDataItemResponseBody& operator=(QueryDictDataItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClassifyItemCode, classifyItemCode_);
        DARABONBA_PTR_TO_JSON(ClassifyItemValue, classifyItemValue_);
        DARABONBA_PTR_TO_JSON(DataItemCode, dataItemCode_);
        DARABONBA_PTR_TO_JSON(DataItemOrder, dataItemOrder_);
        DARABONBA_PTR_TO_JSON(DataItemParent, dataItemParent_);
        DARABONBA_PTR_TO_JSON(DataItemValue, dataItemValue_);
        DARABONBA_PTR_TO_JSON(ItemType, itemType_);
        DARABONBA_PTR_TO_JSON(SubListData, subListData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClassifyItemCode, classifyItemCode_);
        DARABONBA_PTR_FROM_JSON(ClassifyItemValue, classifyItemValue_);
        DARABONBA_PTR_FROM_JSON(DataItemCode, dataItemCode_);
        DARABONBA_PTR_FROM_JSON(DataItemOrder, dataItemOrder_);
        DARABONBA_PTR_FROM_JSON(DataItemParent, dataItemParent_);
        DARABONBA_PTR_FROM_JSON(DataItemValue, dataItemValue_);
        DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
        DARABONBA_PTR_FROM_JSON(SubListData, subListData_);
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
      class SubListData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubListData& obj) { 
          DARABONBA_PTR_TO_JSON(ClassifyItemCode, classifyItemCode_);
          DARABONBA_PTR_TO_JSON(ClassifyItemValue, classifyItemValue_);
          DARABONBA_PTR_TO_JSON(DataItemCode, dataItemCode_);
          DARABONBA_PTR_TO_JSON(DataItemOrder, dataItemOrder_);
          DARABONBA_PTR_TO_JSON(DataItemParent, dataItemParent_);
          DARABONBA_PTR_TO_JSON(DataItemValue, dataItemValue_);
          DARABONBA_PTR_TO_JSON(ItemType, itemType_);
        };
        friend void from_json(const Darabonba::Json& j, SubListData& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassifyItemCode, classifyItemCode_);
          DARABONBA_PTR_FROM_JSON(ClassifyItemValue, classifyItemValue_);
          DARABONBA_PTR_FROM_JSON(DataItemCode, dataItemCode_);
          DARABONBA_PTR_FROM_JSON(DataItemOrder, dataItemOrder_);
          DARABONBA_PTR_FROM_JSON(DataItemParent, dataItemParent_);
          DARABONBA_PTR_FROM_JSON(DataItemValue, dataItemValue_);
          DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
        };
        SubListData() = default ;
        SubListData(const SubListData &) = default ;
        SubListData(SubListData &&) = default ;
        SubListData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubListData() = default ;
        SubListData& operator=(const SubListData &) = default ;
        SubListData& operator=(SubListData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->classifyItemCode_ == nullptr
        && this->classifyItemValue_ == nullptr && this->dataItemCode_ == nullptr && this->dataItemOrder_ == nullptr && this->dataItemParent_ == nullptr && this->dataItemValue_ == nullptr
        && this->itemType_ == nullptr; };
        // classifyItemCode Field Functions 
        bool hasClassifyItemCode() const { return this->classifyItemCode_ != nullptr;};
        void deleteClassifyItemCode() { this->classifyItemCode_ = nullptr;};
        inline string getClassifyItemCode() const { DARABONBA_PTR_GET_DEFAULT(classifyItemCode_, "") };
        inline SubListData& setClassifyItemCode(string classifyItemCode) { DARABONBA_PTR_SET_VALUE(classifyItemCode_, classifyItemCode) };


        // classifyItemValue Field Functions 
        bool hasClassifyItemValue() const { return this->classifyItemValue_ != nullptr;};
        void deleteClassifyItemValue() { this->classifyItemValue_ = nullptr;};
        inline string getClassifyItemValue() const { DARABONBA_PTR_GET_DEFAULT(classifyItemValue_, "") };
        inline SubListData& setClassifyItemValue(string classifyItemValue) { DARABONBA_PTR_SET_VALUE(classifyItemValue_, classifyItemValue) };


        // dataItemCode Field Functions 
        bool hasDataItemCode() const { return this->dataItemCode_ != nullptr;};
        void deleteDataItemCode() { this->dataItemCode_ = nullptr;};
        inline string getDataItemCode() const { DARABONBA_PTR_GET_DEFAULT(dataItemCode_, "") };
        inline SubListData& setDataItemCode(string dataItemCode) { DARABONBA_PTR_SET_VALUE(dataItemCode_, dataItemCode) };


        // dataItemOrder Field Functions 
        bool hasDataItemOrder() const { return this->dataItemOrder_ != nullptr;};
        void deleteDataItemOrder() { this->dataItemOrder_ = nullptr;};
        inline int32_t getDataItemOrder() const { DARABONBA_PTR_GET_DEFAULT(dataItemOrder_, 0) };
        inline SubListData& setDataItemOrder(int32_t dataItemOrder) { DARABONBA_PTR_SET_VALUE(dataItemOrder_, dataItemOrder) };


        // dataItemParent Field Functions 
        bool hasDataItemParent() const { return this->dataItemParent_ != nullptr;};
        void deleteDataItemParent() { this->dataItemParent_ = nullptr;};
        inline string getDataItemParent() const { DARABONBA_PTR_GET_DEFAULT(dataItemParent_, "") };
        inline SubListData& setDataItemParent(string dataItemParent) { DARABONBA_PTR_SET_VALUE(dataItemParent_, dataItemParent) };


        // dataItemValue Field Functions 
        bool hasDataItemValue() const { return this->dataItemValue_ != nullptr;};
        void deleteDataItemValue() { this->dataItemValue_ = nullptr;};
        inline string getDataItemValue() const { DARABONBA_PTR_GET_DEFAULT(dataItemValue_, "") };
        inline SubListData& setDataItemValue(string dataItemValue) { DARABONBA_PTR_SET_VALUE(dataItemValue_, dataItemValue) };


        // itemType Field Functions 
        bool hasItemType() const { return this->itemType_ != nullptr;};
        void deleteItemType() { this->itemType_ = nullptr;};
        inline int32_t getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, 0) };
        inline SubListData& setItemType(int32_t itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


      protected:
        shared_ptr<string> classifyItemCode_ {};
        shared_ptr<string> classifyItemValue_ {};
        shared_ptr<string> dataItemCode_ {};
        shared_ptr<int32_t> dataItemOrder_ {};
        shared_ptr<string> dataItemParent_ {};
        shared_ptr<string> dataItemValue_ {};
        shared_ptr<int32_t> itemType_ {};
      };

      virtual bool empty() const override { return this->classifyItemCode_ == nullptr
        && this->classifyItemValue_ == nullptr && this->dataItemCode_ == nullptr && this->dataItemOrder_ == nullptr && this->dataItemParent_ == nullptr && this->dataItemValue_ == nullptr
        && this->itemType_ == nullptr && this->subListData_ == nullptr; };
      // classifyItemCode Field Functions 
      bool hasClassifyItemCode() const { return this->classifyItemCode_ != nullptr;};
      void deleteClassifyItemCode() { this->classifyItemCode_ = nullptr;};
      inline string getClassifyItemCode() const { DARABONBA_PTR_GET_DEFAULT(classifyItemCode_, "") };
      inline Data& setClassifyItemCode(string classifyItemCode) { DARABONBA_PTR_SET_VALUE(classifyItemCode_, classifyItemCode) };


      // classifyItemValue Field Functions 
      bool hasClassifyItemValue() const { return this->classifyItemValue_ != nullptr;};
      void deleteClassifyItemValue() { this->classifyItemValue_ = nullptr;};
      inline string getClassifyItemValue() const { DARABONBA_PTR_GET_DEFAULT(classifyItemValue_, "") };
      inline Data& setClassifyItemValue(string classifyItemValue) { DARABONBA_PTR_SET_VALUE(classifyItemValue_, classifyItemValue) };


      // dataItemCode Field Functions 
      bool hasDataItemCode() const { return this->dataItemCode_ != nullptr;};
      void deleteDataItemCode() { this->dataItemCode_ = nullptr;};
      inline string getDataItemCode() const { DARABONBA_PTR_GET_DEFAULT(dataItemCode_, "") };
      inline Data& setDataItemCode(string dataItemCode) { DARABONBA_PTR_SET_VALUE(dataItemCode_, dataItemCode) };


      // dataItemOrder Field Functions 
      bool hasDataItemOrder() const { return this->dataItemOrder_ != nullptr;};
      void deleteDataItemOrder() { this->dataItemOrder_ = nullptr;};
      inline int32_t getDataItemOrder() const { DARABONBA_PTR_GET_DEFAULT(dataItemOrder_, 0) };
      inline Data& setDataItemOrder(int32_t dataItemOrder) { DARABONBA_PTR_SET_VALUE(dataItemOrder_, dataItemOrder) };


      // dataItemParent Field Functions 
      bool hasDataItemParent() const { return this->dataItemParent_ != nullptr;};
      void deleteDataItemParent() { this->dataItemParent_ = nullptr;};
      inline string getDataItemParent() const { DARABONBA_PTR_GET_DEFAULT(dataItemParent_, "") };
      inline Data& setDataItemParent(string dataItemParent) { DARABONBA_PTR_SET_VALUE(dataItemParent_, dataItemParent) };


      // dataItemValue Field Functions 
      bool hasDataItemValue() const { return this->dataItemValue_ != nullptr;};
      void deleteDataItemValue() { this->dataItemValue_ = nullptr;};
      inline string getDataItemValue() const { DARABONBA_PTR_GET_DEFAULT(dataItemValue_, "") };
      inline Data& setDataItemValue(string dataItemValue) { DARABONBA_PTR_SET_VALUE(dataItemValue_, dataItemValue) };


      // itemType Field Functions 
      bool hasItemType() const { return this->itemType_ != nullptr;};
      void deleteItemType() { this->itemType_ = nullptr;};
      inline int32_t getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, 0) };
      inline Data& setItemType(int32_t itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


      // subListData Field Functions 
      bool hasSubListData() const { return this->subListData_ != nullptr;};
      void deleteSubListData() { this->subListData_ = nullptr;};
      inline const vector<Data::SubListData> & getSubListData() const { DARABONBA_PTR_GET_CONST(subListData_, vector<Data::SubListData>) };
      inline vector<Data::SubListData> getSubListData() { DARABONBA_PTR_GET(subListData_, vector<Data::SubListData>) };
      inline Data& setSubListData(const vector<Data::SubListData> & subListData) { DARABONBA_PTR_SET_VALUE(subListData_, subListData) };
      inline Data& setSubListData(vector<Data::SubListData> && subListData) { DARABONBA_PTR_SET_RVALUE(subListData_, subListData) };


    protected:
      shared_ptr<string> classifyItemCode_ {};
      shared_ptr<string> classifyItemValue_ {};
      shared_ptr<string> dataItemCode_ {};
      shared_ptr<int32_t> dataItemOrder_ {};
      shared_ptr<string> dataItemParent_ {};
      shared_ptr<string> dataItemValue_ {};
      shared_ptr<int32_t> itemType_ {};
      shared_ptr<vector<Data::SubListData>> subListData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDictDataItemResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryDictDataItemResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryDictDataItemResponseBody::Data>) };
    inline vector<QueryDictDataItemResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryDictDataItemResponseBody::Data>) };
    inline QueryDictDataItemResponseBody& setData(const vector<QueryDictDataItemResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDictDataItemResponseBody& setData(vector<QueryDictDataItemResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryDictDataItemResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDictDataItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<QueryDictDataItemResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
