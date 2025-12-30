// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADCONNECTORDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEADCONNECTORDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateADConnectorDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateADConnectorDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdConnectors, adConnectors_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrustPassword, trustPassword_);
    };
    friend void from_json(const Darabonba::Json& j, CreateADConnectorDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdConnectors, adConnectors_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrustPassword, trustPassword_);
    };
    CreateADConnectorDirectoryResponseBody() = default ;
    CreateADConnectorDirectoryResponseBody(const CreateADConnectorDirectoryResponseBody &) = default ;
    CreateADConnectorDirectoryResponseBody(CreateADConnectorDirectoryResponseBody &&) = default ;
    CreateADConnectorDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateADConnectorDirectoryResponseBody() = default ;
    CreateADConnectorDirectoryResponseBody& operator=(const CreateADConnectorDirectoryResponseBody &) = default ;
    CreateADConnectorDirectoryResponseBody& operator=(CreateADConnectorDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdConnectors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdConnectors& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
      };
      friend void from_json(const Darabonba::Json& j, AdConnectors& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
      };
      AdConnectors() = default ;
      AdConnectors(const AdConnectors &) = default ;
      AdConnectors(AdConnectors &&) = default ;
      AdConnectors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdConnectors() = default ;
      AdConnectors& operator=(const AdConnectors &) = default ;
      AdConnectors& operator=(AdConnectors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline AdConnectors& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    protected:
      // The connection address.
      shared_ptr<string> address_ {};
    };

    virtual bool empty() const override { return this->adConnectors_ == nullptr
        && this->directoryId_ == nullptr && this->requestId_ == nullptr && this->trustPassword_ == nullptr; };
    // adConnectors Field Functions 
    bool hasAdConnectors() const { return this->adConnectors_ != nullptr;};
    void deleteAdConnectors() { this->adConnectors_ = nullptr;};
    inline const vector<CreateADConnectorDirectoryResponseBody::AdConnectors> & getAdConnectors() const { DARABONBA_PTR_GET_CONST(adConnectors_, vector<CreateADConnectorDirectoryResponseBody::AdConnectors>) };
    inline vector<CreateADConnectorDirectoryResponseBody::AdConnectors> getAdConnectors() { DARABONBA_PTR_GET(adConnectors_, vector<CreateADConnectorDirectoryResponseBody::AdConnectors>) };
    inline CreateADConnectorDirectoryResponseBody& setAdConnectors(const vector<CreateADConnectorDirectoryResponseBody::AdConnectors> & adConnectors) { DARABONBA_PTR_SET_VALUE(adConnectors_, adConnectors) };
    inline CreateADConnectorDirectoryResponseBody& setAdConnectors(vector<CreateADConnectorDirectoryResponseBody::AdConnectors> && adConnectors) { DARABONBA_PTR_SET_RVALUE(adConnectors_, adConnectors) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateADConnectorDirectoryResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateADConnectorDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trustPassword Field Functions 
    bool hasTrustPassword() const { return this->trustPassword_ != nullptr;};
    void deleteTrustPassword() { this->trustPassword_ = nullptr;};
    inline string getTrustPassword() const { DARABONBA_PTR_GET_DEFAULT(trustPassword_, "") };
    inline CreateADConnectorDirectoryResponseBody& setTrustPassword(string trustPassword) { DARABONBA_PTR_SET_VALUE(trustPassword_, trustPassword) };


  protected:
    // The details of AD connectors.
    shared_ptr<vector<CreateADConnectorDirectoryResponseBody::AdConnectors>> adConnectors_ {};
    // The ID of the AD directory.
    shared_ptr<string> directoryId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The AD trust password.
    shared_ptr<string> trustPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
