// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeOfficeSitesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeOfficeSitesRequest() = default ;
    DescribeOfficeSitesRequest(const DescribeOfficeSitesRequest &) = default ;
    DescribeOfficeSitesRequest(DescribeOfficeSitesRequest &&) = default ;
    DescribeOfficeSitesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesRequest() = default ;
    DescribeOfficeSitesRequest& operator=(const DescribeOfficeSitesRequest &) = default ;
    DescribeOfficeSitesRequest& operator=(DescribeOfficeSitesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->officeSiteId_ != nullptr && this->regionId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeOfficeSitesRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline const vector<string> & officeSiteId() const { DARABONBA_PTR_GET_CONST(officeSiteId_, vector<string>) };
    inline vector<string> officeSiteId() { DARABONBA_PTR_GET(officeSiteId_, vector<string>) };
    inline DescribeOfficeSitesRequest& setOfficeSiteId(const vector<string> & officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };
    inline DescribeOfficeSitesRequest& setOfficeSiteId(vector<string> && officeSiteId) { DARABONBA_PTR_SET_RVALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeOfficeSitesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<vector<string>> officeSiteId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
