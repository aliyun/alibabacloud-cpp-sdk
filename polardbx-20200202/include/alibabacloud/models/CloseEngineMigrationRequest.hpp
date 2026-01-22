// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEENGINEMIGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSEENGINEMIGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CloseEngineMigrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseEngineMigrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContinueEnableBinlog, continueEnableBinlog_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CloseEngineMigrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContinueEnableBinlog, continueEnableBinlog_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CloseEngineMigrationRequest() = default ;
    CloseEngineMigrationRequest(const CloseEngineMigrationRequest &) = default ;
    CloseEngineMigrationRequest(CloseEngineMigrationRequest &&) = default ;
    CloseEngineMigrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseEngineMigrationRequest() = default ;
    CloseEngineMigrationRequest& operator=(const CloseEngineMigrationRequest &) = default ;
    CloseEngineMigrationRequest& operator=(CloseEngineMigrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->continueEnableBinlog_ == nullptr
        && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr; };
    // continueEnableBinlog Field Functions 
    bool hasContinueEnableBinlog() const { return this->continueEnableBinlog_ != nullptr;};
    void deleteContinueEnableBinlog() { this->continueEnableBinlog_ = nullptr;};
    inline string getContinueEnableBinlog() const { DARABONBA_PTR_GET_DEFAULT(continueEnableBinlog_, "") };
    inline CloseEngineMigrationRequest& setContinueEnableBinlog(string continueEnableBinlog) { DARABONBA_PTR_SET_VALUE(continueEnableBinlog_, continueEnableBinlog) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CloseEngineMigrationRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CloseEngineMigrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> continueEnableBinlog_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
