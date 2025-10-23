// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBREPLICASTATUS_HPP_
#define ALIBABACLOUD_MODELS_JOBREPLICASTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobReplicaStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobReplicaStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, JobReplicaStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    JobReplicaStatus() = default ;
    JobReplicaStatus(const JobReplicaStatus &) = default ;
    JobReplicaStatus(JobReplicaStatus &&) = default ;
    JobReplicaStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobReplicaStatus() = default ;
    JobReplicaStatus& operator=(const JobReplicaStatus &) = default ;
    JobReplicaStatus& operator=(JobReplicaStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->type_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline JobReplicaStatus& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline JobReplicaStatus& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> active_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
