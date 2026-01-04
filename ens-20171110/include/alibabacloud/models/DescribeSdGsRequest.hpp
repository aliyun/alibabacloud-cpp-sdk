// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSREQUEST_HPP_
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
  class DescribeSDGsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(SDGIds, SDGIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(SDGIds, SDGIds_);
    };
    DescribeSDGsRequest() = default ;
    DescribeSDGsRequest(const DescribeSDGsRequest &) = default ;
    DescribeSDGsRequest(DescribeSDGsRequest &&) = default ;
    DescribeSDGsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGsRequest() = default ;
    DescribeSDGsRequest& operator=(const DescribeSDGsRequest &) = default ;
    DescribeSDGsRequest& operator=(DescribeSDGsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->SDGIds_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeSDGsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeSDGsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // SDGIds Field Functions 
    bool hasSDGIds() const { return this->SDGIds_ != nullptr;};
    void deleteSDGIds() { this->SDGIds_ = nullptr;};
    inline const vector<string> & getSDGIds() const { DARABONBA_PTR_GET_CONST(SDGIds_, vector<string>) };
    inline vector<string> getSDGIds() { DARABONBA_PTR_GET(SDGIds_, vector<string>) };
    inline DescribeSDGsRequest& setSDGIds(const vector<string> & SDGIds) { DARABONBA_PTR_SET_VALUE(SDGIds_, SDGIds) };
    inline DescribeSDGsRequest& setSDGIds(vector<string> && SDGIds) { DARABONBA_PTR_SET_RVALUE(SDGIds_, SDGIds) };


  protected:
    // The AIC instance ID to be queried.
    shared_ptr<vector<string>> instanceIds_ {};
    // The IDs of SDGs that you want to query. By default, all SDGs are queried.
    shared_ptr<vector<string>> SDGIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
