// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTENANTCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTENANTCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTenantCheckResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitTenantCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTenantCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTenantCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitTenantCheckResponseBody() = default ;
    SubmitTenantCheckResponseBody(const SubmitTenantCheckResponseBody &) = default ;
    SubmitTenantCheckResponseBody(SubmitTenantCheckResponseBody &&) = default ;
    SubmitTenantCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTenantCheckResponseBody() = default ;
    SubmitTenantCheckResponseBody& operator=(const SubmitTenantCheckResponseBody &) = default ;
    SubmitTenantCheckResponseBody& operator=(SubmitTenantCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitTenantCheckResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SubmitTenantCheckResponseBodyData) };
    inline SubmitTenantCheckResponseBodyData data() { DARABONBA_PTR_GET(data_, SubmitTenantCheckResponseBodyData) };
    inline SubmitTenantCheckResponseBody& setData(const SubmitTenantCheckResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitTenantCheckResponseBody& setData(SubmitTenantCheckResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitTenantCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<SubmitTenantCheckResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
