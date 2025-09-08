// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSBYLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSBYLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountsByLogResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAccountsByLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsByLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsByLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccountsByLogResponseBody() = default ;
    ListAccountsByLogResponseBody(const ListAccountsByLogResponseBody &) = default ;
    ListAccountsByLogResponseBody(ListAccountsByLogResponseBody &&) = default ;
    ListAccountsByLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsByLogResponseBody() = default ;
    ListAccountsByLogResponseBody& operator=(const ListAccountsByLogResponseBody &) = default ;
    ListAccountsByLogResponseBody& operator=(ListAccountsByLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAccountsByLogResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAccountsByLogResponseBodyData>) };
    inline vector<ListAccountsByLogResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListAccountsByLogResponseBodyData>) };
    inline ListAccountsByLogResponseBody& setData(const vector<ListAccountsByLogResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAccountsByLogResponseBody& setData(vector<ListAccountsByLogResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountsByLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<ListAccountsByLogResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
