// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBANNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDBANNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SendBannerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendBannerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(arguments, arguments_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, SendBannerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    SendBannerResponseBody() = default ;
    SendBannerResponseBody(const SendBannerResponseBody &) = default ;
    SendBannerResponseBody(SendBannerResponseBody &&) = default ;
    SendBannerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendBannerResponseBody() = default ;
    SendBannerResponseBody& operator=(const SendBannerResponseBody &) = default ;
    SendBannerResponseBody& operator=(SendBannerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arguments_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline const vector<Darabonba::Json> & arguments() const { DARABONBA_PTR_GET_CONST(arguments_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> arguments() { DARABONBA_PTR_GET(arguments_, vector<Darabonba::Json>) };
    inline SendBannerResponseBody& setArguments(const vector<Darabonba::Json> & arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };
    inline SendBannerResponseBody& setArguments(vector<Darabonba::Json> && arguments) { DARABONBA_PTR_SET_RVALUE(arguments_, arguments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendBannerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SendBannerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline SendBannerResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline SendBannerResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> arguments_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
