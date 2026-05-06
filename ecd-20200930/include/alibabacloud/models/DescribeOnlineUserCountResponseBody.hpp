// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONLINEUSERCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONLINEUSERCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOnlineUserCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnlineUserCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdAssignedUserCount, adAssignedUserCount_);
      DARABONBA_PTR_TO_JSON(AssignedUserCount, assignedUserCount_);
      DARABONBA_PTR_TO_JSON(OnlineUserCount, onlineUserCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SimpleAssignedUserCount, simpleAssignedUserCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnlineUserCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdAssignedUserCount, adAssignedUserCount_);
      DARABONBA_PTR_FROM_JSON(AssignedUserCount, assignedUserCount_);
      DARABONBA_PTR_FROM_JSON(OnlineUserCount, onlineUserCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SimpleAssignedUserCount, simpleAssignedUserCount_);
    };
    DescribeOnlineUserCountResponseBody() = default ;
    DescribeOnlineUserCountResponseBody(const DescribeOnlineUserCountResponseBody &) = default ;
    DescribeOnlineUserCountResponseBody(DescribeOnlineUserCountResponseBody &&) = default ;
    DescribeOnlineUserCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnlineUserCountResponseBody() = default ;
    DescribeOnlineUserCountResponseBody& operator=(const DescribeOnlineUserCountResponseBody &) = default ;
    DescribeOnlineUserCountResponseBody& operator=(DescribeOnlineUserCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adAssignedUserCount_ == nullptr
        && this->assignedUserCount_ == nullptr && this->onlineUserCount_ == nullptr && this->requestId_ == nullptr && this->simpleAssignedUserCount_ == nullptr; };
    // adAssignedUserCount Field Functions 
    bool hasAdAssignedUserCount() const { return this->adAssignedUserCount_ != nullptr;};
    void deleteAdAssignedUserCount() { this->adAssignedUserCount_ = nullptr;};
    inline int64_t getAdAssignedUserCount() const { DARABONBA_PTR_GET_DEFAULT(adAssignedUserCount_, 0L) };
    inline DescribeOnlineUserCountResponseBody& setAdAssignedUserCount(int64_t adAssignedUserCount) { DARABONBA_PTR_SET_VALUE(adAssignedUserCount_, adAssignedUserCount) };


    // assignedUserCount Field Functions 
    bool hasAssignedUserCount() const { return this->assignedUserCount_ != nullptr;};
    void deleteAssignedUserCount() { this->assignedUserCount_ = nullptr;};
    inline int64_t getAssignedUserCount() const { DARABONBA_PTR_GET_DEFAULT(assignedUserCount_, 0L) };
    inline DescribeOnlineUserCountResponseBody& setAssignedUserCount(int64_t assignedUserCount) { DARABONBA_PTR_SET_VALUE(assignedUserCount_, assignedUserCount) };


    // onlineUserCount Field Functions 
    bool hasOnlineUserCount() const { return this->onlineUserCount_ != nullptr;};
    void deleteOnlineUserCount() { this->onlineUserCount_ = nullptr;};
    inline int64_t getOnlineUserCount() const { DARABONBA_PTR_GET_DEFAULT(onlineUserCount_, 0L) };
    inline DescribeOnlineUserCountResponseBody& setOnlineUserCount(int64_t onlineUserCount) { DARABONBA_PTR_SET_VALUE(onlineUserCount_, onlineUserCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOnlineUserCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // simpleAssignedUserCount Field Functions 
    bool hasSimpleAssignedUserCount() const { return this->simpleAssignedUserCount_ != nullptr;};
    void deleteSimpleAssignedUserCount() { this->simpleAssignedUserCount_ = nullptr;};
    inline int64_t getSimpleAssignedUserCount() const { DARABONBA_PTR_GET_DEFAULT(simpleAssignedUserCount_, 0L) };
    inline DescribeOnlineUserCountResponseBody& setSimpleAssignedUserCount(int64_t simpleAssignedUserCount) { DARABONBA_PTR_SET_VALUE(simpleAssignedUserCount_, simpleAssignedUserCount) };


  protected:
    shared_ptr<int64_t> adAssignedUserCount_ {};
    shared_ptr<int64_t> assignedUserCount_ {};
    shared_ptr<int64_t> onlineUserCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> simpleAssignedUserCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
