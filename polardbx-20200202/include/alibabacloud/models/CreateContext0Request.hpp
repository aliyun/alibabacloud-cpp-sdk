// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXT0REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXT0REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateContext0Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContext0Request& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(OpenSearchInstanceName, openSearchInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContext0Request& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(OpenSearchInstanceName, openSearchInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateContext0Request() = default ;
    CreateContext0Request(const CreateContext0Request &) = default ;
    CreateContext0Request(CreateContext0Request &&) = default ;
    CreateContext0Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContext0Request() = default ;
    CreateContext0Request& operator=(const CreateContext0Request &) = default ;
    CreateContext0Request& operator=(CreateContext0Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->openSearchInstanceName_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateContext0Request& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // openSearchInstanceName Field Functions 
    bool hasOpenSearchInstanceName() const { return this->openSearchInstanceName_ != nullptr;};
    void deleteOpenSearchInstanceName() { this->openSearchInstanceName_ = nullptr;};
    inline string getOpenSearchInstanceName() const { DARABONBA_PTR_GET_DEFAULT(openSearchInstanceName_, "") };
    inline CreateContext0Request& setOpenSearchInstanceName(string openSearchInstanceName) { DARABONBA_PTR_SET_VALUE(openSearchInstanceName_, openSearchInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateContext0Request& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The name of the PolarDB-X Search instance.
    // 
    // This parameter is required.
    shared_ptr<string> openSearchInstanceName_ {};
    // The region in which the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
