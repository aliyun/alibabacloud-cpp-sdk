// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGLOBALDATABASENETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGLOBALDATABASENETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateGlobalDatabaseNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGlobalDatabaseNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GDNId, GDNId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGlobalDatabaseNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GDNId, GDNId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateGlobalDatabaseNetworkResponseBody() = default ;
    CreateGlobalDatabaseNetworkResponseBody(const CreateGlobalDatabaseNetworkResponseBody &) = default ;
    CreateGlobalDatabaseNetworkResponseBody(CreateGlobalDatabaseNetworkResponseBody &&) = default ;
    CreateGlobalDatabaseNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGlobalDatabaseNetworkResponseBody() = default ;
    CreateGlobalDatabaseNetworkResponseBody& operator=(const CreateGlobalDatabaseNetworkResponseBody &) = default ;
    CreateGlobalDatabaseNetworkResponseBody& operator=(CreateGlobalDatabaseNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->GDNId_ != nullptr
        && this->requestId_ != nullptr; };
    // GDNId Field Functions 
    bool hasGDNId() const { return this->GDNId_ != nullptr;};
    void deleteGDNId() { this->GDNId_ = nullptr;};
    inline string GDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
    inline CreateGlobalDatabaseNetworkResponseBody& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGlobalDatabaseNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the GDN.
    std::shared_ptr<string> GDNId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
