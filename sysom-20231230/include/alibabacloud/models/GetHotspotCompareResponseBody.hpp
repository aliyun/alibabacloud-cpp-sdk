// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTCOMPARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTCOMPARERESPONSEBODY_HPP_
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
  class GetHotspotCompareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotCompareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotCompareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetHotspotCompareResponseBody() = default ;
    GetHotspotCompareResponseBody(const GetHotspotCompareResponseBody &) = default ;
    GetHotspotCompareResponseBody(GetHotspotCompareResponseBody &&) = default ;
    GetHotspotCompareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotCompareResponseBody() = default ;
    GetHotspotCompareResponseBody& operator=(const GetHotspotCompareResponseBody &) = default ;
    GetHotspotCompareResponseBody& operator=(GetHotspotCompareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(flame, flame_);
        DARABONBA_PTR_TO_JSON(series_instance1, seriesInstance1_);
        DARABONBA_PTR_TO_JSON(series_instance2, seriesInstance2_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(flame, flame_);
        DARABONBA_PTR_FROM_JSON(series_instance1, seriesInstance1_);
        DARABONBA_PTR_FROM_JSON(series_instance2, seriesInstance2_);
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
      class SeriesInstance2 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SeriesInstance2& obj) { 
          DARABONBA_PTR_TO_JSON(columns, columns_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, SeriesInstance2& obj) { 
          DARABONBA_PTR_FROM_JSON(columns, columns_);
          DARABONBA_PTR_FROM_JSON(values, values_);
        };
        SeriesInstance2() = default ;
        SeriesInstance2(const SeriesInstance2 &) = default ;
        SeriesInstance2(SeriesInstance2 &&) = default ;
        SeriesInstance2(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SeriesInstance2() = default ;
        SeriesInstance2& operator=(const SeriesInstance2 &) = default ;
        SeriesInstance2& operator=(SeriesInstance2 &&) = default ;
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
        inline SeriesInstance2& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline SeriesInstance2& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<vector<string>> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<string>>) };
        inline vector<vector<string>> getValues() { DARABONBA_PTR_GET(values_, vector<vector<string>>) };
        inline SeriesInstance2& setValues(const vector<vector<string>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline SeriesInstance2& setValues(vector<vector<string>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<vector<string>> columns_ {};
        shared_ptr<vector<vector<string>>> values_ {};
      };

      class SeriesInstance1 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SeriesInstance1& obj) { 
          DARABONBA_PTR_TO_JSON(columns, columns_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, SeriesInstance1& obj) { 
          DARABONBA_PTR_FROM_JSON(columns, columns_);
          DARABONBA_PTR_FROM_JSON(values, values_);
        };
        SeriesInstance1() = default ;
        SeriesInstance1(const SeriesInstance1 &) = default ;
        SeriesInstance1(SeriesInstance1 &&) = default ;
        SeriesInstance1(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SeriesInstance1() = default ;
        SeriesInstance1& operator=(const SeriesInstance1 &) = default ;
        SeriesInstance1& operator=(SeriesInstance1 &&) = default ;
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
        inline SeriesInstance1& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline SeriesInstance1& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<vector<string>> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<string>>) };
        inline vector<vector<string>> getValues() { DARABONBA_PTR_GET(values_, vector<vector<string>>) };
        inline SeriesInstance1& setValues(const vector<vector<string>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline SeriesInstance1& setValues(vector<vector<string>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


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
        && this->seriesInstance1_ == nullptr && this->seriesInstance2_ == nullptr; };
      // flame Field Functions 
      bool hasFlame() const { return this->flame_ != nullptr;};
      void deleteFlame() { this->flame_ = nullptr;};
      inline const Data::Flame & getFlame() const { DARABONBA_PTR_GET_CONST(flame_, Data::Flame) };
      inline Data::Flame getFlame() { DARABONBA_PTR_GET(flame_, Data::Flame) };
      inline Data& setFlame(const Data::Flame & flame) { DARABONBA_PTR_SET_VALUE(flame_, flame) };
      inline Data& setFlame(Data::Flame && flame) { DARABONBA_PTR_SET_RVALUE(flame_, flame) };


      // seriesInstance1 Field Functions 
      bool hasSeriesInstance1() const { return this->seriesInstance1_ != nullptr;};
      void deleteSeriesInstance1() { this->seriesInstance1_ = nullptr;};
      inline const Data::SeriesInstance1 & getSeriesInstance1() const { DARABONBA_PTR_GET_CONST(seriesInstance1_, Data::SeriesInstance1) };
      inline Data::SeriesInstance1 getSeriesInstance1() { DARABONBA_PTR_GET(seriesInstance1_, Data::SeriesInstance1) };
      inline Data& setSeriesInstance1(const Data::SeriesInstance1 & seriesInstance1) { DARABONBA_PTR_SET_VALUE(seriesInstance1_, seriesInstance1) };
      inline Data& setSeriesInstance1(Data::SeriesInstance1 && seriesInstance1) { DARABONBA_PTR_SET_RVALUE(seriesInstance1_, seriesInstance1) };


      // seriesInstance2 Field Functions 
      bool hasSeriesInstance2() const { return this->seriesInstance2_ != nullptr;};
      void deleteSeriesInstance2() { this->seriesInstance2_ = nullptr;};
      inline const Data::SeriesInstance2 & getSeriesInstance2() const { DARABONBA_PTR_GET_CONST(seriesInstance2_, Data::SeriesInstance2) };
      inline Data::SeriesInstance2 getSeriesInstance2() { DARABONBA_PTR_GET(seriesInstance2_, Data::SeriesInstance2) };
      inline Data& setSeriesInstance2(const Data::SeriesInstance2 & seriesInstance2) { DARABONBA_PTR_SET_VALUE(seriesInstance2_, seriesInstance2) };
      inline Data& setSeriesInstance2(Data::SeriesInstance2 && seriesInstance2) { DARABONBA_PTR_SET_RVALUE(seriesInstance2_, seriesInstance2) };


    protected:
      shared_ptr<Data::Flame> flame_ {};
      shared_ptr<Data::SeriesInstance1> seriesInstance1_ {};
      shared_ptr<Data::SeriesInstance2> seriesInstance2_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHotspotCompareResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHotspotCompareResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHotspotCompareResponseBody::Data) };
    inline GetHotspotCompareResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHotspotCompareResponseBody::Data) };
    inline GetHotspotCompareResponseBody& setData(const GetHotspotCompareResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotspotCompareResponseBody& setData(GetHotspotCompareResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotspotCompareResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotspotCompareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHotspotCompareResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHotspotCompareResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
