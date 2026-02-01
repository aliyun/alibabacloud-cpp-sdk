// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTTRACKINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTTRACKINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotTrackingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotTrackingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotTrackingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetHotspotTrackingResponseBody() = default ;
    GetHotspotTrackingResponseBody(const GetHotspotTrackingResponseBody &) = default ;
    GetHotspotTrackingResponseBody(GetHotspotTrackingResponseBody &&) = default ;
    GetHotspotTrackingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotTrackingResponseBody() = default ;
    GetHotspotTrackingResponseBody& operator=(const GetHotspotTrackingResponseBody &) = default ;
    GetHotspotTrackingResponseBody& operator=(GetHotspotTrackingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(flame, flame_);
        DARABONBA_PTR_TO_JSON(series, series_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(flame, flame_);
        DARABONBA_PTR_FROM_JSON(series, series_);
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
      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(columns, columns_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(columns, columns_);
          DARABONBA_PTR_FROM_JSON(values, values_);
        };
        Series() = default ;
        Series(const Series &) = default ;
        Series(Series &&) = default ;
        Series(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Series() = default ;
        Series& operator=(const Series &) = default ;
        Series& operator=(Series &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columns_ == nullptr
        && this->values_ == nullptr; };
        // columns Field Functions 
        bool hasColumns() const { return this->columns_ != nullptr;};
        void deleteColumns() { this->columns_ = nullptr;};
        inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
        inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
        inline Series& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline Series& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<vector<string>> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<string>>) };
        inline vector<vector<string>> getValues() { DARABONBA_PTR_GET(values_, vector<vector<string>>) };
        inline Series& setValues(const vector<vector<string>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Series& setValues(vector<vector<string>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<vector<string>> columns_ {};
        shared_ptr<vector<vector<string>>> values_ {};
      };

      class Flame : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Flame& obj) { 
          DARABONBA_PTR_TO_JSON(columns, columns_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Flame& obj) { 
          DARABONBA_PTR_FROM_JSON(columns, columns_);
          DARABONBA_PTR_FROM_JSON(values, values_);
        };
        Flame() = default ;
        Flame(const Flame &) = default ;
        Flame(Flame &&) = default ;
        Flame(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Flame() = default ;
        Flame& operator=(const Flame &) = default ;
        Flame& operator=(Flame &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columns_ == nullptr
        && this->values_ == nullptr; };
        // columns Field Functions 
        bool hasColumns() const { return this->columns_ != nullptr;};
        void deleteColumns() { this->columns_ = nullptr;};
        inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
        inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
        inline Flame& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline Flame& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<vector<string>> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<string>>) };
        inline vector<vector<string>> getValues() { DARABONBA_PTR_GET(values_, vector<vector<string>>) };
        inline Flame& setValues(const vector<vector<string>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Flame& setValues(vector<vector<string>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<vector<string>> columns_ {};
        shared_ptr<vector<vector<string>>> values_ {};
      };

      virtual bool empty() const override { return this->flame_ == nullptr
        && this->series_ == nullptr; };
      // flame Field Functions 
      bool hasFlame() const { return this->flame_ != nullptr;};
      void deleteFlame() { this->flame_ = nullptr;};
      inline const Data::Flame & getFlame() const { DARABONBA_PTR_GET_CONST(flame_, Data::Flame) };
      inline Data::Flame getFlame() { DARABONBA_PTR_GET(flame_, Data::Flame) };
      inline Data& setFlame(const Data::Flame & flame) { DARABONBA_PTR_SET_VALUE(flame_, flame) };
      inline Data& setFlame(Data::Flame && flame) { DARABONBA_PTR_SET_RVALUE(flame_, flame) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const Data::Series & getSeries() const { DARABONBA_PTR_GET_CONST(series_, Data::Series) };
      inline Data::Series getSeries() { DARABONBA_PTR_GET(series_, Data::Series) };
      inline Data& setSeries(const Data::Series & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline Data& setSeries(Data::Series && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    protected:
      shared_ptr<Data::Flame> flame_ {};
      shared_ptr<Data::Series> series_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHotspotTrackingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHotspotTrackingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHotspotTrackingResponseBody::Data) };
    inline GetHotspotTrackingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHotspotTrackingResponseBody::Data) };
    inline GetHotspotTrackingResponseBody& setData(const GetHotspotTrackingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotspotTrackingResponseBody& setData(GetHotspotTrackingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotspotTrackingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotspotTrackingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHotspotTrackingResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
