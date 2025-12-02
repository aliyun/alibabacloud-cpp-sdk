// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCallbackResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCallbackResponseBody() = default ;
    ListCallbackResponseBody(const ListCallbackResponseBody &) = default ;
    ListCallbackResponseBody(ListCallbackResponseBody &&) = default ;
    ListCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallbackResponseBody() = default ;
    ListCallbackResponseBody& operator=(const ListCallbackResponseBody &) = default ;
    ListCallbackResponseBody& operator=(ListCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCallbackResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCallbackResponseBodyData>) };
    inline vector<ListCallbackResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListCallbackResponseBodyData>) };
    inline ListCallbackResponseBody& setData(const vector<ListCallbackResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCallbackResponseBody& setData(vector<ListCallbackResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    std::shared_ptr<vector<ListCallbackResponseBodyData>> data_ = nullptr;
    // Backend-assigned ID, used to uniquely identify a request. Can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
