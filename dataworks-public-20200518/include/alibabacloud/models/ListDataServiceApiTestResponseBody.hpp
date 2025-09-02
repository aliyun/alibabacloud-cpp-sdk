// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPITESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPITESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceApiTestResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApiTestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiTestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiTestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataServiceApiTestResponseBody() = default ;
    ListDataServiceApiTestResponseBody(const ListDataServiceApiTestResponseBody &) = default ;
    ListDataServiceApiTestResponseBody(ListDataServiceApiTestResponseBody &&) = default ;
    ListDataServiceApiTestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiTestResponseBody() = default ;
    ListDataServiceApiTestResponseBody& operator=(const ListDataServiceApiTestResponseBody &) = default ;
    ListDataServiceApiTestResponseBody& operator=(ListDataServiceApiTestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataServiceApiTestResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataServiceApiTestResponseBodyData>) };
    inline vector<ListDataServiceApiTestResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListDataServiceApiTestResponseBodyData>) };
    inline ListDataServiceApiTestResponseBody& setData(const vector<ListDataServiceApiTestResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataServiceApiTestResponseBody& setData(vector<ListDataServiceApiTestResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceApiTestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of test records.
    std::shared_ptr<vector<ListDataServiceApiTestResponseBodyData>> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
