// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProvisionApplicationResponseBodyApplicationProvisionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ProvisionApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationProvisionInfo, applicationProvisionInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationProvisionInfo, applicationProvisionInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ProvisionApplicationResponseBody() = default ;
    ProvisionApplicationResponseBody(const ProvisionApplicationResponseBody &) = default ;
    ProvisionApplicationResponseBody(ProvisionApplicationResponseBody &&) = default ;
    ProvisionApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionApplicationResponseBody() = default ;
    ProvisionApplicationResponseBody& operator=(const ProvisionApplicationResponseBody &) = default ;
    ProvisionApplicationResponseBody& operator=(ProvisionApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationProvisionInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // applicationProvisionInfo Field Functions 
    bool hasApplicationProvisionInfo() const { return this->applicationProvisionInfo_ != nullptr;};
    void deleteApplicationProvisionInfo() { this->applicationProvisionInfo_ = nullptr;};
    inline const ProvisionApplicationResponseBodyApplicationProvisionInfo & applicationProvisionInfo() const { DARABONBA_PTR_GET_CONST(applicationProvisionInfo_, ProvisionApplicationResponseBodyApplicationProvisionInfo) };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo applicationProvisionInfo() { DARABONBA_PTR_GET(applicationProvisionInfo_, ProvisionApplicationResponseBodyApplicationProvisionInfo) };
    inline ProvisionApplicationResponseBody& setApplicationProvisionInfo(const ProvisionApplicationResponseBodyApplicationProvisionInfo & applicationProvisionInfo) { DARABONBA_PTR_SET_VALUE(applicationProvisionInfo_, applicationProvisionInfo) };
    inline ProvisionApplicationResponseBody& setApplicationProvisionInfo(ProvisionApplicationResponseBodyApplicationProvisionInfo && applicationProvisionInfo) { DARABONBA_PTR_SET_RVALUE(applicationProvisionInfo_, applicationProvisionInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProvisionApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The installation information of the application.
    std::shared_ptr<ProvisionApplicationResponseBodyApplicationProvisionInfo> applicationProvisionInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
