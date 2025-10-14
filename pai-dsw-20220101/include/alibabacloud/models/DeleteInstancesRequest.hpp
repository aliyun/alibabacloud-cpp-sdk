// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class DeleteInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    DeleteInstancesRequest() = default ;
    DeleteInstancesRequest(const DeleteInstancesRequest &) = default ;
    DeleteInstancesRequest(DeleteInstancesRequest &&) = default ;
    DeleteInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstancesRequest() = default ;
    DeleteInstancesRequest& operator=(const DeleteInstancesRequest &) = default ;
    DeleteInstancesRequest& operator=(DeleteInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DeleteInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DeleteInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
