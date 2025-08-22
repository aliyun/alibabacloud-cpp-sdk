// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODELOGSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODELOGSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeLogstoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeLogstoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeLogstoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetRetcodeLogstoreRequest() = default ;
    GetRetcodeLogstoreRequest(const GetRetcodeLogstoreRequest &) = default ;
    GetRetcodeLogstoreRequest(GetRetcodeLogstoreRequest &&) = default ;
    GetRetcodeLogstoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeLogstoreRequest() = default ;
    GetRetcodeLogstoreRequest& operator=(const GetRetcodeLogstoreRequest &) = default ;
    GetRetcodeLogstoreRequest& operator=(GetRetcodeLogstoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pid_ != nullptr
        && this->regionId_ != nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetRetcodeLogstoreRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRetcodeLogstoreRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The process identifier (PID) of the application. To obtain the PID of the application, perform the following steps: Log on to the Application Real-Time Monitoring Service (ARMS) console. In the left-side navigation pane, choose **Browser Monitoring** > **Browser Monitoring**. On the Browser Monitoring page, click the name of the application. The URL in the address bar contains the PID of the application. The PID is in the pid=xxx format. The PID is usually percent encoded as xxx%40xxx. You must modify this value to remove the percent encoding. For example, if the PID in the URL is xxx%4074xxx, you must replace %40 with the at sign (@) to obtain xxx@74xxx.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
