// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateWmEmbedTaskResponseBody() = default ;
    CreateWmEmbedTaskResponseBody(const CreateWmEmbedTaskResponseBody &) = default ;
    CreateWmEmbedTaskResponseBody(CreateWmEmbedTaskResponseBody &&) = default ;
    CreateWmEmbedTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskResponseBody() = default ;
    CreateWmEmbedTaskResponseBody& operator=(const CreateWmEmbedTaskResponseBody &) = default ;
    CreateWmEmbedTaskResponseBody& operator=(CreateWmEmbedTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateWmEmbedTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateWmEmbedTaskResponseBodyData) };
    inline CreateWmEmbedTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateWmEmbedTaskResponseBodyData) };
    inline CreateWmEmbedTaskResponseBody& setData(const CreateWmEmbedTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateWmEmbedTaskResponseBody& setData(CreateWmEmbedTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWmEmbedTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateWmEmbedTaskResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
