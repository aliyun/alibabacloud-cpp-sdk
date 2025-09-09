// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SyncAppInstanceForPartnerResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SyncAppInstanceForPartnerResponseBody() = default ;
    SyncAppInstanceForPartnerResponseBody(const SyncAppInstanceForPartnerResponseBody &) = default ;
    SyncAppInstanceForPartnerResponseBody(SyncAppInstanceForPartnerResponseBody &&) = default ;
    SyncAppInstanceForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerResponseBody() = default ;
    SyncAppInstanceForPartnerResponseBody& operator=(const SyncAppInstanceForPartnerResponseBody &) = default ;
    SyncAppInstanceForPartnerResponseBody& operator=(SyncAppInstanceForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SyncAppInstanceForPartnerResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SyncAppInstanceForPartnerResponseBodyData) };
    inline SyncAppInstanceForPartnerResponseBodyData data() { DARABONBA_PTR_GET(data_, SyncAppInstanceForPartnerResponseBodyData) };
    inline SyncAppInstanceForPartnerResponseBody& setData(const SyncAppInstanceForPartnerResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SyncAppInstanceForPartnerResponseBody& setData(SyncAppInstanceForPartnerResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SyncAppInstanceForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SyncAppInstanceForPartnerResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
