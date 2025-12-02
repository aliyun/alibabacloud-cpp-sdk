// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCANNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetScanNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScanNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LimitNumber, limitNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanNumber, scanNumber_);
      DARABONBA_PTR_TO_JSON(SumNumber, sumNumber_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetScanNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LimitNumber, limitNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanNumber, scanNumber_);
      DARABONBA_PTR_FROM_JSON(SumNumber, sumNumber_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetScanNumResponseBody() = default ;
    GetScanNumResponseBody(const GetScanNumResponseBody &) = default ;
    GetScanNumResponseBody(GetScanNumResponseBody &&) = default ;
    GetScanNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScanNumResponseBody() = default ;
    GetScanNumResponseBody& operator=(const GetScanNumResponseBody &) = default ;
    GetScanNumResponseBody& operator=(GetScanNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limitNumber_ == nullptr
        && return this->requestId_ == nullptr && return this->scanNumber_ == nullptr && return this->sumNumber_ == nullptr && return this->tag_ == nullptr; };
    // limitNumber Field Functions 
    bool hasLimitNumber() const { return this->limitNumber_ != nullptr;};
    void deleteLimitNumber() { this->limitNumber_ = nullptr;};
    inline int64_t limitNumber() const { DARABONBA_PTR_GET_DEFAULT(limitNumber_, 0L) };
    inline GetScanNumResponseBody& setLimitNumber(int64_t limitNumber) { DARABONBA_PTR_SET_VALUE(limitNumber_, limitNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScanNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanNumber Field Functions 
    bool hasScanNumber() const { return this->scanNumber_ != nullptr;};
    void deleteScanNumber() { this->scanNumber_ = nullptr;};
    inline int64_t scanNumber() const { DARABONBA_PTR_GET_DEFAULT(scanNumber_, 0L) };
    inline GetScanNumResponseBody& setScanNumber(int64_t scanNumber) { DARABONBA_PTR_SET_VALUE(scanNumber_, scanNumber) };


    // sumNumber Field Functions 
    bool hasSumNumber() const { return this->sumNumber_ != nullptr;};
    void deleteSumNumber() { this->sumNumber_ = nullptr;};
    inline int64_t sumNumber() const { DARABONBA_PTR_GET_DEFAULT(sumNumber_, 0L) };
    inline GetScanNumResponseBody& setSumNumber(int64_t sumNumber) { DARABONBA_PTR_SET_VALUE(sumNumber_, sumNumber) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline bool tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, false) };
    inline GetScanNumResponseBody& setTag(bool tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // Upper limit of the quantity.
    std::shared_ptr<int64_t> limitNumber_ = nullptr;
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of files pending inspection.
    std::shared_ptr<int64_t> scanNumber_ = nullptr;
    // Total number of files.
    std::shared_ptr<int64_t> sumNumber_ = nullptr;
    // Whether it is a whitelist user.
    std::shared_ptr<bool> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
