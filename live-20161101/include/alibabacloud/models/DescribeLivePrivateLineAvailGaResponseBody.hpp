// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAvailGAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAvailGAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePrivateLineAvailGAs, livePrivateLineAvailGAs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAvailGAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePrivateLineAvailGAs, livePrivateLineAvailGAs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLivePrivateLineAvailGAResponseBody() = default ;
    DescribeLivePrivateLineAvailGAResponseBody(const DescribeLivePrivateLineAvailGAResponseBody &) = default ;
    DescribeLivePrivateLineAvailGAResponseBody(DescribeLivePrivateLineAvailGAResponseBody &&) = default ;
    DescribeLivePrivateLineAvailGAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAvailGAResponseBody() = default ;
    DescribeLivePrivateLineAvailGAResponseBody& operator=(const DescribeLivePrivateLineAvailGAResponseBody &) = default ;
    DescribeLivePrivateLineAvailGAResponseBody& operator=(DescribeLivePrivateLineAvailGAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePrivateLineAvailGAs_ == nullptr
        && return this->requestId_ == nullptr; };
    // livePrivateLineAvailGAs Field Functions 
    bool hasLivePrivateLineAvailGAs() const { return this->livePrivateLineAvailGAs_ != nullptr;};
    void deleteLivePrivateLineAvailGAs() { this->livePrivateLineAvailGAs_ = nullptr;};
    inline const DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs & livePrivateLineAvailGAs() const { DARABONBA_PTR_GET_CONST(livePrivateLineAvailGAs_, DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs) };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs livePrivateLineAvailGAs() { DARABONBA_PTR_GET(livePrivateLineAvailGAs_, DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs) };
    inline DescribeLivePrivateLineAvailGAResponseBody& setLivePrivateLineAvailGAs(const DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs & livePrivateLineAvailGAs) { DARABONBA_PTR_SET_VALUE(livePrivateLineAvailGAs_, livePrivateLineAvailGAs) };
    inline DescribeLivePrivateLineAvailGAResponseBody& setLivePrivateLineAvailGAs(DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs && livePrivateLineAvailGAs) { DARABONBA_PTR_SET_RVALUE(livePrivateLineAvailGAs_, livePrivateLineAvailGAs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The GA instance configuration details.
    std::shared_ptr<DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs> livePrivateLineAvailGAs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
