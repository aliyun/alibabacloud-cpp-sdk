// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appType, appType_);
      DARABONBA_PTR_TO_JSON(beg_end, begEnd_);
      DARABONBA_PTR_TO_JSON(beg_start, begStart_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(pid, pid_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appType, appType_);
      DARABONBA_PTR_FROM_JSON(beg_end, begEnd_);
      DARABONBA_PTR_FROM_JSON(beg_start, begStart_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(pid, pid_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    GetHotspotAnalysisRequest() = default ;
    GetHotspotAnalysisRequest(const GetHotspotAnalysisRequest &) = default ;
    GetHotspotAnalysisRequest(GetHotspotAnalysisRequest &&) = default ;
    GetHotspotAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotAnalysisRequest() = default ;
    GetHotspotAnalysisRequest& operator=(const GetHotspotAnalysisRequest &) = default ;
    GetHotspotAnalysisRequest& operator=(GetHotspotAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->begEnd_ == nullptr && this->begStart_ == nullptr && this->instance_ == nullptr && this->pid_ == nullptr && this->table_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetHotspotAnalysisRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // begEnd Field Functions 
    bool hasBegEnd() const { return this->begEnd_ != nullptr;};
    void deleteBegEnd() { this->begEnd_ = nullptr;};
    inline int64_t getBegEnd() const { DARABONBA_PTR_GET_DEFAULT(begEnd_, 0L) };
    inline GetHotspotAnalysisRequest& setBegEnd(int64_t begEnd) { DARABONBA_PTR_SET_VALUE(begEnd_, begEnd) };


    // begStart Field Functions 
    bool hasBegStart() const { return this->begStart_ != nullptr;};
    void deleteBegStart() { this->begStart_ = nullptr;};
    inline int64_t getBegStart() const { DARABONBA_PTR_GET_DEFAULT(begStart_, 0L) };
    inline GetHotspotAnalysisRequest& setBegStart(int64_t begStart) { DARABONBA_PTR_SET_VALUE(begStart_, begStart) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetHotspotAnalysisRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int64_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0L) };
    inline GetHotspotAnalysisRequest& setPid(int64_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline GetHotspotAnalysisRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // This parameter is required.
    shared_ptr<string> appType_ {};
    // This parameter is required.
    shared_ptr<int64_t> begEnd_ {};
    // This parameter is required.
    shared_ptr<int64_t> begStart_ {};
    // This parameter is required.
    shared_ptr<string> instance_ {};
    shared_ptr<int64_t> pid_ {};
    shared_ptr<string> table_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
