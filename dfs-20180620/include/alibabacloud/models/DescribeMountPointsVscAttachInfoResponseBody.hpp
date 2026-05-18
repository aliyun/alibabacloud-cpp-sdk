// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFORESPONSEBODY_HPP_
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
  class DescribeMountPointsVscAttachInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountPointsVscAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInfos, attachInfos_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountPointsVscAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInfos, attachInfos_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMountPointsVscAttachInfoResponseBody() = default ;
    DescribeMountPointsVscAttachInfoResponseBody(const DescribeMountPointsVscAttachInfoResponseBody &) = default ;
    DescribeMountPointsVscAttachInfoResponseBody(DescribeMountPointsVscAttachInfoResponseBody &&) = default ;
    DescribeMountPointsVscAttachInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountPointsVscAttachInfoResponseBody() = default ;
    DescribeMountPointsVscAttachInfoResponseBody& operator=(const DescribeMountPointsVscAttachInfoResponseBody &) = default ;
    DescribeMountPointsVscAttachInfoResponseBody& operator=(DescribeMountPointsVscAttachInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttachInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttachInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
        DARABONBA_PTR_TO_JSON(VscName, vscName_);
        DARABONBA_PTR_TO_JSON(VscStatus, vscStatus_);
        DARABONBA_PTR_TO_JSON(VscType, vscType_);
      };
      friend void from_json(const Darabonba::Json& j, AttachInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
        DARABONBA_PTR_FROM_JSON(VscName, vscName_);
        DARABONBA_PTR_FROM_JSON(VscStatus, vscStatus_);
        DARABONBA_PTR_FROM_JSON(VscType, vscType_);
      };
      AttachInfos() = default ;
      AttachInfos(const AttachInfos &) = default ;
      AttachInfos(AttachInfos &&) = default ;
      AttachInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttachInfos() = default ;
      AttachInfos& operator=(const AttachInfos &) = default ;
      AttachInfos& operator=(AttachInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mountPointId_ == nullptr && this->vscId_ == nullptr && this->vscName_ == nullptr && this->vscStatus_ == nullptr && this->vscType_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AttachInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // mountPointId Field Functions 
      bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
      void deleteMountPointId() { this->mountPointId_ = nullptr;};
      inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
      inline AttachInfos& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline AttachInfos& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


      // vscName Field Functions 
      bool hasVscName() const { return this->vscName_ != nullptr;};
      void deleteVscName() { this->vscName_ = nullptr;};
      inline string getVscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
      inline AttachInfos& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


      // vscStatus Field Functions 
      bool hasVscStatus() const { return this->vscStatus_ != nullptr;};
      void deleteVscStatus() { this->vscStatus_ = nullptr;};
      inline string getVscStatus() const { DARABONBA_PTR_GET_DEFAULT(vscStatus_, "") };
      inline AttachInfos& setVscStatus(string vscStatus) { DARABONBA_PTR_SET_VALUE(vscStatus_, vscStatus) };


      // vscType Field Functions 
      bool hasVscType() const { return this->vscType_ != nullptr;};
      void deleteVscType() { this->vscType_ = nullptr;};
      inline string getVscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
      inline AttachInfos& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> mountPointId_ {};
      shared_ptr<string> vscId_ {};
      shared_ptr<string> vscName_ {};
      shared_ptr<string> vscStatus_ {};
      shared_ptr<string> vscType_ {};
    };

    virtual bool empty() const override { return this->attachInfos_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // attachInfos Field Functions 
    bool hasAttachInfos() const { return this->attachInfos_ != nullptr;};
    void deleteAttachInfos() { this->attachInfos_ = nullptr;};
    inline const vector<DescribeMountPointsVscAttachInfoResponseBody::AttachInfos> & getAttachInfos() const { DARABONBA_PTR_GET_CONST(attachInfos_, vector<DescribeMountPointsVscAttachInfoResponseBody::AttachInfos>) };
    inline vector<DescribeMountPointsVscAttachInfoResponseBody::AttachInfos> getAttachInfos() { DARABONBA_PTR_GET(attachInfos_, vector<DescribeMountPointsVscAttachInfoResponseBody::AttachInfos>) };
    inline DescribeMountPointsVscAttachInfoResponseBody& setAttachInfos(const vector<DescribeMountPointsVscAttachInfoResponseBody::AttachInfos> & attachInfos) { DARABONBA_PTR_SET_VALUE(attachInfos_, attachInfos) };
    inline DescribeMountPointsVscAttachInfoResponseBody& setAttachInfos(vector<DescribeMountPointsVscAttachInfoResponseBody::AttachInfos> && attachInfos) { DARABONBA_PTR_SET_RVALUE(attachInfos_, attachInfos) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeMountPointsVscAttachInfoResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeMountPointsVscAttachInfoResponseBody::AttachInfos>> attachInfos_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
