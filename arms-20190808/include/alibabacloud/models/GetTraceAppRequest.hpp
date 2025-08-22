// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTraceAppRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTraceAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetTraceAppRequest() = default ;
    GetTraceAppRequest(const GetTraceAppRequest &) = default ;
    GetTraceAppRequest(GetTraceAppRequest &&) = default ;
    GetTraceAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceAppRequest() = default ;
    GetTraceAppRequest& operator=(const GetTraceAppRequest &) = default ;
    GetTraceAppRequest& operator=(GetTraceAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pid_ != nullptr
        && this->regionId_ != nullptr && this->tags_ != nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetTraceAppRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTraceAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetTraceAppRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetTraceAppRequestTags>) };
    inline vector<GetTraceAppRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetTraceAppRequestTags>) };
    inline GetTraceAppRequest& setTags(const vector<GetTraceAppRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTraceAppRequest& setTags(vector<GetTraceAppRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The process identifier (PID) of the application. For more information about how to obtain the PID, see [Obtain the PID of an application](https://www.alibabacloud.com/help/zh/doc-detail/186100.htm?spm=a2cdw.13409063.0.0.7a72281f0bkTfx#title-imy-7gj-qhr).
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<GetTraceAppRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
