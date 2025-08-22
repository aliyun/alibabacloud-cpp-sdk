// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESOURCEMAPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESOURCEMAPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteSourceMapShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSourceMapShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FidList, fidListShrink_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSourceMapShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FidList, fidListShrink_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteSourceMapShrinkRequest() = default ;
    DeleteSourceMapShrinkRequest(const DeleteSourceMapShrinkRequest &) = default ;
    DeleteSourceMapShrinkRequest(DeleteSourceMapShrinkRequest &&) = default ;
    DeleteSourceMapShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSourceMapShrinkRequest() = default ;
    DeleteSourceMapShrinkRequest& operator=(const DeleteSourceMapShrinkRequest &) = default ;
    DeleteSourceMapShrinkRequest& operator=(DeleteSourceMapShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fidListShrink_ != nullptr
        && this->pid_ != nullptr && this->regionId_ != nullptr; };
    // fidListShrink Field Functions 
    bool hasFidListShrink() const { return this->fidListShrink_ != nullptr;};
    void deleteFidListShrink() { this->fidListShrink_ = nullptr;};
    inline string fidListShrink() const { DARABONBA_PTR_GET_DEFAULT(fidListShrink_, "") };
    inline DeleteSourceMapShrinkRequest& setFidListShrink(string fidListShrink) { DARABONBA_PTR_SET_VALUE(fidListShrink_, fidListShrink) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DeleteSourceMapShrinkRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSourceMapShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the SourceMap files.
    // 
    // This parameter is required.
    std::shared_ptr<string> fidListShrink_ = nullptr;
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
