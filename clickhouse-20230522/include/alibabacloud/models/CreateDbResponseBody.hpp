// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDBResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class CreateDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDBResponseBody() = default ;
    CreateDBResponseBody(const CreateDBResponseBody &) = default ;
    CreateDBResponseBody(CreateDBResponseBody &&) = default ;
    CreateDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBResponseBody() = default ;
    CreateDBResponseBody& operator=(const CreateDBResponseBody &) = default ;
    CreateDBResponseBody& operator=(CreateDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateDBResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateDBResponseBodyData) };
    inline CreateDBResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateDBResponseBodyData) };
    inline CreateDBResponseBody& setData(const CreateDBResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateDBResponseBody& setData(CreateDBResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<CreateDBResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
