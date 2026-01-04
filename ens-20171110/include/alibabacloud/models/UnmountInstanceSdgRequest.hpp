// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNMOUNTINSTANCESDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNMOUNTINSTANCESDGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnmountInstanceSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnmountInstanceSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, UnmountInstanceSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    UnmountInstanceSDGRequest() = default ;
    UnmountInstanceSDGRequest(const UnmountInstanceSDGRequest &) = default ;
    UnmountInstanceSDGRequest(UnmountInstanceSDGRequest &&) = default ;
    UnmountInstanceSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnmountInstanceSDGRequest() = default ;
    UnmountInstanceSDGRequest& operator=(const UnmountInstanceSDGRequest &) = default ;
    UnmountInstanceSDGRequest& operator=(UnmountInstanceSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->SDGId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline UnmountInstanceSDGRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline UnmountInstanceSDGRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline UnmountInstanceSDGRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The IDs of the instances.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The ID of the SDG.
    // 
    // This parameter is required.
    shared_ptr<string> SDGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
