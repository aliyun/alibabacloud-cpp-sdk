// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERINFOINCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERINFOINCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Property : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Property& obj) { 
        DARABONBA_PTR_TO_JSON(Join, join_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Session, session_);
      };
      friend void from_json(const Darabonba::Json& j, Property& obj) { 
        DARABONBA_PTR_FROM_JSON(Join, join_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Session, session_);
      };
      Property() = default ;
      Property(const Property &) = default ;
      Property(Property &&) = default ;
      Property(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Property() = default ;
      Property& operator=(const Property &) = default ;
      Property& operator=(Property &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->join_ == nullptr
        && this->role_ == nullptr && this->session_ == nullptr; };
      // join Field Functions 
      bool hasJoin() const { return this->join_ != nullptr;};
      void deleteJoin() { this->join_ = nullptr;};
      inline int32_t getJoin() const { DARABONBA_PTR_GET_DEFAULT(join_, 0) };
      inline Property& setJoin(int32_t join) { DARABONBA_PTR_SET_VALUE(join_, join) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline int32_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
      inline Property& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // session Field Functions 
      bool hasSession() const { return this->session_ != nullptr;};
      void deleteSession() { this->session_ = nullptr;};
      inline string getSession() const { DARABONBA_PTR_GET_DEFAULT(session_, "") };
      inline Property& setSession(string session) { DARABONBA_PTR_SET_VALUE(session_, session) };


    protected:
      shared_ptr<int32_t> join_ {};
      shared_ptr<int32_t> role_ {};
      shared_ptr<string> session_ {};
    };

    virtual bool empty() const override { return this->isChannelExist_ == nullptr
        && this->isInChannel_ == nullptr && this->property_ == nullptr && this->requestId_ == nullptr && this->timestamp_ == nullptr; };
    // isChannelExist Field Functions 
    bool hasIsChannelExist() const { return this->isChannelExist_ != nullptr;};
    void deleteIsChannelExist() { this->isChannelExist_ = nullptr;};
    inline bool getIsChannelExist() const { DARABONBA_PTR_GET_DEFAULT(isChannelExist_, false) };
    inline DescribeUserInfoInChannelResponseBody& setIsChannelExist(bool isChannelExist) { DARABONBA_PTR_SET_VALUE(isChannelExist_, isChannelExist) };


    // isInChannel Field Functions 
    bool hasIsInChannel() const { return this->isInChannel_ != nullptr;};
    void deleteIsInChannel() { this->isInChannel_ = nullptr;};
    inline bool getIsInChannel() const { DARABONBA_PTR_GET_DEFAULT(isInChannel_, false) };
    inline DescribeUserInfoInChannelResponseBody& setIsInChannel(bool isInChannel) { DARABONBA_PTR_SET_VALUE(isInChannel_, isInChannel) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline const vector<DescribeUserInfoInChannelResponseBody::Property> & getProperty() const { DARABONBA_PTR_GET_CONST(property_, vector<DescribeUserInfoInChannelResponseBody::Property>) };
    inline vector<DescribeUserInfoInChannelResponseBody::Property> getProperty() { DARABONBA_PTR_GET(property_, vector<DescribeUserInfoInChannelResponseBody::Property>) };
    inline DescribeUserInfoInChannelResponseBody& setProperty(const vector<DescribeUserInfoInChannelResponseBody::Property> & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
    inline DescribeUserInfoInChannelResponseBody& setProperty(vector<DescribeUserInfoInChannelResponseBody::Property> && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserInfoInChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline DescribeUserInfoInChannelResponseBody& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<bool> isChannelExist_ {};
    shared_ptr<bool> isInChannel_ {};
    shared_ptr<vector<DescribeUserInfoInChannelResponseBody::Property>> property_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
