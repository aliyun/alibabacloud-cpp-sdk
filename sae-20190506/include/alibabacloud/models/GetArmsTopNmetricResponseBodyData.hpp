// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARMSTOPNMETRICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETARMSTOPNMETRICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetArmsTopNMetricResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArmsTopNMetricResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rt, rt_);
    };
    friend void from_json(const Darabonba::Json& j, GetArmsTopNMetricResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rt, rt_);
    };
    GetArmsTopNMetricResponseBodyData() = default ;
    GetArmsTopNMetricResponseBodyData(const GetArmsTopNMetricResponseBodyData &) = default ;
    GetArmsTopNMetricResponseBodyData(GetArmsTopNMetricResponseBodyData &&) = default ;
    GetArmsTopNMetricResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArmsTopNMetricResponseBodyData() = default ;
    GetArmsTopNMetricResponseBodyData& operator=(const GetArmsTopNMetricResponseBodyData &) = default ;
    GetArmsTopNMetricResponseBodyData& operator=(GetArmsTopNMetricResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->count_ != nullptr && this->error_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->rt_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetArmsTopNMetricResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetArmsTopNMetricResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline int64_t error() const { DARABONBA_PTR_GET_DEFAULT(error_, 0L) };
    inline GetArmsTopNMetricResponseBodyData& setError(int64_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetArmsTopNMetricResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetArmsTopNMetricResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline int64_t rt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0L) };
    inline GetArmsTopNMetricResponseBodyData& setRt(int64_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The total number of requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The number of errors.
    std::shared_ptr<int64_t> error_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The average response time. Unit: milliseconds.
    std::shared_ptr<int64_t> rt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
