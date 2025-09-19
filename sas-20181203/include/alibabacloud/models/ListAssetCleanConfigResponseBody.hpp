// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETCLEANCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETCLEANCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAssetCleanConfigResponseBodyData.hpp>
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
    virtual bool empty() const override { this->count_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListAssetCleanConfigResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAssetCleanConfigResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAssetCleanConfigResponseBodyData>) };
    inline vector<ListAssetCleanConfigResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListAssetCleanConfigResponseBodyData>) };
    inline ListAssetCleanConfigResponseBody& setData(const vector<ListAssetCleanConfigResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAssetCleanConfigResponseBody& setData(vector<ListAssetCleanConfigResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetCleanConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of cleanup configurations.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The asset cleanup configurations.
    std::shared_ptr<vector<ListAssetCleanConfigResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
