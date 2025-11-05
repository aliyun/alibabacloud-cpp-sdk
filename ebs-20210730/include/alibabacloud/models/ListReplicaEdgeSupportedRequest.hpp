// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ListReplicaEdgeSupportedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReplicaEdgeSupportedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Azone, azone_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListReplicaEdgeSupportedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Azone, azone_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListReplicaEdgeSupportedRequest() = default ;
    ListReplicaEdgeSupportedRequest(const ListReplicaEdgeSupportedRequest &) = default ;
    ListReplicaEdgeSupportedRequest(ListReplicaEdgeSupportedRequest &&) = default ;
    ListReplicaEdgeSupportedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReplicaEdgeSupportedRequest() = default ;
    ListReplicaEdgeSupportedRequest& operator=(const ListReplicaEdgeSupportedRequest &) = default ;
    ListReplicaEdgeSupportedRequest& operator=(ListReplicaEdgeSupportedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->azone_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr; };
    // azone Field Functions 
    bool hasAzone() const { return this->azone_ != nullptr;};
    void deleteAzone() { this->azone_ = nullptr;};
    inline string azone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
    inline ListReplicaEdgeSupportedRequest& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListReplicaEdgeSupportedRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReplicaEdgeSupportedRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListReplicaEdgeSupportedRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> azone_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
