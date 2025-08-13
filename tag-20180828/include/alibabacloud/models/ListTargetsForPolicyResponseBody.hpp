// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETSFORPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETSFORPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTargetsForPolicyResponseBodyTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTargetsForPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetsForPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsRd, isRd_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RdId, rdId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetsForPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsRd, isRd_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RdId, rdId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    ListTargetsForPolicyResponseBody() = default ;
    ListTargetsForPolicyResponseBody(const ListTargetsForPolicyResponseBody &) = default ;
    ListTargetsForPolicyResponseBody(ListTargetsForPolicyResponseBody &&) = default ;
    ListTargetsForPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetsForPolicyResponseBody() = default ;
    ListTargetsForPolicyResponseBody& operator=(const ListTargetsForPolicyResponseBody &) = default ;
    ListTargetsForPolicyResponseBody& operator=(ListTargetsForPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isRd_ != nullptr
        && this->nextToken_ != nullptr && this->rdId_ != nullptr && this->requestId_ != nullptr && this->targets_ != nullptr; };
    // isRd Field Functions 
    bool hasIsRd() const { return this->isRd_ != nullptr;};
    void deleteIsRd() { this->isRd_ = nullptr;};
    inline bool isRd() const { DARABONBA_PTR_GET_DEFAULT(isRd_, false) };
    inline ListTargetsForPolicyResponseBody& setIsRd(bool isRd) { DARABONBA_PTR_SET_VALUE(isRd_, isRd) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTargetsForPolicyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // rdId Field Functions 
    bool hasRdId() const { return this->rdId_ != nullptr;};
    void deleteRdId() { this->rdId_ = nullptr;};
    inline string rdId() const { DARABONBA_PTR_GET_DEFAULT(rdId_, "") };
    inline ListTargetsForPolicyResponseBody& setRdId(string rdId) { DARABONBA_PTR_SET_VALUE(rdId_, rdId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTargetsForPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<ListTargetsForPolicyResponseBodyTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<ListTargetsForPolicyResponseBodyTargets>) };
    inline vector<ListTargetsForPolicyResponseBodyTargets> targets() { DARABONBA_PTR_GET(targets_, vector<ListTargetsForPolicyResponseBodyTargets>) };
    inline ListTargetsForPolicyResponseBody& setTargets(const vector<ListTargetsForPolicyResponseBodyTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline ListTargetsForPolicyResponseBody& setTargets(vector<ListTargetsForPolicyResponseBodyTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // Indicates whether the object belongs to the resource directory. Valid values:
    // 
    // *   true: The object belongs to the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   false: The object does not belong to the resource directory. This value is available if you use the Tag Policy feature in single-account mode.
    std::shared_ptr<bool> isRd_ = nullptr;
    // Indicates whether the next query is required.
    // 
    // *   If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the resource directory.
    // 
    // >  This parameter is returned only if you use the Tag Policy feature in multi-account mode.
    std::shared_ptr<string> rdId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The objects to which the tag policy is attached.
    std::shared_ptr<vector<ListTargetsForPolicyResponseBodyTargets>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
