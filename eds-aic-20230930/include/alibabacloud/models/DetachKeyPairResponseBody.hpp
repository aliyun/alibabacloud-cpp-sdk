// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetachKeyPairResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DetachKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachKeyPairResponseBody() = default ;
    DetachKeyPairResponseBody(const DetachKeyPairResponseBody &) = default ;
    DetachKeyPairResponseBody(DetachKeyPairResponseBody &&) = default ;
    DetachKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachKeyPairResponseBody() = default ;
    DetachKeyPairResponseBody& operator=(const DetachKeyPairResponseBody &) = default ;
    DetachKeyPairResponseBody& operator=(DetachKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DetachKeyPairResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DetachKeyPairResponseBodyData) };
    inline DetachKeyPairResponseBodyData data() { DARABONBA_PTR_GET(data_, DetachKeyPairResponseBodyData) };
    inline DetachKeyPairResponseBody& setData(const DetachKeyPairResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DetachKeyPairResponseBody& setData(DetachKeyPairResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object that is returned.
    std::shared_ptr<DetachKeyPairResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
