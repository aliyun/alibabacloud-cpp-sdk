// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODEAPPBYPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODEAPPBYPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRetcodeAppByPidRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeAppByPidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeAppByPidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeAppByPidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetRetcodeAppByPidRequest() = default ;
    GetRetcodeAppByPidRequest(const GetRetcodeAppByPidRequest &) = default ;
    GetRetcodeAppByPidRequest(GetRetcodeAppByPidRequest &&) = default ;
    GetRetcodeAppByPidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeAppByPidRequest() = default ;
    GetRetcodeAppByPidRequest& operator=(const GetRetcodeAppByPidRequest &) = default ;
    GetRetcodeAppByPidRequest& operator=(GetRetcodeAppByPidRequest &&) = default ;
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
    inline GetRetcodeAppByPidRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRetcodeAppByPidRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetRetcodeAppByPidRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetRetcodeAppByPidRequestTags>) };
    inline vector<GetRetcodeAppByPidRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetRetcodeAppByPidRequestTags>) };
    inline GetRetcodeAppByPidRequest& setTags(const vector<GetRetcodeAppByPidRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetRetcodeAppByPidRequest& setTags(vector<GetRetcodeAppByPidRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The PID of the application. To obtain the PID of the application, perform the following steps: Log on to the Application Real-Time Monitoring Service (ARMS) console. In the left-side navigation pane, choose **Browser Monitoring** > **Browser Monitoring**. On the Browser Monitoring page, click the name of the application. The URL in the address bar contains the PID of the application. The PID is in the pid=xxx format. The PID is usually percent encoded as xxx%40xxx. You must modify this value to remove the percent encoding. For example, if the PID in the URL is xxx%4074xxx, you must replace %40 with the at sign (@) to obtain xxx@74xxx.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<GetRetcodeAppByPidRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
