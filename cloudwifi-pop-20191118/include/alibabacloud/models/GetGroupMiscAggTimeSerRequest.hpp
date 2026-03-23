// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPMISCAGGTIMESERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPMISCAGGTIMESERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetGroupMiscAggTimeSerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupMiscAggTimeSerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApgroupUuid, apgroupUuid_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupMiscAggTimeSerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApgroupUuid, apgroupUuid_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    GetGroupMiscAggTimeSerRequest() = default ;
    GetGroupMiscAggTimeSerRequest(const GetGroupMiscAggTimeSerRequest &) = default ;
    GetGroupMiscAggTimeSerRequest(GetGroupMiscAggTimeSerRequest &&) = default ;
    GetGroupMiscAggTimeSerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupMiscAggTimeSerRequest() = default ;
    GetGroupMiscAggTimeSerRequest& operator=(const GetGroupMiscAggTimeSerRequest &) = default ;
    GetGroupMiscAggTimeSerRequest& operator=(GetGroupMiscAggTimeSerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apgroupUuid_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr && this->end_ == nullptr && this->start_ == nullptr; };
    // apgroupUuid Field Functions 
    bool hasApgroupUuid() const { return this->apgroupUuid_ != nullptr;};
    void deleteApgroupUuid() { this->apgroupUuid_ = nullptr;};
    inline string getApgroupUuid() const { DARABONBA_PTR_GET_DEFAULT(apgroupUuid_, "") };
    inline GetGroupMiscAggTimeSerRequest& setApgroupUuid(string apgroupUuid) { DARABONBA_PTR_SET_VALUE(apgroupUuid_, apgroupUuid) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetGroupMiscAggTimeSerRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetGroupMiscAggTimeSerRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetGroupMiscAggTimeSerRequest& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline GetGroupMiscAggTimeSerRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // This parameter is required.
    shared_ptr<string> apgroupUuid_ {};
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
