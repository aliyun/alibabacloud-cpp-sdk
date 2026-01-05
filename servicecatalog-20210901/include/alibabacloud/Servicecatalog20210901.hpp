// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SERVICECATALOG20210901_HPP_
#define ALIBABACLOUD_SERVICECATALOG20210901_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Servicecatalog20210901Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Servicecatalog20210901.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Reviews a plan.
       *
       * @param request ApproveProvisionedProductPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveProvisionedProductPlanResponse
       */
      Models::ApproveProvisionedProductPlanResponse approveProvisionedProductPlanWithOptions(const Models::ApproveProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reviews a plan.
       *
       * @param request ApproveProvisionedProductPlanRequest
       * @return ApproveProvisionedProductPlanResponse
       */
      Models::ApproveProvisionedProductPlanResponse approveProvisionedProductPlan(const Models::ApproveProvisionedProductPlanRequest &request);

      /**
       * @summary 将产品组合授权给某个RAM实体
       *
       * @param request AssociatePrincipalWithPortfolioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociatePrincipalWithPortfolioResponse
       */
      Models::AssociatePrincipalWithPortfolioResponse associatePrincipalWithPortfolioWithOptions(const Models::AssociatePrincipalWithPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将产品组合授权给某个RAM实体
       *
       * @param request AssociatePrincipalWithPortfolioRequest
       * @return AssociatePrincipalWithPortfolioResponse
       */
      Models::AssociatePrincipalWithPortfolioResponse associatePrincipalWithPortfolio(const Models::AssociatePrincipalWithPortfolioRequest &request);

      /**
       * @summary Adds a product to a product portfolio.
       *
       * @param request AssociateProductWithPortfolioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateProductWithPortfolioResponse
       */
      Models::AssociateProductWithPortfolioResponse associateProductWithPortfolioWithOptions(const Models::AssociateProductWithPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a product to a product portfolio.
       *
       * @param request AssociateProductWithPortfolioRequest
       * @return AssociateProductWithPortfolioResponse
       */
      Models::AssociateProductWithPortfolioResponse associateProductWithPortfolio(const Models::AssociateProductWithPortfolioRequest &request);

      /**
       * @summary Associates the tag option with a resource.
       *
       * @param request AssociateTagOptionWithResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateTagOptionWithResourceResponse
       */
      Models::AssociateTagOptionWithResourceResponse associateTagOptionWithResourceWithOptions(const Models::AssociateTagOptionWithResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates the tag option with a resource.
       *
       * @param request AssociateTagOptionWithResourceRequest
       * @return AssociateTagOptionWithResourceResponse
       */
      Models::AssociateTagOptionWithResourceResponse associateTagOptionWithResource(const Models::AssociateTagOptionWithResourceRequest &request);

      /**
       * @summary Cancels a plan.
       *
       * @param request CancelProvisionedProductPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelProvisionedProductPlanResponse
       */
      Models::CancelProvisionedProductPlanResponse cancelProvisionedProductPlanWithOptions(const Models::CancelProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a plan.
       *
       * @param request CancelProvisionedProductPlanRequest
       * @return CancelProvisionedProductPlanResponse
       */
      Models::CancelProvisionedProductPlanResponse cancelProvisionedProductPlan(const Models::CancelProvisionedProductPlanRequest &request);

      /**
       * @summary Replicates a product.
       *
       * @param request CopyProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyProductResponse
       */
      Models::CopyProductResponse copyProductWithOptions(const Models::CopyProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replicates a product.
       *
       * @param request CopyProductRequest
       * @return CopyProductResponse
       */
      Models::CopyProductResponse copyProduct(const Models::CopyProductRequest &request);

      /**
       * @summary Creates a constraint.
       *
       * @param request CreateConstraintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConstraintResponse
       */
      Models::CreateConstraintResponse createConstraintWithOptions(const Models::CreateConstraintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a constraint.
       *
       * @param request CreateConstraintRequest
       * @return CreateConstraintResponse
       */
      Models::CreateConstraintResponse createConstraint(const Models::CreateConstraintRequest &request);

      /**
       * @summary Creates a product portfolio.
       *
       * @param request CreatePortfolioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePortfolioResponse
       */
      Models::CreatePortfolioResponse createPortfolioWithOptions(const Models::CreatePortfolioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a product portfolio.
       *
       * @param request CreatePortfolioRequest
       * @return CreatePortfolioResponse
       */
      Models::CreatePortfolioResponse createPortfolio(const Models::CreatePortfolioRequest &request);

      /**
       * @summary Creates a product.
       *
       * @description Before you call the CreateProduct operation, you must call the [CreateTemplate](~~CreateTemplate~~) operation to create a template.
       *
       * @param tmpReq CreateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProductWithOptions(const Models::CreateProductRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a product.
       *
       * @description Before you call the CreateProduct operation, you must call the [CreateTemplate](~~CreateTemplate~~) operation to create a template.
       *
       * @param request CreateProductRequest
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProduct(const Models::CreateProductRequest &request);

      /**
       * @summary Creates a product version.
       *
       * @description Before you call the CreateProductVersion operation, you must call the [CreateTemplate](~~CreateTemplate~~) operation to create a template.
       *
       * @param request CreateProductVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductVersionResponse
       */
      Models::CreateProductVersionResponse createProductVersionWithOptions(const Models::CreateProductVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a product version.
       *
       * @description Before you call the CreateProductVersion operation, you must call the [CreateTemplate](~~CreateTemplate~~) operation to create a template.
       *
       * @param request CreateProductVersionRequest
       * @return CreateProductVersionResponse
       */
      Models::CreateProductVersionResponse createProductVersion(const Models::CreateProductVersionRequest &request);

      /**
       * @summary Creates a plan.
       *
       * @param request CreateProvisionedProductPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProvisionedProductPlanResponse
       */
      Models::CreateProvisionedProductPlanResponse createProvisionedProductPlanWithOptions(const Models::CreateProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a plan.
       *
       * @param request CreateProvisionedProductPlanRequest
       * @return CreateProvisionedProductPlanResponse
       */
      Models::CreateProvisionedProductPlanResponse createProvisionedProductPlan(const Models::CreateProvisionedProductPlanRequest &request);

      /**
       * @summary Creates a tag option.
       *
       * @param request CreateTagOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagOptionResponse
       */
      Models::CreateTagOptionResponse createTagOptionWithOptions(const Models::CreateTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tag option.
       *
       * @param request CreateTagOptionRequest
       * @return CreateTagOptionResponse
       */
      Models::CreateTagOptionResponse createTagOption(const Models::CreateTagOptionRequest &request);

      /**
       * @summary Creates a template. Service Catalog saves the template based on the parameters that you specify and returns the URL of the template.
       *
       * @param request CreateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a template. Service Catalog saves the template based on the parameters that you specify and returns the URL of the template.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary Deletes a constraint.
       *
       * @param request DeleteConstraintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConstraintResponse
       */
      Models::DeleteConstraintResponse deleteConstraintWithOptions(const Models::DeleteConstraintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a constraint.
       *
       * @param request DeleteConstraintRequest
       * @return DeleteConstraintResponse
       */
      Models::DeleteConstraintResponse deleteConstraint(const Models::DeleteConstraintRequest &request);

      /**
       * @summary Deletes a product portfolio.
       *
       * @param request DeletePortfolioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePortfolioResponse
       */
      Models::DeletePortfolioResponse deletePortfolioWithOptions(const Models::DeletePortfolioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a product portfolio.
       *
       * @param request DeletePortfolioRequest
       * @return DeletePortfolioResponse
       */
      Models::DeletePortfolioResponse deletePortfolio(const Models::DeletePortfolioRequest &request);

      /**
       * @summary Deletes a product.
       *
       * @param request DeleteProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProductWithOptions(const Models::DeleteProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a product.
       *
       * @param request DeleteProductRequest
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProduct(const Models::DeleteProductRequest &request);

      /**
       * @summary Deletes a product version.
       *
       * @param request DeleteProductVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductVersionResponse
       */
      Models::DeleteProductVersionResponse deleteProductVersionWithOptions(const Models::DeleteProductVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a product version.
       *
       * @param request DeleteProductVersionRequest
       * @return DeleteProductVersionResponse
       */
      Models::DeleteProductVersionResponse deleteProductVersion(const Models::DeleteProductVersionRequest &request);

      /**
       * @summary Deletes a plan.
       *
       * @param request DeleteProvisionedProductPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProvisionedProductPlanResponse
       */
      Models::DeleteProvisionedProductPlanResponse deleteProvisionedProductPlanWithOptions(const Models::DeleteProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a plan.
       *
       * @param request DeleteProvisionedProductPlanRequest
       * @return DeleteProvisionedProductPlanResponse
       */
      Models::DeleteProvisionedProductPlanResponse deleteProvisionedProductPlan(const Models::DeleteProvisionedProductPlanRequest &request);

      /**
       * @summary Deletes a tag option.
       *
       * @param request DeleteTagOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagOptionResponse
       */
      Models::DeleteTagOptionResponse deleteTagOptionWithOptions(const Models::DeleteTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a tag option.
       *
       * @param request DeleteTagOptionRequest
       * @return DeleteTagOptionResponse
       */
      Models::DeleteTagOptionResponse deleteTagOption(const Models::DeleteTagOptionRequest &request);

      /**
       * @summary Disassociates a tag option from a resource.
       *
       * @param request DisAssociateTagOptionFromResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisAssociateTagOptionFromResourceResponse
       */
      Models::DisAssociateTagOptionFromResourceResponse disAssociateTagOptionFromResourceWithOptions(const Models::DisAssociateTagOptionFromResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a tag option from a resource.
       *
       * @param request DisAssociateTagOptionFromResourceRequest
       * @return DisAssociateTagOptionFromResourceResponse
       */
      Models::DisAssociateTagOptionFromResourceResponse disAssociateTagOptionFromResource(const Models::DisAssociateTagOptionFromResourceRequest &request);

      /**
       * @summary Revokes the permissions to access a product portfolio.
       *
       * @param request DisassociatePrincipalFromPortfolioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociatePrincipalFromPortfolioResponse
       */
      Models::DisassociatePrincipalFromPortfolioResponse disassociatePrincipalFromPortfolioWithOptions(const Models::DisassociatePrincipalFromPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions to access a product portfolio.
       *
       * @param request DisassociatePrincipalFromPortfolioRequest
       * @return DisassociatePrincipalFromPortfolioResponse
       */
      Models::DisassociatePrincipalFromPortfolioResponse disassociatePrincipalFromPortfolio(const Models::DisassociatePrincipalFromPortfolioRequest &request);

      /**
       * @summary Removes a product from the product portfolio.
       *
       * @param request DisassociateProductFromPortfolioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateProductFromPortfolioResponse
       */
      Models::DisassociateProductFromPortfolioResponse disassociateProductFromPortfolioWithOptions(const Models::DisassociateProductFromPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a product from the product portfolio.
       *
       * @param request DisassociateProductFromPortfolioRequest
       * @return DisassociateProductFromPortfolioResponse
       */
      Models::DisassociateProductFromPortfolioResponse disassociateProductFromPortfolio(const Models::DisassociateProductFromPortfolioRequest &request);

      /**
       * @summary Runs a plan.
       *
       * @param request ExecuteProvisionedProductPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteProvisionedProductPlanResponse
       */
      Models::ExecuteProvisionedProductPlanResponse executeProvisionedProductPlanWithOptions(const Models::ExecuteProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a plan.
       *
       * @param request ExecuteProvisionedProductPlanRequest
       * @return ExecuteProvisionedProductPlanResponse
       */
      Models::ExecuteProvisionedProductPlanResponse executeProvisionedProductPlan(const Models::ExecuteProvisionedProductPlanRequest &request);

      /**
       * @summary Queries the information about a constraint.
       *
       * @param request GetConstraintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConstraintResponse
       */
      Models::GetConstraintResponse getConstraintWithOptions(const Models::GetConstraintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a constraint.
       *
       * @param request GetConstraintRequest
       * @return GetConstraintResponse
       */
      Models::GetConstraintResponse getConstraint(const Models::GetConstraintRequest &request);

      /**
       * @summary Queries the information about a product portfolio.
       *
       * @param request GetPortfolioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPortfolioResponse
       */
      Models::GetPortfolioResponse getPortfolioWithOptions(const Models::GetPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a product portfolio.
       *
       * @param request GetPortfolioRequest
       * @return GetPortfolioResponse
       */
      Models::GetPortfolioResponse getPortfolio(const Models::GetPortfolioRequest &request);

      /**
       * @summary Queries the information about a product as the administrator.
       *
       * @param request GetProductAsAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductAsAdminResponse
       */
      Models::GetProductAsAdminResponse getProductAsAdminWithOptions(const Models::GetProductAsAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a product as the administrator.
       *
       * @param request GetProductAsAdminRequest
       * @return GetProductAsAdminResponse
       */
      Models::GetProductAsAdminResponse getProductAsAdmin(const Models::GetProductAsAdminRequest &request);

      /**
       * @summary Queries the information about a product as a user.
       *
       * @description Make sure that you are granted the permissions to manage relevant products as a user by an administrator. For more information, see [Manage access permissions](https://help.aliyun.com/document_detail/405233.html).
       *
       * @param request GetProductAsEndUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductAsEndUserResponse
       */
      Models::GetProductAsEndUserResponse getProductAsEndUserWithOptions(const Models::GetProductAsEndUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a product as a user.
       *
       * @description Make sure that you are granted the permissions to manage relevant products as a user by an administrator. For more information, see [Manage access permissions](https://help.aliyun.com/document_detail/405233.html).
       *
       * @param request GetProductAsEndUserRequest
       * @return GetProductAsEndUserResponse
       */
      Models::GetProductAsEndUserResponse getProductAsEndUser(const Models::GetProductAsEndUserRequest &request);

      /**
       * @summary Queries the details of a product version.
       *
       * @param request GetProductVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductVersionResponse
       */
      Models::GetProductVersionResponse getProductVersionWithOptions(const Models::GetProductVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a product version.
       *
       * @param request GetProductVersionRequest
       * @return GetProductVersionResponse
       */
      Models::GetProductVersionResponse getProductVersion(const Models::GetProductVersionRequest &request);

      /**
       * @summary Queries the information about a product instance.
       *
       * @param request GetProvisionedProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProvisionedProductResponse
       */
      Models::GetProvisionedProductResponse getProvisionedProductWithOptions(const Models::GetProvisionedProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a product instance.
       *
       * @param request GetProvisionedProductRequest
       * @return GetProvisionedProductResponse
       */
      Models::GetProvisionedProductResponse getProvisionedProduct(const Models::GetProvisionedProductRequest &request);

      /**
       * @summary Queries the details of a plan.
       *
       * @param request GetProvisionedProductPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProvisionedProductPlanResponse
       */
      Models::GetProvisionedProductPlanResponse getProvisionedProductPlanWithOptions(const Models::GetProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a plan.
       *
       * @param request GetProvisionedProductPlanRequest
       * @return GetProvisionedProductPlanResponse
       */
      Models::GetProvisionedProductPlanResponse getProvisionedProductPlan(const Models::GetProvisionedProductPlanRequest &request);

      /**
       * @summary Queries the details of a tag option.
       *
       * @param request GetTagOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTagOptionResponse
       */
      Models::GetTagOptionResponse getTagOptionWithOptions(const Models::GetTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a tag option.
       *
       * @param request GetTagOptionRequest
       * @return GetTagOptionResponse
       */
      Models::GetTagOptionResponse getTagOption(const Models::GetTagOptionRequest &request);

      /**
       * @summary Queries the information about a task.
       *
       * @param request GetTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const Models::GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a task.
       *
       * @param request GetTaskRequest
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const Models::GetTaskRequest &request);

      /**
       * @summary Queries the details of a template.
       *
       * @param request GetTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const Models::GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a template.
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const Models::GetTemplateRequest &request);

      /**
       * @summary Launches a product.
       *
       * @param request LaunchProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchProductResponse
       */
      Models::LaunchProductResponse launchProductWithOptions(const Models::LaunchProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Launches a product.
       *
       * @param request LaunchProductRequest
       * @return LaunchProductResponse
       */
      Models::LaunchProductResponse launchProduct(const Models::LaunchProductRequest &request);

      /**
       * @summary Queries launch options.
       *
       * @param request ListLaunchOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLaunchOptionsResponse
       */
      Models::ListLaunchOptionsResponse listLaunchOptionsWithOptions(const Models::ListLaunchOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries launch options.
       *
       * @param request ListLaunchOptionsRequest
       * @return ListLaunchOptionsResponse
       */
      Models::ListLaunchOptionsResponse listLaunchOptions(const Models::ListLaunchOptionsRequest &request);

      /**
       * @summary The number of entries returned per page.
       *
       * @param request ListPortfoliosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPortfoliosResponse
       */
      Models::ListPortfoliosResponse listPortfoliosWithOptions(const Models::ListPortfoliosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The number of entries returned per page.
       *
       * @param request ListPortfoliosRequest
       * @return ListPortfoliosResponse
       */
      Models::ListPortfoliosResponse listPortfolios(const Models::ListPortfoliosRequest &request);

      /**
       * @summary Queries the Resource Access Management (RAM) users and RAM roles that are granted the permissions to access a product portfolio.
       *
       * @param request ListPrincipalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrincipalsResponse
       */
      Models::ListPrincipalsResponse listPrincipalsWithOptions(const Models::ListPrincipalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Resource Access Management (RAM) users and RAM roles that are granted the permissions to access a product portfolio.
       *
       * @param request ListPrincipalsRequest
       * @return ListPrincipalsResponse
       */
      Models::ListPrincipalsResponse listPrincipals(const Models::ListPrincipalsRequest &request);

      /**
       * @summary Queries the versions of a product.
       *
       * @param request ListProductVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductVersionsResponse
       */
      Models::ListProductVersionsResponse listProductVersionsWithOptions(const Models::ListProductVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of a product.
       *
       * @param request ListProductVersionsRequest
       * @return ListProductVersionsResponse
       */
      Models::ListProductVersionsResponse listProductVersions(const Models::ListProductVersionsRequest &request);

      /**
       * @summary Queries products as an administrator.
       *
       * @param request ListProductsAsAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsAsAdminResponse
       */
      Models::ListProductsAsAdminResponse listProductsAsAdminWithOptions(const Models::ListProductsAsAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries products as an administrator.
       *
       * @param request ListProductsAsAdminRequest
       * @return ListProductsAsAdminResponse
       */
      Models::ListProductsAsAdminResponse listProductsAsAdmin(const Models::ListProductsAsAdminRequest &request);

      /**
       * @summary Queries products as a user.
       *
       * @description Make sure that you are granted the permissions to manage relevant products as a user by an administrator. For more information, see [Manage access permissions](https://help.aliyun.com/document_detail/405233.html).
       *
       * @param request ListProductsAsEndUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsAsEndUserResponse
       */
      Models::ListProductsAsEndUserResponse listProductsAsEndUserWithOptions(const Models::ListProductsAsEndUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries products as a user.
       *
       * @description Make sure that you are granted the permissions to manage relevant products as a user by an administrator. For more information, see [Manage access permissions](https://help.aliyun.com/document_detail/405233.html).
       *
       * @param request ListProductsAsEndUserRequest
       * @return ListProductsAsEndUserResponse
       */
      Models::ListProductsAsEndUserResponse listProductsAsEndUser(const Models::ListProductsAsEndUserRequest &request);

      /**
       * @summary Queries a list of plan reviewers.
       *
       * @param request ListProvisionedProductPlanApproversRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProvisionedProductPlanApproversResponse
       */
      Models::ListProvisionedProductPlanApproversResponse listProvisionedProductPlanApproversWithOptions(const Models::ListProvisionedProductPlanApproversRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of plan reviewers.
       *
       * @param request ListProvisionedProductPlanApproversRequest
       * @return ListProvisionedProductPlanApproversResponse
       */
      Models::ListProvisionedProductPlanApproversResponse listProvisionedProductPlanApprovers(const Models::ListProvisionedProductPlanApproversRequest &request);

      /**
       * @summary Queries a list of plans. You can query plans from the end user dimension or from the review dimension.
       *
       * @param request ListProvisionedProductPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProvisionedProductPlansResponse
       */
      Models::ListProvisionedProductPlansResponse listProvisionedProductPlansWithOptions(const Models::ListProvisionedProductPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of plans. You can query plans from the end user dimension or from the review dimension.
       *
       * @param request ListProvisionedProductPlansRequest
       * @return ListProvisionedProductPlansResponse
       */
      Models::ListProvisionedProductPlansResponse listProvisionedProductPlans(const Models::ListProvisionedProductPlansRequest &request);

      /**
       * @summary Queries product instances.
       *
       * @param request ListProvisionedProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProvisionedProductsResponse
       */
      Models::ListProvisionedProductsResponse listProvisionedProductsWithOptions(const Models::ListProvisionedProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries product instances.
       *
       * @param request ListProvisionedProductsRequest
       * @return ListProvisionedProductsResponse
       */
      Models::ListProvisionedProductsResponse listProvisionedProducts(const Models::ListProvisionedProductsRequest &request);

      /**
       * @summary Queries regions.
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions.
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary Queries the resources that are associated with a tag option.
       *
       * @param request ListResourcesForTagOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesForTagOptionResponse
       */
      Models::ListResourcesForTagOptionResponse listResourcesForTagOptionWithOptions(const Models::ListResourcesForTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources that are associated with a tag option.
       *
       * @param request ListResourcesForTagOptionRequest
       * @return ListResourcesForTagOptionResponse
       */
      Models::ListResourcesForTagOptionResponse listResourcesForTagOption(const Models::ListResourcesForTagOptionRequest &request);

      /**
       * @summary Queries a list of tag options.
       *
       * @param tmpReq ListTagOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagOptionsResponse
       */
      Models::ListTagOptionsResponse listTagOptionsWithOptions(const Models::ListTagOptionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tag options.
       *
       * @param request ListTagOptionsRequest
       * @return ListTagOptionsResponse
       */
      Models::ListTagOptionsResponse listTagOptions(const Models::ListTagOptionsRequest &request);

      /**
       * @summary The page number of the returned page.
       *
       * @param request ListTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const Models::ListTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The page number of the returned page.
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const Models::ListTasksRequest &request);

      /**
       * @summary Terminates a product instance.
       *
       * @description After a product instance is terminated, the product instance is deleted from the product instance list. End users cannot manage the product instance throughout its lifecycle. Proceed with caution.
       *
       * @param request TerminateProvisionedProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateProvisionedProductResponse
       */
      Models::TerminateProvisionedProductResponse terminateProvisionedProductWithOptions(const Models::TerminateProvisionedProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a product instance.
       *
       * @description After a product instance is terminated, the product instance is deleted from the product instance list. End users cannot manage the product instance throughout its lifecycle. Proceed with caution.
       *
       * @param request TerminateProvisionedProductRequest
       * @return TerminateProvisionedProductResponse
       */
      Models::TerminateProvisionedProductResponse terminateProvisionedProduct(const Models::TerminateProvisionedProductRequest &request);

      /**
       * @summary Updates the information about a constraint.
       *
       * @param request UpdateConstraintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConstraintResponse
       */
      Models::UpdateConstraintResponse updateConstraintWithOptions(const Models::UpdateConstraintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a constraint.
       *
       * @param request UpdateConstraintRequest
       * @return UpdateConstraintResponse
       */
      Models::UpdateConstraintResponse updateConstraint(const Models::UpdateConstraintRequest &request);

      /**
       * @summary The ID of the product portfolio.
       *
       * @param request UpdatePortfolioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePortfolioResponse
       */
      Models::UpdatePortfolioResponse updatePortfolioWithOptions(const Models::UpdatePortfolioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the product portfolio.
       *
       * @param request UpdatePortfolioRequest
       * @return UpdatePortfolioResponse
       */
      Models::UpdatePortfolioResponse updatePortfolio(const Models::UpdatePortfolioRequest &request);

      /**
       * @summary The ID of the product.
       *
       * @param request UpdateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProductWithOptions(const Models::UpdateProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the product.
       *
       * @param request UpdateProductRequest
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProduct(const Models::UpdateProductRequest &request);

      /**
       * @summary Updates the information about a product version.
       *
       * @param request UpdateProductVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProductVersionResponse
       */
      Models::UpdateProductVersionResponse updateProductVersionWithOptions(const Models::UpdateProductVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a product version.
       *
       * @param request UpdateProductVersionRequest
       * @return UpdateProductVersionResponse
       */
      Models::UpdateProductVersionResponse updateProductVersion(const Models::UpdateProductVersionRequest &request);

      /**
       * @summary Updates the information about a product instance.
       *
       * @param request UpdateProvisionedProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProvisionedProductResponse
       */
      Models::UpdateProvisionedProductResponse updateProvisionedProductWithOptions(const Models::UpdateProvisionedProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a product instance.
       *
       * @param request UpdateProvisionedProductRequest
       * @return UpdateProvisionedProductResponse
       */
      Models::UpdateProvisionedProductResponse updateProvisionedProduct(const Models::UpdateProvisionedProductRequest &request);

      /**
       * @summary Updates a plan.
       *
       * @param request UpdateProvisionedProductPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProvisionedProductPlanResponse
       */
      Models::UpdateProvisionedProductPlanResponse updateProvisionedProductPlanWithOptions(const Models::UpdateProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a plan.
       *
       * @param request UpdateProvisionedProductPlanRequest
       * @return UpdateProvisionedProductPlanResponse
       */
      Models::UpdateProvisionedProductPlanResponse updateProvisionedProductPlan(const Models::UpdateProvisionedProductPlanRequest &request);

      /**
       * @summary Updates the tag option.
       *
       * @param request UpdateTagOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTagOptionResponse
       */
      Models::UpdateTagOptionResponse updateTagOptionWithOptions(const Models::UpdateTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the tag option.
       *
       * @param request UpdateTagOptionRequest
       * @return UpdateTagOptionResponse
       */
      Models::UpdateTagOptionResponse updateTagOption(const Models::UpdateTagOptionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
