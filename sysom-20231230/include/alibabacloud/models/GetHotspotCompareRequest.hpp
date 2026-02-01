// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTCOMPAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTCOMPAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotCompareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotCompareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(beg1_end, beg1End_);
      DARABONBA_PTR_TO_JSON(beg1_start, beg1Start_);
      DARABONBA_PTR_TO_JSON(beg2_end, beg2End_);
      DARABONBA_PTR_TO_JSON(beg2_start, beg2Start_);
      DARABONBA_PTR_TO_JSON(hot_type, hotType_);
      DARABONBA_PTR_TO_JSON(instance1, instance1_);
      DARABONBA_PTR_TO_JSON(instance2, instance2_);
      DARABONBA_PTR_TO_JSON(pid1, pid1_);
      DARABONBA_PTR_TO_JSON(pid2, pid2_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotCompareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(beg1_end, beg1End_);
      DARABONBA_PTR_FROM_JSON(beg1_start, beg1Start_);
      DARABONBA_PTR_FROM_JSON(beg2_end, beg2End_);
      DARABONBA_PTR_FROM_JSON(beg2_start, beg2Start_);
      DARABONBA_PTR_FROM_JSON(hot_type, hotType_);
      DARABONBA_PTR_FROM_JSON(instance1, instance1_);
      DARABONBA_PTR_FROM_JSON(instance2, instance2_);
      DARABONBA_PTR_FROM_JSON(pid1, pid1_);
      DARABONBA_PTR_FROM_JSON(pid2, pid2_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    GetHotspotCompareRequest() = default ;
    GetHotspotCompareRequest(const GetHotspotCompareRequest &) = default ;
    GetHotspotCompareRequest(GetHotspotCompareRequest &&) = default ;
    GetHotspotCompareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotCompareRequest() = default ;
    GetHotspotCompareRequest& operator=(const GetHotspotCompareRequest &) = default ;
    GetHotspotCompareRequest& operator=(GetHotspotCompareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beg1End_ == nullptr
        && this->beg1Start_ == nullptr && this->beg2End_ == nullptr && this->beg2Start_ == nullptr && this->hotType_ == nullptr && this->instance1_ == nullptr
        && this->instance2_ == nullptr && this->pid1_ == nullptr && this->pid2_ == nullptr && this->table_ == nullptr; };
    // beg1End Field Functions 
    bool hasBeg1End() const { return this->beg1End_ != nullptr;};
    void deleteBeg1End() { this->beg1End_ = nullptr;};
    inline int64_t getBeg1End() const { DARABONBA_PTR_GET_DEFAULT(beg1End_, 0L) };
    inline GetHotspotCompareRequest& setBeg1End(int64_t beg1End) { DARABONBA_PTR_SET_VALUE(beg1End_, beg1End) };


    // beg1Start Field Functions 
    bool hasBeg1Start() const { return this->beg1Start_ != nullptr;};
    void deleteBeg1Start() { this->beg1Start_ = nullptr;};
    inline int64_t getBeg1Start() const { DARABONBA_PTR_GET_DEFAULT(beg1Start_, 0L) };
    inline GetHotspotCompareRequest& setBeg1Start(int64_t beg1Start) { DARABONBA_PTR_SET_VALUE(beg1Start_, beg1Start) };


    // beg2End Field Functions 
    bool hasBeg2End() const { return this->beg2End_ != nullptr;};
    void deleteBeg2End() { this->beg2End_ = nullptr;};
    inline int64_t getBeg2End() const { DARABONBA_PTR_GET_DEFAULT(beg2End_, 0L) };
    inline GetHotspotCompareRequest& setBeg2End(int64_t beg2End) { DARABONBA_PTR_SET_VALUE(beg2End_, beg2End) };


    // beg2Start Field Functions 
    bool hasBeg2Start() const { return this->beg2Start_ != nullptr;};
    void deleteBeg2Start() { this->beg2Start_ = nullptr;};
    inline int64_t getBeg2Start() const { DARABONBA_PTR_GET_DEFAULT(beg2Start_, 0L) };
    inline GetHotspotCompareRequest& setBeg2Start(int64_t beg2Start) { DARABONBA_PTR_SET_VALUE(beg2Start_, beg2Start) };


    // hotType Field Functions 
    bool hasHotType() const { return this->hotType_ != nullptr;};
    void deleteHotType() { this->hotType_ = nullptr;};
    inline string getHotType() const { DARABONBA_PTR_GET_DEFAULT(hotType_, "") };
    inline GetHotspotCompareRequest& setHotType(string hotType) { DARABONBA_PTR_SET_VALUE(hotType_, hotType) };


    // instance1 Field Functions 
    bool hasInstance1() const { return this->instance1_ != nullptr;};
    void deleteInstance1() { this->instance1_ = nullptr;};
    inline string getInstance1() const { DARABONBA_PTR_GET_DEFAULT(instance1_, "") };
    inline GetHotspotCompareRequest& setInstance1(string instance1) { DARABONBA_PTR_SET_VALUE(instance1_, instance1) };


    // instance2 Field Functions 
    bool hasInstance2() const { return this->instance2_ != nullptr;};
    void deleteInstance2() { this->instance2_ = nullptr;};
    inline string getInstance2() const { DARABONBA_PTR_GET_DEFAULT(instance2_, "") };
    inline GetHotspotCompareRequest& setInstance2(string instance2) { DARABONBA_PTR_SET_VALUE(instance2_, instance2) };


    // pid1 Field Functions 
    bool hasPid1() const { return this->pid1_ != nullptr;};
    void deletePid1() { this->pid1_ = nullptr;};
    inline int64_t getPid1() const { DARABONBA_PTR_GET_DEFAULT(pid1_, 0L) };
    inline GetHotspotCompareRequest& setPid1(int64_t pid1) { DARABONBA_PTR_SET_VALUE(pid1_, pid1) };


    // pid2 Field Functions 
    bool hasPid2() const { return this->pid2_ != nullptr;};
    void deletePid2() { this->pid2_ = nullptr;};
    inline int64_t getPid2() const { DARABONBA_PTR_GET_DEFAULT(pid2_, 0L) };
    inline GetHotspotCompareRequest& setPid2(int64_t pid2) { DARABONBA_PTR_SET_VALUE(pid2_, pid2) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline GetHotspotCompareRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> beg1End_ {};
    // This parameter is required.
    shared_ptr<int64_t> beg1Start_ {};
    // This parameter is required.
    shared_ptr<int64_t> beg2End_ {};
    // This parameter is required.
    shared_ptr<int64_t> beg2Start_ {};
    shared_ptr<string> hotType_ {};
    // This parameter is required.
    shared_ptr<string> instance1_ {};
    // This parameter is required.
    shared_ptr<string> instance2_ {};
    shared_ptr<int64_t> pid1_ {};
    shared_ptr<int64_t> pid2_ {};
    // This parameter is required.
    shared_ptr<string> table_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
