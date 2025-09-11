// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KILLPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KILLPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class KillProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KillProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, KillProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    KillProcessRequest() = default ;
    KillProcessRequest(const KillProcessRequest &) = default ;
    KillProcessRequest(KillProcessRequest &&) = default ;
    KillProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KillProcessRequest() = default ;
    KillProcessRequest& operator=(const KillProcessRequest &) = default ;
    KillProcessRequest& operator=(KillProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->initialQueryId_ != nullptr && this->regionId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline KillProcessRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // initialQueryId Field Functions 
    bool hasInitialQueryId() const { return this->initialQueryId_ != nullptr;};
    void deleteInitialQueryId() { this->initialQueryId_ = nullptr;};
    inline string initialQueryId() const { DARABONBA_PTR_GET_DEFAULT(initialQueryId_, "") };
    inline KillProcessRequest& setInitialQueryId(string initialQueryId) { DARABONBA_PTR_SET_VALUE(initialQueryId_, initialQueryId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline KillProcessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The query ID.
    std::shared_ptr<string> initialQueryId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
