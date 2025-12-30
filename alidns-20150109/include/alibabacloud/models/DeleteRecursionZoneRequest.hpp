// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERECURSIONZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERECURSIONZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DeleteRecursionZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRecursionZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRecursionZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DeleteRecursionZoneRequest() = default ;
    DeleteRecursionZoneRequest(const DeleteRecursionZoneRequest &) = default ;
    DeleteRecursionZoneRequest(DeleteRecursionZoneRequest &&) = default ;
    DeleteRecursionZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRecursionZoneRequest() = default ;
    DeleteRecursionZoneRequest& operator=(const DeleteRecursionZoneRequest &) = default ;
    DeleteRecursionZoneRequest& operator=(DeleteRecursionZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteRecursionZoneRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DeleteRecursionZoneRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
