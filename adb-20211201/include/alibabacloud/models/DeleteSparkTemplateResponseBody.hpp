// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESPARKTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESPARKTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteSparkTemplateResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DeleteSparkTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSparkTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSparkTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteSparkTemplateResponseBody() = default ;
    DeleteSparkTemplateResponseBody(const DeleteSparkTemplateResponseBody &) = default ;
    DeleteSparkTemplateResponseBody(DeleteSparkTemplateResponseBody &&) = default ;
    DeleteSparkTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSparkTemplateResponseBody() = default ;
    DeleteSparkTemplateResponseBody& operator=(const DeleteSparkTemplateResponseBody &) = default ;
    DeleteSparkTemplateResponseBody& operator=(DeleteSparkTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteSparkTemplateResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteSparkTemplateResponseBodyData) };
    inline DeleteSparkTemplateResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteSparkTemplateResponseBodyData) };
    inline DeleteSparkTemplateResponseBody& setData(const DeleteSparkTemplateResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteSparkTemplateResponseBody& setData(DeleteSparkTemplateResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSparkTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    std::shared_ptr<DeleteSparkTemplateResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
