// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsTablesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMmsTablesResponseBody() = default ;
    ListMmsTablesResponseBody(const ListMmsTablesResponseBody &) = default ;
    ListMmsTablesResponseBody(ListMmsTablesResponseBody &&) = default ;
    ListMmsTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTablesResponseBody() = default ;
    ListMmsTablesResponseBody& operator=(const ListMmsTablesResponseBody &) = default ;
    ListMmsTablesResponseBody& operator=(ListMmsTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMmsTablesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListMmsTablesResponseBodyData) };
    inline ListMmsTablesResponseBodyData data() { DARABONBA_PTR_GET(data_, ListMmsTablesResponseBodyData) };
    inline ListMmsTablesResponseBody& setData(const ListMmsTablesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMmsTablesResponseBody& setData(ListMmsTablesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmsTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListMmsTablesResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
