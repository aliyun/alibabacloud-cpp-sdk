// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODESHAREURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODESHAREURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeShareUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeShareUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeShareUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
    };
    GetRetcodeShareUrlRequest() = default ;
    GetRetcodeShareUrlRequest(const GetRetcodeShareUrlRequest &) = default ;
    GetRetcodeShareUrlRequest(GetRetcodeShareUrlRequest &&) = default ;
    GetRetcodeShareUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeShareUrlRequest() = default ;
    GetRetcodeShareUrlRequest& operator=(const GetRetcodeShareUrlRequest &) = default ;
    GetRetcodeShareUrlRequest& operator=(GetRetcodeShareUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pid_ != nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetRetcodeShareUrlRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


  protected:
    // The project ID (PID) of the application.
    // 
    // To obtain the application PID, log on to the Application Real-Time Monitoring Service (ARMS) console. In the left-side navigation pane, choose **Browser Monitoring**>**Browser Monitoring**. Then, click the name of the application. The URL in the address bar contains the application PID, in the xxx format. As the browser is encoded, you must modify the PID. For example, if the PID in the URL is xxx%4074xxx, you must replace %40 with an at sign (@) to obtain xxx@74xxx.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
