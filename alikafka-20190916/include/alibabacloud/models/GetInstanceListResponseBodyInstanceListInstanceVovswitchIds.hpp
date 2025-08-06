// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOVSWITCHIDS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOVSWITCHIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds(const GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds(GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds &&) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds& operator=(const GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds& operator=(GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vSwitchIds_ != nullptr; };
    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
