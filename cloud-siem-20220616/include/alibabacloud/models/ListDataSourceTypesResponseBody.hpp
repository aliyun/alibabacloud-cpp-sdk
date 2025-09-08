// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourceTypesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDataSourceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourceTypesResponseBody() = default ;
    ListDataSourceTypesResponseBody(const ListDataSourceTypesResponseBody &) = default ;
    ListDataSourceTypesResponseBody(ListDataSourceTypesResponseBody &&) = default ;
    ListDataSourceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTypesResponseBody() = default ;
    ListDataSourceTypesResponseBody& operator=(const ListDataSourceTypesResponseBody &) = default ;
    ListDataSourceTypesResponseBody& operator=(ListDataSourceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataSourceTypesResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataSourceTypesResponseBodyData>) };
    inline vector<ListDataSourceTypesResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListDataSourceTypesResponseBodyData>) };
    inline ListDataSourceTypesResponseBody& setData(const vector<ListDataSourceTypesResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataSourceTypesResponseBody& setData(vector<ListDataSourceTypesResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<ListDataSourceTypesResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
