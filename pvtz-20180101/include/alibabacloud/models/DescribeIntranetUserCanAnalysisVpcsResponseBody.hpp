// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTRANETUSERCANANALYSISVPCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTRANETUSERCANANALYSISVPCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeIntranetUserCanAnalysisVpcsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntranetUserCanAnalysisVpcsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurPage, curPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_TO_JSON(UserCanAnalysisVpcsPopResults, userCanAnalysisVpcsPopResults_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntranetUserCanAnalysisVpcsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurPage, curPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_FROM_JSON(UserCanAnalysisVpcsPopResults, userCanAnalysisVpcsPopResults_);
    };
    DescribeIntranetUserCanAnalysisVpcsResponseBody() = default ;
    DescribeIntranetUserCanAnalysisVpcsResponseBody(const DescribeIntranetUserCanAnalysisVpcsResponseBody &) = default ;
    DescribeIntranetUserCanAnalysisVpcsResponseBody(DescribeIntranetUserCanAnalysisVpcsResponseBody &&) = default ;
    DescribeIntranetUserCanAnalysisVpcsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntranetUserCanAnalysisVpcsResponseBody() = default ;
    DescribeIntranetUserCanAnalysisVpcsResponseBody& operator=(const DescribeIntranetUserCanAnalysisVpcsResponseBody &) = default ;
    DescribeIntranetUserCanAnalysisVpcsResponseBody& operator=(DescribeIntranetUserCanAnalysisVpcsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserCanAnalysisVpcsPopResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserCanAnalysisVpcsPopResults& obj) { 
        DARABONBA_PTR_TO_JSON(UserCanAnalysisVpcsPopResult, userCanAnalysisVpcsPopResult_);
      };
      friend void from_json(const Darabonba::Json& j, UserCanAnalysisVpcsPopResults& obj) { 
        DARABONBA_PTR_FROM_JSON(UserCanAnalysisVpcsPopResult, userCanAnalysisVpcsPopResult_);
      };
      UserCanAnalysisVpcsPopResults() = default ;
      UserCanAnalysisVpcsPopResults(const UserCanAnalysisVpcsPopResults &) = default ;
      UserCanAnalysisVpcsPopResults(UserCanAnalysisVpcsPopResults &&) = default ;
      UserCanAnalysisVpcsPopResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserCanAnalysisVpcsPopResults() = default ;
      UserCanAnalysisVpcsPopResults& operator=(const UserCanAnalysisVpcsPopResults &) = default ;
      UserCanAnalysisVpcsPopResults& operator=(UserCanAnalysisVpcsPopResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserCanAnalysisVpcsPopResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserCanAnalysisVpcsPopResult& obj) { 
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(TreeLevel, treeLevel_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
        };
        friend void from_json(const Darabonba::Json& j, UserCanAnalysisVpcsPopResult& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(TreeLevel, treeLevel_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
        };
        UserCanAnalysisVpcsPopResult() = default ;
        UserCanAnalysisVpcsPopResult(const UserCanAnalysisVpcsPopResult &) = default ;
        UserCanAnalysisVpcsPopResult(UserCanAnalysisVpcsPopResult &&) = default ;
        UserCanAnalysisVpcsPopResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserCanAnalysisVpcsPopResult() = default ;
        UserCanAnalysisVpcsPopResult& operator=(const UserCanAnalysisVpcsPopResult &) = default ;
        UserCanAnalysisVpcsPopResult& operator=(UserCanAnalysisVpcsPopResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authType_ == nullptr
        && this->authorizedUserId_ == nullptr && this->networkType_ == nullptr && this->regionId_ == nullptr && this->treeLevel_ == nullptr && this->vpcId_ == nullptr
        && this->vpcType_ == nullptr; };
        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline UserCanAnalysisVpcsPopResult& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // authorizedUserId Field Functions 
        bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
        void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
        inline int64_t getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, 0L) };
        inline UserCanAnalysisVpcsPopResult& setAuthorizedUserId(int64_t authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline UserCanAnalysisVpcsPopResult& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline UserCanAnalysisVpcsPopResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // treeLevel Field Functions 
        bool hasTreeLevel() const { return this->treeLevel_ != nullptr;};
        void deleteTreeLevel() { this->treeLevel_ = nullptr;};
        inline int32_t getTreeLevel() const { DARABONBA_PTR_GET_DEFAULT(treeLevel_, 0) };
        inline UserCanAnalysisVpcsPopResult& setTreeLevel(int32_t treeLevel) { DARABONBA_PTR_SET_VALUE(treeLevel_, treeLevel) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline UserCanAnalysisVpcsPopResult& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcType Field Functions 
        bool hasVpcType() const { return this->vpcType_ != nullptr;};
        void deleteVpcType() { this->vpcType_ = nullptr;};
        inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
        inline UserCanAnalysisVpcsPopResult& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


      protected:
        shared_ptr<string> authType_ {};
        shared_ptr<int64_t> authorizedUserId_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<int32_t> treeLevel_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcType_ {};
      };

      virtual bool empty() const override { return this->userCanAnalysisVpcsPopResult_ == nullptr; };
      // userCanAnalysisVpcsPopResult Field Functions 
      bool hasUserCanAnalysisVpcsPopResult() const { return this->userCanAnalysisVpcsPopResult_ != nullptr;};
      void deleteUserCanAnalysisVpcsPopResult() { this->userCanAnalysisVpcsPopResult_ = nullptr;};
      inline const vector<UserCanAnalysisVpcsPopResults::UserCanAnalysisVpcsPopResult> & getUserCanAnalysisVpcsPopResult() const { DARABONBA_PTR_GET_CONST(userCanAnalysisVpcsPopResult_, vector<UserCanAnalysisVpcsPopResults::UserCanAnalysisVpcsPopResult>) };
      inline vector<UserCanAnalysisVpcsPopResults::UserCanAnalysisVpcsPopResult> getUserCanAnalysisVpcsPopResult() { DARABONBA_PTR_GET(userCanAnalysisVpcsPopResult_, vector<UserCanAnalysisVpcsPopResults::UserCanAnalysisVpcsPopResult>) };
      inline UserCanAnalysisVpcsPopResults& setUserCanAnalysisVpcsPopResult(const vector<UserCanAnalysisVpcsPopResults::UserCanAnalysisVpcsPopResult> & userCanAnalysisVpcsPopResult) { DARABONBA_PTR_SET_VALUE(userCanAnalysisVpcsPopResult_, userCanAnalysisVpcsPopResult) };
      inline UserCanAnalysisVpcsPopResults& setUserCanAnalysisVpcsPopResult(vector<UserCanAnalysisVpcsPopResults::UserCanAnalysisVpcsPopResult> && userCanAnalysisVpcsPopResult) { DARABONBA_PTR_SET_RVALUE(userCanAnalysisVpcsPopResult_, userCanAnalysisVpcsPopResult) };


    protected:
      shared_ptr<vector<UserCanAnalysisVpcsPopResults::UserCanAnalysisVpcsPopResult>> userCanAnalysisVpcsPopResult_ {};
    };

    virtual bool empty() const override { return this->curPage_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalPage_ == nullptr && this->totalSize_ == nullptr && this->userCanAnalysisVpcsPopResults_ == nullptr; };
    // curPage Field Functions 
    bool hasCurPage() const { return this->curPage_ != nullptr;};
    void deleteCurPage() { this->curPage_ = nullptr;};
    inline int32_t getCurPage() const { DARABONBA_PTR_GET_DEFAULT(curPage_, 0) };
    inline DescribeIntranetUserCanAnalysisVpcsResponseBody& setCurPage(int32_t curPage) { DARABONBA_PTR_SET_VALUE(curPage_, curPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIntranetUserCanAnalysisVpcsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIntranetUserCanAnalysisVpcsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeIntranetUserCanAnalysisVpcsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeIntranetUserCanAnalysisVpcsResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // userCanAnalysisVpcsPopResults Field Functions 
    bool hasUserCanAnalysisVpcsPopResults() const { return this->userCanAnalysisVpcsPopResults_ != nullptr;};
    void deleteUserCanAnalysisVpcsPopResults() { this->userCanAnalysisVpcsPopResults_ = nullptr;};
    inline const DescribeIntranetUserCanAnalysisVpcsResponseBody::UserCanAnalysisVpcsPopResults & getUserCanAnalysisVpcsPopResults() const { DARABONBA_PTR_GET_CONST(userCanAnalysisVpcsPopResults_, DescribeIntranetUserCanAnalysisVpcsResponseBody::UserCanAnalysisVpcsPopResults) };
    inline DescribeIntranetUserCanAnalysisVpcsResponseBody::UserCanAnalysisVpcsPopResults getUserCanAnalysisVpcsPopResults() { DARABONBA_PTR_GET(userCanAnalysisVpcsPopResults_, DescribeIntranetUserCanAnalysisVpcsResponseBody::UserCanAnalysisVpcsPopResults) };
    inline DescribeIntranetUserCanAnalysisVpcsResponseBody& setUserCanAnalysisVpcsPopResults(const DescribeIntranetUserCanAnalysisVpcsResponseBody::UserCanAnalysisVpcsPopResults & userCanAnalysisVpcsPopResults) { DARABONBA_PTR_SET_VALUE(userCanAnalysisVpcsPopResults_, userCanAnalysisVpcsPopResults) };
    inline DescribeIntranetUserCanAnalysisVpcsResponseBody& setUserCanAnalysisVpcsPopResults(DescribeIntranetUserCanAnalysisVpcsResponseBody::UserCanAnalysisVpcsPopResults && userCanAnalysisVpcsPopResults) { DARABONBA_PTR_SET_RVALUE(userCanAnalysisVpcsPopResults_, userCanAnalysisVpcsPopResults) };


  protected:
    shared_ptr<int32_t> curPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalPage_ {};
    shared_ptr<int32_t> totalSize_ {};
    shared_ptr<DescribeIntranetUserCanAnalysisVpcsResponseBody::UserCanAnalysisVpcsPopResults> userCanAnalysisVpcsPopResults_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
