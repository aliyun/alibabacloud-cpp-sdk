// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSUPPORTEDPROVISIONPROTOCOLTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSUPPORTEDPROVISIONPROTOCOLTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationSupportedProvisionProtocolTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationSupportedProvisionProtocolTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationSupportedProvisionProtocolType, applicationSupportedProvisionProtocolType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationSupportedProvisionProtocolTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationSupportedProvisionProtocolType, applicationSupportedProvisionProtocolType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListApplicationSupportedProvisionProtocolTypesResponseBody() = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBody(const ListApplicationSupportedProvisionProtocolTypesResponseBody &) = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBody(ListApplicationSupportedProvisionProtocolTypesResponseBody &&) = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationSupportedProvisionProtocolTypesResponseBody() = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBody& operator=(const ListApplicationSupportedProvisionProtocolTypesResponseBody &) = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBody& operator=(ListApplicationSupportedProvisionProtocolTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationSupportedProvisionProtocolType_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationSupportedProvisionProtocolType Field Functions 
    bool hasApplicationSupportedProvisionProtocolType() const { return this->applicationSupportedProvisionProtocolType_ != nullptr;};
    void deleteApplicationSupportedProvisionProtocolType() { this->applicationSupportedProvisionProtocolType_ = nullptr;};
    inline const ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType & applicationSupportedProvisionProtocolType() const { DARABONBA_PTR_GET_CONST(applicationSupportedProvisionProtocolType_, ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType) };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType applicationSupportedProvisionProtocolType() { DARABONBA_PTR_GET(applicationSupportedProvisionProtocolType_, ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType) };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBody& setApplicationSupportedProvisionProtocolType(const ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType & applicationSupportedProvisionProtocolType) { DARABONBA_PTR_SET_VALUE(applicationSupportedProvisionProtocolType_, applicationSupportedProvisionProtocolType) };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBody& setApplicationSupportedProvisionProtocolType(ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType && applicationSupportedProvisionProtocolType) { DARABONBA_PTR_SET_RVALUE(applicationSupportedProvisionProtocolType_, applicationSupportedProvisionProtocolType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType> applicationSupportedProvisionProtocolType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
