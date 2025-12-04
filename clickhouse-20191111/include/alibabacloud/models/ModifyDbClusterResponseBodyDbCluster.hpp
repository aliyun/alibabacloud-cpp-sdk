// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERRESPONSEBODYDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERRESPONSEBODYDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class ModifyDBClusterResponseBodyDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterResponseBodyDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(dbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterResponseBodyDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(dbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
    };
    ModifyDBClusterResponseBodyDBCluster() = default ;
    ModifyDBClusterResponseBodyDBCluster(const ModifyDBClusterResponseBodyDBCluster &) = default ;
    ModifyDBClusterResponseBodyDBCluster(ModifyDBClusterResponseBodyDBCluster &&) = default ;
    ModifyDBClusterResponseBodyDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterResponseBodyDBCluster() = default ;
    ModifyDBClusterResponseBodyDBCluster& operator=(const ModifyDBClusterResponseBodyDBCluster &) = default ;
    ModifyDBClusterResponseBodyDBCluster& operator=(ModifyDBClusterResponseBodyDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbClusterId_ == nullptr
        && return this->orderId_ == nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline ModifyDBClusterResponseBodyDBCluster& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ModifyDBClusterResponseBodyDBCluster& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> dbClusterId_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
