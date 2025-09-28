// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESSUBADDONRELEASE_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESSUBADDONRELEASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease& obj) { 
      DARABONBA_PTR_TO_JSON(ready, ready_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease& obj) { 
      DARABONBA_PTR_FROM_JSON(ready, ready_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease(const ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease(ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease &&) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease& operator=(const ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease& operator=(ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ready_ != nullptr
        && this->total_ != nullptr; };
    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline int32_t ready() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
    inline ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> ready_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
