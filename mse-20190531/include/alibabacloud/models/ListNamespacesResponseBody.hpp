// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNamespacesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNamespacesResponseBody() = default ;
    ListNamespacesResponseBody(const ListNamespacesResponseBody &) = default ;
    ListNamespacesResponseBody(ListNamespacesResponseBody &&) = default ;
    ListNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesResponseBody() = default ;
    ListNamespacesResponseBody& operator=(const ListNamespacesResponseBody &) = default ;
    ListNamespacesResponseBody& operator=(ListNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListNamespacesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListNamespacesResponseBodyData) };
    inline ListNamespacesResponseBodyData data() { DARABONBA_PTR_GET(data_, ListNamespacesResponseBodyData) };
    inline ListNamespacesResponseBody& setData(const ListNamespacesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNamespacesResponseBody& setData(ListNamespacesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListNamespacesResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
