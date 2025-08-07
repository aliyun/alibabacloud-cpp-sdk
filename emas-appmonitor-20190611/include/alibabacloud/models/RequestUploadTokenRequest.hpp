// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REQUESTUPLOADTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REQUESTUPLOADTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class RequestUploadTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RequestUploadTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Os, os_);
    };
    friend void from_json(const Darabonba::Json& j, RequestUploadTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
    };
    RequestUploadTokenRequest() = default ;
    RequestUploadTokenRequest(const RequestUploadTokenRequest &) = default ;
    RequestUploadTokenRequest(RequestUploadTokenRequest &&) = default ;
    RequestUploadTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RequestUploadTokenRequest() = default ;
    RequestUploadTokenRequest& operator=(const RequestUploadTokenRequest &) = default ;
    RequestUploadTokenRequest& operator=(RequestUploadTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->os_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline RequestUploadTokenRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline RequestUploadTokenRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


  protected:
    // appKey
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> os_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
