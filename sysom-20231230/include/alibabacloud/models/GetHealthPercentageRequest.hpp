// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHEALTHPERCENTAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHEALTHPERCENTAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHealthPercentageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHealthPercentageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetHealthPercentageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    GetHealthPercentageRequest() = default ;
    GetHealthPercentageRequest(const GetHealthPercentageRequest &) = default ;
    GetHealthPercentageRequest(GetHealthPercentageRequest &&) = default ;
    GetHealthPercentageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHealthPercentageRequest() = default ;
    GetHealthPercentageRequest& operator=(const GetHealthPercentageRequest &) = default ;
    GetHealthPercentageRequest& operator=(GetHealthPercentageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->end_ != nullptr && this->instance_ != nullptr && this->start_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetHealthPercentageRequest& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline float end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0.0) };
    inline GetHealthPercentageRequest& setEnd(float end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetHealthPercentageRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline float start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0.0) };
    inline GetHealthPercentageRequest& setStart(float start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    std::shared_ptr<string> cluster_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> end_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
