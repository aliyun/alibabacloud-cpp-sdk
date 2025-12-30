// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGSTRATEGYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGSTRATEGYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningStrategyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningStrategyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningStrategyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListWarningStrategyConfigResponseBody() = default ;
    ListWarningStrategyConfigResponseBody(const ListWarningStrategyConfigResponseBody &) = default ;
    ListWarningStrategyConfigResponseBody(ListWarningStrategyConfigResponseBody &&) = default ;
    ListWarningStrategyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningStrategyConfigResponseBody() = default ;
    ListWarningStrategyConfigResponseBody& operator=(const ListWarningStrategyConfigResponseBody &) = default ;
    ListWarningStrategyConfigResponseBody& operator=(ListWarningStrategyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(data, data_);
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
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
          DARABONBA_PTR_TO_JSON(Lambda, lambda_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(MaxNumber, maxNumber_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
          DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(MaxNumber, maxNumber_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->intervalTime_ == nullptr && this->lambda_ == nullptr && this->level_ == nullptr && this->maxNumber_ == nullptr && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // intervalTime Field Functions 
        bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
        void deleteIntervalTime() { this->intervalTime_ = nullptr;};
        inline int64_t getIntervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0L) };
        inline DataItem& setIntervalTime(int64_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


        // lambda Field Functions 
        bool hasLambda() const { return this->lambda_ != nullptr;};
        void deleteLambda() { this->lambda_ = nullptr;};
        inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
        inline DataItem& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
        inline DataItem& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // maxNumber Field Functions 
        bool hasMaxNumber() const { return this->maxNumber_ != nullptr;};
        void deleteMaxNumber() { this->maxNumber_ = nullptr;};
        inline int64_t getMaxNumber() const { DARABONBA_PTR_GET_DEFAULT(maxNumber_, 0L) };
        inline DataItem& setMaxNumber(int64_t maxNumber) { DARABONBA_PTR_SET_VALUE(maxNumber_, maxNumber) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> intervalTime_ {};
        shared_ptr<string> lambda_ {};
        shared_ptr<int64_t> level_ {};
        shared_ptr<int64_t> maxNumber_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<vector<Data::DataItem>> data_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListWarningStrategyConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListWarningStrategyConfigResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListWarningStrategyConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListWarningStrategyConfigResponseBody::Data) };
    inline ListWarningStrategyConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListWarningStrategyConfigResponseBody::Data) };
    inline ListWarningStrategyConfigResponseBody& setData(const ListWarningStrategyConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWarningStrategyConfigResponseBody& setData(ListWarningStrategyConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWarningStrategyConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWarningStrategyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWarningStrategyConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<ListWarningStrategyConfigResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
