// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAbnormalyEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbnormalyEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pod, pod_);
      DARABONBA_PTR_TO_JSON(showPod, showPod_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbnormalyEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pod, pod_);
      DARABONBA_PTR_FROM_JSON(showPod, showPod_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    ListAbnormalyEventsRequest() = default ;
    ListAbnormalyEventsRequest(const ListAbnormalyEventsRequest &) = default ;
    ListAbnormalyEventsRequest(ListAbnormalyEventsRequest &&) = default ;
    ListAbnormalyEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbnormalyEventsRequest() = default ;
    ListAbnormalyEventsRequest& operator=(const ListAbnormalyEventsRequest &) = default ;
    ListAbnormalyEventsRequest& operator=(ListAbnormalyEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->current_ != nullptr && this->end_ != nullptr && this->event_ != nullptr && this->instance_ != nullptr && this->level_ != nullptr
        && this->namespace_ != nullptr && this->pageSize_ != nullptr && this->pod_ != nullptr && this->showPod_ != nullptr && this->start_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline ListAbnormalyEventsRequest& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListAbnormalyEventsRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline float end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0.0) };
    inline ListAbnormalyEventsRequest& setEnd(float end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline ListAbnormalyEventsRequest& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline ListAbnormalyEventsRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListAbnormalyEventsRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAbnormalyEventsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAbnormalyEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline ListAbnormalyEventsRequest& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // showPod Field Functions 
    bool hasShowPod() const { return this->showPod_ != nullptr;};
    void deleteShowPod() { this->showPod_ = nullptr;};
    inline int32_t showPod() const { DARABONBA_PTR_GET_DEFAULT(showPod_, 0) };
    inline ListAbnormalyEventsRequest& setShowPod(int32_t showPod) { DARABONBA_PTR_SET_VALUE(showPod_, showPod) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline float start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0.0) };
    inline ListAbnormalyEventsRequest& setStart(float start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    std::shared_ptr<string> cluster_ = nullptr;
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<float> end_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> pod_ = nullptr;
    std::shared_ptr<int32_t> showPod_ = nullptr;
    std::shared_ptr<float> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
