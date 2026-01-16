// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WHITEIPGROUP_HPP_
#define ALIBABACLOUD_MODELS_WHITEIPGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class WhiteIpGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WhiteIpGroup& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteIpType, whiteIpType_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(ips, ips_);
    };
    friend void from_json(const Darabonba::Json& j, WhiteIpGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteIpType, whiteIpType_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ips, ips_);
    };
    WhiteIpGroup() = default ;
    WhiteIpGroup(const WhiteIpGroup &) = default ;
    WhiteIpGroup(WhiteIpGroup &&) = default ;
    WhiteIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WhiteIpGroup() = default ;
    WhiteIpGroup& operator=(const WhiteIpGroup &) = default ;
    WhiteIpGroup& operator=(WhiteIpGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->whiteIpType_ == nullptr
        && this->groupName_ == nullptr && this->ips_ == nullptr; };
    // whiteIpType Field Functions 
    bool hasWhiteIpType() const { return this->whiteIpType_ != nullptr;};
    void deleteWhiteIpType() { this->whiteIpType_ = nullptr;};
    inline string getWhiteIpType() const { DARABONBA_PTR_GET_DEFAULT(whiteIpType_, "") };
    inline WhiteIpGroup& setWhiteIpType(string whiteIpType) { DARABONBA_PTR_SET_VALUE(whiteIpType_, whiteIpType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline WhiteIpGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline WhiteIpGroup& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline WhiteIpGroup& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


  protected:
    shared_ptr<string> whiteIpType_ {};
    shared_ptr<string> groupName_ {};
    shared_ptr<vector<string>> ips_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
