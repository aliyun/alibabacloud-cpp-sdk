// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVERESOURCELISTFILTER_HPP_
#define ALIBABACLOUD_MODELS_OBSERVERESOURCELISTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveResourceListFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveResourceListFilter& obj) { 
      DARABONBA_PTR_TO_JSON(contains, contains_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveResourceListFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(contains, contains_);
    };
    ObserveResourceListFilter() = default ;
    ObserveResourceListFilter(const ObserveResourceListFilter &) = default ;
    ObserveResourceListFilter(ObserveResourceListFilter &&) = default ;
    ObserveResourceListFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveResourceListFilter() = default ;
    ObserveResourceListFilter& operator=(const ObserveResourceListFilter &) = default ;
    ObserveResourceListFilter& operator=(ObserveResourceListFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contains_ == nullptr; };
    // contains Field Functions 
    bool hasContains() const { return this->contains_ != nullptr;};
    void deleteContains() { this->contains_ = nullptr;};
    inline const vector<string> & getContains() const { DARABONBA_PTR_GET_CONST(contains_, vector<string>) };
    inline vector<string> getContains() { DARABONBA_PTR_GET(contains_, vector<string>) };
    inline ObserveResourceListFilter& setContains(const vector<string> & contains) { DARABONBA_PTR_SET_VALUE(contains_, contains) };
    inline ObserveResourceListFilter& setContains(vector<string> && contains) { DARABONBA_PTR_SET_RVALUE(contains_, contains) };


  protected:
    // Returns resources if a specified property contains any string in this array.
    shared_ptr<vector<string>> contains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
