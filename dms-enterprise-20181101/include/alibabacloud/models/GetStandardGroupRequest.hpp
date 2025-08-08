// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStandardGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetStandardGroupRequest() = default ;
    GetStandardGroupRequest(const GetStandardGroupRequest &) = default ;
    GetStandardGroupRequest(GetStandardGroupRequest &&) = default ;
    GetStandardGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardGroupRequest() = default ;
    GetStandardGroupRequest& operator=(const GetStandardGroupRequest &) = default ;
    GetStandardGroupRequest& operator=(GetStandardGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->tid_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline GetStandardGroupRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetStandardGroupRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
