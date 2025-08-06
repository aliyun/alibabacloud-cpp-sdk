// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodStatisResponseBodyCdnData.hpp>
#include <alibabacloud/models/DescribeVodStatisResponseBodyStorageData.hpp>
#include <alibabacloud/models/DescribeVodStatisResponseBodyTranscodeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CdnData, cdnData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageData, storageData_);
      DARABONBA_PTR_TO_JSON(TranscodeData, transcodeData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnData, cdnData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageData, storageData_);
      DARABONBA_PTR_FROM_JSON(TranscodeData, transcodeData_);
    };
    DescribeVodStatisResponseBody() = default ;
    DescribeVodStatisResponseBody(const DescribeVodStatisResponseBody &) = default ;
    DescribeVodStatisResponseBody(DescribeVodStatisResponseBody &&) = default ;
    DescribeVodStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStatisResponseBody() = default ;
    DescribeVodStatisResponseBody& operator=(const DescribeVodStatisResponseBody &) = default ;
    DescribeVodStatisResponseBody& operator=(DescribeVodStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdnData_ != nullptr
        && this->requestId_ != nullptr && this->storageData_ != nullptr && this->transcodeData_ != nullptr; };
    // cdnData Field Functions 
    bool hasCdnData() const { return this->cdnData_ != nullptr;};
    void deleteCdnData() { this->cdnData_ = nullptr;};
    inline const DescribeVodStatisResponseBodyCdnData & cdnData() const { DARABONBA_PTR_GET_CONST(cdnData_, DescribeVodStatisResponseBodyCdnData) };
    inline DescribeVodStatisResponseBodyCdnData cdnData() { DARABONBA_PTR_GET(cdnData_, DescribeVodStatisResponseBodyCdnData) };
    inline DescribeVodStatisResponseBody& setCdnData(const DescribeVodStatisResponseBodyCdnData & cdnData) { DARABONBA_PTR_SET_VALUE(cdnData_, cdnData) };
    inline DescribeVodStatisResponseBody& setCdnData(DescribeVodStatisResponseBodyCdnData && cdnData) { DARABONBA_PTR_SET_RVALUE(cdnData_, cdnData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageData Field Functions 
    bool hasStorageData() const { return this->storageData_ != nullptr;};
    void deleteStorageData() { this->storageData_ = nullptr;};
    inline const DescribeVodStatisResponseBodyStorageData & storageData() const { DARABONBA_PTR_GET_CONST(storageData_, DescribeVodStatisResponseBodyStorageData) };
    inline DescribeVodStatisResponseBodyStorageData storageData() { DARABONBA_PTR_GET(storageData_, DescribeVodStatisResponseBodyStorageData) };
    inline DescribeVodStatisResponseBody& setStorageData(const DescribeVodStatisResponseBodyStorageData & storageData) { DARABONBA_PTR_SET_VALUE(storageData_, storageData) };
    inline DescribeVodStatisResponseBody& setStorageData(DescribeVodStatisResponseBodyStorageData && storageData) { DARABONBA_PTR_SET_RVALUE(storageData_, storageData) };


    // transcodeData Field Functions 
    bool hasTranscodeData() const { return this->transcodeData_ != nullptr;};
    void deleteTranscodeData() { this->transcodeData_ = nullptr;};
    inline const DescribeVodStatisResponseBodyTranscodeData & transcodeData() const { DARABONBA_PTR_GET_CONST(transcodeData_, DescribeVodStatisResponseBodyTranscodeData) };
    inline DescribeVodStatisResponseBodyTranscodeData transcodeData() { DARABONBA_PTR_GET(transcodeData_, DescribeVodStatisResponseBodyTranscodeData) };
    inline DescribeVodStatisResponseBody& setTranscodeData(const DescribeVodStatisResponseBodyTranscodeData & transcodeData) { DARABONBA_PTR_SET_VALUE(transcodeData_, transcodeData) };
    inline DescribeVodStatisResponseBody& setTranscodeData(DescribeVodStatisResponseBodyTranscodeData && transcodeData) { DARABONBA_PTR_SET_RVALUE(transcodeData_, transcodeData) };


  protected:
    std::shared_ptr<DescribeVodStatisResponseBodyCdnData> cdnData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeVodStatisResponseBodyStorageData> storageData_ = nullptr;
    std::shared_ptr<DescribeVodStatisResponseBodyTranscodeData> transcodeData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
