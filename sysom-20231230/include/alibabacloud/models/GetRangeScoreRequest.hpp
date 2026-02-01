// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANGESCOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRANGESCOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetRangeScoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRangeScoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetRangeScoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    GetRangeScoreRequest() = default ;
    GetRangeScoreRequest(const GetRangeScoreRequest &) = default ;
    GetRangeScoreRequest(GetRangeScoreRequest &&) = default ;
    GetRangeScoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRangeScoreRequest() = default ;
    GetRangeScoreRequest& operator=(const GetRangeScoreRequest &) = default ;
    GetRangeScoreRequest& operator=(GetRangeScoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr
        && this->end_ == nullptr && this->instance_ == nullptr && this->start_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetRangeScoreRequest& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline float getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0.0) };
    inline GetRangeScoreRequest& setEnd(float end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetRangeScoreRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline float getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0.0) };
    inline GetRangeScoreRequest& setStart(float start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    shared_ptr<string> cluster_ {};
    // This parameter is required.
    shared_ptr<float> end_ {};
    shared_ptr<string> instance_ {};
    // This parameter is required.
    shared_ptr<float> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
