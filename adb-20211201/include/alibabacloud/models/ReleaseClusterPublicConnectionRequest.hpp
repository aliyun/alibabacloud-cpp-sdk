// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASECLUSTERPUBLICCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASECLUSTERPUBLICCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ReleaseClusterPublicConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseClusterPublicConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseClusterPublicConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
    };
    ReleaseClusterPublicConnectionRequest() = default ;
    ReleaseClusterPublicConnectionRequest(const ReleaseClusterPublicConnectionRequest &) = default ;
    ReleaseClusterPublicConnectionRequest(ReleaseClusterPublicConnectionRequest &&) = default ;
    ReleaseClusterPublicConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseClusterPublicConnectionRequest() = default ;
    ReleaseClusterPublicConnectionRequest& operator=(const ReleaseClusterPublicConnectionRequest &) = default ;
    ReleaseClusterPublicConnectionRequest& operator=(ReleaseClusterPublicConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->engine_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ReleaseClusterPublicConnectionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ReleaseClusterPublicConnectionRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database engine of the cluster. Valid values:
    // 
    // *   **AnalyticDB** (default): the AnalyticDB for MySQL engine.
    // *   **Clickhouse**: the wide table engine.
    std::shared_ptr<string> engine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
