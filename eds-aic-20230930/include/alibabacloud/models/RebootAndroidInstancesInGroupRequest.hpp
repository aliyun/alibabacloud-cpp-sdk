// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTANDROIDINSTANCESINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTANDROIDINSTANCESINGROUPREQUEST_HPP_
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
  class RebootAndroidInstancesInGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootAndroidInstancesInGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_TO_JSON(IgnoreParamValidation, ignoreParamValidation_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
    };
    friend void from_json(const Darabonba::Json& j, RebootAndroidInstancesInGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_FROM_JSON(IgnoreParamValidation, ignoreParamValidation_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
    };
    RebootAndroidInstancesInGroupRequest() = default ;
    RebootAndroidInstancesInGroupRequest(const RebootAndroidInstancesInGroupRequest &) = default ;
    RebootAndroidInstancesInGroupRequest(RebootAndroidInstancesInGroupRequest &&) = default ;
    RebootAndroidInstancesInGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootAndroidInstancesInGroupRequest() = default ;
    RebootAndroidInstancesInGroupRequest& operator=(const RebootAndroidInstancesInGroupRequest &) = default ;
    RebootAndroidInstancesInGroupRequest& operator=(RebootAndroidInstancesInGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && this->forceStop_ == nullptr && this->ignoreParamValidation_ == nullptr && this->saleMode_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> getAndroidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline RebootAndroidInstancesInGroupRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline RebootAndroidInstancesInGroupRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // forceStop Field Functions 
    bool hasForceStop() const { return this->forceStop_ != nullptr;};
    void deleteForceStop() { this->forceStop_ = nullptr;};
    inline bool getForceStop() const { DARABONBA_PTR_GET_DEFAULT(forceStop_, false) };
    inline RebootAndroidInstancesInGroupRequest& setForceStop(bool forceStop) { DARABONBA_PTR_SET_VALUE(forceStop_, forceStop) };


    // ignoreParamValidation Field Functions 
    bool hasIgnoreParamValidation() const { return this->ignoreParamValidation_ != nullptr;};
    void deleteIgnoreParamValidation() { this->ignoreParamValidation_ = nullptr;};
    inline bool getIgnoreParamValidation() const { DARABONBA_PTR_GET_DEFAULT(ignoreParamValidation_, false) };
    inline RebootAndroidInstancesInGroupRequest& setIgnoreParamValidation(bool ignoreParamValidation) { DARABONBA_PTR_SET_VALUE(ignoreParamValidation_, ignoreParamValidation) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string getSaleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline RebootAndroidInstancesInGroupRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


  protected:
    // The IDs of the cloud phone instances.
    shared_ptr<vector<string>> androidInstanceIds_ {};
    // Specifies whether to enforce a restart operation. If a cloud phone instance fails to stop due to system or network issues, a forced restart can be triggered, though it may result in data loss.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> forceStop_ {};
    shared_ptr<bool> ignoreParamValidation_ {};
    shared_ptr<string> saleMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
