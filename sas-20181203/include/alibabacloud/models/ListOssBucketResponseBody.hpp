// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSBUCKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSBUCKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOssBucketResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOssBucketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssBucketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOssBucketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOssBucketResponseBody() = default ;
    ListOssBucketResponseBody(const ListOssBucketResponseBody &) = default ;
    ListOssBucketResponseBody(ListOssBucketResponseBody &&) = default ;
    ListOssBucketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssBucketResponseBody() = default ;
    ListOssBucketResponseBody& operator=(const ListOssBucketResponseBody &) = default ;
    ListOssBucketResponseBody& operator=(ListOssBucketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOssBucketResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOssBucketResponseBodyData>) };
    inline vector<ListOssBucketResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListOssBucketResponseBodyData>) };
    inline ListOssBucketResponseBody& setData(const vector<ListOssBucketResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOssBucketResponseBody& setData(vector<ListOssBucketResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOssBucketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<ListOssBucketResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
