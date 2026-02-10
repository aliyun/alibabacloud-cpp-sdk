// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTALERTMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTALERTMODERESPONSEBODY_HPP_
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
  class ListClientAlertModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientAlertModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientAlertModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClientAlertModeResponseBody() = default ;
    ListClientAlertModeResponseBody(const ListClientAlertModeResponseBody &) = default ;
    ListClientAlertModeResponseBody(ListClientAlertModeResponseBody &&) = default ;
    ListClientAlertModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientAlertModeResponseBody() = default ;
    ListClientAlertModeResponseBody& operator=(const ListClientAlertModeResponseBody &) = default ;
    ListClientAlertModeResponseBody& operator=(ListClientAlertModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->uuids_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // uuids Field Functions 
      bool hasUuids() const { return this->uuids_ != nullptr;};
      void deleteUuids() { this->uuids_ = nullptr;};
      inline const vector<string> & getUuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
      inline vector<string> getUuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
      inline Data& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
      inline Data& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


    protected:
      // The total number of entries returned.
      shared_ptr<int32_t> count_ {};
      // The UUIDs of the assets.
      shared_ptr<vector<string>> uuids_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListClientAlertModeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListClientAlertModeResponseBody::Data) };
    inline ListClientAlertModeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListClientAlertModeResponseBody::Data) };
    inline ListClientAlertModeResponseBody& setData(const ListClientAlertModeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClientAlertModeResponseBody& setData(ListClientAlertModeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientAlertModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<ListClientAlertModeResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
