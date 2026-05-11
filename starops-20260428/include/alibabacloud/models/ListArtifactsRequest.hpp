// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class ListArtifactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(artifactPath, artifactPath_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactPath, artifactPath_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListArtifactsRequest() = default ;
    ListArtifactsRequest(const ListArtifactsRequest &) = default ;
    ListArtifactsRequest(ListArtifactsRequest &&) = default ;
    ListArtifactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactsRequest() = default ;
    ListArtifactsRequest& operator=(const ListArtifactsRequest &) = default ;
    ListArtifactsRequest& operator=(ListArtifactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactPath_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // artifactPath Field Functions 
    bool hasArtifactPath() const { return this->artifactPath_ != nullptr;};
    void deleteArtifactPath() { this->artifactPath_ = nullptr;};
    inline string getArtifactPath() const { DARABONBA_PTR_GET_DEFAULT(artifactPath_, "") };
    inline ListArtifactsRequest& setArtifactPath(string artifactPath) { DARABONBA_PTR_SET_VALUE(artifactPath_, artifactPath) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListArtifactsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListArtifactsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> artifactPath_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
