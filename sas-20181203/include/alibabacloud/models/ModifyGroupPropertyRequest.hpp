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
    // The new attributes of the server group. You can specify the following parameters to configure the attributes:
    // 
    // *   **groupFlag**: the type of the server group. Valid values: 0 and 1. The value **0** specifies the Default server group. The value **1** specifies other server groups.
    // *   **groupId**: the ID of the server group.
    // *   **groupIndex**: no meaning. You can leave this parameter empty.
    // *   **groupName**: the name of the server group. The value is the new name of the server group. The new name cannot be the same as the original name of the server group.
    // 
    // >  You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to obtain the values of the groupFlag and groupId parameters. You cannot change the value of the groupFlag or groupId parameter. You can change only the value of the groupName parameter.
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
