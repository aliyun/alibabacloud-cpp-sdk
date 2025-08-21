// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTERNALAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXTERNALAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetExternalApplicationResponseBodyExternalApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetExternalApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExternalApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalApplication, externalApplication_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExternalApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalApplication, externalApplication_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExternalApplicationResponseBody() = default ;
    GetExternalApplicationResponseBody(const GetExternalApplicationResponseBody &) = default ;
    GetExternalApplicationResponseBody(GetExternalApplicationResponseBody &&) = default ;
    GetExternalApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExternalApplicationResponseBody() = default ;
    GetExternalApplicationResponseBody& operator=(const GetExternalApplicationResponseBody &) = default ;
    GetExternalApplicationResponseBody& operator=(GetExternalApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalApplication_ != nullptr
        && this->requestId_ != nullptr; };
    // externalApplication Field Functions 
    bool hasExternalApplication() const { return this->externalApplication_ != nullptr;};
    void deleteExternalApplication() { this->externalApplication_ = nullptr;};
    inline const GetExternalApplicationResponseBodyExternalApplication & externalApplication() const { DARABONBA_PTR_GET_CONST(externalApplication_, GetExternalApplicationResponseBodyExternalApplication) };
    inline GetExternalApplicationResponseBodyExternalApplication externalApplication() { DARABONBA_PTR_GET(externalApplication_, GetExternalApplicationResponseBodyExternalApplication) };
    inline GetExternalApplicationResponseBody& setExternalApplication(const GetExternalApplicationResponseBodyExternalApplication & externalApplication) { DARABONBA_PTR_SET_VALUE(externalApplication_, externalApplication) };
    inline GetExternalApplicationResponseBody& setExternalApplication(GetExternalApplicationResponseBodyExternalApplication && externalApplication) { DARABONBA_PTR_SET_RVALUE(externalApplication_, externalApplication) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExternalApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the external application.
    std::shared_ptr<GetExternalApplicationResponseBodyExternalApplication> externalApplication_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
