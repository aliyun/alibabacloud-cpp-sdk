// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETCLEANCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETCLEANCONFIGRESPONSEBODY_HPP_
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
  class ListAssetCleanConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetCleanConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetCleanConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAssetCleanConfigResponseBody() = default ;
    ListAssetCleanConfigResponseBody(const ListAssetCleanConfigResponseBody &) = default ;
    ListAssetCleanConfigResponseBody(ListAssetCleanConfigResponseBody &&) = default ;
    ListAssetCleanConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetCleanConfigResponseBody() = default ;
    ListAssetCleanConfigResponseBody& operator=(const ListAssetCleanConfigResponseBody &) = default ;
    ListAssetCleanConfigResponseBody& operator=(ListAssetCleanConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CleanDays, cleanDays_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CleanDays, cleanDays_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->cleanDays_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // cleanDays Field Functions 
      bool hasCleanDays() const { return this->cleanDays_ != nullptr;};
      void deleteCleanDays() { this->cleanDays_ = nullptr;};
      inline int32_t getCleanDays() const { DARABONBA_PTR_GET_DEFAULT(cleanDays_, 0) };
      inline Data& setCleanDays(int32_t cleanDays) { DARABONBA_PTR_SET_VALUE(cleanDays_, cleanDays) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of days before hosts whose provider cannot be identified are automatically cleaned after they enter the offline state. Valid value: an integer that ranges from 1 to 30.
      shared_ptr<int32_t> cleanDays_ {};
      // Indicates whether the configuration takes effect. Valid values:
      // 
      // *   **0**: The configuration does not take effect.
      // *   **1**: The configuration takes effect.
      shared_ptr<int32_t> status_ {};
      // The type of hosts that are cleaned.
      // 
      // *   The value is set to **1**, which indicates hosts whose provider cannot be identified.
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListAssetCleanConfigResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAssetCleanConfigResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAssetCleanConfigResponseBody::Data>) };
    inline vector<ListAssetCleanConfigResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAssetCleanConfigResponseBody::Data>) };
    inline ListAssetCleanConfigResponseBody& setData(const vector<ListAssetCleanConfigResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAssetCleanConfigResponseBody& setData(vector<ListAssetCleanConfigResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetCleanConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of cleanup configurations.
    shared_ptr<int32_t> count_ {};
    // The asset cleanup configurations.
    shared_ptr<vector<ListAssetCleanConfigResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
