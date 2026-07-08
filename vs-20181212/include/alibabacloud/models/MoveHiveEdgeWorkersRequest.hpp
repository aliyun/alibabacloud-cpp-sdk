// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEHIVEEDGEWORKERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEHIVEEDGEWORKERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class MoveHiveEdgeWorkersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveHiveEdgeWorkersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HiveId, hiveId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, MoveHiveEdgeWorkersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HiveId, hiveId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    MoveHiveEdgeWorkersRequest() = default ;
    MoveHiveEdgeWorkersRequest(const MoveHiveEdgeWorkersRequest &) = default ;
    MoveHiveEdgeWorkersRequest(MoveHiveEdgeWorkersRequest &&) = default ;
    MoveHiveEdgeWorkersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveHiveEdgeWorkersRequest() = default ;
    MoveHiveEdgeWorkersRequest& operator=(const MoveHiveEdgeWorkersRequest &) = default ;
    MoveHiveEdgeWorkersRequest& operator=(MoveHiveEdgeWorkersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hiveId_ == nullptr
        && this->instanceIds_ == nullptr; };
    // hiveId Field Functions 
    bool hasHiveId() const { return this->hiveId_ != nullptr;};
    void deleteHiveId() { this->hiveId_ = nullptr;};
    inline string getHiveId() const { DARABONBA_PTR_GET_DEFAULT(hiveId_, "") };
    inline MoveHiveEdgeWorkersRequest& setHiveId(string hiveId) { DARABONBA_PTR_SET_VALUE(hiveId_, hiveId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline MoveHiveEdgeWorkersRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline MoveHiveEdgeWorkersRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // The ID of the target Hive.
    // 
    // This parameter is required.
    shared_ptr<string> hiveId_ {};
    // The IDs of the cloud application service instances to move.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
