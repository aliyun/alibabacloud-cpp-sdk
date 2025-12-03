// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPFROMTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPFROMTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppFromTemplateResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mobi20240411
{
namespace Models
{
  class CreateAppFromTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppFromTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppFromTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAppFromTemplateResponseBody() = default ;
    CreateAppFromTemplateResponseBody(const CreateAppFromTemplateResponseBody &) = default ;
    CreateAppFromTemplateResponseBody(CreateAppFromTemplateResponseBody &&) = default ;
    CreateAppFromTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppFromTemplateResponseBody() = default ;
    CreateAppFromTemplateResponseBody& operator=(const CreateAppFromTemplateResponseBody &) = default ;
    CreateAppFromTemplateResponseBody& operator=(CreateAppFromTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAppFromTemplateResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateAppFromTemplateResponseBodyData) };
    inline CreateAppFromTemplateResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateAppFromTemplateResponseBodyData) };
    inline CreateAppFromTemplateResponseBody& setData(const CreateAppFromTemplateResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAppFromTemplateResponseBody& setData(CreateAppFromTemplateResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppFromTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateAppFromTemplateResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mobi20240411
#endif
