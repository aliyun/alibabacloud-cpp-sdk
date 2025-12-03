// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPRINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSPRINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSprintsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSprintsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSprintsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
    };
    ListSprintsRequest() = default ;
    ListSprintsRequest(const ListSprintsRequest &) = default ;
    ListSprintsRequest(ListSprintsRequest &&) = default ;
    ListSprintsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSprintsRequest() = default ;
    ListSprintsRequest& operator=(const ListSprintsRequest &) = default ;
    ListSprintsRequest& operator=(ListSprintsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->spaceIdentifier_ == nullptr && return this->spaceType_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListSprintsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSprintsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline ListSprintsRequest& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline ListSprintsRequest& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


  protected:
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
