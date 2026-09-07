// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADUSERSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADUSERSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class GetAdUsersCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdUsersCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdUserCount, adUserCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdUsersCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdUserCount, adUserCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAdUsersCountResponseBody() = default ;
    GetAdUsersCountResponseBody(const GetAdUsersCountResponseBody &) = default ;
    GetAdUsersCountResponseBody(GetAdUsersCountResponseBody &&) = default ;
    GetAdUsersCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdUsersCountResponseBody() = default ;
    GetAdUsersCountResponseBody& operator=(const GetAdUsersCountResponseBody &) = default ;
    GetAdUsersCountResponseBody& operator=(GetAdUsersCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adUserCount_ == nullptr
        && this->requestId_ == nullptr; };
    // adUserCount Field Functions 
    bool hasAdUserCount() const { return this->adUserCount_ != nullptr;};
    void deleteAdUserCount() { this->adUserCount_ = nullptr;};
    inline int32_t getAdUserCount() const { DARABONBA_PTR_GET_DEFAULT(adUserCount_, 0) };
    inline GetAdUsersCountResponseBody& setAdUserCount(int32_t adUserCount) { DARABONBA_PTR_SET_VALUE(adUserCount_, adUserCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAdUsersCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> adUserCount_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
