// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCIMSYNCHRONIZATIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCIMSYNCHRONIZATIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetSCIMSynchronizationStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSCIMSynchronizationStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSCIMSynchronizationStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
    };
    GetSCIMSynchronizationStatusRequest() = default ;
    GetSCIMSynchronizationStatusRequest(const GetSCIMSynchronizationStatusRequest &) = default ;
    GetSCIMSynchronizationStatusRequest(GetSCIMSynchronizationStatusRequest &&) = default ;
    GetSCIMSynchronizationStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSCIMSynchronizationStatusRequest() = default ;
    GetSCIMSynchronizationStatusRequest& operator=(const GetSCIMSynchronizationStatusRequest &) = default ;
    GetSCIMSynchronizationStatusRequest& operator=(GetSCIMSynchronizationStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetSCIMSynchronizationStatusRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
