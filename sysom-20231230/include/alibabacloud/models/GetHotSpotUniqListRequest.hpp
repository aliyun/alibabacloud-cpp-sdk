// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTUNIQLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTUNIQLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotSpotUniqListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotSpotUniqListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(beg_end, begEnd_);
      DARABONBA_PTR_TO_JSON(beg_start, begStart_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(pid, pid_);
      DARABONBA_PTR_TO_JSON(table, table_);
      DARABONBA_PTR_TO_JSON(uniq, uniq_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotSpotUniqListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(beg_end, begEnd_);
      DARABONBA_PTR_FROM_JSON(beg_start, begStart_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(pid, pid_);
      DARABONBA_PTR_FROM_JSON(table, table_);
      DARABONBA_PTR_FROM_JSON(uniq, uniq_);
    };
    GetHotSpotUniqListRequest() = default ;
    GetHotSpotUniqListRequest(const GetHotSpotUniqListRequest &) = default ;
    GetHotSpotUniqListRequest(GetHotSpotUniqListRequest &&) = default ;
    GetHotSpotUniqListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotSpotUniqListRequest() = default ;
    GetHotSpotUniqListRequest& operator=(const GetHotSpotUniqListRequest &) = default ;
    GetHotSpotUniqListRequest& operator=(GetHotSpotUniqListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begEnd_ != nullptr
        && this->begStart_ != nullptr && this->instance_ != nullptr && this->pid_ != nullptr && this->table_ != nullptr && this->uniq_ != nullptr; };
    // begEnd Field Functions 
    bool hasBegEnd() const { return this->begEnd_ != nullptr;};
    void deleteBegEnd() { this->begEnd_ = nullptr;};
    inline int64_t begEnd() const { DARABONBA_PTR_GET_DEFAULT(begEnd_, 0L) };
    inline GetHotSpotUniqListRequest& setBegEnd(int64_t begEnd) { DARABONBA_PTR_SET_VALUE(begEnd_, begEnd) };


    // begStart Field Functions 
    bool hasBegStart() const { return this->begStart_ != nullptr;};
    void deleteBegStart() { this->begStart_ = nullptr;};
    inline int64_t begStart() const { DARABONBA_PTR_GET_DEFAULT(begStart_, 0L) };
    inline GetHotSpotUniqListRequest& setBegStart(int64_t begStart) { DARABONBA_PTR_SET_VALUE(begStart_, begStart) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetHotSpotUniqListRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int64_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0L) };
    inline GetHotSpotUniqListRequest& setPid(int64_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline GetHotSpotUniqListRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // uniq Field Functions 
    bool hasUniq() const { return this->uniq_ != nullptr;};
    void deleteUniq() { this->uniq_ = nullptr;};
    inline string uniq() const { DARABONBA_PTR_GET_DEFAULT(uniq_, "") };
    inline GetHotSpotUniqListRequest& setUniq(string uniq) { DARABONBA_PTR_SET_VALUE(uniq_, uniq) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> begEnd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> begStart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<int64_t> pid_ = nullptr;
    std::shared_ptr<string> table_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uniq_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
