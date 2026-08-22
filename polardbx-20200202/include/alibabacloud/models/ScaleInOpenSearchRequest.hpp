// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEINOPENSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEINOPENSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ScaleInOpenSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleInOpenSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchNodeCount, searchNodeCount_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleInOpenSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchNodeCount, searchNodeCount_);
    };
    ScaleInOpenSearchRequest() = default ;
    ScaleInOpenSearchRequest(const ScaleInOpenSearchRequest &) = default ;
    ScaleInOpenSearchRequest(ScaleInOpenSearchRequest &&) = default ;
    ScaleInOpenSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleInOpenSearchRequest() = default ;
    ScaleInOpenSearchRequest& operator=(const ScaleInOpenSearchRequest &) = default ;
    ScaleInOpenSearchRequest& operator=(ScaleInOpenSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->searchNodeCount_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ScaleInOpenSearchRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ScaleInOpenSearchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchNodeCount Field Functions 
    bool hasSearchNodeCount() const { return this->searchNodeCount_ != nullptr;};
    void deleteSearchNodeCount() { this->searchNodeCount_ = nullptr;};
    inline string getSearchNodeCount() const { DARABONBA_PTR_GET_DEFAULT(searchNodeCount_, "") };
    inline ScaleInOpenSearchRequest& setSearchNodeCount(string searchNodeCount) { DARABONBA_PTR_SET_VALUE(searchNodeCount_, searchNodeCount) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The total number of data nodes after the scale-in. The value must be a positive integer and less than the current number of data nodes.
    // 
    // This parameter is required.
    shared_ptr<string> searchNodeCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
