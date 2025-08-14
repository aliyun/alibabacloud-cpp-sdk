// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(MasterZones, masterZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlaveZones, slaveZones_);
      DARABONBA_PTR_TO_JSON(SupportMulticast, supportMulticast_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(MasterZones, masterZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlaveZones, slaveZones_);
      DARABONBA_PTR_FROM_JSON(SupportMulticast, supportMulticast_);
    };
    ListTransitRouterAvailableResourceResponseBody() = default ;
    ListTransitRouterAvailableResourceResponseBody(const ListTransitRouterAvailableResourceResponseBody &) = default ;
    ListTransitRouterAvailableResourceResponseBody(ListTransitRouterAvailableResourceResponseBody &&) = default ;
    ListTransitRouterAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterAvailableResourceResponseBody() = default ;
    ListTransitRouterAvailableResourceResponseBody& operator=(const ListTransitRouterAvailableResourceResponseBody &) = default ;
    ListTransitRouterAvailableResourceResponseBody& operator=(ListTransitRouterAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableZones_ != nullptr
        && this->masterZones_ != nullptr && this->requestId_ != nullptr && this->slaveZones_ != nullptr && this->supportMulticast_ != nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<string> & availableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<string>) };
    inline vector<string> availableZones() { DARABONBA_PTR_GET(availableZones_, vector<string>) };
    inline ListTransitRouterAvailableResourceResponseBody& setAvailableZones(const vector<string> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline ListTransitRouterAvailableResourceResponseBody& setAvailableZones(vector<string> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // masterZones Field Functions 
    bool hasMasterZones() const { return this->masterZones_ != nullptr;};
    void deleteMasterZones() { this->masterZones_ = nullptr;};
    inline const vector<string> & masterZones() const { DARABONBA_PTR_GET_CONST(masterZones_, vector<string>) };
    inline vector<string> masterZones() { DARABONBA_PTR_GET(masterZones_, vector<string>) };
    inline ListTransitRouterAvailableResourceResponseBody& setMasterZones(const vector<string> & masterZones) { DARABONBA_PTR_SET_VALUE(masterZones_, masterZones) };
    inline ListTransitRouterAvailableResourceResponseBody& setMasterZones(vector<string> && masterZones) { DARABONBA_PTR_SET_RVALUE(masterZones_, masterZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slaveZones Field Functions 
    bool hasSlaveZones() const { return this->slaveZones_ != nullptr;};
    void deleteSlaveZones() { this->slaveZones_ = nullptr;};
    inline const vector<string> & slaveZones() const { DARABONBA_PTR_GET_CONST(slaveZones_, vector<string>) };
    inline vector<string> slaveZones() { DARABONBA_PTR_GET(slaveZones_, vector<string>) };
    inline ListTransitRouterAvailableResourceResponseBody& setSlaveZones(const vector<string> & slaveZones) { DARABONBA_PTR_SET_VALUE(slaveZones_, slaveZones) };
    inline ListTransitRouterAvailableResourceResponseBody& setSlaveZones(vector<string> && slaveZones) { DARABONBA_PTR_SET_RVALUE(slaveZones_, slaveZones) };


    // supportMulticast Field Functions 
    bool hasSupportMulticast() const { return this->supportMulticast_ != nullptr;};
    void deleteSupportMulticast() { this->supportMulticast_ = nullptr;};
    inline bool supportMulticast() const { DARABONBA_PTR_GET_DEFAULT(supportMulticast_, false) };
    inline ListTransitRouterAvailableResourceResponseBody& setSupportMulticast(bool supportMulticast) { DARABONBA_PTR_SET_VALUE(supportMulticast_, supportMulticast) };


  protected:
    // A list of zone IDs.
    std::shared_ptr<vector<string>> availableZones_ = nullptr;
    // A list of primary zones.
    std::shared_ptr<vector<string>> masterZones_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // A list of secondary zone IDs.
    std::shared_ptr<vector<string>> slaveZones_ = nullptr;
    // Indicates whether the zone supports the multicast feature.
    std::shared_ptr<bool> supportMulticast_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
