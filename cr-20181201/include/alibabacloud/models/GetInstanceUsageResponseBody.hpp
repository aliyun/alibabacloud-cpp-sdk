// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetInstanceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChartNamespaceQuota, chartNamespaceQuota_);
      DARABONBA_PTR_TO_JSON(ChartNamespaceUsage, chartNamespaceUsage_);
      DARABONBA_PTR_TO_JSON(ChartRepoQuota, chartRepoQuota_);
      DARABONBA_PTR_TO_JSON(ChartRepoUsage, chartRepoUsage_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(NamespaceQuota, namespaceQuota_);
      DARABONBA_PTR_TO_JSON(NamespaceUsage, namespaceUsage_);
      DARABONBA_PTR_TO_JSON(RepoQuota, repoQuota_);
      DARABONBA_PTR_TO_JSON(RepoUsage, repoUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcQuota, vpcQuota_);
      DARABONBA_PTR_TO_JSON(VpcUsage, vpcUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChartNamespaceQuota, chartNamespaceQuota_);
      DARABONBA_PTR_FROM_JSON(ChartNamespaceUsage, chartNamespaceUsage_);
      DARABONBA_PTR_FROM_JSON(ChartRepoQuota, chartRepoQuota_);
      DARABONBA_PTR_FROM_JSON(ChartRepoUsage, chartRepoUsage_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(NamespaceQuota, namespaceQuota_);
      DARABONBA_PTR_FROM_JSON(NamespaceUsage, namespaceUsage_);
      DARABONBA_PTR_FROM_JSON(RepoQuota, repoQuota_);
      DARABONBA_PTR_FROM_JSON(RepoUsage, repoUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcQuota, vpcQuota_);
      DARABONBA_PTR_FROM_JSON(VpcUsage, vpcUsage_);
    };
    GetInstanceUsageResponseBody() = default ;
    GetInstanceUsageResponseBody(const GetInstanceUsageResponseBody &) = default ;
    GetInstanceUsageResponseBody(GetInstanceUsageResponseBody &&) = default ;
    GetInstanceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceUsageResponseBody() = default ;
    GetInstanceUsageResponseBody& operator=(const GetInstanceUsageResponseBody &) = default ;
    GetInstanceUsageResponseBody& operator=(GetInstanceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chartNamespaceQuota_ != nullptr
        && this->chartNamespaceUsage_ != nullptr && this->chartRepoQuota_ != nullptr && this->chartRepoUsage_ != nullptr && this->code_ != nullptr && this->isSuccess_ != nullptr
        && this->namespaceQuota_ != nullptr && this->namespaceUsage_ != nullptr && this->repoQuota_ != nullptr && this->repoUsage_ != nullptr && this->requestId_ != nullptr
        && this->vpcQuota_ != nullptr && this->vpcUsage_ != nullptr; };
    // chartNamespaceQuota Field Functions 
    bool hasChartNamespaceQuota() const { return this->chartNamespaceQuota_ != nullptr;};
    void deleteChartNamespaceQuota() { this->chartNamespaceQuota_ = nullptr;};
    inline string chartNamespaceQuota() const { DARABONBA_PTR_GET_DEFAULT(chartNamespaceQuota_, "") };
    inline GetInstanceUsageResponseBody& setChartNamespaceQuota(string chartNamespaceQuota) { DARABONBA_PTR_SET_VALUE(chartNamespaceQuota_, chartNamespaceQuota) };


    // chartNamespaceUsage Field Functions 
    bool hasChartNamespaceUsage() const { return this->chartNamespaceUsage_ != nullptr;};
    void deleteChartNamespaceUsage() { this->chartNamespaceUsage_ = nullptr;};
    inline string chartNamespaceUsage() const { DARABONBA_PTR_GET_DEFAULT(chartNamespaceUsage_, "") };
    inline GetInstanceUsageResponseBody& setChartNamespaceUsage(string chartNamespaceUsage) { DARABONBA_PTR_SET_VALUE(chartNamespaceUsage_, chartNamespaceUsage) };


    // chartRepoQuota Field Functions 
    bool hasChartRepoQuota() const { return this->chartRepoQuota_ != nullptr;};
    void deleteChartRepoQuota() { this->chartRepoQuota_ = nullptr;};
    inline string chartRepoQuota() const { DARABONBA_PTR_GET_DEFAULT(chartRepoQuota_, "") };
    inline GetInstanceUsageResponseBody& setChartRepoQuota(string chartRepoQuota) { DARABONBA_PTR_SET_VALUE(chartRepoQuota_, chartRepoQuota) };


    // chartRepoUsage Field Functions 
    bool hasChartRepoUsage() const { return this->chartRepoUsage_ != nullptr;};
    void deleteChartRepoUsage() { this->chartRepoUsage_ = nullptr;};
    inline string chartRepoUsage() const { DARABONBA_PTR_GET_DEFAULT(chartRepoUsage_, "") };
    inline GetInstanceUsageResponseBody& setChartRepoUsage(string chartRepoUsage) { DARABONBA_PTR_SET_VALUE(chartRepoUsage_, chartRepoUsage) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetInstanceUsageResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // namespaceQuota Field Functions 
    bool hasNamespaceQuota() const { return this->namespaceQuota_ != nullptr;};
    void deleteNamespaceQuota() { this->namespaceQuota_ = nullptr;};
    inline string namespaceQuota() const { DARABONBA_PTR_GET_DEFAULT(namespaceQuota_, "") };
    inline GetInstanceUsageResponseBody& setNamespaceQuota(string namespaceQuota) { DARABONBA_PTR_SET_VALUE(namespaceQuota_, namespaceQuota) };


    // namespaceUsage Field Functions 
    bool hasNamespaceUsage() const { return this->namespaceUsage_ != nullptr;};
    void deleteNamespaceUsage() { this->namespaceUsage_ = nullptr;};
    inline string namespaceUsage() const { DARABONBA_PTR_GET_DEFAULT(namespaceUsage_, "") };
    inline GetInstanceUsageResponseBody& setNamespaceUsage(string namespaceUsage) { DARABONBA_PTR_SET_VALUE(namespaceUsage_, namespaceUsage) };


    // repoQuota Field Functions 
    bool hasRepoQuota() const { return this->repoQuota_ != nullptr;};
    void deleteRepoQuota() { this->repoQuota_ = nullptr;};
    inline string repoQuota() const { DARABONBA_PTR_GET_DEFAULT(repoQuota_, "") };
    inline GetInstanceUsageResponseBody& setRepoQuota(string repoQuota) { DARABONBA_PTR_SET_VALUE(repoQuota_, repoQuota) };


    // repoUsage Field Functions 
    bool hasRepoUsage() const { return this->repoUsage_ != nullptr;};
    void deleteRepoUsage() { this->repoUsage_ = nullptr;};
    inline string repoUsage() const { DARABONBA_PTR_GET_DEFAULT(repoUsage_, "") };
    inline GetInstanceUsageResponseBody& setRepoUsage(string repoUsage) { DARABONBA_PTR_SET_VALUE(repoUsage_, repoUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcQuota Field Functions 
    bool hasVpcQuota() const { return this->vpcQuota_ != nullptr;};
    void deleteVpcQuota() { this->vpcQuota_ = nullptr;};
    inline string vpcQuota() const { DARABONBA_PTR_GET_DEFAULT(vpcQuota_, "") };
    inline GetInstanceUsageResponseBody& setVpcQuota(string vpcQuota) { DARABONBA_PTR_SET_VALUE(vpcQuota_, vpcQuota) };


    // vpcUsage Field Functions 
    bool hasVpcUsage() const { return this->vpcUsage_ != nullptr;};
    void deleteVpcUsage() { this->vpcUsage_ = nullptr;};
    inline string vpcUsage() const { DARABONBA_PTR_GET_DEFAULT(vpcUsage_, "") };
    inline GetInstanceUsageResponseBody& setVpcUsage(string vpcUsage) { DARABONBA_PTR_SET_VALUE(vpcUsage_, vpcUsage) };


  protected:
    // The quota of chart namespaces.
    std::shared_ptr<string> chartNamespaceQuota_ = nullptr;
    // The number of chart namespaces that are created in the instance.
    std::shared_ptr<string> chartNamespaceUsage_ = nullptr;
    // The quota of chart repositories for the instance.
    std::shared_ptr<string> chartRepoQuota_ = nullptr;
    // The number of chart repositories that are created.
    std::shared_ptr<string> chartRepoUsage_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The quota of image namespaces for the instance.
    std::shared_ptr<string> namespaceQuota_ = nullptr;
    // The number of image namespaces that are created in the instance.
    std::shared_ptr<string> namespaceUsage_ = nullptr;
    // The quota of image repositories for the instance.
    std::shared_ptr<string> repoQuota_ = nullptr;
    // The number of image repositories that are created in the instance.
    std::shared_ptr<string> repoUsage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // VPC quota
    std::shared_ptr<string> vpcQuota_ = nullptr;
    // Number of bound VPCs
    std::shared_ptr<string> vpcUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
