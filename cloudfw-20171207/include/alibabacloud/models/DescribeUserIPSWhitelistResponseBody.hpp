// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERIPSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERIPSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserIPSWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserIPSWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Whitelists, ipv6Whitelists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Whitelists, whitelists_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserIPSWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Whitelists, ipv6Whitelists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Whitelists, whitelists_);
    };
    DescribeUserIPSWhitelistResponseBody() = default ;
    DescribeUserIPSWhitelistResponseBody(const DescribeUserIPSWhitelistResponseBody &) = default ;
    DescribeUserIPSWhitelistResponseBody(DescribeUserIPSWhitelistResponseBody &&) = default ;
    DescribeUserIPSWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserIPSWhitelistResponseBody() = default ;
    DescribeUserIPSWhitelistResponseBody& operator=(const DescribeUserIPSWhitelistResponseBody &) = default ;
    DescribeUserIPSWhitelistResponseBody& operator=(DescribeUserIPSWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Whitelists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Whitelists& obj) { 
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(ListType, listType_);
        DARABONBA_PTR_TO_JSON(ListValue, listValue_);
        DARABONBA_PTR_TO_JSON(WhiteListValue, whiteListValue_);
        DARABONBA_PTR_TO_JSON(WhiteType, whiteType_);
      };
      friend void from_json(const Darabonba::Json& j, Whitelists& obj) { 
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(ListType, listType_);
        DARABONBA_PTR_FROM_JSON(ListValue, listValue_);
        DARABONBA_PTR_FROM_JSON(WhiteListValue, whiteListValue_);
        DARABONBA_PTR_FROM_JSON(WhiteType, whiteType_);
      };
      Whitelists() = default ;
      Whitelists(const Whitelists &) = default ;
      Whitelists(Whitelists &&) = default ;
      Whitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Whitelists() = default ;
      Whitelists& operator=(const Whitelists &) = default ;
      Whitelists& operator=(Whitelists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->direction_ == nullptr
        && this->listType_ == nullptr && this->listValue_ == nullptr && this->whiteListValue_ == nullptr && this->whiteType_ == nullptr; };
      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline int64_t getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, 0L) };
      inline Whitelists& setDirection(int64_t direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // listType Field Functions 
      bool hasListType() const { return this->listType_ != nullptr;};
      void deleteListType() { this->listType_ = nullptr;};
      inline int64_t getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, 0L) };
      inline Whitelists& setListType(int64_t listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


      // listValue Field Functions 
      bool hasListValue() const { return this->listValue_ != nullptr;};
      void deleteListValue() { this->listValue_ = nullptr;};
      inline string getListValue() const { DARABONBA_PTR_GET_DEFAULT(listValue_, "") };
      inline Whitelists& setListValue(string listValue) { DARABONBA_PTR_SET_VALUE(listValue_, listValue) };


      // whiteListValue Field Functions 
      bool hasWhiteListValue() const { return this->whiteListValue_ != nullptr;};
      void deleteWhiteListValue() { this->whiteListValue_ = nullptr;};
      inline const vector<string> & getWhiteListValue() const { DARABONBA_PTR_GET_CONST(whiteListValue_, vector<string>) };
      inline vector<string> getWhiteListValue() { DARABONBA_PTR_GET(whiteListValue_, vector<string>) };
      inline Whitelists& setWhiteListValue(const vector<string> & whiteListValue) { DARABONBA_PTR_SET_VALUE(whiteListValue_, whiteListValue) };
      inline Whitelists& setWhiteListValue(vector<string> && whiteListValue) { DARABONBA_PTR_SET_RVALUE(whiteListValue_, whiteListValue) };


      // whiteType Field Functions 
      bool hasWhiteType() const { return this->whiteType_ != nullptr;};
      void deleteWhiteType() { this->whiteType_ = nullptr;};
      inline int64_t getWhiteType() const { DARABONBA_PTR_GET_DEFAULT(whiteType_, 0L) };
      inline Whitelists& setWhiteType(int64_t whiteType) { DARABONBA_PTR_SET_VALUE(whiteType_, whiteType) };


    protected:
      shared_ptr<int64_t> direction_ {};
      shared_ptr<int64_t> listType_ {};
      shared_ptr<string> listValue_ {};
      shared_ptr<vector<string>> whiteListValue_ {};
      shared_ptr<int64_t> whiteType_ {};
    };

    class Ipv6Whitelists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6Whitelists& obj) { 
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(ListType, listType_);
        DARABONBA_PTR_TO_JSON(ListValue, listValue_);
        DARABONBA_PTR_TO_JSON(WhiteListValue, whiteListValue_);
        DARABONBA_PTR_TO_JSON(WhiteType, whiteType_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6Whitelists& obj) { 
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(ListType, listType_);
        DARABONBA_PTR_FROM_JSON(ListValue, listValue_);
        DARABONBA_PTR_FROM_JSON(WhiteListValue, whiteListValue_);
        DARABONBA_PTR_FROM_JSON(WhiteType, whiteType_);
      };
      Ipv6Whitelists() = default ;
      Ipv6Whitelists(const Ipv6Whitelists &) = default ;
      Ipv6Whitelists(Ipv6Whitelists &&) = default ;
      Ipv6Whitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6Whitelists() = default ;
      Ipv6Whitelists& operator=(const Ipv6Whitelists &) = default ;
      Ipv6Whitelists& operator=(Ipv6Whitelists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->direction_ == nullptr
        && this->listType_ == nullptr && this->listValue_ == nullptr && this->whiteListValue_ == nullptr && this->whiteType_ == nullptr; };
      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline int64_t getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, 0L) };
      inline Ipv6Whitelists& setDirection(int64_t direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // listType Field Functions 
      bool hasListType() const { return this->listType_ != nullptr;};
      void deleteListType() { this->listType_ = nullptr;};
      inline int64_t getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, 0L) };
      inline Ipv6Whitelists& setListType(int64_t listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


      // listValue Field Functions 
      bool hasListValue() const { return this->listValue_ != nullptr;};
      void deleteListValue() { this->listValue_ = nullptr;};
      inline string getListValue() const { DARABONBA_PTR_GET_DEFAULT(listValue_, "") };
      inline Ipv6Whitelists& setListValue(string listValue) { DARABONBA_PTR_SET_VALUE(listValue_, listValue) };


      // whiteListValue Field Functions 
      bool hasWhiteListValue() const { return this->whiteListValue_ != nullptr;};
      void deleteWhiteListValue() { this->whiteListValue_ = nullptr;};
      inline const vector<string> & getWhiteListValue() const { DARABONBA_PTR_GET_CONST(whiteListValue_, vector<string>) };
      inline vector<string> getWhiteListValue() { DARABONBA_PTR_GET(whiteListValue_, vector<string>) };
      inline Ipv6Whitelists& setWhiteListValue(const vector<string> & whiteListValue) { DARABONBA_PTR_SET_VALUE(whiteListValue_, whiteListValue) };
      inline Ipv6Whitelists& setWhiteListValue(vector<string> && whiteListValue) { DARABONBA_PTR_SET_RVALUE(whiteListValue_, whiteListValue) };


      // whiteType Field Functions 
      bool hasWhiteType() const { return this->whiteType_ != nullptr;};
      void deleteWhiteType() { this->whiteType_ = nullptr;};
      inline int64_t getWhiteType() const { DARABONBA_PTR_GET_DEFAULT(whiteType_, 0L) };
      inline Ipv6Whitelists& setWhiteType(int64_t whiteType) { DARABONBA_PTR_SET_VALUE(whiteType_, whiteType) };


    protected:
      shared_ptr<int64_t> direction_ {};
      shared_ptr<int64_t> listType_ {};
      shared_ptr<string> listValue_ {};
      shared_ptr<vector<string>> whiteListValue_ {};
      shared_ptr<int64_t> whiteType_ {};
    };

    virtual bool empty() const override { return this->ipv6Whitelists_ == nullptr
        && this->requestId_ == nullptr && this->whitelists_ == nullptr; };
    // ipv6Whitelists Field Functions 
    bool hasIpv6Whitelists() const { return this->ipv6Whitelists_ != nullptr;};
    void deleteIpv6Whitelists() { this->ipv6Whitelists_ = nullptr;};
    inline const vector<DescribeUserIPSWhitelistResponseBody::Ipv6Whitelists> & getIpv6Whitelists() const { DARABONBA_PTR_GET_CONST(ipv6Whitelists_, vector<DescribeUserIPSWhitelistResponseBody::Ipv6Whitelists>) };
    inline vector<DescribeUserIPSWhitelistResponseBody::Ipv6Whitelists> getIpv6Whitelists() { DARABONBA_PTR_GET(ipv6Whitelists_, vector<DescribeUserIPSWhitelistResponseBody::Ipv6Whitelists>) };
    inline DescribeUserIPSWhitelistResponseBody& setIpv6Whitelists(const vector<DescribeUserIPSWhitelistResponseBody::Ipv6Whitelists> & ipv6Whitelists) { DARABONBA_PTR_SET_VALUE(ipv6Whitelists_, ipv6Whitelists) };
    inline DescribeUserIPSWhitelistResponseBody& setIpv6Whitelists(vector<DescribeUserIPSWhitelistResponseBody::Ipv6Whitelists> && ipv6Whitelists) { DARABONBA_PTR_SET_RVALUE(ipv6Whitelists_, ipv6Whitelists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserIPSWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // whitelists Field Functions 
    bool hasWhitelists() const { return this->whitelists_ != nullptr;};
    void deleteWhitelists() { this->whitelists_ = nullptr;};
    inline const vector<DescribeUserIPSWhitelistResponseBody::Whitelists> & getWhitelists() const { DARABONBA_PTR_GET_CONST(whitelists_, vector<DescribeUserIPSWhitelistResponseBody::Whitelists>) };
    inline vector<DescribeUserIPSWhitelistResponseBody::Whitelists> getWhitelists() { DARABONBA_PTR_GET(whitelists_, vector<DescribeUserIPSWhitelistResponseBody::Whitelists>) };
    inline DescribeUserIPSWhitelistResponseBody& setWhitelists(const vector<DescribeUserIPSWhitelistResponseBody::Whitelists> & whitelists) { DARABONBA_PTR_SET_VALUE(whitelists_, whitelists) };
    inline DescribeUserIPSWhitelistResponseBody& setWhitelists(vector<DescribeUserIPSWhitelistResponseBody::Whitelists> && whitelists) { DARABONBA_PTR_SET_RVALUE(whitelists_, whitelists) };


  protected:
    shared_ptr<vector<DescribeUserIPSWhitelistResponseBody::Ipv6Whitelists>> ipv6Whitelists_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeUserIPSWhitelistResponseBody::Whitelists>> whitelists_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
