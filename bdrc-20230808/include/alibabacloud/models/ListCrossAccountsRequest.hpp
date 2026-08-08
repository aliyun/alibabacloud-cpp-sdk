// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROSSACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCROSSACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class ListCrossAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrossAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccountOwnerId, crossAccountOwnerId_);
      DARABONBA_PTR_TO_JSON(ManagementMode, managementMode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrossAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccountOwnerId, crossAccountOwnerId_);
      DARABONBA_PTR_FROM_JSON(ManagementMode, managementMode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListCrossAccountsRequest() = default ;
    ListCrossAccountsRequest(const ListCrossAccountsRequest &) = default ;
    ListCrossAccountsRequest(ListCrossAccountsRequest &&) = default ;
    ListCrossAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrossAccountsRequest() = default ;
    ListCrossAccountsRequest& operator=(const ListCrossAccountsRequest &) = default ;
    ListCrossAccountsRequest& operator=(ListCrossAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccountOwnerId_ == nullptr
        && this->managementMode_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr; };
    // crossAccountOwnerId Field Functions 
    bool hasCrossAccountOwnerId() const { return this->crossAccountOwnerId_ != nullptr;};
    void deleteCrossAccountOwnerId() { this->crossAccountOwnerId_ = nullptr;};
    inline int64_t getCrossAccountOwnerId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountOwnerId_, 0L) };
    inline ListCrossAccountsRequest& setCrossAccountOwnerId(int64_t crossAccountOwnerId) { DARABONBA_PTR_SET_VALUE(crossAccountOwnerId_, crossAccountOwnerId) };


    // managementMode Field Functions 
    bool hasManagementMode() const { return this->managementMode_ != nullptr;};
    void deleteManagementMode() { this->managementMode_ = nullptr;};
    inline string getManagementMode() const { DARABONBA_PTR_GET_DEFAULT(managementMode_, "") };
    inline ListCrossAccountsRequest& setManagementMode(string managementMode) { DARABONBA_PTR_SET_VALUE(managementMode_, managementMode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCrossAccountsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCrossAccountsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListCrossAccountsRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListCrossAccountsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    shared_ptr<int64_t> crossAccountOwnerId_ {};
    shared_ptr<string> managementMode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> targetId_ {};
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
