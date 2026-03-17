// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSmartAccessGatewayVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmartAccessGatewayVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartAGVersions, smartAGVersions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmartAccessGatewayVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartAGVersions, smartAGVersions_);
    };
    DescribeSmartAccessGatewayVersionsResponseBody() = default ;
    DescribeSmartAccessGatewayVersionsResponseBody(const DescribeSmartAccessGatewayVersionsResponseBody &) = default ;
    DescribeSmartAccessGatewayVersionsResponseBody(DescribeSmartAccessGatewayVersionsResponseBody &&) = default ;
    DescribeSmartAccessGatewayVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmartAccessGatewayVersionsResponseBody() = default ;
    DescribeSmartAccessGatewayVersionsResponseBody& operator=(const DescribeSmartAccessGatewayVersionsResponseBody &) = default ;
    DescribeSmartAccessGatewayVersionsResponseBody& operator=(DescribeSmartAccessGatewayVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmartAGVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmartAGVersions& obj) { 
        DARABONBA_PTR_TO_JSON(SmartAGVersion, smartAGVersion_);
      };
      friend void from_json(const Darabonba::Json& j, SmartAGVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(SmartAGVersion, smartAGVersion_);
      };
      SmartAGVersions() = default ;
      SmartAGVersions(const SmartAGVersions &) = default ;
      SmartAGVersions(SmartAGVersions &&) = default ;
      SmartAGVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmartAGVersions() = default ;
      SmartAGVersions& operator=(const SmartAGVersions &) = default ;
      SmartAGVersions& operator=(SmartAGVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SmartAGVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SmartAGVersion& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
          DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        };
        friend void from_json(const Darabonba::Json& j, SmartAGVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
          DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        };
        SmartAGVersion() = default ;
        SmartAGVersion(const SmartAGVersion &) = default ;
        SmartAGVersion(SmartAGVersion &&) = default ;
        SmartAGVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SmartAGVersion() = default ;
        SmartAGVersion& operator=(const SmartAGVersion &) = default ;
        SmartAGVersion& operator=(SmartAGVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->type_ == nullptr && this->versionCode_ == nullptr && this->versionName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SmartAGVersion& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SmartAGVersion& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // versionCode Field Functions 
        bool hasVersionCode() const { return this->versionCode_ != nullptr;};
        void deleteVersionCode() { this->versionCode_ = nullptr;};
        inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
        inline SmartAGVersion& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


        // versionName Field Functions 
        bool hasVersionName() const { return this->versionName_ != nullptr;};
        void deleteVersionName() { this->versionName_ = nullptr;};
        inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
        inline SmartAGVersion& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> versionCode_ {};
        shared_ptr<string> versionName_ {};
      };

      virtual bool empty() const override { return this->smartAGVersion_ == nullptr; };
      // smartAGVersion Field Functions 
      bool hasSmartAGVersion() const { return this->smartAGVersion_ != nullptr;};
      void deleteSmartAGVersion() { this->smartAGVersion_ = nullptr;};
      inline const vector<SmartAGVersions::SmartAGVersion> & getSmartAGVersion() const { DARABONBA_PTR_GET_CONST(smartAGVersion_, vector<SmartAGVersions::SmartAGVersion>) };
      inline vector<SmartAGVersions::SmartAGVersion> getSmartAGVersion() { DARABONBA_PTR_GET(smartAGVersion_, vector<SmartAGVersions::SmartAGVersion>) };
      inline SmartAGVersions& setSmartAGVersion(const vector<SmartAGVersions::SmartAGVersion> & smartAGVersion) { DARABONBA_PTR_SET_VALUE(smartAGVersion_, smartAGVersion) };
      inline SmartAGVersions& setSmartAGVersion(vector<SmartAGVersions::SmartAGVersion> && smartAGVersion) { DARABONBA_PTR_SET_RVALUE(smartAGVersion_, smartAGVersion) };


    protected:
      shared_ptr<vector<SmartAGVersions::SmartAGVersion>> smartAGVersion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->smartAGVersions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSmartAccessGatewayVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartAGVersions Field Functions 
    bool hasSmartAGVersions() const { return this->smartAGVersions_ != nullptr;};
    void deleteSmartAGVersions() { this->smartAGVersions_ = nullptr;};
    inline const DescribeSmartAccessGatewayVersionsResponseBody::SmartAGVersions & getSmartAGVersions() const { DARABONBA_PTR_GET_CONST(smartAGVersions_, DescribeSmartAccessGatewayVersionsResponseBody::SmartAGVersions) };
    inline DescribeSmartAccessGatewayVersionsResponseBody::SmartAGVersions getSmartAGVersions() { DARABONBA_PTR_GET(smartAGVersions_, DescribeSmartAccessGatewayVersionsResponseBody::SmartAGVersions) };
    inline DescribeSmartAccessGatewayVersionsResponseBody& setSmartAGVersions(const DescribeSmartAccessGatewayVersionsResponseBody::SmartAGVersions & smartAGVersions) { DARABONBA_PTR_SET_VALUE(smartAGVersions_, smartAGVersions) };
    inline DescribeSmartAccessGatewayVersionsResponseBody& setSmartAGVersions(DescribeSmartAccessGatewayVersionsResponseBody::SmartAGVersions && smartAGVersions) { DARABONBA_PTR_SET_RVALUE(smartAGVersions_, smartAGVersions) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeSmartAccessGatewayVersionsResponseBody::SmartAGVersions> smartAGVersions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
