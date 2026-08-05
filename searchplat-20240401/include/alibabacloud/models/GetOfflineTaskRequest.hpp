// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOFFLINETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOFFLINETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class GetOfflineTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOfflineTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOfflineTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetOfflineTaskRequest() = default ;
    GetOfflineTaskRequest(const GetOfflineTaskRequest &) = default ;
    GetOfflineTaskRequest(GetOfflineTaskRequest &&) = default ;
    GetOfflineTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOfflineTaskRequest() = default ;
    GetOfflineTaskRequest& operator=(const GetOfflineTaskRequest &) = default ;
    GetOfflineTaskRequest& operator=(GetOfflineTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOfflineTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
