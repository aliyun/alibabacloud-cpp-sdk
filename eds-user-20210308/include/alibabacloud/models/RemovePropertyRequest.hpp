// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class RemovePropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemovePropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
    };
    friend void from_json(const Darabonba::Json& j, RemovePropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
    };
    RemovePropertyRequest() = default ;
    RemovePropertyRequest(const RemovePropertyRequest &) = default ;
    RemovePropertyRequest(RemovePropertyRequest &&) = default ;
    RemovePropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemovePropertyRequest() = default ;
    RemovePropertyRequest& operator=(const RemovePropertyRequest &) = default ;
    RemovePropertyRequest& operator=(RemovePropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyId_ != nullptr; };
    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t propertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline RemovePropertyRequest& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


  protected:
    // The ID of the property. You can call the [ListProperty](https://help.aliyun.com/document_detail/410890.html) operation to query the property ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
