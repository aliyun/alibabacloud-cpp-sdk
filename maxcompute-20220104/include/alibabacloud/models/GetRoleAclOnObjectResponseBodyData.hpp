// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEACLONOBJECTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETROLEACLONOBJECTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRoleAclOnObjectResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleAclOnObjectResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleAclOnObjectResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
    };
    GetRoleAclOnObjectResponseBodyData() = default ;
    GetRoleAclOnObjectResponseBodyData(const GetRoleAclOnObjectResponseBodyData &) = default ;
    GetRoleAclOnObjectResponseBodyData(GetRoleAclOnObjectResponseBodyData &&) = default ;
    GetRoleAclOnObjectResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleAclOnObjectResponseBodyData() = default ;
    GetRoleAclOnObjectResponseBodyData& operator=(const GetRoleAclOnObjectResponseBodyData &) = default ;
    GetRoleAclOnObjectResponseBodyData& operator=(GetRoleAclOnObjectResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> actions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline GetRoleAclOnObjectResponseBodyData& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline GetRoleAclOnObjectResponseBodyData& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


  protected:
    // The operations that were performed on the object.
    std::shared_ptr<vector<string>> actions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
