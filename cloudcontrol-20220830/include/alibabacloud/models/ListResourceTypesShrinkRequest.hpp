// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListResourceTypesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(resourceTypes, resourceTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(resourceTypes, resourceTypesShrink_);
    };
    ListResourceTypesShrinkRequest() = default ;
    ListResourceTypesShrinkRequest(const ListResourceTypesShrinkRequest &) = default ;
    ListResourceTypesShrinkRequest(ListResourceTypesShrinkRequest &&) = default ;
    ListResourceTypesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesShrinkRequest() = default ;
    ListResourceTypesShrinkRequest& operator=(const ListResourceTypesShrinkRequest &) = default ;
    ListResourceTypesShrinkRequest& operator=(ListResourceTypesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->resourceTypesShrink_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceTypesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceTypesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceTypesShrink Field Functions 
    bool hasResourceTypesShrink() const { return this->resourceTypesShrink_ != nullptr;};
    void deleteResourceTypesShrink() { this->resourceTypesShrink_ = nullptr;};
    inline string resourceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesShrink_, "") };
    inline ListResourceTypesShrinkRequest& setResourceTypesShrink(string resourceTypesShrink) { DARABONBA_PTR_SET_VALUE(resourceTypesShrink_, resourceTypesShrink) };


  protected:
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the resource types.
    std::shared_ptr<string> resourceTypesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
