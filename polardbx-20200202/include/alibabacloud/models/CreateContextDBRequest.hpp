// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTDBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateContextDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(OpenSearchInstanceName, openSearchInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(OpenSearchInstanceName, openSearchInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateContextDBRequest() = default ;
    CreateContextDBRequest(const CreateContextDBRequest &) = default ;
    CreateContextDBRequest(CreateContextDBRequest &&) = default ;
    CreateContextDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextDBRequest() = default ;
    CreateContextDBRequest& operator=(const CreateContextDBRequest &) = default ;
    CreateContextDBRequest& operator=(CreateContextDBRequest &&) = default ;
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
    inline CreateContextDBRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // openSearchInstanceName Field Functions 
    bool hasOpenSearchInstanceName() const { return this->openSearchInstanceName_ != nullptr;};
    void deleteOpenSearchInstanceName() { this->openSearchInstanceName_ = nullptr;};
    inline string getOpenSearchInstanceName() const { DARABONBA_PTR_GET_DEFAULT(openSearchInstanceName_, "") };
    inline CreateContextDBRequest& setOpenSearchInstanceName(string openSearchInstanceName) { DARABONBA_PTR_SET_VALUE(openSearchInstanceName_, openSearchInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateContextDBRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The name of the PolarDB-X Search instance.
    // 
    // This parameter is required.
    shared_ptr<string> openSearchInstanceName_ {};
    // The ID of the region where the instance resides. > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196841.html) operation to query the regions supported by PolarDB-X, including region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
