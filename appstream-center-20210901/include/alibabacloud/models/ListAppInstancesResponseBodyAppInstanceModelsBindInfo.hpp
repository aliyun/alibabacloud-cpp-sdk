// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCESRESPONSEBODYAPPINSTANCEMODELSBINDINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCESRESPONSEBODYAPPINSTANCEMODELSBINDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstancesResponseBodyAppInstanceModelsBindInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstancesResponseBodyAppInstanceModelsBindInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(UsageDuration, usageDuration_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstancesResponseBodyAppInstanceModelsBindInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(UsageDuration, usageDuration_);
    };
    ListAppInstancesResponseBodyAppInstanceModelsBindInfo() = default ;
    ListAppInstancesResponseBodyAppInstanceModelsBindInfo(const ListAppInstancesResponseBodyAppInstanceModelsBindInfo &) = default ;
    ListAppInstancesResponseBodyAppInstanceModelsBindInfo(ListAppInstancesResponseBodyAppInstanceModelsBindInfo &&) = default ;
    ListAppInstancesResponseBodyAppInstanceModelsBindInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstancesResponseBodyAppInstanceModelsBindInfo() = default ;
    ListAppInstancesResponseBodyAppInstanceModelsBindInfo& operator=(const ListAppInstancesResponseBodyAppInstanceModelsBindInfo &) = default ;
    ListAppInstancesResponseBodyAppInstanceModelsBindInfo& operator=(ListAppInstancesResponseBodyAppInstanceModelsBindInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && return this->usageDuration_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModelsBindInfo& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // usageDuration Field Functions 
    bool hasUsageDuration() const { return this->usageDuration_ != nullptr;};
    void deleteUsageDuration() { this->usageDuration_ = nullptr;};
    inline int64_t usageDuration() const { DARABONBA_PTR_GET_DEFAULT(usageDuration_, 0L) };
    inline ListAppInstancesResponseBodyAppInstanceModelsBindInfo& setUsageDuration(int64_t usageDuration) { DARABONBA_PTR_SET_VALUE(usageDuration_, usageDuration) };


  protected:
    // The ID of the end user that is bound to the application instance.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The use duration of the application instance. Unit: seconds.
    std::shared_ptr<int64_t> usageDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
