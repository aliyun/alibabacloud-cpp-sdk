// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCEPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCEPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeDatabaseInstanceParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseInstanceParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseInstanceParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDatabaseInstanceParametersRequest() = default ;
    DescribeDatabaseInstanceParametersRequest(const DescribeDatabaseInstanceParametersRequest &) = default ;
    DescribeDatabaseInstanceParametersRequest(DescribeDatabaseInstanceParametersRequest &&) = default ;
    DescribeDatabaseInstanceParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseInstanceParametersRequest() = default ;
    DescribeDatabaseInstanceParametersRequest& operator=(const DescribeDatabaseInstanceParametersRequest &) = default ;
    DescribeDatabaseInstanceParametersRequest& operator=(DescribeDatabaseInstanceParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseInstanceId_ == nullptr
        && this->regionId_ == nullptr; };
    // databaseInstanceId Field Functions 
    bool hasDatabaseInstanceId() const { return this->databaseInstanceId_ != nullptr;};
    void deleteDatabaseInstanceId() { this->databaseInstanceId_ = nullptr;};
    inline string getDatabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceId_, "") };
    inline DescribeDatabaseInstanceParametersRequest& setDatabaseInstanceId(string databaseInstanceId) { DARABONBA_PTR_SET_VALUE(databaseInstanceId_, databaseInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDatabaseInstanceParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the lightweight database instance.
    // 
    // This parameter is required.
    shared_ptr<string> databaseInstanceId_ {};
    // The ID of the region where the lightweight database instance is located. You can call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
