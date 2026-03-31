// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserTraffic, userTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserTraffic, userTraffic_);
    };
    DescribeUserTrafficResponseBody() = default ;
    DescribeUserTrafficResponseBody(const DescribeUserTrafficResponseBody &) = default ;
    DescribeUserTrafficResponseBody(DescribeUserTrafficResponseBody &&) = default ;
    DescribeUserTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserTrafficResponseBody() = default ;
    DescribeUserTrafficResponseBody& operator=(const DescribeUserTrafficResponseBody &) = default ;
    DescribeUserTrafficResponseBody& operator=(DescribeUserTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserTraffic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserTraffic& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Pv, pv_);
      };
      friend void from_json(const Darabonba::Json& j, UserTraffic& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Pv, pv_);
      };
      UserTraffic() = default ;
      UserTraffic(const UserTraffic &) = default ;
      UserTraffic(UserTraffic &&) = default ;
      UserTraffic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserTraffic() = default ;
      UserTraffic& operator=(const UserTraffic &) = default ;
      UserTraffic& operator=(UserTraffic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->index_ == nullptr
        && this->pv_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline UserTraffic& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // pv Field Functions 
      bool hasPv() const { return this->pv_ != nullptr;};
      void deletePv() { this->pv_ = nullptr;};
      inline int64_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
      inline UserTraffic& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    protected:
      shared_ptr<int64_t> index_ {};
      shared_ptr<int64_t> pv_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userTraffic_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userTraffic Field Functions 
    bool hasUserTraffic() const { return this->userTraffic_ != nullptr;};
    void deleteUserTraffic() { this->userTraffic_ = nullptr;};
    inline const vector<DescribeUserTrafficResponseBody::UserTraffic> & getUserTraffic() const { DARABONBA_PTR_GET_CONST(userTraffic_, vector<DescribeUserTrafficResponseBody::UserTraffic>) };
    inline vector<DescribeUserTrafficResponseBody::UserTraffic> getUserTraffic() { DARABONBA_PTR_GET(userTraffic_, vector<DescribeUserTrafficResponseBody::UserTraffic>) };
    inline DescribeUserTrafficResponseBody& setUserTraffic(const vector<DescribeUserTrafficResponseBody::UserTraffic> & userTraffic) { DARABONBA_PTR_SET_VALUE(userTraffic_, userTraffic) };
    inline DescribeUserTrafficResponseBody& setUserTraffic(vector<DescribeUserTrafficResponseBody::UserTraffic> && userTraffic) { DARABONBA_PTR_SET_RVALUE(userTraffic_, userTraffic) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeUserTrafficResponseBody::UserTraffic>> userTraffic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
