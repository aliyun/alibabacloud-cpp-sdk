// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORGROUPMEMBERDELETECMD_HPP_
#define ALIBABACLOUD_MODELS_MONITORGROUPMEMBERDELETECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorGroupMemberDeleteCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorGroupMemberDeleteCmd& obj) { 
      DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorGroupMemberDeleteCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
    };
    MonitorGroupMemberDeleteCmd() = default ;
    MonitorGroupMemberDeleteCmd(const MonitorGroupMemberDeleteCmd &) = default ;
    MonitorGroupMemberDeleteCmd(MonitorGroupMemberDeleteCmd &&) = default ;
    MonitorGroupMemberDeleteCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorGroupMemberDeleteCmd() = default ;
    MonitorGroupMemberDeleteCmd& operator=(const MonitorGroupMemberDeleteCmd &) = default ;
    MonitorGroupMemberDeleteCmd& operator=(MonitorGroupMemberDeleteCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIds_ == nullptr
        && this->groupId_ == nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<int64_t> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<int64_t>) };
    inline vector<int64_t> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<int64_t>) };
    inline MonitorGroupMemberDeleteCmd& setContactIds(const vector<int64_t> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline MonitorGroupMemberDeleteCmd& setContactIds(vector<int64_t> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline MonitorGroupMemberDeleteCmd& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    shared_ptr<vector<int64_t>> contactIds_ {};
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
