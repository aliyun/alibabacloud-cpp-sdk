// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTEVENTCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTEVENTCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectEventCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectEventCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectEventCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetFileProtectEventCountRequest() = default ;
    GetFileProtectEventCountRequest(const GetFileProtectEventCountRequest &) = default ;
    GetFileProtectEventCountRequest(GetFileProtectEventCountRequest &&) = default ;
    GetFileProtectEventCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectEventCountRequest() = default ;
    GetFileProtectEventCountRequest& operator=(const GetFileProtectEventCountRequest &) = default ;
    GetFileProtectEventCountRequest& operator=(GetFileProtectEventCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetFileProtectEventCountRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status of the event. Valid values:
    // 
    // *   0: unhandled
    // *   1: handled
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
