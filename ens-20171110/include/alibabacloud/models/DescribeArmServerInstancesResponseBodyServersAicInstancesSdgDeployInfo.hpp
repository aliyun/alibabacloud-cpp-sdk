// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODYSERVERSAICINSTANCESSDGDEPLOYINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODYSERVERSAICINSTANCESSDGDEPLOYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo() = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo(const DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo &) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo(DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo &&) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo() = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo& operator=(const DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo &) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo& operator=(DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SDGId_ == nullptr
        && return this->status_ == nullptr; };
    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the SDG.
    std::shared_ptr<string> SDGId_ = nullptr;
    // The deployment status of the SDG. Valid values:
    // 
    // *   **sdg_deploying**
    // *   **failed**
    // *   **success**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
