// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTEXT0REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTEXT0REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DeleteContext0Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContext0Request& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContext0Request& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteContext0Request() = default ;
    DeleteContext0Request(const DeleteContext0Request &) = default ;
    DeleteContext0Request(DeleteContext0Request &&) = default ;
    DeleteContext0Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContext0Request() = default ;
    DeleteContext0Request& operator=(const DeleteContext0Request &) = default ;
    DeleteContext0Request& operator=(DeleteContext0Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DeleteContext0Request& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteContext0Request& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The region in which the instance resides. > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196841.html) operation to query the regions supported by PolarDB-X, including region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
