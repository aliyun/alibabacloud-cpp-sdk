// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateKeyPairResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateKeyPairResponseBody() = default ;
    CreateKeyPairResponseBody(const CreateKeyPairResponseBody &) = default ;
    CreateKeyPairResponseBody(CreateKeyPairResponseBody &&) = default ;
    CreateKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyPairResponseBody() = default ;
    CreateKeyPairResponseBody& operator=(const CreateKeyPairResponseBody &) = default ;
    CreateKeyPairResponseBody& operator=(CreateKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateKeyPairResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateKeyPairResponseBodyData) };
    inline CreateKeyPairResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateKeyPairResponseBodyData) };
    inline CreateKeyPairResponseBody& setData(const CreateKeyPairResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateKeyPairResponseBody& setData(CreateKeyPairResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that are returned.
    std::shared_ptr<CreateKeyPairResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
