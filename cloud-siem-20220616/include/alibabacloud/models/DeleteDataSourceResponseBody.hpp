// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteDataSourceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DeleteDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteDataSourceResponseBody() = default ;
    DeleteDataSourceResponseBody(const DeleteDataSourceResponseBody &) = default ;
    DeleteDataSourceResponseBody(DeleteDataSourceResponseBody &&) = default ;
    DeleteDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataSourceResponseBody() = default ;
    DeleteDataSourceResponseBody& operator=(const DeleteDataSourceResponseBody &) = default ;
    DeleteDataSourceResponseBody& operator=(DeleteDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteDataSourceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteDataSourceResponseBodyData) };
    inline DeleteDataSourceResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteDataSourceResponseBodyData) };
    inline DeleteDataSourceResponseBody& setData(const DeleteDataSourceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteDataSourceResponseBody& setData(DeleteDataSourceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<DeleteDataSourceResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
