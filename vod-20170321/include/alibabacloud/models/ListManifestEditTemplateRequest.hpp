// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANIFESTEDITTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMANIFESTEDITTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListManifestEditTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManifestEditTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListManifestEditTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListManifestEditTemplateRequest() = default ;
    ListManifestEditTemplateRequest(const ListManifestEditTemplateRequest &) = default ;
    ListManifestEditTemplateRequest(ListManifestEditTemplateRequest &&) = default ;
    ListManifestEditTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManifestEditTemplateRequest() = default ;
    ListManifestEditTemplateRequest& operator=(const ListManifestEditTemplateRequest &) = default ;
    ListManifestEditTemplateRequest& operator=(ListManifestEditTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListManifestEditTemplateRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListManifestEditTemplateRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The maximum number of entries to return per page. Default value: **30**. Valid values: **1** to **200**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination cursor. You do not need to specify this parameter for the first call. The value is a string in the format of page_N, where N is the page number. Pass the NextToken value returned in the previous response to retrieve the next page. If no NextToken is returned in the response, all data has been retrieved.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
