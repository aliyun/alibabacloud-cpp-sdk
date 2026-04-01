// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBUILDREPLICATIONLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBUILDREPLICATIONLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RebuildReplicationLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebuildReplicationLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RebuildReplicationLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    RebuildReplicationLinkRequest() = default ;
    RebuildReplicationLinkRequest(const RebuildReplicationLinkRequest &) = default ;
    RebuildReplicationLinkRequest(RebuildReplicationLinkRequest &&) = default ;
    RebuildReplicationLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebuildReplicationLinkRequest() = default ;
    RebuildReplicationLinkRequest& operator=(const RebuildReplicationLinkRequest &) = default ;
    RebuildReplicationLinkRequest& operator=(RebuildReplicationLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline RebuildReplicationLinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
