// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIFYDEFAULTVPCRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIFYDEFAULTVPCRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DescribeDifyDefaultVpcResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDifyDefaultVpcResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultVpcId, defaultVpcId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDifyDefaultVpcResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultVpcId, defaultVpcId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DescribeDifyDefaultVpcResponseBodyData() = default ;
    DescribeDifyDefaultVpcResponseBodyData(const DescribeDifyDefaultVpcResponseBodyData &) = default ;
    DescribeDifyDefaultVpcResponseBodyData(DescribeDifyDefaultVpcResponseBodyData &&) = default ;
    DescribeDifyDefaultVpcResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDifyDefaultVpcResponseBodyData() = default ;
    DescribeDifyDefaultVpcResponseBodyData& operator=(const DescribeDifyDefaultVpcResponseBodyData &) = default ;
    DescribeDifyDefaultVpcResponseBodyData& operator=(DescribeDifyDefaultVpcResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultVpcId_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // defaultVpcId Field Functions 
    bool hasDefaultVpcId() const { return this->defaultVpcId_ != nullptr;};
    void deleteDefaultVpcId() { this->defaultVpcId_ = nullptr;};
    inline string defaultVpcId() const { DARABONBA_PTR_GET_DEFAULT(defaultVpcId_, "") };
    inline DescribeDifyDefaultVpcResponseBodyData& setDefaultVpcId(string defaultVpcId) { DARABONBA_PTR_SET_VALUE(defaultVpcId_, defaultVpcId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeDifyDefaultVpcResponseBodyData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> defaultVpcId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
