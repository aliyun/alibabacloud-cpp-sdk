// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARTITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARTITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Partition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetPartitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPartitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPartitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPartitionResponseBody() = default ;
    GetPartitionResponseBody(const GetPartitionResponseBody &) = default ;
    GetPartitionResponseBody(GetPartitionResponseBody &&) = default ;
    GetPartitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPartitionResponseBody() = default ;
    GetPartitionResponseBody& operator=(const GetPartitionResponseBody &) = default ;
    GetPartitionResponseBody& operator=(GetPartitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->partition_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const Partition & partition() const { DARABONBA_PTR_GET_CONST(partition_, Partition) };
    inline Partition partition() { DARABONBA_PTR_GET(partition_, Partition) };
    inline GetPartitionResponseBody& setPartition(const Partition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline GetPartitionResponseBody& setPartition(Partition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPartitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPartitionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Partition details.
    std::shared_ptr<Partition> partition_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
