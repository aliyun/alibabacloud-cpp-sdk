// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEVERSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEVERSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceVersionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceVersionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_TO_JSON(NewestVersion, newestVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceVersionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_FROM_JSON(NewestVersion, newestVersion_);
    };
    DescribeDrdsInstanceVersionResponseBodyData() = default ;
    DescribeDrdsInstanceVersionResponseBodyData(const DescribeDrdsInstanceVersionResponseBodyData &) = default ;
    DescribeDrdsInstanceVersionResponseBodyData(DescribeDrdsInstanceVersionResponseBodyData &&) = default ;
    DescribeDrdsInstanceVersionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceVersionResponseBodyData() = default ;
    DescribeDrdsInstanceVersionResponseBodyData& operator=(const DescribeDrdsInstanceVersionResponseBodyData &) = default ;
    DescribeDrdsInstanceVersionResponseBodyData& operator=(DescribeDrdsInstanceVersionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceVersion_ != nullptr
        && this->newestVersion_ != nullptr; };
    // instanceVersion Field Functions 
    bool hasInstanceVersion() const { return this->instanceVersion_ != nullptr;};
    void deleteInstanceVersion() { this->instanceVersion_ = nullptr;};
    inline string instanceVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceVersion_, "") };
    inline DescribeDrdsInstanceVersionResponseBodyData& setInstanceVersion(string instanceVersion) { DARABONBA_PTR_SET_VALUE(instanceVersion_, instanceVersion) };


    // newestVersion Field Functions 
    bool hasNewestVersion() const { return this->newestVersion_ != nullptr;};
    void deleteNewestVersion() { this->newestVersion_ = nullptr;};
    inline string newestVersion() const { DARABONBA_PTR_GET_DEFAULT(newestVersion_, "") };
    inline DescribeDrdsInstanceVersionResponseBodyData& setNewestVersion(string newestVersion) { DARABONBA_PTR_SET_VALUE(newestVersion_, newestVersion) };


  protected:
    // The current version of the instance.
    std::shared_ptr<string> instanceVersion_ = nullptr;
    // The latest version of the instance.
    std::shared_ptr<string> newestVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
