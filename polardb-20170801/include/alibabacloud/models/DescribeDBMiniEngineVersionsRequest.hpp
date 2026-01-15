// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBMiniEngineVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBMiniEngineVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_TO_JSON(DBMinorVersion, DBMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBMiniEngineVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_FROM_JSON(DBMinorVersion, DBMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBMiniEngineVersionsRequest() = default ;
    DescribeDBMiniEngineVersionsRequest(const DescribeDBMiniEngineVersionsRequest &) = default ;
    DescribeDBMiniEngineVersionsRequest(DescribeDBMiniEngineVersionsRequest &&) = default ;
    DescribeDBMiniEngineVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBMiniEngineVersionsRequest() = default ;
    DescribeDBMiniEngineVersionsRequest& operator=(const DescribeDBMiniEngineVersionsRequest &) = default ;
    DescribeDBMiniEngineVersionsRequest& operator=(DescribeDBMiniEngineVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architecture_ == nullptr
        && this->creationCategory_ == nullptr && this->DBMinorVersion_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->regionId_ == nullptr
        && this->zoneId_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeDBMiniEngineVersionsRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // creationCategory Field Functions 
    bool hasCreationCategory() const { return this->creationCategory_ != nullptr;};
    void deleteCreationCategory() { this->creationCategory_ = nullptr;};
    inline string getCreationCategory() const { DARABONBA_PTR_GET_DEFAULT(creationCategory_, "") };
    inline DescribeDBMiniEngineVersionsRequest& setCreationCategory(string creationCategory) { DARABONBA_PTR_SET_VALUE(creationCategory_, creationCategory) };


    // DBMinorVersion Field Functions 
    bool hasDBMinorVersion() const { return this->DBMinorVersion_ != nullptr;};
    void deleteDBMinorVersion() { this->DBMinorVersion_ = nullptr;};
    inline string getDBMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBMinorVersion_, "") };
    inline DescribeDBMiniEngineVersionsRequest& setDBMinorVersion(string DBMinorVersion) { DARABONBA_PTR_SET_VALUE(DBMinorVersion_, DBMinorVersion) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBMiniEngineVersionsRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBMiniEngineVersionsRequest& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBMiniEngineVersionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBMiniEngineVersionsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> architecture_ {};
    shared_ptr<string> creationCategory_ {};
    shared_ptr<string> DBMinorVersion_ {};
    // This parameter is required.
    shared_ptr<string> DBType_ {};
    // This parameter is required.
    shared_ptr<string> DBVersion_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
