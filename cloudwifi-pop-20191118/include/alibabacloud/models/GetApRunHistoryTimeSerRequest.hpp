// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPRUNHISTORYTIMESERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPRUNHISTORYTIMESERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetApRunHistoryTimeSerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApRunHistoryTimeSerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApMac, apMac_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetApRunHistoryTimeSerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApMac, apMac_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    GetApRunHistoryTimeSerRequest() = default ;
    GetApRunHistoryTimeSerRequest(const GetApRunHistoryTimeSerRequest &) = default ;
    GetApRunHistoryTimeSerRequest(GetApRunHistoryTimeSerRequest &&) = default ;
    GetApRunHistoryTimeSerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApRunHistoryTimeSerRequest() = default ;
    GetApRunHistoryTimeSerRequest& operator=(const GetApRunHistoryTimeSerRequest &) = default ;
    GetApRunHistoryTimeSerRequest& operator=(GetApRunHistoryTimeSerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apMac_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr && this->end_ == nullptr && this->start_ == nullptr; };
    // apMac Field Functions 
    bool hasApMac() const { return this->apMac_ != nullptr;};
    void deleteApMac() { this->apMac_ = nullptr;};
    inline string getApMac() const { DARABONBA_PTR_GET_DEFAULT(apMac_, "") };
    inline GetApRunHistoryTimeSerRequest& setApMac(string apMac) { DARABONBA_PTR_SET_VALUE(apMac_, apMac) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetApRunHistoryTimeSerRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetApRunHistoryTimeSerRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetApRunHistoryTimeSerRequest& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline GetApRunHistoryTimeSerRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // This parameter is required.
    shared_ptr<string> apMac_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<int64_t> end_ {};
    // This parameter is required.
    shared_ptr<int64_t> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
