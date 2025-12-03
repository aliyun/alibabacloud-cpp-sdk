// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeMountPointsVscAttachInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountPointsVscAttachInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QueryInfos, queryInfosShrink_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountPointsVscAttachInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QueryInfos, queryInfosShrink_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    DescribeMountPointsVscAttachInfoShrinkRequest() = default ;
    DescribeMountPointsVscAttachInfoShrinkRequest(const DescribeMountPointsVscAttachInfoShrinkRequest &) = default ;
    DescribeMountPointsVscAttachInfoShrinkRequest(DescribeMountPointsVscAttachInfoShrinkRequest &&) = default ;
    DescribeMountPointsVscAttachInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountPointsVscAttachInfoShrinkRequest() = default ;
    DescribeMountPointsVscAttachInfoShrinkRequest& operator=(const DescribeMountPointsVscAttachInfoShrinkRequest &) = default ;
    DescribeMountPointsVscAttachInfoShrinkRequest& operator=(DescribeMountPointsVscAttachInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputRegionId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->queryInfosShrink_ == nullptr && return this->useAssumeRoleChkServerPerm_ == nullptr; };
    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DescribeMountPointsVscAttachInfoShrinkRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeMountPointsVscAttachInfoShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMountPointsVscAttachInfoShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queryInfosShrink Field Functions 
    bool hasQueryInfosShrink() const { return this->queryInfosShrink_ != nullptr;};
    void deleteQueryInfosShrink() { this->queryInfosShrink_ = nullptr;};
    inline string queryInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(queryInfosShrink_, "") };
    inline DescribeMountPointsVscAttachInfoShrinkRequest& setQueryInfosShrink(string queryInfosShrink) { DARABONBA_PTR_SET_VALUE(queryInfosShrink_, queryInfosShrink) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool useAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline DescribeMountPointsVscAttachInfoShrinkRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> queryInfosShrink_ = nullptr;
    std::shared_ptr<bool> useAssumeRoleChkServerPerm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
