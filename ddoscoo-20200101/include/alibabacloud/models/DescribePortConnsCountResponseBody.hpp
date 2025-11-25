// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTCONNSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTCONNSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortConnsCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortConnsCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActConns, actConns_);
      DARABONBA_PTR_TO_JSON(Conns, conns_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(InActConns, inActConns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortConnsCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActConns, actConns_);
      DARABONBA_PTR_FROM_JSON(Conns, conns_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(InActConns, inActConns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortConnsCountResponseBody() = default ;
    DescribePortConnsCountResponseBody(const DescribePortConnsCountResponseBody &) = default ;
    DescribePortConnsCountResponseBody(DescribePortConnsCountResponseBody &&) = default ;
    DescribePortConnsCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortConnsCountResponseBody() = default ;
    DescribePortConnsCountResponseBody& operator=(const DescribePortConnsCountResponseBody &) = default ;
    DescribePortConnsCountResponseBody& operator=(DescribePortConnsCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actConns_ == nullptr
        && return this->conns_ == nullptr && return this->cps_ == nullptr && return this->inActConns_ == nullptr && return this->requestId_ == nullptr; };
    // actConns Field Functions 
    bool hasActConns() const { return this->actConns_ != nullptr;};
    void deleteActConns() { this->actConns_ = nullptr;};
    inline int64_t actConns() const { DARABONBA_PTR_GET_DEFAULT(actConns_, 0L) };
    inline DescribePortConnsCountResponseBody& setActConns(int64_t actConns) { DARABONBA_PTR_SET_VALUE(actConns_, actConns) };


    // conns Field Functions 
    bool hasConns() const { return this->conns_ != nullptr;};
    void deleteConns() { this->conns_ = nullptr;};
    inline int64_t conns() const { DARABONBA_PTR_GET_DEFAULT(conns_, 0L) };
    inline DescribePortConnsCountResponseBody& setConns(int64_t conns) { DARABONBA_PTR_SET_VALUE(conns_, conns) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int64_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
    inline DescribePortConnsCountResponseBody& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // inActConns Field Functions 
    bool hasInActConns() const { return this->inActConns_ != nullptr;};
    void deleteInActConns() { this->inActConns_ = nullptr;};
    inline int64_t inActConns() const { DARABONBA_PTR_GET_DEFAULT(inActConns_, 0L) };
    inline DescribePortConnsCountResponseBody& setInActConns(int64_t inActConns) { DARABONBA_PTR_SET_VALUE(inActConns_, inActConns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortConnsCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of active connections.
    std::shared_ptr<int64_t> actConns_ = nullptr;
    // The number of concurrent connections.
    std::shared_ptr<int64_t> conns_ = nullptr;
    // The number of new connections.
    std::shared_ptr<int64_t> cps_ = nullptr;
    // The number of inactive connections.
    std::shared_ptr<int64_t> inActConns_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
