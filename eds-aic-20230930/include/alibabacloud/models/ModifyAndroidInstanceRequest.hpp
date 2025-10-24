// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYANDROIDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYANDROIDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyAndroidInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAndroidInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_TO_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(NewAndroidInstanceName, newAndroidInstanceName_);
      DARABONBA_PTR_TO_JSON(UpBandwidthLimit, upBandwidthLimit_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAndroidInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_FROM_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(NewAndroidInstanceName, newAndroidInstanceName_);
      DARABONBA_PTR_FROM_JSON(UpBandwidthLimit, upBandwidthLimit_);
    };
    ModifyAndroidInstanceRequest() = default ;
    ModifyAndroidInstanceRequest(const ModifyAndroidInstanceRequest &) = default ;
    ModifyAndroidInstanceRequest(ModifyAndroidInstanceRequest &&) = default ;
    ModifyAndroidInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAndroidInstanceRequest() = default ;
    ModifyAndroidInstanceRequest& operator=(const ModifyAndroidInstanceRequest &) = default ;
    ModifyAndroidInstanceRequest& operator=(ModifyAndroidInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && return this->downBandwidthLimit_ == nullptr && return this->instanceIds_ == nullptr && return this->newAndroidInstanceName_ == nullptr && return this->upBandwidthLimit_ == nullptr; };
    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline ModifyAndroidInstanceRequest& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // downBandwidthLimit Field Functions 
    bool hasDownBandwidthLimit() const { return this->downBandwidthLimit_ != nullptr;};
    void deleteDownBandwidthLimit() { this->downBandwidthLimit_ = nullptr;};
    inline int32_t downBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(downBandwidthLimit_, 0) };
    inline ModifyAndroidInstanceRequest& setDownBandwidthLimit(int32_t downBandwidthLimit) { DARABONBA_PTR_SET_VALUE(downBandwidthLimit_, downBandwidthLimit) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ModifyAndroidInstanceRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ModifyAndroidInstanceRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // newAndroidInstanceName Field Functions 
    bool hasNewAndroidInstanceName() const { return this->newAndroidInstanceName_ != nullptr;};
    void deleteNewAndroidInstanceName() { this->newAndroidInstanceName_ = nullptr;};
    inline string newAndroidInstanceName() const { DARABONBA_PTR_GET_DEFAULT(newAndroidInstanceName_, "") };
    inline ModifyAndroidInstanceRequest& setNewAndroidInstanceName(string newAndroidInstanceName) { DARABONBA_PTR_SET_VALUE(newAndroidInstanceName_, newAndroidInstanceName) };


    // upBandwidthLimit Field Functions 
    bool hasUpBandwidthLimit() const { return this->upBandwidthLimit_ != nullptr;};
    void deleteUpBandwidthLimit() { this->upBandwidthLimit_ = nullptr;};
    inline int32_t upBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(upBandwidthLimit_, 0) };
    inline ModifyAndroidInstanceRequest& setUpBandwidthLimit(int32_t upBandwidthLimit) { DARABONBA_PTR_SET_VALUE(upBandwidthLimit_, upBandwidthLimit) };


  protected:
    // The ID of the cloud phone instance.
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    std::shared_ptr<int32_t> downBandwidthLimit_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The new name of the cloud phone instance.
    // 
    // >  The name can be up to 30 characters in length. It can contain letters, digits, colons (:), underscores (_), periods (.), or hyphens (-). It must start with letters but cannot start with http:// or https://.
    std::shared_ptr<string> newAndroidInstanceName_ = nullptr;
    std::shared_ptr<int32_t> upBandwidthLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
