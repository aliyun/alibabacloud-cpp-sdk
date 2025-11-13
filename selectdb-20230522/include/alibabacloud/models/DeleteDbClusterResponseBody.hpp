// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteDBClusterResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DeleteDBClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteDBClusterResponseBody() = default ;
    DeleteDBClusterResponseBody(const DeleteDBClusterResponseBody &) = default ;
    DeleteDBClusterResponseBody(DeleteDBClusterResponseBody &&) = default ;
    DeleteDBClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBClusterResponseBody() = default ;
    DeleteDBClusterResponseBody& operator=(const DeleteDBClusterResponseBody &) = default ;
    DeleteDBClusterResponseBody& operator=(DeleteDBClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteDBClusterResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteDBClusterResponseBodyData) };
    inline DeleteDBClusterResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteDBClusterResponseBodyData) };
    inline DeleteDBClusterResponseBody& setData(const DeleteDBClusterResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteDBClusterResponseBody& setData(DeleteDBClusterResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteDBClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DeleteDBClusterResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
