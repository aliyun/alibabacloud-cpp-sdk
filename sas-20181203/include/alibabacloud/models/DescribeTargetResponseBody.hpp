// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTargetResponseBody() = default ;
    DescribeTargetResponseBody(const DescribeTargetResponseBody &) = default ;
    DescribeTargetResponseBody(DescribeTargetResponseBody &&) = default ;
    DescribeTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTargetResponseBody() = default ;
    DescribeTargetResponseBody& operator=(const DescribeTargetResponseBody &) = default ;
    DescribeTargetResponseBody& operator=(DescribeTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(Flag, flag_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(Flag, flag_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
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
      virtual bool empty() const override { return this->flag_ == nullptr
        && this->target_ == nullptr && this->targetType_ == nullptr; };
      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
      inline Targets& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Targets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Targets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The flag that is added to the server. This parameter can be empty.
      shared_ptr<string> flag_ {};
      // The UUID of the server or the ID of the server group.
      shared_ptr<string> target_ {};
      // The type of the object. Valid values:
      // 
      // *   **uuid**: a server
      // *   **groupId**: a server group
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->targets_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<DescribeTargetResponseBody::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<DescribeTargetResponseBody::Targets>) };
    inline vector<DescribeTargetResponseBody::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<DescribeTargetResponseBody::Targets>) };
    inline DescribeTargetResponseBody& setTargets(const vector<DescribeTargetResponseBody::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline DescribeTargetResponseBody& setTargets(vector<DescribeTargetResponseBody::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTargetResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the server.
    shared_ptr<vector<DescribeTargetResponseBody::Targets>> targets_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
