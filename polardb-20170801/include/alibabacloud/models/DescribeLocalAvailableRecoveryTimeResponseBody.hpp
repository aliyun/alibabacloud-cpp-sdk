// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCALAVAILABLERECOVERYTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCALAVAILABLERECOVERYTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLocalAvailableRecoveryTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLocalAvailableRecoveryTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RecoveryBeginTime, recoveryBeginTime_);
      DARABONBA_PTR_TO_JSON(RecoveryEndTime, recoveryEndTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLocalAvailableRecoveryTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RecoveryBeginTime, recoveryBeginTime_);
      DARABONBA_PTR_FROM_JSON(RecoveryEndTime, recoveryEndTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLocalAvailableRecoveryTimeResponseBody() = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody(const DescribeLocalAvailableRecoveryTimeResponseBody &) = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody(DescribeLocalAvailableRecoveryTimeResponseBody &&) = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLocalAvailableRecoveryTimeResponseBody() = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody& operator=(const DescribeLocalAvailableRecoveryTimeResponseBody &) = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody& operator=(DescribeLocalAvailableRecoveryTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->recoveryBeginTime_ == nullptr && this->recoveryEndTime_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeLocalAvailableRecoveryTimeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // recoveryBeginTime Field Functions 
    bool hasRecoveryBeginTime() const { return this->recoveryBeginTime_ != nullptr;};
    void deleteRecoveryBeginTime() { this->recoveryBeginTime_ = nullptr;};
    inline string getRecoveryBeginTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryBeginTime_, "") };
    inline DescribeLocalAvailableRecoveryTimeResponseBody& setRecoveryBeginTime(string recoveryBeginTime) { DARABONBA_PTR_SET_VALUE(recoveryBeginTime_, recoveryBeginTime) };


    // recoveryEndTime Field Functions 
    bool hasRecoveryEndTime() const { return this->recoveryEndTime_ != nullptr;};
    void deleteRecoveryEndTime() { this->recoveryEndTime_ = nullptr;};
    inline string getRecoveryEndTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryEndTime_, "") };
    inline DescribeLocalAvailableRecoveryTimeResponseBody& setRecoveryEndTime(string recoveryEndTime) { DARABONBA_PTR_SET_VALUE(recoveryEndTime_, recoveryEndTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLocalAvailableRecoveryTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> recoveryBeginTime_ {};
    shared_ptr<string> recoveryEndTime_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
