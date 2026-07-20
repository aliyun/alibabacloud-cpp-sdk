// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetRegionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(serviceRoleExists, serviceRoleExists_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceRoleExists, serviceRoleExists_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetRegionStatusResponseBody() = default ;
    GetRegionStatusResponseBody(const GetRegionStatusResponseBody &) = default ;
    GetRegionStatusResponseBody(GetRegionStatusResponseBody &&) = default ;
    GetRegionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionStatusResponseBody() = default ;
    GetRegionStatusResponseBody& operator=(const GetRegionStatusResponseBody &) = default ;
    GetRegionStatusResponseBody& operator=(GetRegionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceRoleExists_ == nullptr
        && this->status_ == nullptr; };
    // serviceRoleExists Field Functions 
    bool hasServiceRoleExists() const { return this->serviceRoleExists_ != nullptr;};
    void deleteServiceRoleExists() { this->serviceRoleExists_ = nullptr;};
    inline bool getServiceRoleExists() const { DARABONBA_PTR_GET_DEFAULT(serviceRoleExists_, false) };
    inline GetRegionStatusResponseBody& setServiceRoleExists(bool serviceRoleExists) { DARABONBA_PTR_SET_VALUE(serviceRoleExists_, serviceRoleExists) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRegionStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<bool> serviceRoleExists_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
