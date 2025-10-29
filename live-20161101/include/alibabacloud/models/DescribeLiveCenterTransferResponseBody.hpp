// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECENTERTRANSFERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECENTERTRANSFERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCenterTransferResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCenterTransferResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveCenterTransferInfoList, liveCenterTransferInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCenterTransferResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveCenterTransferInfoList, liveCenterTransferInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveCenterTransferResponseBody() = default ;
    DescribeLiveCenterTransferResponseBody(const DescribeLiveCenterTransferResponseBody &) = default ;
    DescribeLiveCenterTransferResponseBody(DescribeLiveCenterTransferResponseBody &&) = default ;
    DescribeLiveCenterTransferResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCenterTransferResponseBody() = default ;
    DescribeLiveCenterTransferResponseBody& operator=(const DescribeLiveCenterTransferResponseBody &) = default ;
    DescribeLiveCenterTransferResponseBody& operator=(DescribeLiveCenterTransferResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveCenterTransferInfoList_ == nullptr
        && return this->requestId_ == nullptr; };
    // liveCenterTransferInfoList Field Functions 
    bool hasLiveCenterTransferInfoList() const { return this->liveCenterTransferInfoList_ != nullptr;};
    void deleteLiveCenterTransferInfoList() { this->liveCenterTransferInfoList_ = nullptr;};
    inline const DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList & liveCenterTransferInfoList() const { DARABONBA_PTR_GET_CONST(liveCenterTransferInfoList_, DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList) };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList liveCenterTransferInfoList() { DARABONBA_PTR_GET(liveCenterTransferInfoList_, DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList) };
    inline DescribeLiveCenterTransferResponseBody& setLiveCenterTransferInfoList(const DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList & liveCenterTransferInfoList) { DARABONBA_PTR_SET_VALUE(liveCenterTransferInfoList_, liveCenterTransferInfoList) };
    inline DescribeLiveCenterTransferResponseBody& setLiveCenterTransferInfoList(DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList && liveCenterTransferInfoList) { DARABONBA_PTR_SET_RVALUE(liveCenterTransferInfoList_, liveCenterTransferInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveCenterTransferResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The stream relay information.
    std::shared_ptr<DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoList> liveCenterTransferInfoList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
