// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWARNINGEVENTMETRICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWARNINGEVENTMETRICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetWarningEventMetricResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarningEventMetricResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WarningCount, warningCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarningEventMetricResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WarningCount, warningCount_);
    };
    GetWarningEventMetricResponseBodyData() = default ;
    GetWarningEventMetricResponseBodyData(const GetWarningEventMetricResponseBodyData &) = default ;
    GetWarningEventMetricResponseBodyData(GetWarningEventMetricResponseBodyData &&) = default ;
    GetWarningEventMetricResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarningEventMetricResponseBodyData() = default ;
    GetWarningEventMetricResponseBodyData& operator=(const GetWarningEventMetricResponseBodyData &) = default ;
    GetWarningEventMetricResponseBodyData& operator=(GetWarningEventMetricResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->name_ != nullptr && this->regionId_ != nullptr && this->warningCount_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetWarningEventMetricResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWarningEventMetricResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetWarningEventMetricResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // warningCount Field Functions 
    bool hasWarningCount() const { return this->warningCount_ != nullptr;};
    void deleteWarningCount() { this->warningCount_ = nullptr;};
    inline int64_t warningCount() const { DARABONBA_PTR_GET_DEFAULT(warningCount_, 0L) };
    inline GetWarningEventMetricResponseBodyData& setWarningCount(int64_t warningCount) { DARABONBA_PTR_SET_VALUE(warningCount_, warningCount) };


  protected:
    // The details of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The application ID.
    std::shared_ptr<string> name_ = nullptr;
    // The application name.
    std::shared_ptr<string> regionId_ = nullptr;
    // The namespace ID.
    std::shared_ptr<int64_t> warningCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
