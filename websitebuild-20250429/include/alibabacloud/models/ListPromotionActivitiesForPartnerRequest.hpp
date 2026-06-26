// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMOTIONACTIVITIESFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMOTIONACTIVITIESFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListPromotionActivitiesForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromotionActivitiesForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(EmployeeCode, employeeCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromotionActivitiesForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(EmployeeCode, employeeCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListPromotionActivitiesForPartnerRequest() = default ;
    ListPromotionActivitiesForPartnerRequest(const ListPromotionActivitiesForPartnerRequest &) = default ;
    ListPromotionActivitiesForPartnerRequest(ListPromotionActivitiesForPartnerRequest &&) = default ;
    ListPromotionActivitiesForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromotionActivitiesForPartnerRequest() = default ;
    ListPromotionActivitiesForPartnerRequest& operator=(const ListPromotionActivitiesForPartnerRequest &) = default ;
    ListPromotionActivitiesForPartnerRequest& operator=(ListPromotionActivitiesForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && this->employeeCode_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ListPromotionActivitiesForPartnerRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // employeeCode Field Functions 
    bool hasEmployeeCode() const { return this->employeeCode_ != nullptr;};
    void deleteEmployeeCode() { this->employeeCode_ = nullptr;};
    inline string getEmployeeCode() const { DARABONBA_PTR_GET_DEFAULT(employeeCode_, "") };
    inline ListPromotionActivitiesForPartnerRequest& setEmployeeCode(string employeeCode) { DARABONBA_PTR_SET_VALUE(employeeCode_, employeeCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPromotionActivitiesForPartnerRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPromotionActivitiesForPartnerRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The channel.
    shared_ptr<string> channel_ {};
    // The employee code.
    shared_ptr<string> employeeCode_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
