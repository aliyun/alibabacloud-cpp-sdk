// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSUPPORTEDPROVISIONPROTOCOLTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSUPPORTEDPROVISIONPROTOCOLTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ApplicationSupportedProvisionProtocolType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationSupportedProvisionProtocolType& obj) { 
        DARABONBA_PTR_TO_JSON(ProvisionProtocolType, provisionProtocolType_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationSupportedProvisionProtocolType& obj) { 
        DARABONBA_PTR_FROM_JSON(ProvisionProtocolType, provisionProtocolType_);
      };
      ApplicationSupportedProvisionProtocolType() = default ;
      ApplicationSupportedProvisionProtocolType(const ApplicationSupportedProvisionProtocolType &) = default ;
      ApplicationSupportedProvisionProtocolType(ApplicationSupportedProvisionProtocolType &&) = default ;
      ApplicationSupportedProvisionProtocolType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationSupportedProvisionProtocolType() = default ;
      ApplicationSupportedProvisionProtocolType& operator=(const ApplicationSupportedProvisionProtocolType &) = default ;
      ApplicationSupportedProvisionProtocolType& operator=(ApplicationSupportedProvisionProtocolType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->provisionProtocolType_ == nullptr; };
      // provisionProtocolType Field Functions 
      bool hasProvisionProtocolType() const { return this->provisionProtocolType_ != nullptr;};
      void deleteProvisionProtocolType() { this->provisionProtocolType_ = nullptr;};
      inline const vector<string> & getProvisionProtocolType() const { DARABONBA_PTR_GET_CONST(provisionProtocolType_, vector<string>) };
      inline vector<string> getProvisionProtocolType() { DARABONBA_PTR_GET(provisionProtocolType_, vector<string>) };
      inline ApplicationSupportedProvisionProtocolType& setProvisionProtocolType(const vector<string> & provisionProtocolType) { DARABONBA_PTR_SET_VALUE(provisionProtocolType_, provisionProtocolType) };
      inline ApplicationSupportedProvisionProtocolType& setProvisionProtocolType(vector<string> && provisionProtocolType) { DARABONBA_PTR_SET_RVALUE(provisionProtocolType_, provisionProtocolType) };


    protected:
      // 账户同步支持类型
      shared_ptr<vector<string>> provisionProtocolType_ {};
    };

    virtual bool empty() const override { return this->applicationSupportedProvisionProtocolType_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationSupportedProvisionProtocolType Field Functions 
    bool hasApplicationSupportedProvisionProtocolType() const { return this->applicationSupportedProvisionProtocolType_ != nullptr;};
    void deleteApplicationSupportedProvisionProtocolType() { this->applicationSupportedProvisionProtocolType_ = nullptr;};
    inline const ListApplicationSupportedProvisionProtocolTypesResponseBody::ApplicationSupportedProvisionProtocolType & getApplicationSupportedProvisionProtocolType() const { DARABONBA_PTR_GET_CONST(applicationSupportedProvisionProtocolType_, ListApplicationSupportedProvisionProtocolTypesResponseBody::ApplicationSupportedProvisionProtocolType) };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBody::ApplicationSupportedProvisionProtocolType getApplicationSupportedProvisionProtocolType() { DARABONBA_PTR_GET(applicationSupportedProvisionProtocolType_, ListApplicationSupportedProvisionProtocolTypesResponseBody::ApplicationSupportedProvisionProtocolType) };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBody& setApplicationSupportedProvisionProtocolType(const ListApplicationSupportedProvisionProtocolTypesResponseBody::ApplicationSupportedProvisionProtocolType & applicationSupportedProvisionProtocolType) { DARABONBA_PTR_SET_VALUE(applicationSupportedProvisionProtocolType_, applicationSupportedProvisionProtocolType) };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBody& setApplicationSupportedProvisionProtocolType(ListApplicationSupportedProvisionProtocolTypesResponseBody::ApplicationSupportedProvisionProtocolType && applicationSupportedProvisionProtocolType) { DARABONBA_PTR_SET_RVALUE(applicationSupportedProvisionProtocolType_, applicationSupportedProvisionProtocolType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListApplicationSupportedProvisionProtocolTypesResponseBody::ApplicationSupportedProvisionProtocolType> applicationSupportedProvisionProtocolType_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
