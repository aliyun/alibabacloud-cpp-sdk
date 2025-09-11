// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAccountResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class CreateAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccountResponseBody() = default ;
    CreateAccountResponseBody(const CreateAccountResponseBody &) = default ;
    CreateAccountResponseBody(CreateAccountResponseBody &&) = default ;
    CreateAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountResponseBody() = default ;
    CreateAccountResponseBody& operator=(const CreateAccountResponseBody &) = default ;
    CreateAccountResponseBody& operator=(CreateAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAccountResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateAccountResponseBodyData) };
    inline CreateAccountResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateAccountResponseBodyData) };
    inline CreateAccountResponseBody& setData(const CreateAccountResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAccountResponseBody& setData(CreateAccountResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<CreateAccountResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
