// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSCIMSYNCHRONIZATIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSCIMSYNCHRONIZATIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SetSCIMSynchronizationStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSCIMSynchronizationStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(SCIMSynchronizationStatus, SCIMSynchronizationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, SetSCIMSynchronizationStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(SCIMSynchronizationStatus, SCIMSynchronizationStatus_);
    };
    SetSCIMSynchronizationStatusRequest() = default ;
    SetSCIMSynchronizationStatusRequest(const SetSCIMSynchronizationStatusRequest &) = default ;
    SetSCIMSynchronizationStatusRequest(SetSCIMSynchronizationStatusRequest &&) = default ;
    SetSCIMSynchronizationStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSCIMSynchronizationStatusRequest() = default ;
    SetSCIMSynchronizationStatusRequest& operator=(const SetSCIMSynchronizationStatusRequest &) = default ;
    SetSCIMSynchronizationStatusRequest& operator=(SetSCIMSynchronizationStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->SCIMSynchronizationStatus_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetSCIMSynchronizationStatusRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // SCIMSynchronizationStatus Field Functions 
    bool hasSCIMSynchronizationStatus() const { return this->SCIMSynchronizationStatus_ != nullptr;};
    void deleteSCIMSynchronizationStatus() { this->SCIMSynchronizationStatus_ = nullptr;};
    inline string getSCIMSynchronizationStatus() const { DARABONBA_PTR_GET_DEFAULT(SCIMSynchronizationStatus_, "") };
    inline SetSCIMSynchronizationStatusRequest& setSCIMSynchronizationStatus(string SCIMSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(SCIMSynchronizationStatus_, SCIMSynchronizationStatus) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The status of SCIM synchronization. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    shared_ptr<string> SCIMSynchronizationStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
