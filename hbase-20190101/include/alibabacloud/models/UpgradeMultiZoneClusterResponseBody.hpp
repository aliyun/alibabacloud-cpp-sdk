// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMULTIZONECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMULTIZONECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class UpgradeMultiZoneClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMultiZoneClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpgradingComponents, upgradingComponents_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMultiZoneClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpgradingComponents, upgradingComponents_);
    };
    UpgradeMultiZoneClusterResponseBody() = default ;
    UpgradeMultiZoneClusterResponseBody(const UpgradeMultiZoneClusterResponseBody &) = default ;
    UpgradeMultiZoneClusterResponseBody(UpgradeMultiZoneClusterResponseBody &&) = default ;
    UpgradeMultiZoneClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMultiZoneClusterResponseBody() = default ;
    UpgradeMultiZoneClusterResponseBody& operator=(const UpgradeMultiZoneClusterResponseBody &) = default ;
    UpgradeMultiZoneClusterResponseBody& operator=(UpgradeMultiZoneClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->upgradingComponents_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeMultiZoneClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // upgradingComponents Field Functions 
    bool hasUpgradingComponents() const { return this->upgradingComponents_ != nullptr;};
    void deleteUpgradingComponents() { this->upgradingComponents_ = nullptr;};
    inline string getUpgradingComponents() const { DARABONBA_PTR_GET_DEFAULT(upgradingComponents_, "") };
    inline UpgradeMultiZoneClusterResponseBody& setUpgradingComponents(string upgradingComponents) { DARABONBA_PTR_SET_VALUE(upgradingComponents_, upgradingComponents) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The components that triggered the upgrade among the multiple components to be upgraded.
    shared_ptr<string> upgradingComponents_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
