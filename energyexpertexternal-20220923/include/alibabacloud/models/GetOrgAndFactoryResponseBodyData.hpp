// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANDFACTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETORGANDFACTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOrgAndFactoryResponseBodyDataFactoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetOrgAndFactoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgAndFactoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(factoryList, factoryList_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(organizationName, organizationName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgAndFactoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(factoryList, factoryList_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(organizationName, organizationName_);
    };
    GetOrgAndFactoryResponseBodyData() = default ;
    GetOrgAndFactoryResponseBodyData(const GetOrgAndFactoryResponseBodyData &) = default ;
    GetOrgAndFactoryResponseBodyData(GetOrgAndFactoryResponseBodyData &&) = default ;
    GetOrgAndFactoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgAndFactoryResponseBodyData() = default ;
    GetOrgAndFactoryResponseBodyData& operator=(const GetOrgAndFactoryResponseBodyData &) = default ;
    GetOrgAndFactoryResponseBodyData& operator=(GetOrgAndFactoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunPk_ != nullptr
        && this->factoryList_ != nullptr && this->organizationId_ != nullptr && this->organizationName_ != nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline GetOrgAndFactoryResponseBodyData& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // factoryList Field Functions 
    bool hasFactoryList() const { return this->factoryList_ != nullptr;};
    void deleteFactoryList() { this->factoryList_ = nullptr;};
    inline const vector<Models::GetOrgAndFactoryResponseBodyDataFactoryList> & factoryList() const { DARABONBA_PTR_GET_CONST(factoryList_, vector<Models::GetOrgAndFactoryResponseBodyDataFactoryList>) };
    inline vector<Models::GetOrgAndFactoryResponseBodyDataFactoryList> factoryList() { DARABONBA_PTR_GET(factoryList_, vector<Models::GetOrgAndFactoryResponseBodyDataFactoryList>) };
    inline GetOrgAndFactoryResponseBodyData& setFactoryList(const vector<Models::GetOrgAndFactoryResponseBodyDataFactoryList> & factoryList) { DARABONBA_PTR_SET_VALUE(factoryList_, factoryList) };
    inline GetOrgAndFactoryResponseBodyData& setFactoryList(vector<Models::GetOrgAndFactoryResponseBodyDataFactoryList> && factoryList) { DARABONBA_PTR_SET_RVALUE(factoryList_, factoryList) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetOrgAndFactoryResponseBodyData& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // organizationName Field Functions 
    bool hasOrganizationName() const { return this->organizationName_ != nullptr;};
    void deleteOrganizationName() { this->organizationName_ = nullptr;};
    inline string organizationName() const { DARABONBA_PTR_GET_DEFAULT(organizationName_, "") };
    inline GetOrgAndFactoryResponseBodyData& setOrganizationName(string organizationName) { DARABONBA_PTR_SET_VALUE(organizationName_, organizationName) };


  protected:
    // The Alibaba Cloud account ID.
    std::shared_ptr<string> aliyunPk_ = nullptr;
    // The sites.
    std::shared_ptr<vector<Models::GetOrgAndFactoryResponseBodyDataFactoryList>> factoryList_ = nullptr;
    // The enterprise ID.
    std::shared_ptr<string> organizationId_ = nullptr;
    // The enterprise name.
    std::shared_ptr<string> organizationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
