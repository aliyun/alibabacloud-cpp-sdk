// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEENGINEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEENGINEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAvailableEngineVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableEngineVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EngineVersions, engineVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableEngineVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineVersions, engineVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableEngineVersionResponseBody() = default ;
    DescribeAvailableEngineVersionResponseBody(const DescribeAvailableEngineVersionResponseBody &) = default ;
    DescribeAvailableEngineVersionResponseBody(DescribeAvailableEngineVersionResponseBody &&) = default ;
    DescribeAvailableEngineVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableEngineVersionResponseBody() = default ;
    DescribeAvailableEngineVersionResponseBody& operator=(const DescribeAvailableEngineVersionResponseBody &) = default ;
    DescribeAvailableEngineVersionResponseBody& operator=(DescribeAvailableEngineVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EngineVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EngineVersions& obj) { 
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      };
      friend void from_json(const Darabonba::Json& j, EngineVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      };
      EngineVersions() = default ;
      EngineVersions(const EngineVersions &) = default ;
      EngineVersions(EngineVersions &&) = default ;
      EngineVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EngineVersions() = default ;
      EngineVersions& operator=(const EngineVersions &) = default ;
      EngineVersions& operator=(EngineVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->engineVersion_ == nullptr; };
      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline const vector<string> & getEngineVersion() const { DARABONBA_PTR_GET_CONST(engineVersion_, vector<string>) };
      inline vector<string> getEngineVersion() { DARABONBA_PTR_GET(engineVersion_, vector<string>) };
      inline EngineVersions& setEngineVersion(const vector<string> & engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };
      inline EngineVersions& setEngineVersion(vector<string> && engineVersion) { DARABONBA_PTR_SET_RVALUE(engineVersion_, engineVersion) };


    protected:
      shared_ptr<vector<string>> engineVersion_ {};
    };

    virtual bool empty() const override { return this->engineVersions_ == nullptr
        && this->requestId_ == nullptr; };
    // engineVersions Field Functions 
    bool hasEngineVersions() const { return this->engineVersions_ != nullptr;};
    void deleteEngineVersions() { this->engineVersions_ = nullptr;};
    inline const DescribeAvailableEngineVersionResponseBody::EngineVersions & getEngineVersions() const { DARABONBA_PTR_GET_CONST(engineVersions_, DescribeAvailableEngineVersionResponseBody::EngineVersions) };
    inline DescribeAvailableEngineVersionResponseBody::EngineVersions getEngineVersions() { DARABONBA_PTR_GET(engineVersions_, DescribeAvailableEngineVersionResponseBody::EngineVersions) };
    inline DescribeAvailableEngineVersionResponseBody& setEngineVersions(const DescribeAvailableEngineVersionResponseBody::EngineVersions & engineVersions) { DARABONBA_PTR_SET_VALUE(engineVersions_, engineVersions) };
    inline DescribeAvailableEngineVersionResponseBody& setEngineVersions(DescribeAvailableEngineVersionResponseBody::EngineVersions && engineVersions) { DARABONBA_PTR_SET_RVALUE(engineVersions_, engineVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableEngineVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of one or more engine versions to which an ApsaraDB for MongoDB instance can be upgraded.
    // 
    // >  An empty string is returned if the latest version is being used.
    shared_ptr<DescribeAvailableEngineVersionResponseBody::EngineVersions> engineVersions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
