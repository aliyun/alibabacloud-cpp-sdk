// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTHOSTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTHOSTGROUPS_HPP_
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
  class CreateRuleRequestHostGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestHostGroups& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountNames, hostAccountNames_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestHostGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountNames, hostAccountNames_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
    };
    CreateRuleRequestHostGroups() = default ;
    CreateRuleRequestHostGroups(const CreateRuleRequestHostGroups &) = default ;
    CreateRuleRequestHostGroups(CreateRuleRequestHostGroups &&) = default ;
    CreateRuleRequestHostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestHostGroups() = default ;
    CreateRuleRequestHostGroups& operator=(const CreateRuleRequestHostGroups &) = default ;
    CreateRuleRequestHostGroups& operator=(CreateRuleRequestHostGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostAccountNames_ != nullptr
        && this->hostGroupId_ != nullptr; };
    // hostAccountNames Field Functions 
    bool hasHostAccountNames() const { return this->hostAccountNames_ != nullptr;};
    void deleteHostAccountNames() { this->hostAccountNames_ = nullptr;};
    inline const vector<string> & hostAccountNames() const { DARABONBA_PTR_GET_CONST(hostAccountNames_, vector<string>) };
    inline vector<string> hostAccountNames() { DARABONBA_PTR_GET(hostAccountNames_, vector<string>) };
    inline CreateRuleRequestHostGroups& setHostAccountNames(const vector<string> & hostAccountNames) { DARABONBA_PTR_SET_VALUE(hostAccountNames_, hostAccountNames) };
    inline CreateRuleRequestHostGroups& setHostAccountNames(vector<string> && hostAccountNames) { DARABONBA_PTR_SET_RVALUE(hostAccountNames_, hostAccountNames) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline CreateRuleRequestHostGroups& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


  protected:
    // An array that consists of asset account names.
    std::shared_ptr<vector<string>> hostAccountNames_ = nullptr;
    // The asset group ID.
    std::shared_ptr<string> hostGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
