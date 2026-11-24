// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPIDSBYVULNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPIDSBYVULNAMESREQUEST_HPP_
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
  class DescribeDesktopIdsByVulNamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopIdsByVulNamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VulName, vulName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopIdsByVulNamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VulName, vulName_);
    };
    DescribeDesktopIdsByVulNamesRequest() = default ;
    DescribeDesktopIdsByVulNamesRequest(const DescribeDesktopIdsByVulNamesRequest &) = default ;
    DescribeDesktopIdsByVulNamesRequest(DescribeDesktopIdsByVulNamesRequest &&) = default ;
    DescribeDesktopIdsByVulNamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopIdsByVulNamesRequest() = default ;
    DescribeDesktopIdsByVulNamesRequest& operator=(const DescribeDesktopIdsByVulNamesRequest &) = default ;
    DescribeDesktopIdsByVulNamesRequest& operator=(DescribeDesktopIdsByVulNamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->necessity_ == nullptr
        && this->officeSiteId_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr && this->vulName_ == nullptr; };
    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeDesktopIdsByVulNamesRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopIdsByVulNamesRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopIdsByVulNamesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDesktopIdsByVulNamesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vulName Field Functions 
    bool hasVulName() const { return this->vulName_ != nullptr;};
    void deleteVulName() { this->vulName_ = nullptr;};
    inline const vector<string> & getVulName() const { DARABONBA_PTR_GET_CONST(vulName_, vector<string>) };
    inline vector<string> getVulName() { DARABONBA_PTR_GET(vulName_, vector<string>) };
    inline DescribeDesktopIdsByVulNamesRequest& setVulName(const vector<string> & vulName) { DARABONBA_PTR_SET_VALUE(vulName_, vulName) };
    inline DescribeDesktopIdsByVulNamesRequest& setVulName(vector<string> && vulName) { DARABONBA_PTR_SET_RVALUE(vulName_, vulName) };


  protected:
    // The necessity level for vulnerability fixing, which indicates the urgency of the vulnerability. Valid values:
    // - asap: high
    // - later: medium
    // - nntf: low
    shared_ptr<string> necessity_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The vulnerability type. Valid values:
    // 
    // - cve: Linux software vulnerability
    // - sys: Windows system vulnerability
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The array of vulnerability names.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> vulName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
