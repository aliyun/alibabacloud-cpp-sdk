// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEREGISTERLOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEREGISTERLOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DeregisterLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeregisterLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
    };
    friend void from_json(const Darabonba::Json& j, DeregisterLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
    };
    DeregisterLocationRequest() = default ;
    DeregisterLocationRequest(const DeregisterLocationRequest &) = default ;
    DeregisterLocationRequest(DeregisterLocationRequest &&) = default ;
    DeregisterLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeregisterLocationRequest() = default ;
    DeregisterLocationRequest& operator=(const DeregisterLocationRequest &) = default ;
    DeregisterLocationRequest& operator=(DeregisterLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->locationId_ == nullptr; };
    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline DeregisterLocationRequest& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


  protected:
    // Location ID
    // 
    // >  You can call the RegisterLocation operation to obtain the Location ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> locationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
