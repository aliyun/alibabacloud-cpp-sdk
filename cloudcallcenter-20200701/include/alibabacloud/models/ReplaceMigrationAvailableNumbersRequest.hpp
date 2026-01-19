// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEMIGRATIONAVAILABLENUMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEMIGRATIONAVAILABLENUMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class ReplaceMigrationAvailableNumbersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceMigrationAvailableNumbersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(V1Numbers, v1Numbers_);
      DARABONBA_PTR_TO_JSON(V2Numbers, v2Numbers_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceMigrationAvailableNumbersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(V1Numbers, v1Numbers_);
      DARABONBA_PTR_FROM_JSON(V2Numbers, v2Numbers_);
    };
    ReplaceMigrationAvailableNumbersRequest() = default ;
    ReplaceMigrationAvailableNumbersRequest(const ReplaceMigrationAvailableNumbersRequest &) = default ;
    ReplaceMigrationAvailableNumbersRequest(ReplaceMigrationAvailableNumbersRequest &&) = default ;
    ReplaceMigrationAvailableNumbersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceMigrationAvailableNumbersRequest() = default ;
    ReplaceMigrationAvailableNumbersRequest& operator=(const ReplaceMigrationAvailableNumbersRequest &) = default ;
    ReplaceMigrationAvailableNumbersRequest& operator=(ReplaceMigrationAvailableNumbersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->operatorName_ == nullptr && this->operatorUid_ == nullptr && this->v1Numbers_ == nullptr && this->v2Numbers_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReplaceMigrationAvailableNumbersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline ReplaceMigrationAvailableNumbersRequest& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline int64_t getOperatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, 0L) };
    inline ReplaceMigrationAvailableNumbersRequest& setOperatorUid(int64_t operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // v1Numbers Field Functions 
    bool hasV1Numbers() const { return this->v1Numbers_ != nullptr;};
    void deleteV1Numbers() { this->v1Numbers_ = nullptr;};
    inline string getV1Numbers() const { DARABONBA_PTR_GET_DEFAULT(v1Numbers_, "") };
    inline ReplaceMigrationAvailableNumbersRequest& setV1Numbers(string v1Numbers) { DARABONBA_PTR_SET_VALUE(v1Numbers_, v1Numbers) };


    // v2Numbers Field Functions 
    bool hasV2Numbers() const { return this->v2Numbers_ != nullptr;};
    void deleteV2Numbers() { this->v2Numbers_ = nullptr;};
    inline string getV2Numbers() const { DARABONBA_PTR_GET_DEFAULT(v2Numbers_, "") };
    inline ReplaceMigrationAvailableNumbersRequest& setV2Numbers(string v2Numbers) { DARABONBA_PTR_SET_VALUE(v2Numbers_, v2Numbers) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> operatorName_ {};
    shared_ptr<int64_t> operatorUid_ {};
    shared_ptr<string> v1Numbers_ {};
    shared_ptr<string> v2Numbers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
