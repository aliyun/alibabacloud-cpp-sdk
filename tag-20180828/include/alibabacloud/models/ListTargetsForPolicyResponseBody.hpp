// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETSFORPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETSFORPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetId_ == nullptr
        && this->targetType_ == nullptr; };
      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Targets& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline int32_t getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
      inline Targets& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The ID of the object.
      shared_ptr<string> targetId_ {};
      // The type of the object. Valid values:
      // 
      // *   USER: the current logon account. This value is available if you use the Tag Policy feature in single-account mode.
      // *   ROOT: the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
      // *   FOLDER: a folder other than the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
      // *   ACCOUNT: a member in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
      shared_ptr<int32_t> targetType_ {};
    };

    virtual bool empty() const override { return this->isRd_ == nullptr
        && this->nextToken_ == nullptr && this->rdId_ == nullptr && this->requestId_ == nullptr && this->targets_ == nullptr; };
    // isRd Field Functions 
    bool hasIsRd() const { return this->isRd_ != nullptr;};
    void deleteIsRd() { this->isRd_ = nullptr;};
    inline bool getIsRd() const { DARABONBA_PTR_GET_DEFAULT(isRd_, false) };
    inline ListTargetsForPolicyResponseBody& setIsRd(bool isRd) { DARABONBA_PTR_SET_VALUE(isRd_, isRd) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTargetsForPolicyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // rdId Field Functions 
    bool hasRdId() const { return this->rdId_ != nullptr;};
    void deleteRdId() { this->rdId_ = nullptr;};
    inline string getRdId() const { DARABONBA_PTR_GET_DEFAULT(rdId_, "") };
    inline ListTargetsForPolicyResponseBody& setRdId(string rdId) { DARABONBA_PTR_SET_VALUE(rdId_, rdId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTargetsForPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<ListTargetsForPolicyResponseBody::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<ListTargetsForPolicyResponseBody::Targets>) };
    inline vector<ListTargetsForPolicyResponseBody::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<ListTargetsForPolicyResponseBody::Targets>) };
    inline ListTargetsForPolicyResponseBody& setTargets(const vector<ListTargetsForPolicyResponseBody::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline ListTargetsForPolicyResponseBody& setTargets(vector<ListTargetsForPolicyResponseBody::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // Indicates whether the object belongs to the resource directory. Valid values:
    // 
    // *   true: The object belongs to the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   false: The object does not belong to the resource directory. This value is available if you use the Tag Policy feature in single-account mode.
    shared_ptr<bool> isRd_ {};
    // Indicates whether the next query is required.
    // 
    // *   If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource directory.
    // 
    // >  This parameter is returned only if you use the Tag Policy feature in multi-account mode.
    shared_ptr<string> rdId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The objects to which the tag policy is attached.
    shared_ptr<vector<ListTargetsForPolicyResponseBody::Targets>> targets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
