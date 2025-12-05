// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRULEREQUESTHOSTS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRULEREQUESTHOSTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyRuleRequestHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRuleRequestHosts& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountIds, hostAccountIds_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRuleRequestHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountIds, hostAccountIds_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
    };
    ModifyRuleRequestHosts() = default ;
    ModifyRuleRequestHosts(const ModifyRuleRequestHosts &) = default ;
    ModifyRuleRequestHosts(ModifyRuleRequestHosts &&) = default ;
    ModifyRuleRequestHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRuleRequestHosts() = default ;
    ModifyRuleRequestHosts& operator=(const ModifyRuleRequestHosts &) = default ;
    ModifyRuleRequestHosts& operator=(ModifyRuleRequestHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountIds_ == nullptr
        && return this->hostId_ == nullptr; };
    // hostAccountIds Field Functions 
    bool hasHostAccountIds() const { return this->hostAccountIds_ != nullptr;};
    void deleteHostAccountIds() { this->hostAccountIds_ = nullptr;};
    inline const vector<string> & hostAccountIds() const { DARABONBA_PTR_GET_CONST(hostAccountIds_, vector<string>) };
    inline vector<string> hostAccountIds() { DARABONBA_PTR_GET(hostAccountIds_, vector<string>) };
    inline ModifyRuleRequestHosts& setHostAccountIds(const vector<string> & hostAccountIds) { DARABONBA_PTR_SET_VALUE(hostAccountIds_, hostAccountIds) };
    inline ModifyRuleRequestHosts& setHostAccountIds(vector<string> && hostAccountIds) { DARABONBA_PTR_SET_RVALUE(hostAccountIds_, hostAccountIds) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ModifyRuleRequestHosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


  protected:
    // The host account IDs.
    std::shared_ptr<vector<string>> hostAccountIds_ = nullptr;
    // The host ID.
    std::shared_ptr<string> hostId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
