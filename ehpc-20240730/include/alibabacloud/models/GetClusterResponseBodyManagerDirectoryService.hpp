// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGERDIRECTORYSERVICE_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGERDIRECTORYSERVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetClusterResponseBodyManagerDirectoryService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyManagerDirectoryService& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyManagerDirectoryService& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetClusterResponseBodyManagerDirectoryService() = default ;
    GetClusterResponseBodyManagerDirectoryService(const GetClusterResponseBodyManagerDirectoryService &) = default ;
    GetClusterResponseBodyManagerDirectoryService(GetClusterResponseBodyManagerDirectoryService &&) = default ;
    GetClusterResponseBodyManagerDirectoryService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyManagerDirectoryService() = default ;
    GetClusterResponseBodyManagerDirectoryService& operator=(const GetClusterResponseBodyManagerDirectoryService &) = default ;
    GetClusterResponseBodyManagerDirectoryService& operator=(GetClusterResponseBodyManagerDirectoryService &&) = default ;
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
    inline GetClusterResponseBodyManagerDirectoryService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetClusterResponseBodyManagerDirectoryService& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetClusterResponseBodyManagerDirectoryService& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The state of the domain account service. Valid values:
    // 
    // *   uninit: The service is being installed.
    // *   initing: The service is being initialized.
    // *   running: The service is running.
    // *   exception: The service has run into an exception.
    // *   releasing: The service is being released.
    // *   stopped: The service is stopped.
    // *   pending: The service is waiting to be configured.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the domain account.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the domain account service.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
