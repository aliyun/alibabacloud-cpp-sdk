// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPODSOFINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPODSOFINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListPodsOfInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPodsOfInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListPodsOfInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListPodsOfInstanceRequest() = default ;
    ListPodsOfInstanceRequest(const ListPodsOfInstanceRequest &) = default ;
    ListPodsOfInstanceRequest(ListPodsOfInstanceRequest &&) = default ;
    ListPodsOfInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPodsOfInstanceRequest() = default ;
    ListPodsOfInstanceRequest& operator=(const ListPodsOfInstanceRequest &) = default ;
    ListPodsOfInstanceRequest& operator=(ListPodsOfInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->current_ != nullptr && this->instance_ != nullptr && this->pageSize_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPodsOfInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline ListPodsOfInstanceRequest& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline ListPodsOfInstanceRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPodsOfInstanceRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<int64_t> current_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
