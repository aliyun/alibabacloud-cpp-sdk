// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVERESOURCETYPEFILTER_HPP_
#define ALIBABACLOUD_MODELS_OBSERVERESOURCETYPEFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveResourceTypeFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveResourceTypeFilter& obj) { 
      DARABONBA_PTR_TO_JSON(eq, eq_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveResourceTypeFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(eq, eq_);
    };
    ObserveResourceTypeFilter() = default ;
    ObserveResourceTypeFilter(const ObserveResourceTypeFilter &) = default ;
    ObserveResourceTypeFilter(ObserveResourceTypeFilter &&) = default ;
    ObserveResourceTypeFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveResourceTypeFilter() = default ;
    ObserveResourceTypeFilter& operator=(const ObserveResourceTypeFilter &) = default ;
    ObserveResourceTypeFilter& operator=(ObserveResourceTypeFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eq_ == nullptr; };
    // eq Field Functions 
    bool hasEq() const { return this->eq_ != nullptr;};
    void deleteEq() { this->eq_ = nullptr;};
    inline string getEq() const { DARABONBA_PTR_GET_DEFAULT(eq_, "") };
    inline ObserveResourceTypeFilter& setEq(string eq) { DARABONBA_PTR_SET_VALUE(eq_, eq) };


  protected:
    // The exact resource type to query. Returns only resources of this type.
    shared_ptr<string> eq_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
