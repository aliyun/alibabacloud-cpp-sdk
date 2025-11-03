// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetResourcesResponseBodyData() = default ;
    GetResourcesResponseBodyData(const GetResourcesResponseBodyData &) = default ;
    GetResourcesResponseBodyData(GetResourcesResponseBodyData &&) = default ;
    GetResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcesResponseBodyData() = default ;
    GetResourcesResponseBodyData& operator=(const GetResourcesResponseBodyData &) = default ;
    GetResourcesResponseBodyData& operator=(GetResourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->total_ == nullptr
        && return this->unit_ == nullptr && return this->usage_ == nullptr; };
    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline float total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
    inline GetResourcesResponseBodyData& setTotal(float total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetResourcesResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline float usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0.0) };
    inline GetResourcesResponseBodyData& setUsage(float usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<float> total_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<float> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
