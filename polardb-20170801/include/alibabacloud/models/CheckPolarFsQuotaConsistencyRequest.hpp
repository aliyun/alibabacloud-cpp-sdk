// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPOLARFSQUOTACONSISTENCYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKPOLARFSQUOTACONSISTENCYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CheckPolarFsQuotaConsistencyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckPolarFsQuotaConsistencyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableRepair, enableRepair_);
      DARABONBA_PTR_TO_JSON(EnableStrictCalculate, enableStrictCalculate_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckPolarFsQuotaConsistencyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableRepair, enableRepair_);
      DARABONBA_PTR_FROM_JSON(EnableStrictCalculate, enableStrictCalculate_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    CheckPolarFsQuotaConsistencyRequest() = default ;
    CheckPolarFsQuotaConsistencyRequest(const CheckPolarFsQuotaConsistencyRequest &) = default ;
    CheckPolarFsQuotaConsistencyRequest(CheckPolarFsQuotaConsistencyRequest &&) = default ;
    CheckPolarFsQuotaConsistencyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckPolarFsQuotaConsistencyRequest() = default ;
    CheckPolarFsQuotaConsistencyRequest& operator=(const CheckPolarFsQuotaConsistencyRequest &) = default ;
    CheckPolarFsQuotaConsistencyRequest& operator=(CheckPolarFsQuotaConsistencyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableRepair_ == nullptr
        && this->enableStrictCalculate_ == nullptr && this->path_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // enableRepair Field Functions 
    bool hasEnableRepair() const { return this->enableRepair_ != nullptr;};
    void deleteEnableRepair() { this->enableRepair_ = nullptr;};
    inline bool getEnableRepair() const { DARABONBA_PTR_GET_DEFAULT(enableRepair_, false) };
    inline CheckPolarFsQuotaConsistencyRequest& setEnableRepair(bool enableRepair) { DARABONBA_PTR_SET_VALUE(enableRepair_, enableRepair) };


    // enableStrictCalculate Field Functions 
    bool hasEnableStrictCalculate() const { return this->enableStrictCalculate_ != nullptr;};
    void deleteEnableStrictCalculate() { this->enableStrictCalculate_ = nullptr;};
    inline bool getEnableStrictCalculate() const { DARABONBA_PTR_GET_DEFAULT(enableStrictCalculate_, false) };
    inline CheckPolarFsQuotaConsistencyRequest& setEnableStrictCalculate(bool enableStrictCalculate) { DARABONBA_PTR_SET_VALUE(enableStrictCalculate_, enableStrictCalculate) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CheckPolarFsQuotaConsistencyRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline CheckPolarFsQuotaConsistencyRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    shared_ptr<bool> enableRepair_ {};
    shared_ptr<bool> enableStrictCalculate_ {};
    shared_ptr<string> path_ {};
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
