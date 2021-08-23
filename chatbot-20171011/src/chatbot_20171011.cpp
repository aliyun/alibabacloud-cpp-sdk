// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/chatbot_20171011.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Chatbot20171011;

Alibabacloud_Chatbot20171011::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("chatbot"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Chatbot20171011::Client::getEndpoint(shared_ptr<string> productId,
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

CreateEntityResponse Alibabacloud_Chatbot20171011::Client::createEntityWithOptions(shared_ptr<CreateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEntityShrinkRequest> request = make_shared<CreateEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateEntityRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEntityResponse(doRPCRequest(make_shared<string>("CreateEntity"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEntityResponse Alibabacloud_Chatbot20171011::Client::createEntity(shared_ptr<CreateEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEntityWithOptions(request, runtime);
}

AddSynonymResponse Alibabacloud_Chatbot20171011::Client::addSynonymWithOptions(shared_ptr<AddSynonymRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSynonymResponse(doRPCRequest(make_shared<string>("AddSynonym"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSynonymResponse Alibabacloud_Chatbot20171011::Client::addSynonym(shared_ptr<AddSynonymRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSynonymWithOptions(request, runtime);
}

DeleteCategoryResponse Alibabacloud_Chatbot20171011::Client::deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCategoryResponse(doRPCRequest(make_shared<string>("DeleteCategory"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCategoryResponse Alibabacloud_Chatbot20171011::Client::deleteCategory(shared_ptr<DeleteCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCategoryWithOptions(request, runtime);
}

PublishKnowledgeResponse Alibabacloud_Chatbot20171011::Client::publishKnowledgeWithOptions(shared_ptr<PublishKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishKnowledgeResponse(doRPCRequest(make_shared<string>("PublishKnowledge"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishKnowledgeResponse Alibabacloud_Chatbot20171011::Client::publishKnowledge(shared_ptr<PublishKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishKnowledgeWithOptions(request, runtime);
}

ListBotKnowledgeDetailsResponse Alibabacloud_Chatbot20171011::Client::listBotKnowledgeDetailsWithOptions(shared_ptr<ListBotKnowledgeDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBotKnowledgeDetailsResponse(doRPCRequest(make_shared<string>("ListBotKnowledgeDetails"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBotKnowledgeDetailsResponse Alibabacloud_Chatbot20171011::Client::listBotKnowledgeDetails(shared_ptr<ListBotKnowledgeDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotKnowledgeDetailsWithOptions(request, runtime);
}

QueryIntentsResponse Alibabacloud_Chatbot20171011::Client::queryIntentsWithOptions(shared_ptr<QueryIntentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryIntentsResponse(doRPCRequest(make_shared<string>("QueryIntents"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryIntentsResponse Alibabacloud_Chatbot20171011::Client::queryIntents(shared_ptr<QueryIntentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIntentsWithOptions(request, runtime);
}

DescribeCategoryResponse Alibabacloud_Chatbot20171011::Client::describeCategoryWithOptions(shared_ptr<DescribeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCategoryResponse(doRPCRequest(make_shared<string>("DescribeCategory"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCategoryResponse Alibabacloud_Chatbot20171011::Client::describeCategory(shared_ptr<DescribeCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCategoryWithOptions(request, runtime);
}

ListBotReceptionDetailDatasResponse Alibabacloud_Chatbot20171011::Client::listBotReceptionDetailDatasWithOptions(shared_ptr<ListBotReceptionDetailDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBotReceptionDetailDatasResponse(doRPCRequest(make_shared<string>("ListBotReceptionDetailDatas"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBotReceptionDetailDatasResponse Alibabacloud_Chatbot20171011::Client::listBotReceptionDetailDatas(shared_ptr<ListBotReceptionDetailDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotReceptionDetailDatasWithOptions(request, runtime);
}

AppendEntityMemberResponse Alibabacloud_Chatbot20171011::Client::appendEntityMemberWithOptions(shared_ptr<AppendEntityMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AppendEntityMemberShrinkRequest> request = make_shared<AppendEntityMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AppendEntityMemberRequestMember>(tmpReq->member)) {
    request->memberShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->member->toMap()), make_shared<string>("Member"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AppendEntityMemberResponse(doRPCRequest(make_shared<string>("AppendEntityMember"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AppendEntityMemberResponse Alibabacloud_Chatbot20171011::Client::appendEntityMember(shared_ptr<AppendEntityMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return appendEntityMemberWithOptions(request, runtime);
}

DescribeBotResponse Alibabacloud_Chatbot20171011::Client::describeBotWithOptions(shared_ptr<DescribeBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBotResponse(doRPCRequest(make_shared<string>("DescribeBot"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBotResponse Alibabacloud_Chatbot20171011::Client::describeBot(shared_ptr<DescribeBotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBotWithOptions(request, runtime);
}

ListBotColdDsDatasResponse Alibabacloud_Chatbot20171011::Client::listBotColdDsDatasWithOptions(shared_ptr<ListBotColdDsDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBotColdDsDatasResponse(doRPCRequest(make_shared<string>("ListBotColdDsDatas"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBotColdDsDatasResponse Alibabacloud_Chatbot20171011::Client::listBotColdDsDatas(shared_ptr<ListBotColdDsDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotColdDsDatasWithOptions(request, runtime);
}

DescribePerspectiveResponse Alibabacloud_Chatbot20171011::Client::describePerspectiveWithOptions(shared_ptr<DescribePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePerspectiveResponse(doRPCRequest(make_shared<string>("DescribePerspective"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePerspectiveResponse Alibabacloud_Chatbot20171011::Client::describePerspective(shared_ptr<DescribePerspectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePerspectiveWithOptions(request, runtime);
}

UpdateDialogResponse Alibabacloud_Chatbot20171011::Client::updateDialogWithOptions(shared_ptr<UpdateDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDialogResponse(doRPCRequest(make_shared<string>("UpdateDialog"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDialogResponse Alibabacloud_Chatbot20171011::Client::updateDialog(shared_ptr<UpdateDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDialogWithOptions(request, runtime);
}

CreateBotResponse Alibabacloud_Chatbot20171011::Client::createBotWithOptions(shared_ptr<CreateBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBotResponse(doRPCRequest(make_shared<string>("CreateBot"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBotResponse Alibabacloud_Chatbot20171011::Client::createBot(shared_ptr<CreateBotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBotWithOptions(request, runtime);
}

DescribeIntentResponse Alibabacloud_Chatbot20171011::Client::describeIntentWithOptions(shared_ptr<DescribeIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeIntentResponse(doRPCRequest(make_shared<string>("DescribeIntent"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIntentResponse Alibabacloud_Chatbot20171011::Client::describeIntent(shared_ptr<DescribeIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIntentWithOptions(request, runtime);
}

QueryDialogsResponse Alibabacloud_Chatbot20171011::Client::queryDialogsWithOptions(shared_ptr<QueryDialogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDialogsResponse(doRPCRequest(make_shared<string>("QueryDialogs"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDialogsResponse Alibabacloud_Chatbot20171011::Client::queryDialogs(shared_ptr<QueryDialogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDialogsWithOptions(request, runtime);
}

CreateDialogResponse Alibabacloud_Chatbot20171011::Client::createDialogWithOptions(shared_ptr<CreateDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDialogResponse(doRPCRequest(make_shared<string>("CreateDialog"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDialogResponse Alibabacloud_Chatbot20171011::Client::createDialog(shared_ptr<CreateDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDialogWithOptions(request, runtime);
}

QueryCoreWordsResponse Alibabacloud_Chatbot20171011::Client::queryCoreWordsWithOptions(shared_ptr<QueryCoreWordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCoreWordsResponse(doRPCRequest(make_shared<string>("QueryCoreWords"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCoreWordsResponse Alibabacloud_Chatbot20171011::Client::queryCoreWords(shared_ptr<QueryCoreWordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCoreWordsWithOptions(request, runtime);
}

UpdateCoreWordResponse Alibabacloud_Chatbot20171011::Client::updateCoreWordWithOptions(shared_ptr<UpdateCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCoreWordResponse(doRPCRequest(make_shared<string>("UpdateCoreWord"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCoreWordResponse Alibabacloud_Chatbot20171011::Client::updateCoreWord(shared_ptr<UpdateCoreWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCoreWordWithOptions(request, runtime);
}

UpdateCategoryResponse Alibabacloud_Chatbot20171011::Client::updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCategoryResponse(doRPCRequest(make_shared<string>("UpdateCategory"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCategoryResponse Alibabacloud_Chatbot20171011::Client::updateCategory(shared_ptr<UpdateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCategoryWithOptions(request, runtime);
}

GetConversationListResponse Alibabacloud_Chatbot20171011::Client::getConversationListWithOptions(shared_ptr<GetConversationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConversationListResponse(doRPCRequest(make_shared<string>("GetConversationList"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConversationListResponse Alibabacloud_Chatbot20171011::Client::getConversationList(shared_ptr<GetConversationListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConversationListWithOptions(request, runtime);
}

UpdateEntityResponse Alibabacloud_Chatbot20171011::Client::updateEntityWithOptions(shared_ptr<UpdateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEntityShrinkRequest> request = make_shared<UpdateEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEntityRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEntityResponse(doRPCRequest(make_shared<string>("UpdateEntity"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEntityResponse Alibabacloud_Chatbot20171011::Client::updateEntity(shared_ptr<UpdateEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEntityWithOptions(request, runtime);
}

DeleteCoreWordResponse Alibabacloud_Chatbot20171011::Client::deleteCoreWordWithOptions(shared_ptr<DeleteCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCoreWordResponse(doRPCRequest(make_shared<string>("DeleteCoreWord"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCoreWordResponse Alibabacloud_Chatbot20171011::Client::deleteCoreWord(shared_ptr<DeleteCoreWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCoreWordWithOptions(request, runtime);
}

MoveKnowledgeCategoryResponse Alibabacloud_Chatbot20171011::Client::moveKnowledgeCategoryWithOptions(shared_ptr<MoveKnowledgeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveKnowledgeCategoryResponse(doRPCRequest(make_shared<string>("MoveKnowledgeCategory"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveKnowledgeCategoryResponse Alibabacloud_Chatbot20171011::Client::moveKnowledgeCategory(shared_ptr<MoveKnowledgeCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveKnowledgeCategoryWithOptions(request, runtime);
}

CreateIntentResponse Alibabacloud_Chatbot20171011::Client::createIntentWithOptions(shared_ptr<CreateIntentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateIntentShrinkRequest> request = make_shared<CreateIntentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<IntentCreateDTO>(tmpReq->intentDefinition)) {
    request->intentDefinitionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->intentDefinition->toMap()), make_shared<string>("IntentDefinition"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateIntentResponse(doRPCRequest(make_shared<string>("CreateIntent"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateIntentResponse Alibabacloud_Chatbot20171011::Client::createIntent(shared_ptr<CreateIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntentWithOptions(request, runtime);
}

UpdatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::updatePerspectiveWithOptions(shared_ptr<UpdatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePerspectiveResponse(doRPCRequest(make_shared<string>("UpdatePerspective"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::updatePerspective(shared_ptr<UpdatePerspectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePerspectiveWithOptions(request, runtime);
}

QueryCategoriesResponse Alibabacloud_Chatbot20171011::Client::queryCategoriesWithOptions(shared_ptr<QueryCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCategoriesResponse(doRPCRequest(make_shared<string>("QueryCategories"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCategoriesResponse Alibabacloud_Chatbot20171011::Client::queryCategories(shared_ptr<QueryCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCategoriesWithOptions(request, runtime);
}

DeleteDialogResponse Alibabacloud_Chatbot20171011::Client::deleteDialogWithOptions(shared_ptr<DeleteDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDialogResponse(doRPCRequest(make_shared<string>("DeleteDialog"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDialogResponse Alibabacloud_Chatbot20171011::Client::deleteDialog(shared_ptr<DeleteDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDialogWithOptions(request, runtime);
}

QueryKnowledgesResponse Alibabacloud_Chatbot20171011::Client::queryKnowledgesWithOptions(shared_ptr<QueryKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryKnowledgesResponse(doRPCRequest(make_shared<string>("QueryKnowledges"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryKnowledgesResponse Alibabacloud_Chatbot20171011::Client::queryKnowledges(shared_ptr<QueryKnowledgesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryKnowledgesWithOptions(request, runtime);
}

GetAsyncResultResponse Alibabacloud_Chatbot20171011::Client::getAsyncResultWithOptions(shared_ptr<GetAsyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAsyncResultResponse(doRPCRequest(make_shared<string>("GetAsyncResult"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAsyncResultResponse Alibabacloud_Chatbot20171011::Client::getAsyncResult(shared_ptr<GetAsyncResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncResultWithOptions(request, runtime);
}

DescribeDialogResponse Alibabacloud_Chatbot20171011::Client::describeDialogWithOptions(shared_ptr<DescribeDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDialogResponse(doRPCRequest(make_shared<string>("DescribeDialog"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDialogResponse Alibabacloud_Chatbot20171011::Client::describeDialog(shared_ptr<DescribeDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDialogWithOptions(request, runtime);
}

UpdateIntentResponse Alibabacloud_Chatbot20171011::Client::updateIntentWithOptions(shared_ptr<UpdateIntentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateIntentShrinkRequest> request = make_shared<UpdateIntentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<IntentCreateDTO>(tmpReq->intentDefinition)) {
    request->intentDefinitionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->intentDefinition->toMap()), make_shared<string>("IntentDefinition"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateIntentResponse(doRPCRequest(make_shared<string>("UpdateIntent"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateIntentResponse Alibabacloud_Chatbot20171011::Client::updateIntent(shared_ptr<UpdateIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIntentWithOptions(request, runtime);
}

RemoveSynonymResponse Alibabacloud_Chatbot20171011::Client::removeSynonymWithOptions(shared_ptr<RemoveSynonymRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveSynonymResponse(doRPCRequest(make_shared<string>("RemoveSynonym"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveSynonymResponse Alibabacloud_Chatbot20171011::Client::removeSynonym(shared_ptr<RemoveSynonymRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSynonymWithOptions(request, runtime);
}

DescribeDialogFlowResponse Alibabacloud_Chatbot20171011::Client::describeDialogFlowWithOptions(shared_ptr<DescribeDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDialogFlowResponse(doRPCRequest(make_shared<string>("DescribeDialogFlow"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDialogFlowResponse Alibabacloud_Chatbot20171011::Client::describeDialogFlow(shared_ptr<DescribeDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDialogFlowWithOptions(request, runtime);
}

ActivatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::activatePerspectiveWithOptions(shared_ptr<ActivatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ActivatePerspectiveResponse(doRPCRequest(make_shared<string>("ActivatePerspective"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ActivatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::activatePerspective(shared_ptr<ActivatePerspectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activatePerspectiveWithOptions(request, runtime);
}

DescribeKnowledgeResponse Alibabacloud_Chatbot20171011::Client::describeKnowledgeWithOptions(shared_ptr<DescribeKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeKnowledgeResponse(doRPCRequest(make_shared<string>("DescribeKnowledge"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeKnowledgeResponse Alibabacloud_Chatbot20171011::Client::describeKnowledge(shared_ptr<DescribeKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKnowledgeWithOptions(request, runtime);
}

QueryPerspectivesResponse Alibabacloud_Chatbot20171011::Client::queryPerspectivesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return QueryPerspectivesResponse(doRPCRequest(make_shared<string>("QueryPerspectives"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPerspectivesResponse Alibabacloud_Chatbot20171011::Client::queryPerspectives() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPerspectivesWithOptions(runtime);
}

CreatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::createPerspectiveWithOptions(shared_ptr<CreatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePerspectiveResponse(doRPCRequest(make_shared<string>("CreatePerspective"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePerspectiveResponse Alibabacloud_Chatbot20171011::Client::createPerspective(shared_ptr<CreatePerspectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPerspectiveWithOptions(request, runtime);
}

DeleteEntityResponse Alibabacloud_Chatbot20171011::Client::deleteEntityWithOptions(shared_ptr<DeleteEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEntityResponse(doRPCRequest(make_shared<string>("DeleteEntity"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEntityResponse Alibabacloud_Chatbot20171011::Client::deleteEntity(shared_ptr<DeleteEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEntityWithOptions(request, runtime);
}

RemoveEntityMemberResponse Alibabacloud_Chatbot20171011::Client::removeEntityMemberWithOptions(shared_ptr<RemoveEntityMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveEntityMemberShrinkRequest> request = make_shared<RemoveEntityMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveEntityMemberRequestMember>(tmpReq->member)) {
    request->memberShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->member->toMap()), make_shared<string>("Member"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveEntityMemberResponse(doRPCRequest(make_shared<string>("RemoveEntityMember"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveEntityMemberResponse Alibabacloud_Chatbot20171011::Client::removeEntityMember(shared_ptr<RemoveEntityMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEntityMemberWithOptions(request, runtime);
}

TestDialogFlowResponse Alibabacloud_Chatbot20171011::Client::testDialogFlowWithOptions(shared_ptr<TestDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TestDialogFlowResponse(doRPCRequest(make_shared<string>("TestDialogFlow"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TestDialogFlowResponse Alibabacloud_Chatbot20171011::Client::testDialogFlow(shared_ptr<TestDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testDialogFlowWithOptions(request, runtime);
}

GetBotDsStatDataResponse Alibabacloud_Chatbot20171011::Client::getBotDsStatDataWithOptions(shared_ptr<GetBotDsStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBotDsStatDataResponse(doRPCRequest(make_shared<string>("GetBotDsStatData"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBotDsStatDataResponse Alibabacloud_Chatbot20171011::Client::getBotDsStatData(shared_ptr<GetBotDsStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBotDsStatDataWithOptions(request, runtime);
}

FeedbackResponse Alibabacloud_Chatbot20171011::Client::feedbackWithOptions(shared_ptr<FeedbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FeedbackResponse(doRPCRequest(make_shared<string>("Feedback"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FeedbackResponse Alibabacloud_Chatbot20171011::Client::feedback(shared_ptr<FeedbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return feedbackWithOptions(request, runtime);
}

ChatResponse Alibabacloud_Chatbot20171011::Client::chatWithOptions(shared_ptr<ChatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChatResponse(doRPCRequest(make_shared<string>("Chat"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChatResponse Alibabacloud_Chatbot20171011::Client::chat(shared_ptr<ChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return chatWithOptions(request, runtime);
}

DisableKnowledgeResponse Alibabacloud_Chatbot20171011::Client::disableKnowledgeWithOptions(shared_ptr<DisableKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableKnowledgeResponse(doRPCRequest(make_shared<string>("DisableKnowledge"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableKnowledgeResponse Alibabacloud_Chatbot20171011::Client::disableKnowledge(shared_ptr<DisableKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableKnowledgeWithOptions(request, runtime);
}

ListBotHotDsDatasResponse Alibabacloud_Chatbot20171011::Client::listBotHotDsDatasWithOptions(shared_ptr<ListBotHotDsDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBotHotDsDatasResponse(doRPCRequest(make_shared<string>("ListBotHotDsDatas"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBotHotDsDatasResponse Alibabacloud_Chatbot20171011::Client::listBotHotDsDatas(shared_ptr<ListBotHotDsDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotHotDsDatasWithOptions(request, runtime);
}

GetBotKnowledgeStatDataResponse Alibabacloud_Chatbot20171011::Client::getBotKnowledgeStatDataWithOptions(shared_ptr<GetBotKnowledgeStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBotKnowledgeStatDataResponse(doRPCRequest(make_shared<string>("GetBotKnowledgeStatData"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBotKnowledgeStatDataResponse Alibabacloud_Chatbot20171011::Client::getBotKnowledgeStatData(shared_ptr<GetBotKnowledgeStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBotKnowledgeStatDataWithOptions(request, runtime);
}

UpdateKnowledgeResponse Alibabacloud_Chatbot20171011::Client::updateKnowledgeWithOptions(shared_ptr<UpdateKnowledgeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateKnowledgeShrinkRequest> request = make_shared<UpdateKnowledgeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateKnowledgeRequestKnowledge>(tmpReq->knowledge)) {
    request->knowledgeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->knowledge->toMap()), make_shared<string>("Knowledge"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateKnowledgeResponse(doRPCRequest(make_shared<string>("UpdateKnowledge"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateKnowledgeResponse Alibabacloud_Chatbot20171011::Client::updateKnowledge(shared_ptr<UpdateKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateKnowledgeWithOptions(request, runtime);
}

CreateKnowledgeResponse Alibabacloud_Chatbot20171011::Client::createKnowledgeWithOptions(shared_ptr<CreateKnowledgeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateKnowledgeShrinkRequest> request = make_shared<CreateKnowledgeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateKnowledgeRequestKnowledge>(tmpReq->knowledge)) {
    request->knowledgeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->knowledge->toMap()), make_shared<string>("Knowledge"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateKnowledgeResponse(doRPCRequest(make_shared<string>("CreateKnowledge"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateKnowledgeResponse Alibabacloud_Chatbot20171011::Client::createKnowledge(shared_ptr<CreateKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKnowledgeWithOptions(request, runtime);
}

DeleteIntentResponse Alibabacloud_Chatbot20171011::Client::deleteIntentWithOptions(shared_ptr<DeleteIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteIntentResponse(doRPCRequest(make_shared<string>("DeleteIntent"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteIntentResponse Alibabacloud_Chatbot20171011::Client::deleteIntent(shared_ptr<DeleteIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIntentWithOptions(request, runtime);
}

DeleteKnowledgeResponse Alibabacloud_Chatbot20171011::Client::deleteKnowledgeWithOptions(shared_ptr<DeleteKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteKnowledgeResponse(doRPCRequest(make_shared<string>("DeleteKnowledge"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteKnowledgeResponse Alibabacloud_Chatbot20171011::Client::deleteKnowledge(shared_ptr<DeleteKnowledgeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKnowledgeWithOptions(request, runtime);
}

ListBotChatHistorysResponse Alibabacloud_Chatbot20171011::Client::listBotChatHistorysWithOptions(shared_ptr<ListBotChatHistorysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBotChatHistorysResponse(doRPCRequest(make_shared<string>("ListBotChatHistorys"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBotChatHistorysResponse Alibabacloud_Chatbot20171011::Client::listBotChatHistorys(shared_ptr<ListBotChatHistorysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotChatHistorysWithOptions(request, runtime);
}

DisableDialogFlowResponse Alibabacloud_Chatbot20171011::Client::disableDialogFlowWithOptions(shared_ptr<DisableDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableDialogFlowResponse(doRPCRequest(make_shared<string>("DisableDialogFlow"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableDialogFlowResponse Alibabacloud_Chatbot20171011::Client::disableDialogFlow(shared_ptr<DisableDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDialogFlowWithOptions(request, runtime);
}

QueryBotsResponse Alibabacloud_Chatbot20171011::Client::queryBotsWithOptions(shared_ptr<QueryBotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryBotsResponse(doRPCRequest(make_shared<string>("QueryBots"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBotsResponse Alibabacloud_Chatbot20171011::Client::queryBots(shared_ptr<QueryBotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBotsWithOptions(request, runtime);
}

PublishDialogFlowResponse Alibabacloud_Chatbot20171011::Client::publishDialogFlowWithOptions(shared_ptr<PublishDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishDialogFlowResponse(doRPCRequest(make_shared<string>("PublishDialogFlow"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishDialogFlowResponse Alibabacloud_Chatbot20171011::Client::publishDialogFlow(shared_ptr<PublishDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishDialogFlowWithOptions(request, runtime);
}

ListBotColdKnowledgesResponse Alibabacloud_Chatbot20171011::Client::listBotColdKnowledgesWithOptions(shared_ptr<ListBotColdKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBotColdKnowledgesResponse(doRPCRequest(make_shared<string>("ListBotColdKnowledges"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBotColdKnowledgesResponse Alibabacloud_Chatbot20171011::Client::listBotColdKnowledges(shared_ptr<ListBotColdKnowledgesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotColdKnowledgesWithOptions(request, runtime);
}

CreateCoreWordResponse Alibabacloud_Chatbot20171011::Client::createCoreWordWithOptions(shared_ptr<CreateCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCoreWordResponse(doRPCRequest(make_shared<string>("CreateCoreWord"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCoreWordResponse Alibabacloud_Chatbot20171011::Client::createCoreWord(shared_ptr<CreateCoreWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCoreWordWithOptions(request, runtime);
}

DeleteBotResponse Alibabacloud_Chatbot20171011::Client::deleteBotWithOptions(shared_ptr<DeleteBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBotResponse(doRPCRequest(make_shared<string>("DeleteBot"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBotResponse Alibabacloud_Chatbot20171011::Client::deleteBot(shared_ptr<DeleteBotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBotWithOptions(request, runtime);
}

QuerySystemEntitiesResponse Alibabacloud_Chatbot20171011::Client::querySystemEntitiesWithOptions(shared_ptr<QuerySystemEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySystemEntitiesResponse(doRPCRequest(make_shared<string>("QuerySystemEntities"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySystemEntitiesResponse Alibabacloud_Chatbot20171011::Client::querySystemEntities(shared_ptr<QuerySystemEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySystemEntitiesWithOptions(request, runtime);
}

ListConversationLogsResponse Alibabacloud_Chatbot20171011::Client::listConversationLogsWithOptions(shared_ptr<ListConversationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListConversationLogsResponse(doRPCRequest(make_shared<string>("ListConversationLogs"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConversationLogsResponse Alibabacloud_Chatbot20171011::Client::listConversationLogs(shared_ptr<ListConversationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConversationLogsWithOptions(request, runtime);
}

GetBotChatDataResponse Alibabacloud_Chatbot20171011::Client::getBotChatDataWithOptions(shared_ptr<GetBotChatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBotChatDataResponse(doRPCRequest(make_shared<string>("GetBotChatData"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBotChatDataResponse Alibabacloud_Chatbot20171011::Client::getBotChatData(shared_ptr<GetBotChatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBotChatDataWithOptions(request, runtime);
}

DescribeCoreWordResponse Alibabacloud_Chatbot20171011::Client::describeCoreWordWithOptions(shared_ptr<DescribeCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCoreWordResponse(doRPCRequest(make_shared<string>("DescribeCoreWord"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCoreWordResponse Alibabacloud_Chatbot20171011::Client::describeCoreWord(shared_ptr<DescribeCoreWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCoreWordWithOptions(request, runtime);
}

GetBotSessionDataResponse Alibabacloud_Chatbot20171011::Client::getBotSessionDataWithOptions(shared_ptr<GetBotSessionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBotSessionDataResponse(doRPCRequest(make_shared<string>("GetBotSessionData"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBotSessionDataResponse Alibabacloud_Chatbot20171011::Client::getBotSessionData(shared_ptr<GetBotSessionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBotSessionDataWithOptions(request, runtime);
}

ListBotHotKnowledgesResponse Alibabacloud_Chatbot20171011::Client::listBotHotKnowledgesWithOptions(shared_ptr<ListBotHotKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBotHotKnowledgesResponse(doRPCRequest(make_shared<string>("ListBotHotKnowledges"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBotHotKnowledgesResponse Alibabacloud_Chatbot20171011::Client::listBotHotKnowledges(shared_ptr<ListBotHotKnowledgesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotHotKnowledgesWithOptions(request, runtime);
}

QueryEntitiesResponse Alibabacloud_Chatbot20171011::Client::queryEntitiesWithOptions(shared_ptr<QueryEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEntitiesResponse(doRPCRequest(make_shared<string>("QueryEntities"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEntitiesResponse Alibabacloud_Chatbot20171011::Client::queryEntities(shared_ptr<QueryEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEntitiesWithOptions(request, runtime);
}

UpdateDialogFlowResponse Alibabacloud_Chatbot20171011::Client::updateDialogFlowWithOptions(shared_ptr<UpdateDialogFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDialogFlowShrinkRequest> request = make_shared<UpdateDialogFlowShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDialogFlowRequestModuleDefinition>(tmpReq->moduleDefinition)) {
    request->moduleDefinitionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->moduleDefinition->toMap()), make_shared<string>("ModuleDefinition"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDialogFlowResponse(doRPCRequest(make_shared<string>("UpdateDialogFlow"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDialogFlowResponse Alibabacloud_Chatbot20171011::Client::updateDialogFlow(shared_ptr<UpdateDialogFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDialogFlowWithOptions(request, runtime);
}

ListBotDsDetailsResponse Alibabacloud_Chatbot20171011::Client::listBotDsDetailsWithOptions(shared_ptr<ListBotDsDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBotDsDetailsResponse(doRPCRequest(make_shared<string>("ListBotDsDetails"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBotDsDetailsResponse Alibabacloud_Chatbot20171011::Client::listBotDsDetails(shared_ptr<ListBotDsDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBotDsDetailsWithOptions(request, runtime);
}

AssociateResponse Alibabacloud_Chatbot20171011::Client::associateWithOptions(shared_ptr<AssociateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateResponse(doRPCRequest(make_shared<string>("Associate"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateResponse Alibabacloud_Chatbot20171011::Client::associate(shared_ptr<AssociateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateWithOptions(request, runtime);
}

CreateCategoryResponse Alibabacloud_Chatbot20171011::Client::createCategoryWithOptions(shared_ptr<CreateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCategoryResponse(doRPCRequest(make_shared<string>("CreateCategory"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCategoryResponse Alibabacloud_Chatbot20171011::Client::createCategory(shared_ptr<CreateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCategoryWithOptions(request, runtime);
}

DescribeEntitiesResponse Alibabacloud_Chatbot20171011::Client::describeEntitiesWithOptions(shared_ptr<DescribeEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEntitiesResponse(doRPCRequest(make_shared<string>("DescribeEntities"), make_shared<string>("2017-10-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEntitiesResponse Alibabacloud_Chatbot20171011::Client::describeEntities(shared_ptr<DescribeEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEntitiesWithOptions(request, runtime);
}

