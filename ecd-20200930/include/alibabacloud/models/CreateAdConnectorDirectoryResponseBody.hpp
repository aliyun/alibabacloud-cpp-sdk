// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADCONNECTORDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEADCONNECTORDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateADConnectorDirectoryResponseBodyAdConnectors.hpp>
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
    virtual bool empty() const override { return this->adConnectors_ == nullptr
        && return this->directoryId_ == nullptr && return this->requestId_ == nullptr && return this->trustPassword_ == nullptr; };
    // adConnectors Field Functions 
    bool hasAdConnectors() const { return this->adConnectors_ != nullptr;};
    void deleteAdConnectors() { this->adConnectors_ = nullptr;};
    inline const vector<CreateADConnectorDirectoryResponseBodyAdConnectors> & adConnectors() const { DARABONBA_PTR_GET_CONST(adConnectors_, vector<CreateADConnectorDirectoryResponseBodyAdConnectors>) };
    inline vector<CreateADConnectorDirectoryResponseBodyAdConnectors> adConnectors() { DARABONBA_PTR_GET(adConnectors_, vector<CreateADConnectorDirectoryResponseBodyAdConnectors>) };
    inline CreateADConnectorDirectoryResponseBody& setAdConnectors(const vector<CreateADConnectorDirectoryResponseBodyAdConnectors> & adConnectors) { DARABONBA_PTR_SET_VALUE(adConnectors_, adConnectors) };
    inline CreateADConnectorDirectoryResponseBody& setAdConnectors(vector<CreateADConnectorDirectoryResponseBodyAdConnectors> && adConnectors) { DARABONBA_PTR_SET_RVALUE(adConnectors_, adConnectors) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateADConnectorDirectoryResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateADConnectorDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trustPassword Field Functions 
    bool hasTrustPassword() const { return this->trustPassword_ != nullptr;};
    void deleteTrustPassword() { this->trustPassword_ = nullptr;};
    inline string trustPassword() const { DARABONBA_PTR_GET_DEFAULT(trustPassword_, "") };
    inline CreateADConnectorDirectoryResponseBody& setTrustPassword(string trustPassword) { DARABONBA_PTR_SET_VALUE(trustPassword_, trustPassword) };


  protected:
    // The details of AD connectors.
    std::shared_ptr<vector<CreateADConnectorDirectoryResponseBodyAdConnectors>> adConnectors_ = nullptr;
    // The ID of the AD directory.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The AD trust password.
    std::shared_ptr<string> trustPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
