// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CreateDBClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    CreateDBClusterResponseBodyData() = default ;
    CreateDBClusterResponseBodyData(const CreateDBClusterResponseBodyData &) = default ;
    CreateDBClusterResponseBodyData(CreateDBClusterResponseBodyData &&) = default ;
    CreateDBClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterResponseBodyData() = default ;
    CreateDBClusterResponseBodyData& operator=(const CreateDBClusterResponseBodyData &) = default ;
    CreateDBClusterResponseBodyData& operator=(CreateDBClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->DBInstanceId_ != nullptr && this->orderId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateDBClusterResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBClusterResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateDBClusterResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
