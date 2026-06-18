// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeMfaDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMfaDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SerialNumbers, serialNumbers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMfaDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SerialNumbers, serialNumbers_);
    };
    DescribeMfaDevicesRequest() = default ;
    DescribeMfaDevicesRequest(const DescribeMfaDevicesRequest &) = default ;
    DescribeMfaDevicesRequest(DescribeMfaDevicesRequest &&) = default ;
    DescribeMfaDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMfaDevicesRequest() = default ;
    DescribeMfaDevicesRequest& operator=(const DescribeMfaDevicesRequest &) = default ;
    DescribeMfaDevicesRequest& operator=(DescribeMfaDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adDomain_ == nullptr
        && this->businessChannel_ == nullptr && this->endUserIds_ == nullptr && this->filter_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->serialNumbers_ == nullptr; };
    // adDomain Field Functions 
    bool hasAdDomain() const { return this->adDomain_ != nullptr;};
    void deleteAdDomain() { this->adDomain_ = nullptr;};
    inline string getAdDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
    inline DescribeMfaDevicesRequest& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline DescribeMfaDevicesRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeMfaDevicesRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeMfaDevicesRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribeMfaDevicesRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeMfaDevicesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMfaDevicesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // serialNumbers Field Functions 
    bool hasSerialNumbers() const { return this->serialNumbers_ != nullptr;};
    void deleteSerialNumbers() { this->serialNumbers_ = nullptr;};
    inline const vector<string> & getSerialNumbers() const { DARABONBA_PTR_GET_CONST(serialNumbers_, vector<string>) };
    inline vector<string> getSerialNumbers() { DARABONBA_PTR_GET(serialNumbers_, vector<string>) };
    inline DescribeMfaDevicesRequest& setSerialNumbers(const vector<string> & serialNumbers) { DARABONBA_PTR_SET_VALUE(serialNumbers_, serialNumbers) };
    inline DescribeMfaDevicesRequest& setSerialNumbers(vector<string> && serialNumbers) { DARABONBA_PTR_SET_RVALUE(serialNumbers_, serialNumbers) };


  protected:
    // The AD domain name.
    shared_ptr<string> adDomain_ {};
    // The business channel.
    shared_ptr<string> businessChannel_ {};
    // An array of end user usernames.
    shared_ptr<vector<string>> endUserIds_ {};
    shared_ptr<string> filter_ {};
    // The maximum number of results to return per page. Valid range: 1–500.<br>Default value: 100.<br>
    shared_ptr<int64_t> maxResults_ {};
    // The token for the next page of results. This value is the `NextToken` returned from a previous call.
    shared_ptr<string> nextToken_ {};
    // An array of serial numbers for virtual MFA devices.
    shared_ptr<vector<string>> serialNumbers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
