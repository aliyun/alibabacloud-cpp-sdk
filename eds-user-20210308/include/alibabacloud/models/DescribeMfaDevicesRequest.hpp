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
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SerialNumbers, serialNumbers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMfaDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
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
    virtual bool empty() const override { this->adDomain_ != nullptr
        && this->endUserIds_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->serialNumbers_ != nullptr; };
    // adDomain Field Functions 
    bool hasAdDomain() const { return this->adDomain_ != nullptr;};
    void deleteAdDomain() { this->adDomain_ = nullptr;};
    inline string adDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
    inline DescribeMfaDevicesRequest& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeMfaDevicesRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeMfaDevicesRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeMfaDevicesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMfaDevicesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // serialNumbers Field Functions 
    bool hasSerialNumbers() const { return this->serialNumbers_ != nullptr;};
    void deleteSerialNumbers() { this->serialNumbers_ = nullptr;};
    inline const vector<string> & serialNumbers() const { DARABONBA_PTR_GET_CONST(serialNumbers_, vector<string>) };
    inline vector<string> serialNumbers() { DARABONBA_PTR_GET(serialNumbers_, vector<string>) };
    inline DescribeMfaDevicesRequest& setSerialNumbers(const vector<string> & serialNumbers) { DARABONBA_PTR_SET_VALUE(serialNumbers_, serialNumbers) };
    inline DescribeMfaDevicesRequest& setSerialNumbers(vector<string> && serialNumbers) { DARABONBA_PTR_SET_RVALUE(serialNumbers_, serialNumbers) };


  protected:
    // The domain of the Active Directory (AD) workspace.
    std::shared_ptr<string> adDomain_ = nullptr;
    // The usernames of the convenience users.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The maximum number of entries to return. Valid values: 1 to 500.\\
    // Default value: 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Set the value to the token that is obtained from the previous query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The serial numbers of the virtual MFA devices.
    std::shared_ptr<vector<string>> serialNumbers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
