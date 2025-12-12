// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AttachWhitelistTemplateToInstanceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class AttachWhitelistTemplateToInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachWhitelistTemplateToInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachWhitelistTemplateToInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachWhitelistTemplateToInstanceResponseBody() = default ;
    AttachWhitelistTemplateToInstanceResponseBody(const AttachWhitelistTemplateToInstanceResponseBody &) = default ;
    AttachWhitelistTemplateToInstanceResponseBody(AttachWhitelistTemplateToInstanceResponseBody &&) = default ;
    AttachWhitelistTemplateToInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachWhitelistTemplateToInstanceResponseBody() = default ;
    AttachWhitelistTemplateToInstanceResponseBody& operator=(const AttachWhitelistTemplateToInstanceResponseBody &) = default ;
    AttachWhitelistTemplateToInstanceResponseBody& operator=(AttachWhitelistTemplateToInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AttachWhitelistTemplateToInstanceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AttachWhitelistTemplateToInstanceResponseBodyData) };
    inline AttachWhitelistTemplateToInstanceResponseBodyData data() { DARABONBA_PTR_GET(data_, AttachWhitelistTemplateToInstanceResponseBodyData) };
    inline AttachWhitelistTemplateToInstanceResponseBody& setData(const AttachWhitelistTemplateToInstanceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AttachWhitelistTemplateToInstanceResponseBody& setData(AttachWhitelistTemplateToInstanceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachWhitelistTemplateToInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<AttachWhitelistTemplateToInstanceResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
