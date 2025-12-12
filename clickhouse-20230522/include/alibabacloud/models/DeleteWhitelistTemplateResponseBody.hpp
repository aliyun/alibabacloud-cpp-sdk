// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWHITELISTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEWHITELISTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteWhitelistTemplateResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DeleteWhitelistTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWhitelistTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWhitelistTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteWhitelistTemplateResponseBody() = default ;
    DeleteWhitelistTemplateResponseBody(const DeleteWhitelistTemplateResponseBody &) = default ;
    DeleteWhitelistTemplateResponseBody(DeleteWhitelistTemplateResponseBody &&) = default ;
    DeleteWhitelistTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWhitelistTemplateResponseBody() = default ;
    DeleteWhitelistTemplateResponseBody& operator=(const DeleteWhitelistTemplateResponseBody &) = default ;
    DeleteWhitelistTemplateResponseBody& operator=(DeleteWhitelistTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteWhitelistTemplateResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteWhitelistTemplateResponseBodyData) };
    inline DeleteWhitelistTemplateResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteWhitelistTemplateResponseBodyData) };
    inline DeleteWhitelistTemplateResponseBody& setData(const DeleteWhitelistTemplateResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteWhitelistTemplateResponseBody& setData(DeleteWhitelistTemplateResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteWhitelistTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DeleteWhitelistTemplateResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
