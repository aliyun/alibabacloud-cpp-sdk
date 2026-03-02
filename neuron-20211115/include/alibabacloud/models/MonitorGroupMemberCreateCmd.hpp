// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORGROUPMEMBERCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_MONITORGROUPMEMBERCREATECMD_HPP_
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
  class MonitorGroupMemberCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorGroupMemberCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorGroupMemberCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
    };
    MonitorGroupMemberCreateCmd() = default ;
    MonitorGroupMemberCreateCmd(const MonitorGroupMemberCreateCmd &) = default ;
    MonitorGroupMemberCreateCmd(MonitorGroupMemberCreateCmd &&) = default ;
    MonitorGroupMemberCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorGroupMemberCreateCmd() = default ;
    MonitorGroupMemberCreateCmd& operator=(const MonitorGroupMemberCreateCmd &) = default ;
    MonitorGroupMemberCreateCmd& operator=(MonitorGroupMemberCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->contactIds_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline MonitorGroupMemberCreateCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<int64_t> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<int64_t>) };
    inline vector<int64_t> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<int64_t>) };
    inline MonitorGroupMemberCreateCmd& setContactIds(const vector<int64_t> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline MonitorGroupMemberCreateCmd& setContactIds(vector<int64_t> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<vector<int64_t>> contactIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
