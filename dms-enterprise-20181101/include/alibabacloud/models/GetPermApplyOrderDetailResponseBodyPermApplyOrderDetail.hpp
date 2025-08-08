// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
      DARABONBA_PTR_TO_JSON(PermType, permType_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Seconds, seconds_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
      DARABONBA_PTR_FROM_JSON(PermType, permType_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Seconds, seconds_);
    };
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail &&) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& operator=(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& operator=(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyType_ != nullptr
        && this->permType_ != nullptr && this->resources_ != nullptr && this->seconds_ != nullptr; };
    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string applyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // permType Field Functions 
    bool hasPermType() const { return this->permType_ != nullptr;};
    void deletePermType() { this->permType_ = nullptr;};
    inline int64_t permType() const { DARABONBA_PTR_GET_DEFAULT(permType_, 0L) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& setPermType(int64_t permType) { DARABONBA_PTR_SET_VALUE(permType_, permType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources>) };
    inline vector<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources> resources() { DARABONBA_PTR_GET(resources_, vector<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources>) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& setResources(const vector<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& setResources(vector<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // seconds Field Functions 
    bool hasSeconds() const { return this->seconds_ != nullptr;};
    void deleteSeconds() { this->seconds_ = nullptr;};
    inline int64_t seconds() const { DARABONBA_PTR_GET_DEFAULT(seconds_, 0L) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail& setSeconds(int64_t seconds) { DARABONBA_PTR_SET_VALUE(seconds_, seconds) };


  protected:
    // The type of objects on which you apply for permissions. Valid values:
    // 
    // *   **DB**: database
    // *   **TAB**: table
    // *   **COL**: column
    // *   **INSTANT**: instance
    std::shared_ptr<string> applyType_ = nullptr;
    // The type of the permissions that you apply for. Valid values:
    // 
    // *   **1**: the permissions to query information.
    // *   **2**: the permissions to export information.
    // *   **3**: the permissions to query and export information.
    // *   **4**: the permissions to modify information.
    // *   **5**: the permissions to query and modify information.
    // *   **6**: the permissions to export and modify information.
    // *   **7**: the permissions to query, export, and modify information.
    // *   **8**: the permissions to log on to the database.
    std::shared_ptr<int64_t> permType_ = nullptr;
    // The list of resources.
    std::shared_ptr<vector<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources>> resources_ = nullptr;
    // The validity duration of the permissions. Unit: seconds.
    std::shared_ptr<int64_t> seconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
