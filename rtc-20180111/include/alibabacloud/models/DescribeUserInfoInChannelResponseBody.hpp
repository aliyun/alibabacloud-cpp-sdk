// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERINFOINCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERINFOINCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserInfoInChannelResponseBodyProperty.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUserInfoInChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserInfoInChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsChannelExist, isChannelExist_);
      DARABONBA_PTR_TO_JSON(IsInChannel, isInChannel_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserInfoInChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsChannelExist, isChannelExist_);
      DARABONBA_PTR_FROM_JSON(IsInChannel, isInChannel_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeUserInfoInChannelResponseBody() = default ;
    DescribeUserInfoInChannelResponseBody(const DescribeUserInfoInChannelResponseBody &) = default ;
    DescribeUserInfoInChannelResponseBody(DescribeUserInfoInChannelResponseBody &&) = default ;
    DescribeUserInfoInChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserInfoInChannelResponseBody() = default ;
    DescribeUserInfoInChannelResponseBody& operator=(const DescribeUserInfoInChannelResponseBody &) = default ;
    DescribeUserInfoInChannelResponseBody& operator=(DescribeUserInfoInChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isChannelExist_ != nullptr
        && this->isInChannel_ != nullptr && this->property_ != nullptr && this->requestId_ != nullptr && this->timestamp_ != nullptr; };
    // isChannelExist Field Functions 
    bool hasIsChannelExist() const { return this->isChannelExist_ != nullptr;};
    void deleteIsChannelExist() { this->isChannelExist_ = nullptr;};
    inline bool isChannelExist() const { DARABONBA_PTR_GET_DEFAULT(isChannelExist_, false) };
    inline DescribeUserInfoInChannelResponseBody& setIsChannelExist(bool isChannelExist) { DARABONBA_PTR_SET_VALUE(isChannelExist_, isChannelExist) };


    // isInChannel Field Functions 
    bool hasIsInChannel() const { return this->isInChannel_ != nullptr;};
    void deleteIsInChannel() { this->isInChannel_ = nullptr;};
    inline bool isInChannel() const { DARABONBA_PTR_GET_DEFAULT(isInChannel_, false) };
    inline DescribeUserInfoInChannelResponseBody& setIsInChannel(bool isInChannel) { DARABONBA_PTR_SET_VALUE(isInChannel_, isInChannel) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline const vector<DescribeUserInfoInChannelResponseBodyProperty> & property() const { DARABONBA_PTR_GET_CONST(property_, vector<DescribeUserInfoInChannelResponseBodyProperty>) };
    inline vector<DescribeUserInfoInChannelResponseBodyProperty> property() { DARABONBA_PTR_GET(property_, vector<DescribeUserInfoInChannelResponseBodyProperty>) };
    inline DescribeUserInfoInChannelResponseBody& setProperty(const vector<DescribeUserInfoInChannelResponseBodyProperty> & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
    inline DescribeUserInfoInChannelResponseBody& setProperty(vector<DescribeUserInfoInChannelResponseBodyProperty> && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserInfoInChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline DescribeUserInfoInChannelResponseBody& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<bool> isChannelExist_ = nullptr;
    std::shared_ptr<bool> isInChannel_ = nullptr;
    std::shared_ptr<vector<DescribeUserInfoInChannelResponseBodyProperty>> property_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
