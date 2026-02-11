// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETRETCODESHARESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETRETCODESHARESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SetRetcodeShareStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRetcodeShareStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetRetcodeShareStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetRetcodeShareStatusRequest() = default ;
    SetRetcodeShareStatusRequest(const SetRetcodeShareStatusRequest &) = default ;
    SetRetcodeShareStatusRequest(SetRetcodeShareStatusRequest &&) = default ;
    SetRetcodeShareStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRetcodeShareStatusRequest() = default ;
    SetRetcodeShareStatusRequest& operator=(const SetRetcodeShareStatusRequest &) = default ;
    SetRetcodeShareStatusRequest& operator=(SetRetcodeShareStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pid_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SetRetcodeShareStatusRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetRetcodeShareStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline SetRetcodeShareStatusRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> pid_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<bool> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
