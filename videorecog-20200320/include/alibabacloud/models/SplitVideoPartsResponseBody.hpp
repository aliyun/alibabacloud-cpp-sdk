// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPLITVIDEOPARTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SPLITVIDEOPARTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class SplitVideoPartsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SplitVideoPartsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SplitVideoPartsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SplitVideoPartsResponseBody() = default ;
    SplitVideoPartsResponseBody(const SplitVideoPartsResponseBody &) = default ;
    SplitVideoPartsResponseBody(SplitVideoPartsResponseBody &&) = default ;
    SplitVideoPartsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SplitVideoPartsResponseBody() = default ;
    SplitVideoPartsResponseBody& operator=(const SplitVideoPartsResponseBody &) = default ;
    SplitVideoPartsResponseBody& operator=(SplitVideoPartsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Elements, elements_);
        DARABONBA_PTR_TO_JSON(SplitVideoPartResults, splitVideoPartResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Elements, elements_);
        DARABONBA_PTR_FROM_JSON(SplitVideoPartResults, splitVideoPartResults_);
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
      class SplitVideoPartResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SplitVideoPartResults& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(By, by_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Theme, theme_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SplitVideoPartResults& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(By, by_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Theme, theme_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        SplitVideoPartResults() = default ;
        SplitVideoPartResults(const SplitVideoPartResults &) = default ;
        SplitVideoPartResults(SplitVideoPartResults &&) = default ;
        SplitVideoPartResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SplitVideoPartResults() = default ;
        SplitVideoPartResults& operator=(const SplitVideoPartResults &) = default ;
        SplitVideoPartResults& operator=(SplitVideoPartResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->by_ == nullptr && this->endTime_ == nullptr && this->theme_ == nullptr && this->type_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline float getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0.0) };
        inline SplitVideoPartResults& setBeginTime(float beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // by Field Functions 
        bool hasBy() const { return this->by_ != nullptr;};
        void deleteBy() { this->by_ = nullptr;};
        inline string getBy() const { DARABONBA_PTR_GET_DEFAULT(by_, "") };
        inline SplitVideoPartResults& setBy(string by) { DARABONBA_PTR_SET_VALUE(by_, by) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline float getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
        inline SplitVideoPartResults& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // theme Field Functions 
        bool hasTheme() const { return this->theme_ != nullptr;};
        void deleteTheme() { this->theme_ = nullptr;};
        inline string getTheme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
        inline SplitVideoPartResults& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SplitVideoPartResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<float> beginTime_ {};
        shared_ptr<string> by_ {};
        shared_ptr<float> endTime_ {};
        shared_ptr<string> theme_ {};
        shared_ptr<string> type_ {};
      };

      class Elements : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Elements& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Index, index_);
        };
        friend void from_json(const Darabonba::Json& j, Elements& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
        };
        Elements() = default ;
        Elements(const Elements &) = default ;
        Elements(Elements &&) = default ;
        Elements(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Elements() = default ;
        Elements& operator=(const Elements &) = default ;
        Elements& operator=(Elements &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->index_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline float getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0.0) };
        inline Elements& setBeginTime(float beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline float getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
        inline Elements& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
        inline Elements& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      protected:
        shared_ptr<float> beginTime_ {};
        shared_ptr<float> endTime_ {};
        shared_ptr<int64_t> index_ {};
      };

      virtual bool empty() const override { return this->elements_ == nullptr
        && this->splitVideoPartResults_ == nullptr; };
      // elements Field Functions 
      bool hasElements() const { return this->elements_ != nullptr;};
      void deleteElements() { this->elements_ = nullptr;};
      inline const vector<Data::Elements> & getElements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Data::Elements>) };
      inline vector<Data::Elements> getElements() { DARABONBA_PTR_GET(elements_, vector<Data::Elements>) };
      inline Data& setElements(const vector<Data::Elements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
      inline Data& setElements(vector<Data::Elements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


      // splitVideoPartResults Field Functions 
      bool hasSplitVideoPartResults() const { return this->splitVideoPartResults_ != nullptr;};
      void deleteSplitVideoPartResults() { this->splitVideoPartResults_ = nullptr;};
      inline const vector<Data::SplitVideoPartResults> & getSplitVideoPartResults() const { DARABONBA_PTR_GET_CONST(splitVideoPartResults_, vector<Data::SplitVideoPartResults>) };
      inline vector<Data::SplitVideoPartResults> getSplitVideoPartResults() { DARABONBA_PTR_GET(splitVideoPartResults_, vector<Data::SplitVideoPartResults>) };
      inline Data& setSplitVideoPartResults(const vector<Data::SplitVideoPartResults> & splitVideoPartResults) { DARABONBA_PTR_SET_VALUE(splitVideoPartResults_, splitVideoPartResults) };
      inline Data& setSplitVideoPartResults(vector<Data::SplitVideoPartResults> && splitVideoPartResults) { DARABONBA_PTR_SET_RVALUE(splitVideoPartResults_, splitVideoPartResults) };


    protected:
      shared_ptr<vector<Data::Elements>> elements_ {};
      shared_ptr<vector<Data::SplitVideoPartResults>> splitVideoPartResults_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SplitVideoPartsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SplitVideoPartsResponseBody::Data) };
    inline SplitVideoPartsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SplitVideoPartsResponseBody::Data) };
    inline SplitVideoPartsResponseBody& setData(const SplitVideoPartsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SplitVideoPartsResponseBody& setData(SplitVideoPartsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SplitVideoPartsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SplitVideoPartsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SplitVideoPartsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
