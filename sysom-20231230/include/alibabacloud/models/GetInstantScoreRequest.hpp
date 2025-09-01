// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANTSCOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANTSCOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetInstantScoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstantScoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstantScoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
    };
    GetInstantScoreRequest() = default ;
    GetInstantScoreRequest(const GetInstantScoreRequest &) = default ;
    GetInstantScoreRequest(GetInstantScoreRequest &&) = default ;
    GetInstantScoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstantScoreRequest() = default ;
    GetInstantScoreRequest& operator=(const GetInstantScoreRequest &) = default ;
    GetInstantScoreRequest& operator=(GetInstantScoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->instance_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetInstantScoreRequest& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetInstantScoreRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


  protected:
    std::shared_ptr<string> cluster_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
