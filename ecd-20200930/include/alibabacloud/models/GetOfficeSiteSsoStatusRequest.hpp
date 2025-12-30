// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOFFICESITESSOSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOFFICESITESSOSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetOfficeSiteSsoStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOfficeSiteSsoStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOfficeSiteSsoStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetOfficeSiteSsoStatusRequest() = default ;
    GetOfficeSiteSsoStatusRequest(const GetOfficeSiteSsoStatusRequest &) = default ;
    GetOfficeSiteSsoStatusRequest(GetOfficeSiteSsoStatusRequest &&) = default ;
    GetOfficeSiteSsoStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOfficeSiteSsoStatusRequest() = default ;
    GetOfficeSiteSsoStatusRequest& operator=(const GetOfficeSiteSsoStatusRequest &) = default ;
    GetOfficeSiteSsoStatusRequest& operator=(GetOfficeSiteSsoStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->officeSiteId_ == nullptr
        && this->regionId_ == nullptr; };
    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline GetOfficeSiteSsoStatusRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOfficeSiteSsoStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
