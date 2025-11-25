// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlEventStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiSensitiveDataCount, aiSensitiveDataCount_);
      DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveDataCount, sensitiveDataCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiSensitiveDataCount, aiSensitiveDataCount_);
      DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataCount, sensitiveDataCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
    };
    DescribeSdlEventStatisticResponseBody() = default ;
    DescribeSdlEventStatisticResponseBody(const DescribeSdlEventStatisticResponseBody &) = default ;
    DescribeSdlEventStatisticResponseBody(DescribeSdlEventStatisticResponseBody &&) = default ;
    DescribeSdlEventStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventStatisticResponseBody() = default ;
    DescribeSdlEventStatisticResponseBody& operator=(const DescribeSdlEventStatisticResponseBody &) = default ;
    DescribeSdlEventStatisticResponseBody& operator=(DescribeSdlEventStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiSensitiveDataCount_ == nullptr
        && return this->assetCount_ == nullptr && return this->requestId_ == nullptr && return this->sensitiveDataCount_ == nullptr && return this->totalCount_ == nullptr && return this->totalTraffic_ == nullptr; };
    // aiSensitiveDataCount Field Functions 
    bool hasAiSensitiveDataCount() const { return this->aiSensitiveDataCount_ != nullptr;};
    void deleteAiSensitiveDataCount() { this->aiSensitiveDataCount_ = nullptr;};
    inline int64_t aiSensitiveDataCount() const { DARABONBA_PTR_GET_DEFAULT(aiSensitiveDataCount_, 0L) };
    inline DescribeSdlEventStatisticResponseBody& setAiSensitiveDataCount(int64_t aiSensitiveDataCount) { DARABONBA_PTR_SET_VALUE(aiSensitiveDataCount_, aiSensitiveDataCount) };


    // assetCount Field Functions 
    bool hasAssetCount() const { return this->assetCount_ != nullptr;};
    void deleteAssetCount() { this->assetCount_ = nullptr;};
    inline int64_t assetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0L) };
    inline DescribeSdlEventStatisticResponseBody& setAssetCount(int64_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlEventStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveDataCount Field Functions 
    bool hasSensitiveDataCount() const { return this->sensitiveDataCount_ != nullptr;};
    void deleteSensitiveDataCount() { this->sensitiveDataCount_ = nullptr;};
    inline int64_t sensitiveDataCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataCount_, 0L) };
    inline DescribeSdlEventStatisticResponseBody& setSensitiveDataCount(int64_t sensitiveDataCount) { DARABONBA_PTR_SET_VALUE(sensitiveDataCount_, sensitiveDataCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSdlEventStatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline int64_t totalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, 0L) };
    inline DescribeSdlEventStatisticResponseBody& setTotalTraffic(int64_t totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


  protected:
    std::shared_ptr<int64_t> aiSensitiveDataCount_ = nullptr;
    std::shared_ptr<int64_t> assetCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> sensitiveDataCount_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> totalTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
