// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteAppListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pids, pids_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pids, pids_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAppListRequest() = default ;
    DeleteAppListRequest(const DeleteAppListRequest &) = default ;
    DeleteAppListRequest(DeleteAppListRequest &&) = default ;
    DeleteAppListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppListRequest() = default ;
    DeleteAppListRequest& operator=(const DeleteAppListRequest &) = default ;
    DeleteAppListRequest& operator=(DeleteAppListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pids_ != nullptr
        && this->regionId_ != nullptr; };
    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline const vector<string> & pids() const { DARABONBA_PTR_GET_CONST(pids_, vector<string>) };
    inline vector<string> pids() { DARABONBA_PTR_GET(pids_, vector<string>) };
    inline DeleteAppListRequest& setPids(const vector<string> & pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };
    inline DeleteAppListRequest& setPids(vector<string> && pids) { DARABONBA_PTR_SET_RVALUE(pids_, pids) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAppListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of PIDs for the applications monitored by Application Monitoring.
    std::shared_ptr<vector<string>> pids_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
