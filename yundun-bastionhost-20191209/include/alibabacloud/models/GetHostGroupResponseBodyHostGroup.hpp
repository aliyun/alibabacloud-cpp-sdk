// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODYHOSTGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODYHOSTGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostGroupResponseBodyHostGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostGroupResponseBodyHostGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(HostGroupName, hostGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostGroupResponseBodyHostGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(HostGroupName, hostGroupName_);
    };
    GetHostGroupResponseBodyHostGroup() = default ;
    GetHostGroupResponseBodyHostGroup(const GetHostGroupResponseBodyHostGroup &) = default ;
    GetHostGroupResponseBodyHostGroup(GetHostGroupResponseBodyHostGroup &&) = default ;
    GetHostGroupResponseBodyHostGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostGroupResponseBodyHostGroup() = default ;
    GetHostGroupResponseBodyHostGroup& operator=(const GetHostGroupResponseBodyHostGroup &) = default ;
    GetHostGroupResponseBodyHostGroup& operator=(GetHostGroupResponseBodyHostGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->hostGroupId_ == nullptr && return this->hostGroupName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetHostGroupResponseBodyHostGroup& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline GetHostGroupResponseBodyHostGroup& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // hostGroupName Field Functions 
    bool hasHostGroupName() const { return this->hostGroupName_ != nullptr;};
    void deleteHostGroupName() { this->hostGroupName_ = nullptr;};
    inline string hostGroupName() const { DARABONBA_PTR_GET_DEFAULT(hostGroupName_, "") };
    inline GetHostGroupResponseBodyHostGroup& setHostGroupName(string hostGroupName) { DARABONBA_PTR_SET_VALUE(hostGroupName_, hostGroupName) };


  protected:
    // The remarks of the asset group.
    std::shared_ptr<string> comment_ = nullptr;
    // The asset group ID.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // The name of the asset group.
    std::shared_ptr<string> hostGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
