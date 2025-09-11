// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAccountResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DeleteAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAccountResponseBody() = default ;
    DeleteAccountResponseBody(const DeleteAccountResponseBody &) = default ;
    DeleteAccountResponseBody(DeleteAccountResponseBody &&) = default ;
    DeleteAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccountResponseBody() = default ;
    DeleteAccountResponseBody& operator=(const DeleteAccountResponseBody &) = default ;
    DeleteAccountResponseBody& operator=(DeleteAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteAccountResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteAccountResponseBodyData) };
    inline DeleteAccountResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteAccountResponseBodyData) };
    inline DeleteAccountResponseBody& setData(const DeleteAccountResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteAccountResponseBody& setData(DeleteAccountResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<DeleteAccountResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
