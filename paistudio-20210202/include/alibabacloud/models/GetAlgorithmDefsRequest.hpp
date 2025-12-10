// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALGORITHMDEFSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALGORITHMDEFSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetAlgorithmDefsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlgorithmDefsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LatestTimestamp, latestTimestamp_);
      DARABONBA_PTR_TO_JSON(RangeEnd, rangeEnd_);
      DARABONBA_PTR_TO_JSON(RangeStart, rangeStart_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlgorithmDefsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestTimestamp, latestTimestamp_);
      DARABONBA_PTR_FROM_JSON(RangeEnd, rangeEnd_);
      DARABONBA_PTR_FROM_JSON(RangeStart, rangeStart_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetAlgorithmDefsRequest() = default ;
    GetAlgorithmDefsRequest(const GetAlgorithmDefsRequest &) = default ;
    GetAlgorithmDefsRequest(GetAlgorithmDefsRequest &&) = default ;
    GetAlgorithmDefsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlgorithmDefsRequest() = default ;
    GetAlgorithmDefsRequest& operator=(const GetAlgorithmDefsRequest &) = default ;
    GetAlgorithmDefsRequest& operator=(GetAlgorithmDefsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latestTimestamp_ == nullptr
        && return this->rangeEnd_ == nullptr && return this->rangeStart_ == nullptr && return this->timestamp_ == nullptr; };
    // latestTimestamp Field Functions 
    bool hasLatestTimestamp() const { return this->latestTimestamp_ != nullptr;};
    void deleteLatestTimestamp() { this->latestTimestamp_ = nullptr;};
    inline string latestTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestTimestamp_, "") };
    inline GetAlgorithmDefsRequest& setLatestTimestamp(string latestTimestamp) { DARABONBA_PTR_SET_VALUE(latestTimestamp_, latestTimestamp) };


    // rangeEnd Field Functions 
    bool hasRangeEnd() const { return this->rangeEnd_ != nullptr;};
    void deleteRangeEnd() { this->rangeEnd_ = nullptr;};
    inline int32_t rangeEnd() const { DARABONBA_PTR_GET_DEFAULT(rangeEnd_, 0) };
    inline GetAlgorithmDefsRequest& setRangeEnd(int32_t rangeEnd) { DARABONBA_PTR_SET_VALUE(rangeEnd_, rangeEnd) };


    // rangeStart Field Functions 
    bool hasRangeStart() const { return this->rangeStart_ != nullptr;};
    void deleteRangeStart() { this->rangeStart_ = nullptr;};
    inline int32_t rangeStart() const { DARABONBA_PTR_GET_DEFAULT(rangeStart_, 0) };
    inline GetAlgorithmDefsRequest& setRangeStart(int32_t rangeStart) { DARABONBA_PTR_SET_VALUE(rangeStart_, rangeStart) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetAlgorithmDefsRequest& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> latestTimestamp_ = nullptr;
    std::shared_ptr<int32_t> rangeEnd_ = nullptr;
    std::shared_ptr<int32_t> rangeStart_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
