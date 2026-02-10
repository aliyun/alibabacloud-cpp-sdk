// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SASINSTALLCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SASINSTALLCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SasInstallCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SasInstallCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, SasInstallCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    SasInstallCodeResponseBody() = default ;
    SasInstallCodeResponseBody(const SasInstallCodeResponseBody &) = default ;
    SasInstallCodeResponseBody(SasInstallCodeResponseBody &&) = default ;
    SasInstallCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SasInstallCodeResponseBody() = default ;
    SasInstallCodeResponseBody& operator=(const SasInstallCodeResponseBody &) = default ;
    SasInstallCodeResponseBody& operator=(SasInstallCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SasInstallCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SasInstallCodeResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The installation verification code that is used to run the installation command when you manually install the Security Center agent.
    shared_ptr<string> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
