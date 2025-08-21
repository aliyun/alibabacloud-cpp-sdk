// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKIBANAPVLNETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKIBANAPVLNETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateKibanaPvlNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKibanaPvlNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(securityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(pvlId, pvlId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKibanaPvlNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(securityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(pvlId, pvlId_);
    };
    UpdateKibanaPvlNetworkRequest() = default ;
    UpdateKibanaPvlNetworkRequest(const UpdateKibanaPvlNetworkRequest &) = default ;
    UpdateKibanaPvlNetworkRequest(UpdateKibanaPvlNetworkRequest &&) = default ;
    UpdateKibanaPvlNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKibanaPvlNetworkRequest() = default ;
    UpdateKibanaPvlNetworkRequest& operator=(const UpdateKibanaPvlNetworkRequest &) = default ;
    UpdateKibanaPvlNetworkRequest& operator=(UpdateKibanaPvlNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointName_ != nullptr
        && this->securityGroups_ != nullptr && this->pvlId_ != nullptr; };
    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline UpdateKibanaPvlNetworkRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<string> & securityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<string>) };
    inline vector<string> securityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<string>) };
    inline UpdateKibanaPvlNetworkRequest& setSecurityGroups(const vector<string> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline UpdateKibanaPvlNetworkRequest& setSecurityGroups(vector<string> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // pvlId Field Functions 
    bool hasPvlId() const { return this->pvlId_ != nullptr;};
    void deletePvlId() { this->pvlId_ = nullptr;};
    inline string pvlId() const { DARABONBA_PTR_GET_DEFAULT(pvlId_, "") };
    inline UpdateKibanaPvlNetworkRequest& setPvlId(string pvlId) { DARABONBA_PTR_SET_VALUE(pvlId_, pvlId) };


  protected:
    std::shared_ptr<string> endpointName_ = nullptr;
    std::shared_ptr<vector<string>> securityGroups_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pvlId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
