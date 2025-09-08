// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataSourceLogsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDataSourceLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourceLogsResponseBody() = default ;
    ListDataSourceLogsResponseBody(const ListDataSourceLogsResponseBody &) = default ;
    ListDataSourceLogsResponseBody(ListDataSourceLogsResponseBody &&) = default ;
    ListDataSourceLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceLogsResponseBody() = default ;
    ListDataSourceLogsResponseBody& operator=(const ListDataSourceLogsResponseBody &) = default ;
    ListDataSourceLogsResponseBody& operator=(ListDataSourceLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataSourceLogsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListDataSourceLogsResponseBodyData) };
    inline ListDataSourceLogsResponseBodyData data() { DARABONBA_PTR_GET(data_, ListDataSourceLogsResponseBodyData) };
    inline ListDataSourceLogsResponseBody& setData(const ListDataSourceLogsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataSourceLogsResponseBody& setData(ListDataSourceLogsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<ListDataSourceLogsResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
