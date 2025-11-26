// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPITEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPITEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApiTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetApiTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApiTemplateResponseBody() = default ;
    GetApiTemplateResponseBody(const GetApiTemplateResponseBody &) = default ;
    GetApiTemplateResponseBody(GetApiTemplateResponseBody &&) = default ;
    GetApiTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiTemplateResponseBody() = default ;
    GetApiTemplateResponseBody& operator=(const GetApiTemplateResponseBody &) = default ;
    GetApiTemplateResponseBody& operator=(GetApiTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ApiTemplate & data() const { DARABONBA_PTR_GET_CONST(data_, ApiTemplate) };
    inline ApiTemplate data() { DARABONBA_PTR_GET(data_, ApiTemplate) };
    inline GetApiTemplateResponseBody& setData(const ApiTemplate & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetApiTemplateResponseBody& setData(ApiTemplate && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the API operation template.
    std::shared_ptr<ApiTemplate> data_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
