// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGROUPPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGROUPPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyGroupPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGroupPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGroupPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ModifyGroupPropertyRequest() = default ;
    ModifyGroupPropertyRequest(const ModifyGroupPropertyRequest &) = default ;
    ModifyGroupPropertyRequest(ModifyGroupPropertyRequest &&) = default ;
    ModifyGroupPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGroupPropertyRequest() = default ;
    ModifyGroupPropertyRequest& operator=(const ModifyGroupPropertyRequest &) = default ;
    ModifyGroupPropertyRequest& operator=(ModifyGroupPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ModifyGroupPropertyRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // The new property information of the server group after modification. The following parameters are described:
    // 
    // - **groupFlag**: The type of the server group. Valid values: **0** (default group) | **1** (other group).
    // - **groupId**: The ID of the server group.
    // - **groupIndex**: The sorting number of the server group. Sorted in ascending order.
    // - **groupName**: The name of the server group. Set this parameter to the new name of the server group. The new name must be different from the original name.
    // 
    // > Call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to obtain the values of groupFlag and groupId. The values of groupFlag and groupId cannot be modified. Only the value of groupName can be modified.
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
