// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTSERVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTSERVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertServiceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertServiceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, InsertServiceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    InsertServiceGroupRequest() = default ;
    InsertServiceGroupRequest(const InsertServiceGroupRequest &) = default ;
    InsertServiceGroupRequest(InsertServiceGroupRequest &&) = default ;
    InsertServiceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertServiceGroupRequest() = default ;
    InsertServiceGroupRequest& operator=(const InsertServiceGroupRequest &) = default ;
    InsertServiceGroupRequest& operator=(InsertServiceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline InsertServiceGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The name of the service group that you want to create.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
