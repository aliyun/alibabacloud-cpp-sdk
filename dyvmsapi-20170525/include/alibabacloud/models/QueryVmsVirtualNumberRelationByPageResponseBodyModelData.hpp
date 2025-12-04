// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVMSVIRTUALNUMBERRELATIONBYPAGERESPONSEBODYMODELDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYVMSVIRTUALNUMBERRELATIONBYPAGERESPONSEBODYMODELDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVmsVirtualNumberRelationByPageResponseBodyModelData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVmsVirtualNumberRelationByPageResponseBodyModelData& obj) { 
      DARABONBA_PTR_TO_JSON(NumberCity, numberCity_);
      DARABONBA_PTR_TO_JSON(NumberProvince, numberProvince_);
      DARABONBA_PTR_TO_JSON(RealNumber, realNumber_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(VirtualNumber, virtualNumber_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVmsVirtualNumberRelationByPageResponseBodyModelData& obj) { 
      DARABONBA_PTR_FROM_JSON(NumberCity, numberCity_);
      DARABONBA_PTR_FROM_JSON(NumberProvince, numberProvince_);
      DARABONBA_PTR_FROM_JSON(RealNumber, realNumber_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(VirtualNumber, virtualNumber_);
    };
    QueryVmsVirtualNumberRelationByPageResponseBodyModelData() = default ;
    QueryVmsVirtualNumberRelationByPageResponseBodyModelData(const QueryVmsVirtualNumberRelationByPageResponseBodyModelData &) = default ;
    QueryVmsVirtualNumberRelationByPageResponseBodyModelData(QueryVmsVirtualNumberRelationByPageResponseBodyModelData &&) = default ;
    QueryVmsVirtualNumberRelationByPageResponseBodyModelData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVmsVirtualNumberRelationByPageResponseBodyModelData() = default ;
    QueryVmsVirtualNumberRelationByPageResponseBodyModelData& operator=(const QueryVmsVirtualNumberRelationByPageResponseBodyModelData &) = default ;
    QueryVmsVirtualNumberRelationByPageResponseBodyModelData& operator=(QueryVmsVirtualNumberRelationByPageResponseBodyModelData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->numberCity_ == nullptr
        && return this->numberProvince_ == nullptr && return this->realNumber_ == nullptr && return this->state_ == nullptr && return this->virtualNumber_ == nullptr; };
    // numberCity Field Functions 
    bool hasNumberCity() const { return this->numberCity_ != nullptr;};
    void deleteNumberCity() { this->numberCity_ = nullptr;};
    inline string numberCity() const { DARABONBA_PTR_GET_DEFAULT(numberCity_, "") };
    inline QueryVmsVirtualNumberRelationByPageResponseBodyModelData& setNumberCity(string numberCity) { DARABONBA_PTR_SET_VALUE(numberCity_, numberCity) };


    // numberProvince Field Functions 
    bool hasNumberProvince() const { return this->numberProvince_ != nullptr;};
    void deleteNumberProvince() { this->numberProvince_ = nullptr;};
    inline string numberProvince() const { DARABONBA_PTR_GET_DEFAULT(numberProvince_, "") };
    inline QueryVmsVirtualNumberRelationByPageResponseBodyModelData& setNumberProvince(string numberProvince) { DARABONBA_PTR_SET_VALUE(numberProvince_, numberProvince) };


    // realNumber Field Functions 
    bool hasRealNumber() const { return this->realNumber_ != nullptr;};
    void deleteRealNumber() { this->realNumber_ = nullptr;};
    inline string realNumber() const { DARABONBA_PTR_GET_DEFAULT(realNumber_, "") };
    inline QueryVmsVirtualNumberRelationByPageResponseBodyModelData& setRealNumber(string realNumber) { DARABONBA_PTR_SET_VALUE(realNumber_, realNumber) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int64_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
    inline QueryVmsVirtualNumberRelationByPageResponseBodyModelData& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // virtualNumber Field Functions 
    bool hasVirtualNumber() const { return this->virtualNumber_ != nullptr;};
    void deleteVirtualNumber() { this->virtualNumber_ = nullptr;};
    inline string virtualNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualNumber_, "") };
    inline QueryVmsVirtualNumberRelationByPageResponseBodyModelData& setVirtualNumber(string virtualNumber) { DARABONBA_PTR_SET_VALUE(virtualNumber_, virtualNumber) };


  protected:
    // 号码归属地--城市
    std::shared_ptr<string> numberCity_ = nullptr;
    // 号码归属地--省
    std::shared_ptr<string> numberProvince_ = nullptr;
    // 真实号码
    std::shared_ptr<string> realNumber_ = nullptr;
    // 状态 1:有效；0:无效；-1:注销
    std::shared_ptr<int64_t> state_ = nullptr;
    // 虚拟号码
    std::shared_ptr<string> virtualNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
