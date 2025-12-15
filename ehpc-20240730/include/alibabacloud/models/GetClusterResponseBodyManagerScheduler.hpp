// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGERSCHEDULER_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGERSCHEDULER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetClusterResponseBodyManagerScheduler : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyManagerScheduler& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyManagerScheduler& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetClusterResponseBodyManagerScheduler() = default ;
    GetClusterResponseBodyManagerScheduler(const GetClusterResponseBodyManagerScheduler &) = default ;
    GetClusterResponseBodyManagerScheduler(GetClusterResponseBodyManagerScheduler &&) = default ;
    GetClusterResponseBodyManagerScheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyManagerScheduler() = default ;
    GetClusterResponseBodyManagerScheduler& operator=(const GetClusterResponseBodyManagerScheduler &) = default ;
    GetClusterResponseBodyManagerScheduler& operator=(GetClusterResponseBodyManagerScheduler &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->type_ == nullptr && return this->version_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClusterResponseBodyManagerScheduler& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetClusterResponseBodyManagerScheduler& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetClusterResponseBodyManagerScheduler& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The scheduler state. Valid values:
    // 
    // *   uninit: The scheduler is being installed.
    // *   initing: The scheduler is being initialized.
    // *   running: The scheduler is running.
    // *   exception: The scheduler has run into an exception.
    // *   releasing: The scheduler is being released.
    // *   stopped: The scheduler is stopped.
    // *   pending: The scheduler is waiting to be configured.
    std::shared_ptr<string> status_ = nullptr;
    // The scheduler type. Valid values:
    // 
    // *   SLURM
    // *   PBS
    // *   OPENGRIDSCHEDULER
    // *   LSF_PLUGIN
    // *   PBS_PLUGIN
    std::shared_ptr<string> type_ = nullptr;
    // The scheduler version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
