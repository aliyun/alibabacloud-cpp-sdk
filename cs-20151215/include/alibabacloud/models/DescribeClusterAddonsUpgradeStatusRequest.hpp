// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONSUPGRADESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONSUPGRADESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterAddonsUpgradeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAddonsUpgradeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(componentIds, componentIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAddonsUpgradeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(componentIds, componentIds_);
    };
    DescribeClusterAddonsUpgradeStatusRequest() = default ;
    DescribeClusterAddonsUpgradeStatusRequest(const DescribeClusterAddonsUpgradeStatusRequest &) = default ;
    DescribeClusterAddonsUpgradeStatusRequest(DescribeClusterAddonsUpgradeStatusRequest &&) = default ;
    DescribeClusterAddonsUpgradeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAddonsUpgradeStatusRequest() = default ;
    DescribeClusterAddonsUpgradeStatusRequest& operator=(const DescribeClusterAddonsUpgradeStatusRequest &) = default ;
    DescribeClusterAddonsUpgradeStatusRequest& operator=(DescribeClusterAddonsUpgradeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentIds_ != nullptr; };
    // componentIds Field Functions 
    bool hasComponentIds() const { return this->componentIds_ != nullptr;};
    void deleteComponentIds() { this->componentIds_ = nullptr;};
    inline const vector<string> & componentIds() const { DARABONBA_PTR_GET_CONST(componentIds_, vector<string>) };
    inline vector<string> componentIds() { DARABONBA_PTR_GET(componentIds_, vector<string>) };
    inline DescribeClusterAddonsUpgradeStatusRequest& setComponentIds(const vector<string> & componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };
    inline DescribeClusterAddonsUpgradeStatusRequest& setComponentIds(vector<string> && componentIds) { DARABONBA_PTR_SET_RVALUE(componentIds_, componentIds) };


  protected:
    // The list of component names.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> componentIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
