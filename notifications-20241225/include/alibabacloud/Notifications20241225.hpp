// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_NOTIFICATIONS20241225_HPP_
#define ALIBABACLOUD_NOTIFICATIONS20241225_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Notifications20241225Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Notifications20241225.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a webhook contact.
       *
       * @param request CreateWebhookContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWebhookContactResponse
       */
      Models::CreateWebhookContactResponse createWebhookContactWithOptions(const Models::CreateWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a webhook contact.
       *
       * @param request CreateWebhookContactRequest
       * @return CreateWebhookContactResponse
       */
      Models::CreateWebhookContactResponse createWebhookContact(const Models::CreateWebhookContactRequest &request);

      /**
       * @summary Deletes a message.
       *
       * @param request DelMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelMessageResponse
       */
      Models::DelMessageResponse delMessageWithOptions(const Models::DelMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a message.
       *
       * @param request DelMessageRequest
       * @return DelMessageResponse
       */
      Models::DelMessageResponse delMessage(const Models::DelMessageRequest &request);

      /**
       * @summary Deletes all in-app messages (logical deletion).
       *
       * @param request DeleteAllMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAllMessageResponse
       */
      Models::DeleteAllMessageResponse deleteAllMessageWithOptions(const Models::DeleteAllMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all in-app messages (logical deletion).
       *
       * @param request DeleteAllMessageRequest
       * @return DeleteAllMessageResponse
       */
      Models::DeleteAllMessageResponse deleteAllMessage(const Models::DeleteAllMessageRequest &request);

      /**
       * @summary Deletes a webhook contact.
       *
       * @param request DeleteWebhookContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebhookContactResponse
       */
      Models::DeleteWebhookContactResponse deleteWebhookContactWithOptions(const Models::DeleteWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a webhook contact.
       *
       * @param request DeleteWebhookContactRequest
       * @return DeleteWebhookContactResponse
       */
      Models::DeleteWebhookContactResponse deleteWebhookContact(const Models::DeleteWebhookContactRequest &request);

      /**
       * @summary Retrieves all common contacts across accounts.
       *
       * @param request ReadAllCommonContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadAllCommonContactsResponse
       */
      Models::ReadAllCommonContactsResponse readAllCommonContactsWithOptions(const Models::ReadAllCommonContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all common contacts across accounts.
       *
       * @param request ReadAllCommonContactsRequest
       * @return ReadAllCommonContactsResponse
       */
      Models::ReadAllCommonContactsResponse readAllCommonContacts(const Models::ReadAllCommonContactsRequest &request);

      /**
       * @summary Retrieves all marketing preference configurations.
       *
       * @param request ReadAllMarketingPreferencesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadAllMarketingPreferencesResponse
       */
      Models::ReadAllMarketingPreferencesResponse readAllMarketingPreferencesWithOptions(const Models::ReadAllMarketingPreferencesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all marketing preference configurations.
       *
       * @param request ReadAllMarketingPreferencesRequest
       * @return ReadAllMarketingPreferencesResponse
       */
      Models::ReadAllMarketingPreferencesResponse readAllMarketingPreferences(const Models::ReadAllMarketingPreferencesRequest &request);

      /**
       * @summary Marks all messages as read. If no category is specified, all messages are marked as read.
       *
       * @param request ReadAllMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadAllMessageResponse
       */
      Models::ReadAllMessageResponse readAllMessageWithOptions(const Models::ReadAllMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Marks all messages as read. If no category is specified, all messages are marked as read.
       *
       * @param request ReadAllMessageRequest
       * @return ReadAllMessageResponse
       */
      Models::ReadAllMessageResponse readAllMessage(const Models::ReadAllMessageRequest &request);

      /**
       * @summary Retrieves the full list of webhooks.
       *
       * @param request ReadAllWebhookContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadAllWebhookContactsResponse
       */
      Models::ReadAllWebhookContactsResponse readAllWebhookContactsWithOptions(const Models::ReadAllWebhookContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the full list of webhooks.
       *
       * @param request ReadAllWebhookContactsRequest
       * @return ReadAllWebhookContactsResponse
       */
      Models::ReadAllWebhookContactsResponse readAllWebhookContacts(const Models::ReadAllWebhookContactsRequest &request);

      /**
       * @summary Get category group list
       *
       * @param request ReadCategoryGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadCategoryGroupListResponse
       */
      Models::ReadCategoryGroupListResponse readCategoryGroupListWithOptions(const Models::ReadCategoryGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get category group list
       *
       * @param request ReadCategoryGroupListRequest
       * @return ReadCategoryGroupListResponse
       */
      Models::ReadCategoryGroupListResponse readCategoryGroupList(const Models::ReadCategoryGroupListRequest &request);

      /**
       * @summary Retrieves the number of read messages for each category.
       *
       * @param request ReadClassNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadClassNameResponse
       */
      Models::ReadClassNameResponse readClassNameWithOptions(const Models::ReadClassNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the number of read messages for each category.
       *
       * @param request ReadClassNameRequest
       * @return ReadClassNameResponse
       */
      Models::ReadClassNameResponse readClassName(const Models::ReadClassNameRequest &request);

      /**
       * @summary Retrieves a general contact.
       *
       * @param request ReadCommonContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadCommonContactResponse
       */
      Models::ReadCommonContactResponse readCommonContactWithOptions(const Models::ReadCommonContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a general contact.
       *
       * @param request ReadCommonContactRequest
       * @return ReadCommonContactResponse
       */
      Models::ReadCommonContactResponse readCommonContact(const Models::ReadCommonContactRequest &request);

      /**
       * @summary Retrieves the marketing preferences of a user.
       *
       * @param request ReadMarketingPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMarketingPreferenceResponse
       */
      Models::ReadMarketingPreferenceResponse readMarketingPreferenceWithOptions(const Models::ReadMarketingPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the marketing preferences of a user.
       *
       * @param request ReadMarketingPreferenceRequest
       * @return ReadMarketingPreferenceResponse
       */
      Models::ReadMarketingPreferenceResponse readMarketingPreference(const Models::ReadMarketingPreferenceRequest &request);

      /**
       * @summary Marks a message as read.
       *
       * @param request ReadMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageResponse
       */
      Models::ReadMessageResponse readMessageWithOptions(const Models::ReadMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Marks a message as read.
       *
       * @param request ReadMessageRequest
       * @return ReadMessageResponse
       */
      Models::ReadMessageResponse readMessage(const Models::ReadMessageRequest &request);

      /**
       * @summary Retrieves the body of a message.
       *
       * @param request ReadMessageContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageContentResponse
       */
      Models::ReadMessageContentResponse readMessageContentWithOptions(const Models::ReadMessageContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the body of a message.
       *
       * @param request ReadMessageContentRequest
       * @return ReadMessageContentResponse
       */
      Models::ReadMessageContentResponse readMessageContent(const Models::ReadMessageContentRequest &request);

      /**
       * @summary Retrieves the message language.
       *
       * @param request ReadMessageLanguageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageLanguageResponse
       */
      Models::ReadMessageLanguageResponse readMessageLanguageWithOptions(const Models::ReadMessageLanguageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the message language.
       *
       * @param request ReadMessageLanguageRequest
       * @return ReadMessageLanguageResponse
       */
      Models::ReadMessageLanguageResponse readMessageLanguage(const Models::ReadMessageLanguageRequest &request);

      /**
       * @summary Retrieves a list of messages.
       *
       * @param request ReadMessageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageListResponse
       */
      Models::ReadMessageListResponse readMessageListWithOptions(const Models::ReadMessageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of messages.
       *
       * @param request ReadMessageListRequest
       * @return ReadMessageListResponse
       */
      Models::ReadMessageListResponse readMessageList(const Models::ReadMessageListRequest &request);

      /**
       * @summary Retrieves the total number of unread messages.
       *
       * @param request ReadMessageNewTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageNewTotalResponse
       */
      Models::ReadMessageNewTotalResponse readMessageNewTotalWithOptions(const Models::ReadMessageNewTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the total number of unread messages.
       *
       * @param request ReadMessageNewTotalRequest
       * @return ReadMessageNewTotalResponse
       */
      Models::ReadMessageNewTotalResponse readMessageNewTotal(const Models::ReadMessageNewTotalRequest &request);

      /**
       * @summary Retrieves the metadata service.
       *
       * @param request ReadMetaConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMetaConfigResponse
       */
      Models::ReadMetaConfigResponse readMetaConfigWithOptions(const Models::ReadMetaConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the metadata service.
       *
       * @param request ReadMetaConfigRequest
       * @return ReadMetaConfigResponse
       */
      Models::ReadMetaConfigResponse readMetaConfig(const Models::ReadMetaConfigRequest &request);

      /**
       * @summary Retrieves the count of read messages for each category.
       *
       * @param request ReadNumGroupByClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadNumGroupByClassResponse
       */
      Models::ReadNumGroupByClassResponse readNumGroupByClassWithOptions(const Models::ReadNumGroupByClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the count of read messages for each category.
       *
       * @param request ReadNumGroupByClassRequest
       * @return ReadNumGroupByClassResponse
       */
      Models::ReadNumGroupByClassResponse readNumGroupByClass(const Models::ReadNumGroupByClassRequest &request);

      /**
       * @summary Method description: Get information under all categories
       *
       * @param request ReadNumGroupTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadNumGroupTotalResponse
       */
      Models::ReadNumGroupTotalResponse readNumGroupTotalWithOptions(const Models::ReadNumGroupTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Method description: Get information under all categories
       *
       * @param request ReadNumGroupTotalRequest
       * @return ReadNumGroupTotalResponse
       */
      Models::ReadNumGroupTotalResponse readNumGroupTotal(const Models::ReadNumGroupTotalRequest &request);

      /**
       * @summary Retrieves revision records.
       *
       * @param tmpReq ReadRevisionHistoryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadRevisionHistoryListResponse
       */
      Models::ReadRevisionHistoryListResponse readRevisionHistoryListWithOptions(const Models::ReadRevisionHistoryListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves revision records.
       *
       * @param request ReadRevisionHistoryListRequest
       * @return ReadRevisionHistoryListResponse
       */
      Models::ReadRevisionHistoryListResponse readRevisionHistoryList(const Models::ReadRevisionHistoryListRequest &request);

      /**
       * @summary Retrieves the subscription list of a user.
       *
       * @param request ReadUserSubscriptionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadUserSubscriptionListResponse
       */
      Models::ReadUserSubscriptionListResponse readUserSubscriptionListWithOptions(const Models::ReadUserSubscriptionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the subscription list of a user.
       *
       * @param request ReadUserSubscriptionListRequest
       * @return ReadUserSubscriptionListResponse
       */
      Models::ReadUserSubscriptionListResponse readUserSubscriptionList(const Models::ReadUserSubscriptionListRequest &request);

      /**
       * @summary Retrieves a webhook contact.
       *
       * @param request ReadWebhookContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadWebhookContactResponse
       */
      Models::ReadWebhookContactResponse readWebhookContactWithOptions(const Models::ReadWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a webhook contact.
       *
       * @param request ReadWebhookContactRequest
       * @return ReadWebhookContactResponse
       */
      Models::ReadWebhookContactResponse readWebhookContact(const Models::ReadWebhookContactRequest &request);

      /**
       * @summary Retrieves the list of webhook send templates.
       *
       * @param request ReadWebhookContactSendTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadWebhookContactSendTemplateListResponse
       */
      Models::ReadWebhookContactSendTemplateListResponse readWebhookContactSendTemplateListWithOptions(const Models::ReadWebhookContactSendTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of webhook send templates.
       *
       * @param request ReadWebhookContactSendTemplateListRequest
       * @return ReadWebhookContactSendTemplateListResponse
       */
      Models::ReadWebhookContactSendTemplateListResponse readWebhookContactSendTemplateList(const Models::ReadWebhookContactSendTemplateListRequest &request);

      /**
       * @summary Resets user subscriptions.
       *
       * @param tmpReq ResetUserSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserSubscriptionResponse
       */
      Models::ResetUserSubscriptionResponse resetUserSubscriptionWithOptions(const Models::ResetUserSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets user subscriptions.
       *
       * @param request ResetUserSubscriptionRequest
       * @return ResetUserSubscriptionResponse
       */
      Models::ResetUserSubscriptionResponse resetUserSubscription(const Models::ResetUserSubscriptionRequest &request);

      /**
       * @summary Tests a webhook.
       *
       * @param request TestWebhookContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestWebhookContactResponse
       */
      Models::TestWebhookContactResponse testWebhookContactWithOptions(const Models::TestWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests a webhook.
       *
       * @param request TestWebhookContactRequest
       * @return TestWebhookContactResponse
       */
      Models::TestWebhookContactResponse testWebhookContact(const Models::TestWebhookContactRequest &request);

      /**
       * @summary Updates marketing preferences.
       *
       * @param request UpdateMarketingPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMarketingPreferenceResponse
       */
      Models::UpdateMarketingPreferenceResponse updateMarketingPreferenceWithOptions(const Models::UpdateMarketingPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates marketing preferences.
       *
       * @param request UpdateMarketingPreferenceRequest
       * @return UpdateMarketingPreferenceResponse
       */
      Models::UpdateMarketingPreferenceResponse updateMarketingPreference(const Models::UpdateMarketingPreferenceRequest &request);

      /**
       * @summary Updates the message language.
       *
       * @param request UpdateMessageLanguageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMessageLanguageResponse
       */
      Models::UpdateMessageLanguageResponse updateMessageLanguageWithOptions(const Models::UpdateMessageLanguageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the message language.
       *
       * @param request UpdateMessageLanguageRequest
       * @return UpdateMessageLanguageResponse
       */
      Models::UpdateMessageLanguageResponse updateMessageLanguage(const Models::UpdateMessageLanguageRequest &request);

      /**
       * @summary Modifies a webhook contact.
       *
       * @param request UpdateWebhookContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWebhookContactResponse
       */
      Models::UpdateWebhookContactResponse updateWebhookContactWithOptions(const Models::UpdateWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a webhook contact.
       *
       * @param request UpdateWebhookContactRequest
       * @return UpdateWebhookContactResponse
       */
      Models::UpdateWebhookContactResponse updateWebhookContact(const Models::UpdateWebhookContactRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
