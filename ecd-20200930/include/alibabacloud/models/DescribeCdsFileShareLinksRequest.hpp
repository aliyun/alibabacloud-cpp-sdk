// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDSFILESHARELINKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDSFILESHARELINKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCdsFileShareLinksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdsFileShareLinksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(Creators, creators_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ShareId, shareId_);
      DARABONBA_PTR_TO_JSON(ShareName, shareName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdsFileShareLinksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(Creators, creators_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ShareId, shareId_);
      DARABONBA_PTR_FROM_JSON(ShareName, shareName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCdsFileShareLinksRequest() = default ;
    DescribeCdsFileShareLinksRequest(const DescribeCdsFileShareLinksRequest &) = default ;
    DescribeCdsFileShareLinksRequest(DescribeCdsFileShareLinksRequest &&) = default ;
    DescribeCdsFileShareLinksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdsFileShareLinksRequest() = default ;
    DescribeCdsFileShareLinksRequest& operator=(const DescribeCdsFileShareLinksRequest &) = default ;
    DescribeCdsFileShareLinksRequest& operator=(DescribeCdsFileShareLinksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->creators_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->shareId_ == nullptr && this->shareName_ == nullptr
        && this->status_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline DescribeCdsFileShareLinksRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // creators Field Functions 
    bool hasCreators() const { return this->creators_ != nullptr;};
    void deleteCreators() { this->creators_ = nullptr;};
    inline const vector<string> & getCreators() const { DARABONBA_PTR_GET_CONST(creators_, vector<string>) };
    inline vector<string> getCreators() { DARABONBA_PTR_GET(creators_, vector<string>) };
    inline DescribeCdsFileShareLinksRequest& setCreators(const vector<string> & creators) { DARABONBA_PTR_SET_VALUE(creators_, creators) };
    inline DescribeCdsFileShareLinksRequest& setCreators(vector<string> && creators) { DARABONBA_PTR_SET_RVALUE(creators_, creators) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCdsFileShareLinksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCdsFileShareLinksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string getShareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline DescribeCdsFileShareLinksRequest& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


    // shareName Field Functions 
    bool hasShareName() const { return this->shareName_ != nullptr;};
    void deleteShareName() { this->shareName_ = nullptr;};
    inline string getShareName() const { DARABONBA_PTR_GET_DEFAULT(shareName_, "") };
    inline DescribeCdsFileShareLinksRequest& setShareName(string shareName) { DARABONBA_PTR_SET_VALUE(shareName_, shareName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCdsFileShareLinksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the cloud disk.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The users that create the file sharing links.
    shared_ptr<vector<string>> creators_ {};
    // The maximum number of resources to return. Valid values: 1 to 100. Default value: 100. The number of returned resources must be less than or equal to the specified number.
    shared_ptr<int32_t> maxResults_ {};
    // Specifies the marker after which the returned list begins. If this parameter is not specified, all results are returned. Default value: null.
    shared_ptr<string> nextToken_ {};
    // The ID of the file sharing link.
    shared_ptr<string> shareId_ {};
    // The sharing name for fuzzy search.
    shared_ptr<string> shareName_ {};
    // The file sharing status. Valid values: ● disabled: canceled ● enabled: valid
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
