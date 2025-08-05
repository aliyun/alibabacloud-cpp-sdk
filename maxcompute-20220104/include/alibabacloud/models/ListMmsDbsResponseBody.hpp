// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsDbsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDbsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDbsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDbsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMmsDbsResponseBody() = default ;
    ListMmsDbsResponseBody(const ListMmsDbsResponseBody &) = default ;
    ListMmsDbsResponseBody(ListMmsDbsResponseBody &&) = default ;
    ListMmsDbsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDbsResponseBody() = default ;
    ListMmsDbsResponseBody& operator=(const ListMmsDbsResponseBody &) = default ;
    ListMmsDbsResponseBody& operator=(ListMmsDbsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMmsDbsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListMmsDbsResponseBodyData) };
    inline ListMmsDbsResponseBodyData data() { DARABONBA_PTR_GET(data_, ListMmsDbsResponseBodyData) };
    inline ListMmsDbsResponseBody& setData(const ListMmsDbsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMmsDbsResponseBody& setData(ListMmsDbsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmsDbsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListMmsDbsResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
