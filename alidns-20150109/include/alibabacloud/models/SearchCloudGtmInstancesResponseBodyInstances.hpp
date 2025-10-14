// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchCloudGtmInstancesResponseBodyInstancesInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    SearchCloudGtmInstancesResponseBodyInstances() = default ;
    SearchCloudGtmInstancesResponseBodyInstances(const SearchCloudGtmInstancesResponseBodyInstances &) = default ;
    SearchCloudGtmInstancesResponseBodyInstances(SearchCloudGtmInstancesResponseBodyInstances &&) = default ;
    SearchCloudGtmInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmInstancesResponseBodyInstances() = default ;
    SearchCloudGtmInstancesResponseBodyInstances& operator=(const SearchCloudGtmInstancesResponseBodyInstances &) = default ;
    SearchCloudGtmInstancesResponseBodyInstances& operator=(SearchCloudGtmInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::SearchCloudGtmInstancesResponseBodyInstancesInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::SearchCloudGtmInstancesResponseBodyInstancesInstance>) };
    inline vector<Models::SearchCloudGtmInstancesResponseBodyInstancesInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::SearchCloudGtmInstancesResponseBodyInstancesInstance>) };
    inline SearchCloudGtmInstancesResponseBodyInstances& setInstance(const vector<Models::SearchCloudGtmInstancesResponseBodyInstancesInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline SearchCloudGtmInstancesResponseBodyInstances& setInstance(vector<Models::SearchCloudGtmInstancesResponseBodyInstancesInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::SearchCloudGtmInstancesResponseBodyInstancesInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
