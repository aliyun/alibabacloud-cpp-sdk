// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAEVENTSELECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAEVENTSELECTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataEventSelectorsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDataEventSelectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataEventSelectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataEventSelectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataEventSelectorsResponseBody() = default ;
    ListDataEventSelectorsResponseBody(const ListDataEventSelectorsResponseBody &) = default ;
    ListDataEventSelectorsResponseBody(ListDataEventSelectorsResponseBody &&) = default ;
    ListDataEventSelectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataEventSelectorsResponseBody() = default ;
    ListDataEventSelectorsResponseBody& operator=(const ListDataEventSelectorsResponseBody &) = default ;
    ListDataEventSelectorsResponseBody& operator=(ListDataEventSelectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataEventSelectorsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListDataEventSelectorsResponseBodyData) };
    inline ListDataEventSelectorsResponseBodyData data() { DARABONBA_PTR_GET(data_, ListDataEventSelectorsResponseBodyData) };
    inline ListDataEventSelectorsResponseBody& setData(const ListDataEventSelectorsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataEventSelectorsResponseBody& setData(ListDataEventSelectorsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataEventSelectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListDataEventSelectorsResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
