// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetResourcesRequest() = default ;
    GetResourcesRequest(const GetResourcesRequest &) = default ;
    GetResourcesRequest(GetResourcesRequest &&) = default ;
    GetResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcesRequest() = default ;
    GetResourcesRequest& operator=(const GetResourcesRequest &) = default ;
    GetResourcesRequest& operator=(GetResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->instance_ != nullptr && this->type_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetResourcesRequest& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetResourcesRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetResourcesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> cluster_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
