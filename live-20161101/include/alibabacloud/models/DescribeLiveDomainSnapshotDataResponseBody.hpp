// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSNAPSHOTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSNAPSHOTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainSnapshotDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainSnapshotDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotDataInfos, snapshotDataInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainSnapshotDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotDataInfos, snapshotDataInfos_);
    };
    DescribeLiveDomainSnapshotDataResponseBody() = default ;
    DescribeLiveDomainSnapshotDataResponseBody(const DescribeLiveDomainSnapshotDataResponseBody &) = default ;
    DescribeLiveDomainSnapshotDataResponseBody(DescribeLiveDomainSnapshotDataResponseBody &&) = default ;
    DescribeLiveDomainSnapshotDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainSnapshotDataResponseBody() = default ;
    DescribeLiveDomainSnapshotDataResponseBody& operator=(const DescribeLiveDomainSnapshotDataResponseBody &) = default ;
    DescribeLiveDomainSnapshotDataResponseBody& operator=(DescribeLiveDomainSnapshotDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->snapshotDataInfos_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainSnapshotDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotDataInfos Field Functions 
    bool hasSnapshotDataInfos() const { return this->snapshotDataInfos_ != nullptr;};
    void deleteSnapshotDataInfos() { this->snapshotDataInfos_ = nullptr;};
    inline const DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos & snapshotDataInfos() const { DARABONBA_PTR_GET_CONST(snapshotDataInfos_, DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos) };
    inline DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos snapshotDataInfos() { DARABONBA_PTR_GET(snapshotDataInfos_, DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos) };
    inline DescribeLiveDomainSnapshotDataResponseBody& setSnapshotDataInfos(const DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos & snapshotDataInfos) { DARABONBA_PTR_SET_VALUE(snapshotDataInfos_, snapshotDataInfos) };
    inline DescribeLiveDomainSnapshotDataResponseBody& setSnapshotDataInfos(DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos && snapshotDataInfos) { DARABONBA_PTR_SET_RVALUE(snapshotDataInfos_, snapshotDataInfos) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The daily statistics on the number of snapshots.
    std::shared_ptr<DescribeLiveDomainSnapshotDataResponseBodySnapshotDataInfos> snapshotDataInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
