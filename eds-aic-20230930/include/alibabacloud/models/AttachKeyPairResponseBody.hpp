// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AttachKeyPairResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class AttachKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachKeyPairResponseBody() = default ;
    AttachKeyPairResponseBody(const AttachKeyPairResponseBody &) = default ;
    AttachKeyPairResponseBody(AttachKeyPairResponseBody &&) = default ;
    AttachKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachKeyPairResponseBody() = default ;
    AttachKeyPairResponseBody& operator=(const AttachKeyPairResponseBody &) = default ;
    AttachKeyPairResponseBody& operator=(AttachKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AttachKeyPairResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AttachKeyPairResponseBodyData) };
    inline AttachKeyPairResponseBodyData data() { DARABONBA_PTR_GET(data_, AttachKeyPairResponseBodyData) };
    inline AttachKeyPairResponseBody& setData(const AttachKeyPairResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AttachKeyPairResponseBody& setData(AttachKeyPairResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object that is returned.
    std::shared_ptr<AttachKeyPairResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
