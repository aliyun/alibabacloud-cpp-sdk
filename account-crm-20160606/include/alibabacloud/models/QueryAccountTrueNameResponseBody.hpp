// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTTRUENAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTTRUENAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountTrueNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountTrueNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountTrueNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAccountTrueNameResponseBody() = default ;
    QueryAccountTrueNameResponseBody(const QueryAccountTrueNameResponseBody &) = default ;
    QueryAccountTrueNameResponseBody(QueryAccountTrueNameResponseBody &&) = default ;
    QueryAccountTrueNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountTrueNameResponseBody() = default ;
    QueryAccountTrueNameResponseBody& operator=(const QueryAccountTrueNameResponseBody &) = default ;
    QueryAccountTrueNameResponseBody& operator=(QueryAccountTrueNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProfileInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProfileInfo& obj) { 
        DARABONBA_PTR_TO_JSON(TrueName, trueName_);
      };
      friend void from_json(const Darabonba::Json& j, ProfileInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(TrueName, trueName_);
      };
      ProfileInfo() = default ;
      ProfileInfo(const ProfileInfo &) = default ;
      ProfileInfo(ProfileInfo &&) = default ;
      ProfileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProfileInfo() = default ;
      ProfileInfo& operator=(const ProfileInfo &) = default ;
      ProfileInfo& operator=(ProfileInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->trueName_ == nullptr; };
      // trueName Field Functions 
      bool hasTrueName() const { return this->trueName_ != nullptr;};
      void deleteTrueName() { this->trueName_ = nullptr;};
      inline string getTrueName() const { DARABONBA_PTR_GET_DEFAULT(trueName_, "") };
      inline ProfileInfo& setTrueName(string trueName) { DARABONBA_PTR_SET_VALUE(trueName_, trueName) };


    protected:
      shared_ptr<string> trueName_ {};
    };

    virtual bool empty() const override { return this->profileInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // profileInfo Field Functions 
    bool hasProfileInfo() const { return this->profileInfo_ != nullptr;};
    void deleteProfileInfo() { this->profileInfo_ = nullptr;};
    inline const QueryAccountTrueNameResponseBody::ProfileInfo & getProfileInfo() const { DARABONBA_PTR_GET_CONST(profileInfo_, QueryAccountTrueNameResponseBody::ProfileInfo) };
    inline QueryAccountTrueNameResponseBody::ProfileInfo getProfileInfo() { DARABONBA_PTR_GET(profileInfo_, QueryAccountTrueNameResponseBody::ProfileInfo) };
    inline QueryAccountTrueNameResponseBody& setProfileInfo(const QueryAccountTrueNameResponseBody::ProfileInfo & profileInfo) { DARABONBA_PTR_SET_VALUE(profileInfo_, profileInfo) };
    inline QueryAccountTrueNameResponseBody& setProfileInfo(QueryAccountTrueNameResponseBody::ProfileInfo && profileInfo) { DARABONBA_PTR_SET_RVALUE(profileInfo_, profileInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountTrueNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryAccountTrueNameResponseBody::ProfileInfo> profileInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
