// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORCONTACTGROUPUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_MONITORCONTACTGROUPUPDATECMD_HPP_
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
  class MonitorContactGroupUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorContactGroupUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorContactGroupUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    MonitorContactGroupUpdateCmd() = default ;
    MonitorContactGroupUpdateCmd(const MonitorContactGroupUpdateCmd &) = default ;
    MonitorContactGroupUpdateCmd(MonitorContactGroupUpdateCmd &&) = default ;
    MonitorContactGroupUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorContactGroupUpdateCmd() = default ;
    MonitorContactGroupUpdateCmd& operator=(const MonitorContactGroupUpdateCmd &) = default ;
    MonitorContactGroupUpdateCmd& operator=(MonitorContactGroupUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->contactIds_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline MonitorContactGroupUpdateCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<int64_t> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<int64_t>) };
    inline vector<int64_t> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<int64_t>) };
    inline MonitorContactGroupUpdateCmd& setContactIds(const vector<int64_t> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline MonitorContactGroupUpdateCmd& setContactIds(vector<int64_t> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorContactGroupUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MonitorContactGroupUpdateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<vector<int64_t>> contactIds_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
