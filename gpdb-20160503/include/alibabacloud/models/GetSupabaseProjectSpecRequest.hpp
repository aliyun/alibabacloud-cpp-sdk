// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEPROJECTSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEPROJECTSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSupabaseProjectSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupabaseProjectSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupabaseProjectSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetSupabaseProjectSpecRequest() = default ;
    GetSupabaseProjectSpecRequest(const GetSupabaseProjectSpecRequest &) = default ;
    GetSupabaseProjectSpecRequest(GetSupabaseProjectSpecRequest &&) = default ;
    GetSupabaseProjectSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupabaseProjectSpecRequest() = default ;
    GetSupabaseProjectSpecRequest& operator=(const GetSupabaseProjectSpecRequest &) = default ;
    GetSupabaseProjectSpecRequest& operator=(GetSupabaseProjectSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSupabaseProjectSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
