// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESITEMONITORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ENABLESITEMONITORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class EnableSiteMonitorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSiteMonitorsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSiteMonitorsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
    };
    EnableSiteMonitorsResponseBodyData() = default ;
    EnableSiteMonitorsResponseBodyData(const EnableSiteMonitorsResponseBodyData &) = default ;
    EnableSiteMonitorsResponseBodyData(EnableSiteMonitorsResponseBodyData &&) = default ;
    EnableSiteMonitorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSiteMonitorsResponseBodyData() = default ;
    EnableSiteMonitorsResponseBodyData& operator=(const EnableSiteMonitorsResponseBodyData &) = default ;
    EnableSiteMonitorsResponseBodyData& operator=(EnableSiteMonitorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline EnableSiteMonitorsResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The number of detection points.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
