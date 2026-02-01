// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETABNORMALEVENTSCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETABNORMALEVENTSCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAbnormalEventsCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAbnormalEventsCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(pod, pod_);
      DARABONBA_PTR_TO_JSON(showPod, showPod_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetAbnormalEventsCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(pod, pod_);
      DARABONBA_PTR_FROM_JSON(showPod, showPod_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    GetAbnormalEventsCountRequest() = default ;
    GetAbnormalEventsCountRequest(const GetAbnormalEventsCountRequest &) = default ;
    GetAbnormalEventsCountRequest(GetAbnormalEventsCountRequest &&) = default ;
    GetAbnormalEventsCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAbnormalEventsCountRequest() = default ;
    GetAbnormalEventsCountRequest& operator=(const GetAbnormalEventsCountRequest &) = default ;
    GetAbnormalEventsCountRequest& operator=(GetAbnormalEventsCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr
        && this->end_ == nullptr && this->instance_ == nullptr && this->level_ == nullptr && this->namespace_ == nullptr && this->pod_ == nullptr
        && this->showPod_ == nullptr && this->start_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetAbnormalEventsCountRequest& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline float getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0.0) };
    inline GetAbnormalEventsCountRequest& setEnd(float end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetAbnormalEventsCountRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetAbnormalEventsCountRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetAbnormalEventsCountRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline GetAbnormalEventsCountRequest& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // showPod Field Functions 
    bool hasShowPod() const { return this->showPod_ != nullptr;};
    void deleteShowPod() { this->showPod_ = nullptr;};
    inline int32_t getShowPod() const { DARABONBA_PTR_GET_DEFAULT(showPod_, 0) };
    inline GetAbnormalEventsCountRequest& setShowPod(int32_t showPod) { DARABONBA_PTR_SET_VALUE(showPod_, showPod) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline float getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0.0) };
    inline GetAbnormalEventsCountRequest& setStart(float start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    shared_ptr<string> cluster_ {};
    shared_ptr<float> end_ {};
    shared_ptr<string> instance_ {};
    shared_ptr<string> level_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> pod_ {};
    shared_ptr<int32_t> showPod_ {};
    shared_ptr<float> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
