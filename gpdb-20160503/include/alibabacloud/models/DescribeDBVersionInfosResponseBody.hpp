// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBVERSIONINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBVERSIONINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBVersionInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBVersionInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VersionDetails, versionDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBVersionInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VersionDetails, versionDetails_);
    };
    DescribeDBVersionInfosResponseBody() = default ;
    DescribeDBVersionInfosResponseBody(const DescribeDBVersionInfosResponseBody &) = default ;
    DescribeDBVersionInfosResponseBody(DescribeDBVersionInfosResponseBody &&) = default ;
    DescribeDBVersionInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBVersionInfosResponseBody() = default ;
    DescribeDBVersionInfosResponseBody& operator=(const DescribeDBVersionInfosResponseBody &) = default ;
    DescribeDBVersionInfosResponseBody& operator=(DescribeDBVersionInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VersionDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VersionDetails& obj) { 
        DARABONBA_ANY_TO_JSON(Serverless, serverless_);
        DARABONBA_ANY_TO_JSON(StorageElastic, storageElastic_);
      };
      friend void from_json(const Darabonba::Json& j, VersionDetails& obj) { 
        DARABONBA_ANY_FROM_JSON(Serverless, serverless_);
        DARABONBA_ANY_FROM_JSON(StorageElastic, storageElastic_);
      };
      VersionDetails() = default ;
      VersionDetails(const VersionDetails &) = default ;
      VersionDetails(VersionDetails &&) = default ;
      VersionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VersionDetails() = default ;
      VersionDetails& operator=(const VersionDetails &) = default ;
      VersionDetails& operator=(VersionDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serverless_ == nullptr
        && this->storageElastic_ == nullptr; };
      // serverless Field Functions 
      bool hasServerless() const { return this->serverless_ != nullptr;};
      void deleteServerless() { this->serverless_ = nullptr;};
      inline       const Darabonba::Json & getServerless() const { DARABONBA_GET(serverless_) };
      Darabonba::Json & getServerless() { DARABONBA_GET(serverless_) };
      inline VersionDetails& setServerless(const Darabonba::Json & serverless) { DARABONBA_SET_VALUE(serverless_, serverless) };
      inline VersionDetails& setServerless(Darabonba::Json && serverless) { DARABONBA_SET_RVALUE(serverless_, serverless) };


      // storageElastic Field Functions 
      bool hasStorageElastic() const { return this->storageElastic_ != nullptr;};
      void deleteStorageElastic() { this->storageElastic_ = nullptr;};
      inline       const Darabonba::Json & getStorageElastic() const { DARABONBA_GET(storageElastic_) };
      Darabonba::Json & getStorageElastic() { DARABONBA_GET(storageElastic_) };
      inline VersionDetails& setStorageElastic(const Darabonba::Json & storageElastic) { DARABONBA_SET_VALUE(storageElastic_, storageElastic) };
      inline VersionDetails& setStorageElastic(Darabonba::Json && storageElastic) { DARABONBA_SET_RVALUE(storageElastic_, storageElastic) };


    protected:
      // The queried minor version information about the instance in Serverless mode.
      Darabonba::Json serverless_ {};
      // The queried minor version information about the instance in elastic storage mode.
      Darabonba::Json storageElastic_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->versionDetails_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBVersionInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versionDetails Field Functions 
    bool hasVersionDetails() const { return this->versionDetails_ != nullptr;};
    void deleteVersionDetails() { this->versionDetails_ = nullptr;};
    inline const DescribeDBVersionInfosResponseBody::VersionDetails & getVersionDetails() const { DARABONBA_PTR_GET_CONST(versionDetails_, DescribeDBVersionInfosResponseBody::VersionDetails) };
    inline DescribeDBVersionInfosResponseBody::VersionDetails getVersionDetails() { DARABONBA_PTR_GET(versionDetails_, DescribeDBVersionInfosResponseBody::VersionDetails) };
    inline DescribeDBVersionInfosResponseBody& setVersionDetails(const DescribeDBVersionInfosResponseBody::VersionDetails & versionDetails) { DARABONBA_PTR_SET_VALUE(versionDetails_, versionDetails) };
    inline DescribeDBVersionInfosResponseBody& setVersionDetails(DescribeDBVersionInfosResponseBody::VersionDetails && versionDetails) { DARABONBA_PTR_SET_RVALUE(versionDetails_, versionDetails) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried minor versions.
    shared_ptr<DescribeDBVersionInfosResponseBody::VersionDetails> versionDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
