// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPMGRAFANADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPMGRAFANADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class QueryApmGrafanaDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApmGrafanaDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApmGrafanaDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryApmGrafanaDataResponseBody() = default ;
    QueryApmGrafanaDataResponseBody(const QueryApmGrafanaDataResponseBody &) = default ;
    QueryApmGrafanaDataResponseBody(QueryApmGrafanaDataResponseBody &&) = default ;
    QueryApmGrafanaDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApmGrafanaDataResponseBody() = default ;
    QueryApmGrafanaDataResponseBody& operator=(const QueryApmGrafanaDataResponseBody &) = default ;
    QueryApmGrafanaDataResponseBody& operator=(QueryApmGrafanaDataResponseBody &&) = default ;
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
      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline Data& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    protected:
      // The returned data.
      shared_ptr<string> data_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryApmGrafanaDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryApmGrafanaDataResponseBody::Data) };
    inline QueryApmGrafanaDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryApmGrafanaDataResponseBody::Data) };
    inline QueryApmGrafanaDataResponseBody& setData(const QueryApmGrafanaDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryApmGrafanaDataResponseBody& setData(QueryApmGrafanaDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // The response data.
    shared_ptr<QueryApmGrafanaDataResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
