// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetMemoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(cmsWorkspaceName, cmsWorkspaceName_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(longTtl, longTtl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(permanent, permanent_);
      DARABONBA_PTR_TO_JSON(shortTtl, shortTtl_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(cmsWorkspaceName, cmsWorkspaceName_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(longTtl, longTtl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(permanent, permanent_);
      DARABONBA_PTR_FROM_JSON(shortTtl, shortTtl_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    GetMemoryResponseBodyData() = default ;
    GetMemoryResponseBodyData(const GetMemoryResponseBodyData &) = default ;
    GetMemoryResponseBodyData(GetMemoryResponseBodyData &&) = default ;
    GetMemoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryResponseBodyData() = default ;
    GetMemoryResponseBodyData& operator=(const GetMemoryResponseBodyData &) = default ;
    GetMemoryResponseBodyData& operator=(GetMemoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmsWorkspaceName_ == nullptr
        && return this->createTime_ == nullptr && return this->longTtl_ == nullptr && return this->name_ == nullptr && return this->permanent_ == nullptr && return this->shortTtl_ == nullptr
        && return this->strategy_ == nullptr; };
    // cmsWorkspaceName Field Functions 
    bool hasCmsWorkspaceName() const { return this->cmsWorkspaceName_ != nullptr;};
    void deleteCmsWorkspaceName() { this->cmsWorkspaceName_ = nullptr;};
    inline string cmsWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspaceName_, "") };
    inline GetMemoryResponseBodyData& setCmsWorkspaceName(string cmsWorkspaceName) { DARABONBA_PTR_SET_VALUE(cmsWorkspaceName_, cmsWorkspaceName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline GetMemoryResponseBodyData& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // longTtl Field Functions 
    bool hasLongTtl() const { return this->longTtl_ != nullptr;};
    void deleteLongTtl() { this->longTtl_ = nullptr;};
    inline int32_t longTtl() const { DARABONBA_PTR_GET_DEFAULT(longTtl_, 0) };
    inline GetMemoryResponseBodyData& setLongTtl(int32_t longTtl) { DARABONBA_PTR_SET_VALUE(longTtl_, longTtl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMemoryResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permanent Field Functions 
    bool hasPermanent() const { return this->permanent_ != nullptr;};
    void deletePermanent() { this->permanent_ = nullptr;};
    inline bool permanent() const { DARABONBA_PTR_GET_DEFAULT(permanent_, false) };
    inline GetMemoryResponseBodyData& setPermanent(bool permanent) { DARABONBA_PTR_SET_VALUE(permanent_, permanent) };


    // shortTtl Field Functions 
    bool hasShortTtl() const { return this->shortTtl_ != nullptr;};
    void deleteShortTtl() { this->shortTtl_ = nullptr;};
    inline int32_t shortTtl() const { DARABONBA_PTR_GET_DEFAULT(shortTtl_, 0) };
    inline GetMemoryResponseBodyData& setShortTtl(int32_t shortTtl) { DARABONBA_PTR_SET_VALUE(shortTtl_, shortTtl) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const vector<string> & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, vector<string>) };
    inline vector<string> strategy() { DARABONBA_PTR_GET(strategy_, vector<string>) };
    inline GetMemoryResponseBodyData& setStrategy(const vector<string> & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline GetMemoryResponseBodyData& setStrategy(vector<string> && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<string> cmsWorkspaceName_ = nullptr;
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<int32_t> longTtl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> permanent_ = nullptr;
    std::shared_ptr<int32_t> shortTtl_ = nullptr;
    std::shared_ptr<vector<string>> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
