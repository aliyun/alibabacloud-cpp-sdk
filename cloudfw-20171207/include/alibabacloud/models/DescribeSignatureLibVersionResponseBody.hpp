// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURELIBVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURELIBVERSIONRESPONSEBODY_HPP_
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
  class DescribeSignatureLibVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignatureLibVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignatureLibVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeSignatureLibVersionResponseBody() = default ;
    DescribeSignatureLibVersionResponseBody(const DescribeSignatureLibVersionResponseBody &) = default ;
    DescribeSignatureLibVersionResponseBody(DescribeSignatureLibVersionResponseBody &&) = default ;
    DescribeSignatureLibVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignatureLibVersionResponseBody() = default ;
    DescribeSignatureLibVersionResponseBody& operator=(const DescribeSignatureLibVersionResponseBody &) = default ;
    DescribeSignatureLibVersionResponseBody& operator=(DescribeSignatureLibVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Version : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Version& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Version& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Version() = default ;
      Version(const Version &) = default ;
      Version(Version &&) = default ;
      Version(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Version() = default ;
      Version& operator=(const Version &) = default ;
      Version& operator=(Version &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->updateTime_ == nullptr && this->version_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Version& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Version& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Version& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The type.
      // 
      // Valid values:
      // 
      // *   ips
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     Basic Rules and Virtual Patching
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   intelligence
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     Threat Intelligence
      // 
      //     <!-- -->
      shared_ptr<string> type_ {};
      // Update time.
      shared_ptr<int64_t> updateTime_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->version_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSignatureLibVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSignatureLibVersionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const vector<DescribeSignatureLibVersionResponseBody::Version> & getVersion() const { DARABONBA_PTR_GET_CONST(version_, vector<DescribeSignatureLibVersionResponseBody::Version>) };
    inline vector<DescribeSignatureLibVersionResponseBody::Version> getVersion() { DARABONBA_PTR_GET(version_, vector<DescribeSignatureLibVersionResponseBody::Version>) };
    inline DescribeSignatureLibVersionResponseBody& setVersion(const vector<DescribeSignatureLibVersionResponseBody::Version> & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline DescribeSignatureLibVersionResponseBody& setVersion(vector<DescribeSignatureLibVersionResponseBody::Version> && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The version information.
    shared_ptr<vector<DescribeSignatureLibVersionResponseBody::Version>> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
