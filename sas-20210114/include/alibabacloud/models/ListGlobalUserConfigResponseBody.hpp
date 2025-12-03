// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALUSERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALUSERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGlobalUserConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class ListGlobalUserConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalUserConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalUserConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGlobalUserConfigResponseBody() = default ;
    ListGlobalUserConfigResponseBody(const ListGlobalUserConfigResponseBody &) = default ;
    ListGlobalUserConfigResponseBody(ListGlobalUserConfigResponseBody &&) = default ;
    ListGlobalUserConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalUserConfigResponseBody() = default ;
    ListGlobalUserConfigResponseBody& operator=(const ListGlobalUserConfigResponseBody &) = default ;
    ListGlobalUserConfigResponseBody& operator=(ListGlobalUserConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListGlobalUserConfigResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListGlobalUserConfigResponseBodyData>) };
    inline vector<ListGlobalUserConfigResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListGlobalUserConfigResponseBodyData>) };
    inline ListGlobalUserConfigResponseBody& setData(const vector<ListGlobalUserConfigResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGlobalUserConfigResponseBody& setData(vector<ListGlobalUserConfigResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGlobalUserConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListGlobalUserConfigResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
