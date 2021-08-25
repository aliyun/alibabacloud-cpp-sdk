// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/compute_nest_supplier_20210521.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_ComputeNestSupplier20210521;

Alibabacloud_ComputeNestSupplier20210521::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("computenestsupplier"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ComputeNestSupplier20210521::Client::getEndpoint(shared_ptr<string> productId,
                                                                     shared_ptr<string> regionId,
                                                                     shared_ptr<string> endpointRule,
                                                                     shared_ptr<string> network,
                                                                     shared_ptr<string> suffix,
                                                                     shared_ptr<map<string, string>> endpointMap,
                                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CancelServiceRegistrationResponse Alibabacloud_ComputeNestSupplier20210521::Client::cancelServiceRegistrationWithOptions(shared_ptr<CancelServiceRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelServiceRegistrationResponse(doRPCRequest(make_shared<string>("CancelServiceRegistration"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelServiceRegistrationResponse Alibabacloud_ComputeNestSupplier20210521::Client::cancelServiceRegistration(shared_ptr<CancelServiceRegistrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelServiceRegistrationWithOptions(request, runtime);
}

CreateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceResponse(doRPCRequest(make_shared<string>("CreateService"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceWithOptions(request, runtime);
}

DeleteServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteServiceResponse(doRPCRequest(make_shared<string>("DeleteService"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteService(shared_ptr<DeleteServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceWithOptions(request, runtime);
}

GetServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetServiceResponse(doRPCRequest(make_shared<string>("GetService"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::getService(shared_ptr<GetServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceWithOptions(request, runtime);
}

GetServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceInstanceWithOptions(shared_ptr<GetServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetServiceInstanceResponse(doRPCRequest(make_shared<string>("GetServiceInstance"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceInstance(shared_ptr<GetServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceInstanceWithOptions(request, runtime);
}

GetSupplierInformationResponse Alibabacloud_ComputeNestSupplier20210521::Client::getSupplierInformationWithOptions(shared_ptr<GetSupplierInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSupplierInformationResponse(doRPCRequest(make_shared<string>("GetSupplierInformation"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSupplierInformationResponse Alibabacloud_ComputeNestSupplier20210521::Client::getSupplierInformation(shared_ptr<GetSupplierInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSupplierInformationWithOptions(request, runtime);
}

LaunchServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::launchServiceWithOptions(shared_ptr<LaunchServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LaunchServiceResponse(doRPCRequest(make_shared<string>("LaunchService"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LaunchServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::launchService(shared_ptr<LaunchServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return launchServiceWithOptions(request, runtime);
}

ListServiceInstancesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListServiceInstancesResponse(doRPCRequest(make_shared<string>("ListServiceInstances"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServiceInstancesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstances(shared_ptr<ListServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstancesWithOptions(request, runtime);
}

ListServiceRegistrationsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceRegistrationsWithOptions(shared_ptr<ListServiceRegistrationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListServiceRegistrationsResponse(doRPCRequest(make_shared<string>("ListServiceRegistrations"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServiceRegistrationsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceRegistrations(shared_ptr<ListServiceRegistrationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceRegistrationsWithOptions(request, runtime);
}

ListServicesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListServicesResponse(doRPCRequest(make_shared<string>("ListServices"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServicesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServicesWithOptions(request, runtime);
}

RegisterServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::registerServiceWithOptions(shared_ptr<RegisterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterServiceResponse(doRPCRequest(make_shared<string>("RegisterService"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::registerService(shared_ptr<RegisterServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerServiceWithOptions(request, runtime);
}

UpdateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceWithOptions(shared_ptr<UpdateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateServiceResponse(doRPCRequest(make_shared<string>("UpdateService"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateService(shared_ptr<UpdateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceWithOptions(request, runtime);
}

WithdrawServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::withdrawServiceWithOptions(shared_ptr<WithdrawServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return WithdrawServiceResponse(doRPCRequest(make_shared<string>("WithdrawService"), make_shared<string>("2021-05-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

WithdrawServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::withdrawService(shared_ptr<WithdrawServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return withdrawServiceWithOptions(request, runtime);
}

