// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_ANY_TO_JSON(ProfileSummary, profileSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_ANY_FROM_JSON(ProfileSummary, profileSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProfileResponseBody() = default ;
    DescribeProfileResponseBody(const DescribeProfileResponseBody &) = default ;
    DescribeProfileResponseBody(DescribeProfileResponseBody &&) = default ;
    DescribeProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProfileResponseBody() = default ;
    DescribeProfileResponseBody& operator=(const DescribeProfileResponseBody &) = default ;
    DescribeProfileResponseBody& operator=(DescribeProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->profile_ == nullptr
        && this->profileSummary_ == nullptr && this->requestId_ == nullptr; };
    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeProfileResponseBody& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // profileSummary Field Functions 
    bool hasProfileSummary() const { return this->profileSummary_ != nullptr;};
    void deleteProfileSummary() { this->profileSummary_ = nullptr;};
    inline     const Darabonba::Json & getProfileSummary() const { DARABONBA_GET(profileSummary_) };
    Darabonba::Json & getProfileSummary() { DARABONBA_GET(profileSummary_) };
    inline DescribeProfileResponseBody& setProfileSummary(const Darabonba::Json & profileSummary) { DARABONBA_SET_VALUE(profileSummary_, profileSummary) };
    inline DescribeProfileResponseBody& setProfileSummary(Darabonba::Json && profileSummary) { DARABONBA_SET_RVALUE(profileSummary_, profileSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The profile text. This parameter is not yet supported.
    shared_ptr<string> profile_ {};
    // The profile summary.
    Darabonba::Json profileSummary_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
