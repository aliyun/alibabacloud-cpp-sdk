// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESOURCEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESOURCEMAPREQUEST_HPP_
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
  class DeleteSourceMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSourceMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FidList, fidList_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSourceMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FidList, fidList_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteSourceMapRequest() = default ;
    DeleteSourceMapRequest(const DeleteSourceMapRequest &) = default ;
    DeleteSourceMapRequest(DeleteSourceMapRequest &&) = default ;
    DeleteSourceMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSourceMapRequest() = default ;
    DeleteSourceMapRequest& operator=(const DeleteSourceMapRequest &) = default ;
    DeleteSourceMapRequest& operator=(DeleteSourceMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fidList_ != nullptr
        && this->pid_ != nullptr && this->regionId_ != nullptr; };
    // fidList Field Functions 
    bool hasFidList() const { return this->fidList_ != nullptr;};
    void deleteFidList() { this->fidList_ = nullptr;};
    inline const vector<string> & fidList() const { DARABONBA_PTR_GET_CONST(fidList_, vector<string>) };
    inline vector<string> fidList() { DARABONBA_PTR_GET(fidList_, vector<string>) };
    inline DeleteSourceMapRequest& setFidList(const vector<string> & fidList) { DARABONBA_PTR_SET_VALUE(fidList_, fidList) };
    inline DeleteSourceMapRequest& setFidList(vector<string> && fidList) { DARABONBA_PTR_SET_RVALUE(fidList_, fidList) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DeleteSourceMapRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSourceMapRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the SourceMap files.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> fidList_ = nullptr;
    // The process identifier (PID) of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
