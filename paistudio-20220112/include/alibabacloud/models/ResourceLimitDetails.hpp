// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCELIMITDETAILS_HPP_
#define ALIBABACLOUD_MODELS_RESOURCELIMITDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResourceLimitDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceLimitDetails& obj) { 
      DARABONBA_PTR_TO_JSON(GCLevel, GCLevel_);
      DARABONBA_ANY_TO_JSON(ResourceLimit, resourceLimit_);
      DARABONBA_PTR_TO_JSON(ShouldIgnoreResourceCheck, shouldIgnoreResourceCheck_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceLimitDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(GCLevel, GCLevel_);
      DARABONBA_ANY_FROM_JSON(ResourceLimit, resourceLimit_);
      DARABONBA_PTR_FROM_JSON(ShouldIgnoreResourceCheck, shouldIgnoreResourceCheck_);
    };
    ResourceLimitDetails() = default ;
    ResourceLimitDetails(const ResourceLimitDetails &) = default ;
    ResourceLimitDetails(ResourceLimitDetails &&) = default ;
    ResourceLimitDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceLimitDetails() = default ;
    ResourceLimitDetails& operator=(const ResourceLimitDetails &) = default ;
    ResourceLimitDetails& operator=(ResourceLimitDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GCLevel_ == nullptr
        && this->resourceLimit_ == nullptr && this->shouldIgnoreResourceCheck_ == nullptr; };
    // GCLevel Field Functions 
    bool hasGCLevel() const { return this->GCLevel_ != nullptr;};
    void deleteGCLevel() { this->GCLevel_ = nullptr;};
    inline string getGCLevel() const { DARABONBA_PTR_GET_DEFAULT(GCLevel_, "") };
    inline ResourceLimitDetails& setGCLevel(string GCLevel) { DARABONBA_PTR_SET_VALUE(GCLevel_, GCLevel) };


    // resourceLimit Field Functions 
    bool hasResourceLimit() const { return this->resourceLimit_ != nullptr;};
    void deleteResourceLimit() { this->resourceLimit_ = nullptr;};
    inline     const Darabonba::Json & getResourceLimit() const { DARABONBA_GET(resourceLimit_) };
    Darabonba::Json & getResourceLimit() { DARABONBA_GET(resourceLimit_) };
    inline ResourceLimitDetails& setResourceLimit(const Darabonba::Json & resourceLimit) { DARABONBA_SET_VALUE(resourceLimit_, resourceLimit) };
    inline ResourceLimitDetails& setResourceLimit(Darabonba::Json && resourceLimit) { DARABONBA_SET_RVALUE(resourceLimit_, resourceLimit) };


    // shouldIgnoreResourceCheck Field Functions 
    bool hasShouldIgnoreResourceCheck() const { return this->shouldIgnoreResourceCheck_ != nullptr;};
    void deleteShouldIgnoreResourceCheck() { this->shouldIgnoreResourceCheck_ = nullptr;};
    inline bool getShouldIgnoreResourceCheck() const { DARABONBA_PTR_GET_DEFAULT(shouldIgnoreResourceCheck_, false) };
    inline ResourceLimitDetails& setShouldIgnoreResourceCheck(bool shouldIgnoreResourceCheck) { DARABONBA_PTR_SET_VALUE(shouldIgnoreResourceCheck_, shouldIgnoreResourceCheck) };


  protected:
    shared_ptr<string> GCLevel_ {};
    Darabonba::Json resourceLimit_ {};
    shared_ptr<bool> shouldIgnoreResourceCheck_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
