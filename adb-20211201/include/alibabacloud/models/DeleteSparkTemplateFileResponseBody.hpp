// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESPARKTEMPLATEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESPARKTEMPLATEFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteSparkTemplateFileResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DeleteSparkTemplateFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSparkTemplateFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSparkTemplateFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteSparkTemplateFileResponseBody() = default ;
    DeleteSparkTemplateFileResponseBody(const DeleteSparkTemplateFileResponseBody &) = default ;
    DeleteSparkTemplateFileResponseBody(DeleteSparkTemplateFileResponseBody &&) = default ;
    DeleteSparkTemplateFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSparkTemplateFileResponseBody() = default ;
    DeleteSparkTemplateFileResponseBody& operator=(const DeleteSparkTemplateFileResponseBody &) = default ;
    DeleteSparkTemplateFileResponseBody& operator=(DeleteSparkTemplateFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteSparkTemplateFileResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteSparkTemplateFileResponseBodyData) };
    inline DeleteSparkTemplateFileResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteSparkTemplateFileResponseBodyData) };
    inline DeleteSparkTemplateFileResponseBody& setData(const DeleteSparkTemplateFileResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteSparkTemplateFileResponseBody& setData(DeleteSparkTemplateFileResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSparkTemplateFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The deletion result.
    std::shared_ptr<DeleteSparkTemplateFileResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
