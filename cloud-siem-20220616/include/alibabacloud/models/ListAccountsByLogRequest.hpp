// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSBYLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSBYLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAccountsByLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsByLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(LogCodes, logCodes_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsByLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(LogCodes, logCodes_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    ListAccountsByLogRequest() = default ;
    ListAccountsByLogRequest(const ListAccountsByLogRequest &) = default ;
    ListAccountsByLogRequest(ListAccountsByLogRequest &&) = default ;
    ListAccountsByLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsByLogRequest() = default ;
    ListAccountsByLogRequest& operator=(const ListAccountsByLogRequest &) = default ;
    ListAccountsByLogRequest& operator=(ListAccountsByLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudCode_ == nullptr
        && this->logCodes_ == nullptr && this->prodCode_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListAccountsByLogRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // logCodes Field Functions 
    bool hasLogCodes() const { return this->logCodes_ != nullptr;};
    void deleteLogCodes() { this->logCodes_ = nullptr;};
    inline const vector<string> & getLogCodes() const { DARABONBA_PTR_GET_CONST(logCodes_, vector<string>) };
    inline vector<string> getLogCodes() { DARABONBA_PTR_GET(logCodes_, vector<string>) };
    inline ListAccountsByLogRequest& setLogCodes(const vector<string> & logCodes) { DARABONBA_PTR_SET_VALUE(logCodes_, logCodes) };
    inline ListAccountsByLogRequest& setLogCodes(vector<string> && logCodes) { DARABONBA_PTR_SET_RVALUE(logCodes_, logCodes) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline ListAccountsByLogRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAccountsByLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListAccountsByLogRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListAccountsByLogRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The code that is used for multi-cloud environments.
    // 
    // This parameter is required.
    shared_ptr<string> cloudCode_ {};
    // The codes of logs. The value is a JSON array.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> logCodes_ {};
    // The code of the service.
    // 
    // This parameter is required.
    shared_ptr<string> prodCode_ {};
    // The data management center of the threat analysis feature. Specify this parameter based on the region where your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions inside China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the account that you switch from the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
