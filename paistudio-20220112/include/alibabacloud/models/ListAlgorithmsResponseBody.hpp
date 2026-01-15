// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALGORITHMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALGORITHMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListAlgorithmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlgorithmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithms, algorithms_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlgorithmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithms, algorithms_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlgorithmsResponseBody() = default ;
    ListAlgorithmsResponseBody(const ListAlgorithmsResponseBody &) = default ;
    ListAlgorithmsResponseBody(ListAlgorithmsResponseBody &&) = default ;
    ListAlgorithmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlgorithmsResponseBody() = default ;
    ListAlgorithmsResponseBody& operator=(const ListAlgorithmsResponseBody &) = default ;
    ListAlgorithmsResponseBody& operator=(ListAlgorithmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Algorithms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Algorithms& obj) { 
        DARABONBA_PTR_TO_JSON(AlgorithmDescription, algorithmDescription_);
        DARABONBA_PTR_TO_JSON(AlgorithmId, algorithmId_);
        DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
        DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Algorithms& obj) { 
        DARABONBA_PTR_FROM_JSON(AlgorithmDescription, algorithmDescription_);
        DARABONBA_PTR_FROM_JSON(AlgorithmId, algorithmId_);
        DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
        DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Algorithms() = default ;
      Algorithms(const Algorithms &) = default ;
      Algorithms(Algorithms &&) = default ;
      Algorithms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Algorithms() = default ;
      Algorithms& operator=(const Algorithms &) = default ;
      Algorithms& operator=(Algorithms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithmDescription_ == nullptr
        && this->algorithmId_ == nullptr && this->algorithmName_ == nullptr && this->algorithmProvider_ == nullptr && this->displayName_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->userId_ == nullptr && this->workspaceId_ == nullptr; };
      // algorithmDescription Field Functions 
      bool hasAlgorithmDescription() const { return this->algorithmDescription_ != nullptr;};
      void deleteAlgorithmDescription() { this->algorithmDescription_ = nullptr;};
      inline string getAlgorithmDescription() const { DARABONBA_PTR_GET_DEFAULT(algorithmDescription_, "") };
      inline Algorithms& setAlgorithmDescription(string algorithmDescription) { DARABONBA_PTR_SET_VALUE(algorithmDescription_, algorithmDescription) };


      // algorithmId Field Functions 
      bool hasAlgorithmId() const { return this->algorithmId_ != nullptr;};
      void deleteAlgorithmId() { this->algorithmId_ = nullptr;};
      inline string getAlgorithmId() const { DARABONBA_PTR_GET_DEFAULT(algorithmId_, "") };
      inline Algorithms& setAlgorithmId(string algorithmId) { DARABONBA_PTR_SET_VALUE(algorithmId_, algorithmId) };


      // algorithmName Field Functions 
      bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
      void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
      inline string getAlgorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
      inline Algorithms& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


      // algorithmProvider Field Functions 
      bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
      void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
      inline string getAlgorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
      inline Algorithms& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Algorithms& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Algorithms& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Algorithms& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Algorithms& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Algorithms& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> algorithmDescription_ {};
      shared_ptr<string> algorithmId_ {};
      shared_ptr<string> algorithmName_ {};
      shared_ptr<string> algorithmProvider_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->algorithms_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // algorithms Field Functions 
    bool hasAlgorithms() const { return this->algorithms_ != nullptr;};
    void deleteAlgorithms() { this->algorithms_ = nullptr;};
    inline const vector<ListAlgorithmsResponseBody::Algorithms> & getAlgorithms() const { DARABONBA_PTR_GET_CONST(algorithms_, vector<ListAlgorithmsResponseBody::Algorithms>) };
    inline vector<ListAlgorithmsResponseBody::Algorithms> getAlgorithms() { DARABONBA_PTR_GET(algorithms_, vector<ListAlgorithmsResponseBody::Algorithms>) };
    inline ListAlgorithmsResponseBody& setAlgorithms(const vector<ListAlgorithmsResponseBody::Algorithms> & algorithms) { DARABONBA_PTR_SET_VALUE(algorithms_, algorithms) };
    inline ListAlgorithmsResponseBody& setAlgorithms(vector<ListAlgorithmsResponseBody::Algorithms> && algorithms) { DARABONBA_PTR_SET_RVALUE(algorithms_, algorithms) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlgorithmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAlgorithmsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAlgorithmsResponseBody::Algorithms>> algorithms_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
