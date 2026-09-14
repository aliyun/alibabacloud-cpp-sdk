// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VersionSuggestion, versionSuggestion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VersionSuggestion, versionSuggestion_);
    };
    DescribeDBVersionResponseBody() = default ;
    DescribeDBVersionResponseBody(const DescribeDBVersionResponseBody &) = default ;
    DescribeDBVersionResponseBody(DescribeDBVersionResponseBody &&) = default ;
    DescribeDBVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBVersionResponseBody() = default ;
    DescribeDBVersionResponseBody& operator=(const DescribeDBVersionResponseBody &) = default ;
    DescribeDBVersionResponseBody& operator=(DescribeDBVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->versionSuggestion_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versionSuggestion Field Functions 
    bool hasVersionSuggestion() const { return this->versionSuggestion_ != nullptr;};
    void deleteVersionSuggestion() { this->versionSuggestion_ = nullptr;};
    inline string getVersionSuggestion() const { DARABONBA_PTR_GET_DEFAULT(versionSuggestion_, "") };
    inline DescribeDBVersionResponseBody& setVersionSuggestion(string versionSuggestion) { DARABONBA_PTR_SET_VALUE(versionSuggestion_, versionSuggestion) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The recommended upgrade version in the format of "major version,minor version" (separated by a comma). The first value is the target version for major engine version upgrade, and the second value is the target version for minor engine version update.
    shared_ptr<string> versionSuggestion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
