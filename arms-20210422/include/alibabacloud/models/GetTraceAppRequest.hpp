// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetTraceAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetTraceAppRequest() = default ;
    GetTraceAppRequest(const GetTraceAppRequest &) = default ;
    GetTraceAppRequest(GetTraceAppRequest &&) = default ;
    GetTraceAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceAppRequest() = default ;
    GetTraceAppRequest& operator=(const GetTraceAppRequest &) = default ;
    GetTraceAppRequest& operator=(GetTraceAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pid_ == nullptr
        && this->regionId_ == nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetTraceAppRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTraceAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> pid_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
