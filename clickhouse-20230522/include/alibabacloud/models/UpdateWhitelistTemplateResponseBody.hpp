// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWhitelistTemplateResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class UpdateWhitelistTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhitelistTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhitelistTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateWhitelistTemplateResponseBody() = default ;
    UpdateWhitelistTemplateResponseBody(const UpdateWhitelistTemplateResponseBody &) = default ;
    UpdateWhitelistTemplateResponseBody(UpdateWhitelistTemplateResponseBody &&) = default ;
    UpdateWhitelistTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhitelistTemplateResponseBody() = default ;
    UpdateWhitelistTemplateResponseBody& operator=(const UpdateWhitelistTemplateResponseBody &) = default ;
    UpdateWhitelistTemplateResponseBody& operator=(UpdateWhitelistTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateWhitelistTemplateResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateWhitelistTemplateResponseBodyData) };
    inline UpdateWhitelistTemplateResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateWhitelistTemplateResponseBodyData) };
    inline UpdateWhitelistTemplateResponseBody& setData(const UpdateWhitelistTemplateResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateWhitelistTemplateResponseBody& setData(UpdateWhitelistTemplateResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWhitelistTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<UpdateWhitelistTemplateResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
