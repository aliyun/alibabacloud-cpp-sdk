// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSSTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSSTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeOSSStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOSSStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageUsage, storageUsage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOSSStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageUsage, storageUsage_);
    };
    DescribeOSSStorageResponseBody() = default ;
    DescribeOSSStorageResponseBody(const DescribeOSSStorageResponseBody &) = default ;
    DescribeOSSStorageResponseBody(DescribeOSSStorageResponseBody &&) = default ;
    DescribeOSSStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOSSStorageResponseBody() = default ;
    DescribeOSSStorageResponseBody& operator=(const DescribeOSSStorageResponseBody &) = default ;
    DescribeOSSStorageResponseBody& operator=(DescribeOSSStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldStorage_ == nullptr
        && this->policy_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr && this->storageUsage_ == nullptr; };
    // coldStorage Field Functions 
    bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
    void deleteColdStorage() { this->coldStorage_ = nullptr;};
    inline bool getColdStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, false) };
    inline DescribeOSSStorageResponseBody& setColdStorage(bool coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeOSSStorageResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOSSStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeOSSStorageResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageUsage Field Functions 
    bool hasStorageUsage() const { return this->storageUsage_ != nullptr;};
    void deleteStorageUsage() { this->storageUsage_ = nullptr;};
    inline string getStorageUsage() const { DARABONBA_PTR_GET_DEFAULT(storageUsage_, "") };
    inline DescribeOSSStorageResponseBody& setStorageUsage(string storageUsage) { DARABONBA_PTR_SET_VALUE(storageUsage_, storageUsage) };


  protected:
    // Indicates whether tiered storage of hot data and cold data is supported. Valid values:
    // 
    // *   **true**: Tiered storage of hot data and cold data is supported.
    // *   **false**: Tiered storage of hot data and cold data is not supported.
    shared_ptr<bool> coldStorage_ {};
    // The parameters for tiered storage of hot data and cold data.
    shared_ptr<string> policy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The state of tiered storage of hot data and cold data. Valid values:
    // 
    // *   **CREATING**: Tiered storage of hot data and cold data is being enabled.
    // *   **DISABLE**: Tiered storage of hot data and cold data is not enabled.
    // *   **ENABLE**: Tiered storage of hot data and cold data is enabled.
    shared_ptr<string> state_ {};
    // The space used for tiered storage of hot data and cold data. Unit: GB.
    shared_ptr<string> storageUsage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
