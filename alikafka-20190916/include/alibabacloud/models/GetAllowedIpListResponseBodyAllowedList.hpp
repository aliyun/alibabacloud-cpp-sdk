// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLOWEDIPLISTRESPONSEBODYALLOWEDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETALLOWEDIPLISTRESPONSEBODYALLOWEDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAllowedIpListResponseBodyAllowedListInternetList.hpp>
#include <alibabacloud/models/GetAllowedIpListResponseBodyAllowedListVpcList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAllowedIpListResponseBodyAllowedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllowedIpListResponseBodyAllowedList& obj) { 
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(InternetList, internetList_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllowedIpListResponseBodyAllowedList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(InternetList, internetList_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    GetAllowedIpListResponseBodyAllowedList() = default ;
    GetAllowedIpListResponseBodyAllowedList(const GetAllowedIpListResponseBodyAllowedList &) = default ;
    GetAllowedIpListResponseBodyAllowedList(GetAllowedIpListResponseBodyAllowedList &&) = default ;
    GetAllowedIpListResponseBodyAllowedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllowedIpListResponseBodyAllowedList() = default ;
    GetAllowedIpListResponseBodyAllowedList& operator=(const GetAllowedIpListResponseBodyAllowedList &) = default ;
    GetAllowedIpListResponseBodyAllowedList& operator=(GetAllowedIpListResponseBodyAllowedList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deployType_ != nullptr
        && this->internetList_ != nullptr && this->vpcList_ != nullptr; };
    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline GetAllowedIpListResponseBodyAllowedList& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // internetList Field Functions 
    bool hasInternetList() const { return this->internetList_ != nullptr;};
    void deleteInternetList() { this->internetList_ = nullptr;};
    inline const vector<Models::GetAllowedIpListResponseBodyAllowedListInternetList> & internetList() const { DARABONBA_PTR_GET_CONST(internetList_, vector<Models::GetAllowedIpListResponseBodyAllowedListInternetList>) };
    inline vector<Models::GetAllowedIpListResponseBodyAllowedListInternetList> internetList() { DARABONBA_PTR_GET(internetList_, vector<Models::GetAllowedIpListResponseBodyAllowedListInternetList>) };
    inline GetAllowedIpListResponseBodyAllowedList& setInternetList(const vector<Models::GetAllowedIpListResponseBodyAllowedListInternetList> & internetList) { DARABONBA_PTR_SET_VALUE(internetList_, internetList) };
    inline GetAllowedIpListResponseBodyAllowedList& setInternetList(vector<Models::GetAllowedIpListResponseBodyAllowedListInternetList> && internetList) { DARABONBA_PTR_SET_RVALUE(internetList_, internetList) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const vector<Models::GetAllowedIpListResponseBodyAllowedListVpcList> & vpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<Models::GetAllowedIpListResponseBodyAllowedListVpcList>) };
    inline vector<Models::GetAllowedIpListResponseBodyAllowedListVpcList> vpcList() { DARABONBA_PTR_GET(vpcList_, vector<Models::GetAllowedIpListResponseBodyAllowedListVpcList>) };
    inline GetAllowedIpListResponseBodyAllowedList& setVpcList(const vector<Models::GetAllowedIpListResponseBodyAllowedListVpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline GetAllowedIpListResponseBodyAllowedList& setVpcList(vector<Models::GetAllowedIpListResponseBodyAllowedListVpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    // The deployment mode of the instance. Valid values:
    // 
    // *   **4**: allows access from the Internet and a virtual private cloud (VPC).
    // *   **5**: allows access from a VPC.
    // 
    // >  Only integrators need to concern themselves with the value of this parameter.
    std::shared_ptr<int32_t> deployType_ = nullptr;
    // The whitelist for access from the Internet.
    std::shared_ptr<vector<Models::GetAllowedIpListResponseBodyAllowedListInternetList>> internetList_ = nullptr;
    // The whitelist for access from a virtual private cloud (VPC).
    std::shared_ptr<vector<Models::GetAllowedIpListResponseBodyAllowedListVpcList>> vpcList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
