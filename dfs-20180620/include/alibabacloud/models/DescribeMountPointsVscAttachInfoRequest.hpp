// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMountPointsVscAttachInfoRequestQueryInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeMountPointsVscAttachInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountPointsVscAttachInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QueryInfos, queryInfos_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountPointsVscAttachInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QueryInfos, queryInfos_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    DescribeMountPointsVscAttachInfoRequest() = default ;
    DescribeMountPointsVscAttachInfoRequest(const DescribeMountPointsVscAttachInfoRequest &) = default ;
    DescribeMountPointsVscAttachInfoRequest(DescribeMountPointsVscAttachInfoRequest &&) = default ;
    DescribeMountPointsVscAttachInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountPointsVscAttachInfoRequest() = default ;
    DescribeMountPointsVscAttachInfoRequest& operator=(const DescribeMountPointsVscAttachInfoRequest &) = default ;
    DescribeMountPointsVscAttachInfoRequest& operator=(DescribeMountPointsVscAttachInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputRegionId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->queryInfos_ == nullptr && return this->useAssumeRoleChkServerPerm_ == nullptr; };
    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DescribeMountPointsVscAttachInfoRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeMountPointsVscAttachInfoRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMountPointsVscAttachInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queryInfos Field Functions 
    bool hasQueryInfos() const { return this->queryInfos_ != nullptr;};
    void deleteQueryInfos() { this->queryInfos_ = nullptr;};
    inline const vector<DescribeMountPointsVscAttachInfoRequestQueryInfos> & queryInfos() const { DARABONBA_PTR_GET_CONST(queryInfos_, vector<DescribeMountPointsVscAttachInfoRequestQueryInfos>) };
    inline vector<DescribeMountPointsVscAttachInfoRequestQueryInfos> queryInfos() { DARABONBA_PTR_GET(queryInfos_, vector<DescribeMountPointsVscAttachInfoRequestQueryInfos>) };
    inline DescribeMountPointsVscAttachInfoRequest& setQueryInfos(const vector<DescribeMountPointsVscAttachInfoRequestQueryInfos> & queryInfos) { DARABONBA_PTR_SET_VALUE(queryInfos_, queryInfos) };
    inline DescribeMountPointsVscAttachInfoRequest& setQueryInfos(vector<DescribeMountPointsVscAttachInfoRequestQueryInfos> && queryInfos) { DARABONBA_PTR_SET_RVALUE(queryInfos_, queryInfos) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool useAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline DescribeMountPointsVscAttachInfoRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<DescribeMountPointsVscAttachInfoRequestQueryInfos>> queryInfos_ = nullptr;
    std::shared_ptr<bool> useAssumeRoleChkServerPerm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
