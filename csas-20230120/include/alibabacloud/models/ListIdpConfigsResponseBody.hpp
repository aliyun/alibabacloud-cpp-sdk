// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDPCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDPCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIdpConfigsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListIdpConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdpConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdpConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIdpConfigsResponseBody() = default ;
    ListIdpConfigsResponseBody(const ListIdpConfigsResponseBody &) = default ;
    ListIdpConfigsResponseBody(ListIdpConfigsResponseBody &&) = default ;
    ListIdpConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdpConfigsResponseBody() = default ;
    ListIdpConfigsResponseBody& operator=(const ListIdpConfigsResponseBody &) = default ;
    ListIdpConfigsResponseBody& operator=(ListIdpConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListIdpConfigsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListIdpConfigsResponseBodyData) };
    inline ListIdpConfigsResponseBodyData data() { DARABONBA_PTR_GET(data_, ListIdpConfigsResponseBodyData) };
    inline ListIdpConfigsResponseBody& setData(const ListIdpConfigsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIdpConfigsResponseBody& setData(ListIdpConfigsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdpConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListIdpConfigsResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
