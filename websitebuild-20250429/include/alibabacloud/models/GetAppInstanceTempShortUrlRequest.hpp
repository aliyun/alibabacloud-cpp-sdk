// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCETEMPSHORTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCETEMPSHORTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppInstanceTempShortUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceTempShortUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceTempShortUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
    };
    GetAppInstanceTempShortUrlRequest() = default ;
    GetAppInstanceTempShortUrlRequest(const GetAppInstanceTempShortUrlRequest &) = default ;
    GetAppInstanceTempShortUrlRequest(GetAppInstanceTempShortUrlRequest &&) = default ;
    GetAppInstanceTempShortUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceTempShortUrlRequest() = default ;
    GetAppInstanceTempShortUrlRequest& operator=(const GetAppInstanceTempShortUrlRequest &) = default ;
    GetAppInstanceTempShortUrlRequest& operator=(GetAppInstanceTempShortUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppInstanceTempShortUrlRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


  protected:
    shared_ptr<string> bizId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
