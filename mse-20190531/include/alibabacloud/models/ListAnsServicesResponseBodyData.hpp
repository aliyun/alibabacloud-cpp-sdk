// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSSERVICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANSSERVICESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAnsServicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnsServicesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HealthyInstanceCount, healthyInstanceCount_);
      DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnsServicesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HealthyInstanceCount, healthyInstanceCount_);
      DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListAnsServicesResponseBodyData() = default ;
    ListAnsServicesResponseBodyData(const ListAnsServicesResponseBodyData &) = default ;
    ListAnsServicesResponseBodyData(ListAnsServicesResponseBodyData &&) = default ;
    ListAnsServicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnsServicesResponseBodyData() = default ;
    ListAnsServicesResponseBodyData& operator=(const ListAnsServicesResponseBodyData &) = default ;
    ListAnsServicesResponseBodyData& operator=(ListAnsServicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterCount_ != nullptr
        && this->groupName_ != nullptr && this->healthyInstanceCount_ != nullptr && this->ipCount_ != nullptr && this->name_ != nullptr && this->source_ != nullptr; };
    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline int32_t clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
    inline ListAnsServicesResponseBodyData& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListAnsServicesResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // healthyInstanceCount Field Functions 
    bool hasHealthyInstanceCount() const { return this->healthyInstanceCount_ != nullptr;};
    void deleteHealthyInstanceCount() { this->healthyInstanceCount_ = nullptr;};
    inline int32_t healthyInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(healthyInstanceCount_, 0) };
    inline ListAnsServicesResponseBodyData& setHealthyInstanceCount(int32_t healthyInstanceCount) { DARABONBA_PTR_SET_VALUE(healthyInstanceCount_, healthyInstanceCount) };


    // ipCount Field Functions 
    bool hasIpCount() const { return this->ipCount_ != nullptr;};
    void deleteIpCount() { this->ipCount_ = nullptr;};
    inline int32_t ipCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0) };
    inline ListAnsServicesResponseBodyData& setIpCount(int32_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAnsServicesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListAnsServicesResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The total number of clusters.
    std::shared_ptr<int32_t> clusterCount_ = nullptr;
    // The name of the contact group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The total number of instances with healthy heartbeats.
    std::shared_ptr<int32_t> healthyInstanceCount_ = nullptr;
    // The total number of instances that are used for the current service.
    std::shared_ptr<int32_t> ipCount_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
