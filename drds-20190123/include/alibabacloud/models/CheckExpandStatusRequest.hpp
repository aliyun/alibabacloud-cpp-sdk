// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKEXPANDSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKEXPANDSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CheckExpandStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckExpandStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckExpandStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    CheckExpandStatusRequest() = default ;
    CheckExpandStatusRequest(const CheckExpandStatusRequest &) = default ;
    CheckExpandStatusRequest(CheckExpandStatusRequest &&) = default ;
    CheckExpandStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckExpandStatusRequest() = default ;
    CheckExpandStatusRequest& operator=(const CheckExpandStatusRequest &) = default ;
    CheckExpandStatusRequest& operator=(CheckExpandStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CheckExpandStatusRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline CheckExpandStatusRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // The name of the PolarDB-X database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
