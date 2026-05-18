// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class QueryInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
      };
      friend void from_json(const Darabonba::Json& j, QueryInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      };
      QueryInfos() = default ;
      QueryInfos(const QueryInfos &) = default ;
      QueryInfos(QueryInfos &&) = default ;
      QueryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryInfos() = default ;
      QueryInfos& operator=(const QueryInfos &) = default ;
      QueryInfos& operator=(QueryInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mountPointId_ == nullptr && this->vscId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline QueryInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // mountPointId Field Functions 
      bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
      void deleteMountPointId() { this->mountPointId_ = nullptr;};
      inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
      inline QueryInfos& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline QueryInfos& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> mountPointId_ {};
      shared_ptr<string> vscId_ {};
    };

    virtual bool empty() const override { return this->inputRegionId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->queryInfos_ == nullptr && this->useAssumeRoleChkServerPerm_ == nullptr; };
    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string getInputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DescribeMountPointsVscAttachInfoRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeMountPointsVscAttachInfoRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMountPointsVscAttachInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queryInfos Field Functions 
    bool hasQueryInfos() const { return this->queryInfos_ != nullptr;};
    void deleteQueryInfos() { this->queryInfos_ = nullptr;};
    inline const vector<DescribeMountPointsVscAttachInfoRequest::QueryInfos> & getQueryInfos() const { DARABONBA_PTR_GET_CONST(queryInfos_, vector<DescribeMountPointsVscAttachInfoRequest::QueryInfos>) };
    inline vector<DescribeMountPointsVscAttachInfoRequest::QueryInfos> getQueryInfos() { DARABONBA_PTR_GET(queryInfos_, vector<DescribeMountPointsVscAttachInfoRequest::QueryInfos>) };
    inline DescribeMountPointsVscAttachInfoRequest& setQueryInfos(const vector<DescribeMountPointsVscAttachInfoRequest::QueryInfos> & queryInfos) { DARABONBA_PTR_SET_VALUE(queryInfos_, queryInfos) };
    inline DescribeMountPointsVscAttachInfoRequest& setQueryInfos(vector<DescribeMountPointsVscAttachInfoRequest::QueryInfos> && queryInfos) { DARABONBA_PTR_SET_RVALUE(queryInfos_, queryInfos) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool getUseAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline DescribeMountPointsVscAttachInfoRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


  protected:
    // This parameter is required.
    shared_ptr<string> inputRegionId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<DescribeMountPointsVscAttachInfoRequest::QueryInfos>> queryInfos_ {};
    shared_ptr<bool> useAssumeRoleChkServerPerm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
