// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class PatchGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, PatchGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
    };
    PatchGroupRequest() = default ;
    PatchGroupRequest(const PatchGroupRequest &) = default ;
    PatchGroupRequest(PatchGroupRequest &&) = default ;
    PatchGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchGroupRequest() = default ;
    PatchGroupRequest& operator=(const PatchGroupRequest &) = default ;
    PatchGroupRequest& operator=(PatchGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline PatchGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The group name.
    shared_ptr<string> groupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
