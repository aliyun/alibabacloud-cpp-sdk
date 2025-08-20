// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmExtractTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmExtractTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmExtractTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmExtractTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateWmExtractTaskResponseBody() = default ;
    CreateWmExtractTaskResponseBody(const CreateWmExtractTaskResponseBody &) = default ;
    CreateWmExtractTaskResponseBody(CreateWmExtractTaskResponseBody &&) = default ;
    CreateWmExtractTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmExtractTaskResponseBody() = default ;
    CreateWmExtractTaskResponseBody& operator=(const CreateWmExtractTaskResponseBody &) = default ;
    CreateWmExtractTaskResponseBody& operator=(CreateWmExtractTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateWmExtractTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateWmExtractTaskResponseBodyData) };
    inline CreateWmExtractTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateWmExtractTaskResponseBodyData) };
    inline CreateWmExtractTaskResponseBody& setData(const CreateWmExtractTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateWmExtractTaskResponseBody& setData(CreateWmExtractTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWmExtractTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the watermark extraction task.
    std::shared_ptr<CreateWmExtractTaskResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
