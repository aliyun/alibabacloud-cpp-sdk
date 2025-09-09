// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDRDSDBRDSRELATIONINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDRDSDBRDSRELATIONINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class GetDrdsDbRdsRelationInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDrdsDbRdsRelationInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RdsInstanceId, rdsInstanceId_);
      DARABONBA_PTR_TO_JSON(ReadOnlyInstanceInfo, readOnlyInstanceInfo_);
      DARABONBA_PTR_TO_JSON(UsedInstanceId, usedInstanceId_);
      DARABONBA_PTR_TO_JSON(UsedInstanceType, usedInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDrdsDbRdsRelationInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RdsInstanceId, rdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstanceInfo, readOnlyInstanceInfo_);
      DARABONBA_PTR_FROM_JSON(UsedInstanceId, usedInstanceId_);
      DARABONBA_PTR_FROM_JSON(UsedInstanceType, usedInstanceType_);
    };
    GetDrdsDbRdsRelationInfoResponseBodyData() = default ;
    GetDrdsDbRdsRelationInfoResponseBodyData(const GetDrdsDbRdsRelationInfoResponseBodyData &) = default ;
    GetDrdsDbRdsRelationInfoResponseBodyData(GetDrdsDbRdsRelationInfoResponseBodyData &&) = default ;
    GetDrdsDbRdsRelationInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDrdsDbRdsRelationInfoResponseBodyData() = default ;
    GetDrdsDbRdsRelationInfoResponseBodyData& operator=(const GetDrdsDbRdsRelationInfoResponseBodyData &) = default ;
    GetDrdsDbRdsRelationInfoResponseBodyData& operator=(GetDrdsDbRdsRelationInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rdsInstanceId_ != nullptr
        && this->readOnlyInstanceInfo_ != nullptr && this->usedInstanceId_ != nullptr && this->usedInstanceType_ != nullptr; };
    // rdsInstanceId Field Functions 
    bool hasRdsInstanceId() const { return this->rdsInstanceId_ != nullptr;};
    void deleteRdsInstanceId() { this->rdsInstanceId_ = nullptr;};
    inline string rdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(rdsInstanceId_, "") };
    inline GetDrdsDbRdsRelationInfoResponseBodyData& setRdsInstanceId(string rdsInstanceId) { DARABONBA_PTR_SET_VALUE(rdsInstanceId_, rdsInstanceId) };


    // readOnlyInstanceInfo Field Functions 
    bool hasReadOnlyInstanceInfo() const { return this->readOnlyInstanceInfo_ != nullptr;};
    void deleteReadOnlyInstanceInfo() { this->readOnlyInstanceInfo_ = nullptr;};
    inline const vector<string> & readOnlyInstanceInfo() const { DARABONBA_PTR_GET_CONST(readOnlyInstanceInfo_, vector<string>) };
    inline vector<string> readOnlyInstanceInfo() { DARABONBA_PTR_GET(readOnlyInstanceInfo_, vector<string>) };
    inline GetDrdsDbRdsRelationInfoResponseBodyData& setReadOnlyInstanceInfo(const vector<string> & readOnlyInstanceInfo) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceInfo_, readOnlyInstanceInfo) };
    inline GetDrdsDbRdsRelationInfoResponseBodyData& setReadOnlyInstanceInfo(vector<string> && readOnlyInstanceInfo) { DARABONBA_PTR_SET_RVALUE(readOnlyInstanceInfo_, readOnlyInstanceInfo) };


    // usedInstanceId Field Functions 
    bool hasUsedInstanceId() const { return this->usedInstanceId_ != nullptr;};
    void deleteUsedInstanceId() { this->usedInstanceId_ = nullptr;};
    inline string usedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(usedInstanceId_, "") };
    inline GetDrdsDbRdsRelationInfoResponseBodyData& setUsedInstanceId(string usedInstanceId) { DARABONBA_PTR_SET_VALUE(usedInstanceId_, usedInstanceId) };


    // usedInstanceType Field Functions 
    bool hasUsedInstanceType() const { return this->usedInstanceType_ != nullptr;};
    void deleteUsedInstanceType() { this->usedInstanceType_ = nullptr;};
    inline string usedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(usedInstanceType_, "") };
    inline GetDrdsDbRdsRelationInfoResponseBodyData& setUsedInstanceType(string usedInstanceType) { DARABONBA_PTR_SET_VALUE(usedInstanceType_, usedInstanceType) };


  protected:
    // The ID of the storage instance.
    std::shared_ptr<string> rdsInstanceId_ = nullptr;
    // The IDs of the read-only storage instances.
    std::shared_ptr<vector<string>> readOnlyInstanceInfo_ = nullptr;
    // The ID of the storage instance that is in use. If the specified instance in the request is a primary DRDS instance, the value of this parameter is the ID of the primary storage instance. If the specified instance in the request is a read-only DRDS instance, the value of this parameter is the ID of the secondary storage instance.
    std::shared_ptr<string> usedInstanceId_ = nullptr;
    // The type of the storage instance that is in use.
    std::shared_ptr<string> usedInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
