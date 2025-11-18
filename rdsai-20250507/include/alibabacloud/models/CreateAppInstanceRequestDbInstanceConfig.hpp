// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEREQUESTDBINSTANCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEREQUESTDBINSTANCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateAppInstanceRequestDBInstanceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceRequestDBInstanceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceRequestDBInstanceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
    };
    CreateAppInstanceRequestDBInstanceConfig() = default ;
    CreateAppInstanceRequestDBInstanceConfig(const CreateAppInstanceRequestDBInstanceConfig &) = default ;
    CreateAppInstanceRequestDBInstanceConfig(CreateAppInstanceRequestDBInstanceConfig &&) = default ;
    CreateAppInstanceRequestDBInstanceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceRequestDBInstanceConfig() = default ;
    CreateAppInstanceRequestDBInstanceConfig& operator=(const CreateAppInstanceRequestDBInstanceConfig &) = default ;
    CreateAppInstanceRequestDBInstanceConfig& operator=(CreateAppInstanceRequestDBInstanceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceClass_ == nullptr
        && return this->DBInstanceStorage_ == nullptr && return this->payType_ == nullptr; };
    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateAppInstanceRequestDBInstanceConfig& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CreateAppInstanceRequestDBInstanceConfig& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateAppInstanceRequestDBInstanceConfig& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


  protected:
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
