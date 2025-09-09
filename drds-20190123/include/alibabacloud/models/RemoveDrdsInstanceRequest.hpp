// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDRDSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDRDSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class RemoveDrdsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDrdsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDrdsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    RemoveDrdsInstanceRequest() = default ;
    RemoveDrdsInstanceRequest(const RemoveDrdsInstanceRequest &) = default ;
    RemoveDrdsInstanceRequest(RemoveDrdsInstanceRequest &&) = default ;
    RemoveDrdsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDrdsInstanceRequest() = default ;
    RemoveDrdsInstanceRequest& operator=(const RemoveDrdsInstanceRequest &) = default ;
    RemoveDrdsInstanceRequest& operator=(RemoveDrdsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceId_ != nullptr; };
    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline RemoveDrdsInstanceRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
