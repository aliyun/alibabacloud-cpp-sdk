// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTTRACKINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTTRACKINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotTrackingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotTrackingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(beg_end, begEnd_);
      DARABONBA_PTR_TO_JSON(beg_start, begStart_);
      DARABONBA_PTR_TO_JSON(hot_type, hotType_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(pid, pid_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotTrackingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(beg_end, begEnd_);
      DARABONBA_PTR_FROM_JSON(beg_start, begStart_);
      DARABONBA_PTR_FROM_JSON(hot_type, hotType_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(pid, pid_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    GetHotspotTrackingRequest() = default ;
    GetHotspotTrackingRequest(const GetHotspotTrackingRequest &) = default ;
    GetHotspotTrackingRequest(GetHotspotTrackingRequest &&) = default ;
    GetHotspotTrackingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotTrackingRequest() = default ;
    GetHotspotTrackingRequest& operator=(const GetHotspotTrackingRequest &) = default ;
    GetHotspotTrackingRequest& operator=(GetHotspotTrackingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begEnd_ != nullptr
        && this->begStart_ != nullptr && this->hotType_ != nullptr && this->instance_ != nullptr && this->pid_ != nullptr && this->table_ != nullptr; };
    // begEnd Field Functions 
    bool hasBegEnd() const { return this->begEnd_ != nullptr;};
    void deleteBegEnd() { this->begEnd_ = nullptr;};
    inline int64_t begEnd() const { DARABONBA_PTR_GET_DEFAULT(begEnd_, 0L) };
    inline GetHotspotTrackingRequest& setBegEnd(int64_t begEnd) { DARABONBA_PTR_SET_VALUE(begEnd_, begEnd) };


    // begStart Field Functions 
    bool hasBegStart() const { return this->begStart_ != nullptr;};
    void deleteBegStart() { this->begStart_ = nullptr;};
    inline int64_t begStart() const { DARABONBA_PTR_GET_DEFAULT(begStart_, 0L) };
    inline GetHotspotTrackingRequest& setBegStart(int64_t begStart) { DARABONBA_PTR_SET_VALUE(begStart_, begStart) };


    // hotType Field Functions 
    bool hasHotType() const { return this->hotType_ != nullptr;};
    void deleteHotType() { this->hotType_ = nullptr;};
    inline string hotType() const { DARABONBA_PTR_GET_DEFAULT(hotType_, "") };
    inline GetHotspotTrackingRequest& setHotType(string hotType) { DARABONBA_PTR_SET_VALUE(hotType_, hotType) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetHotspotTrackingRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int64_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0L) };
    inline GetHotspotTrackingRequest& setPid(int64_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline GetHotspotTrackingRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> begEnd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> begStart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> hotType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<int64_t> pid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
