// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESDGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESDGSREQUEST_HPP_
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
  class RemoveSDGsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSDGsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(SdgIds, sdgIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSDGsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(SdgIds, sdgIds_);
    };
    RemoveSDGsRequest() = default ;
    RemoveSDGsRequest(const RemoveSDGsRequest &) = default ;
    RemoveSDGsRequest(RemoveSDGsRequest &&) = default ;
    RemoveSDGsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSDGsRequest() = default ;
    RemoveSDGsRequest& operator=(const RemoveSDGsRequest &) = default ;
    RemoveSDGsRequest& operator=(RemoveSDGsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIds_ != nullptr
        && this->sdgIds_ != nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RemoveSDGsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RemoveSDGsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // sdgIds Field Functions 
    bool hasSdgIds() const { return this->sdgIds_ != nullptr;};
    void deleteSdgIds() { this->sdgIds_ = nullptr;};
    inline const vector<string> & sdgIds() const { DARABONBA_PTR_GET_CONST(sdgIds_, vector<string>) };
    inline vector<string> sdgIds() { DARABONBA_PTR_GET(sdgIds_, vector<string>) };
    inline RemoveSDGsRequest& setSdgIds(const vector<string> & sdgIds) { DARABONBA_PTR_SET_VALUE(sdgIds_, sdgIds) };
    inline RemoveSDGsRequest& setSdgIds(vector<string> && sdgIds) { DARABONBA_PTR_SET_RVALUE(sdgIds_, sdgIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<vector<string>> sdgIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
