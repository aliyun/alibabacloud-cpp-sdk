// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAEVENTSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAEVENTSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataEventServicesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDataEventServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataEventServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataEventServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataEventServicesResponseBody() = default ;
    ListDataEventServicesResponseBody(const ListDataEventServicesResponseBody &) = default ;
    ListDataEventServicesResponseBody(ListDataEventServicesResponseBody &&) = default ;
    ListDataEventServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataEventServicesResponseBody() = default ;
    ListDataEventServicesResponseBody& operator=(const ListDataEventServicesResponseBody &) = default ;
    ListDataEventServicesResponseBody& operator=(ListDataEventServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataEventServicesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListDataEventServicesResponseBodyData) };
    inline ListDataEventServicesResponseBodyData data() { DARABONBA_PTR_GET(data_, ListDataEventServicesResponseBodyData) };
    inline ListDataEventServicesResponseBody& setData(const ListDataEventServicesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataEventServicesResponseBody& setData(ListDataEventServicesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataEventServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListDataEventServicesResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
