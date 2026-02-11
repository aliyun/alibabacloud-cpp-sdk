// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACELOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACELOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class DescribeTraceLocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceLocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionConfigs, regionConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceLocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionConfigs, regionConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTraceLocationResponseBody() = default ;
    DescribeTraceLocationResponseBody(const DescribeTraceLocationResponseBody &) = default ;
    DescribeTraceLocationResponseBody(DescribeTraceLocationResponseBody &&) = default ;
    DescribeTraceLocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceLocationResponseBody() = default ;
    DescribeTraceLocationResponseBody& operator=(const DescribeTraceLocationResponseBody &) = default ;
    DescribeTraceLocationResponseBody& operator=(DescribeTraceLocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, RegionConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      RegionConfigs() = default ;
      RegionConfigs(const RegionConfigs &) = default ;
      RegionConfigs(RegionConfigs &&) = default ;
      RegionConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionConfigs() = default ;
      RegionConfigs& operator=(const RegionConfigs &) = default ;
      RegionConfigs& operator=(RegionConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionNo_ == nullptr
        && this->url_ == nullptr; };
      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline RegionConfigs& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline RegionConfigs& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->regionConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // regionConfigs Field Functions 
    bool hasRegionConfigs() const { return this->regionConfigs_ != nullptr;};
    void deleteRegionConfigs() { this->regionConfigs_ = nullptr;};
    inline const vector<DescribeTraceLocationResponseBody::RegionConfigs> & getRegionConfigs() const { DARABONBA_PTR_GET_CONST(regionConfigs_, vector<DescribeTraceLocationResponseBody::RegionConfigs>) };
    inline vector<DescribeTraceLocationResponseBody::RegionConfigs> getRegionConfigs() { DARABONBA_PTR_GET(regionConfigs_, vector<DescribeTraceLocationResponseBody::RegionConfigs>) };
    inline DescribeTraceLocationResponseBody& setRegionConfigs(const vector<DescribeTraceLocationResponseBody::RegionConfigs> & regionConfigs) { DARABONBA_PTR_SET_VALUE(regionConfigs_, regionConfigs) };
    inline DescribeTraceLocationResponseBody& setRegionConfigs(vector<DescribeTraceLocationResponseBody::RegionConfigs> && regionConfigs) { DARABONBA_PTR_SET_RVALUE(regionConfigs_, regionConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTraceLocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeTraceLocationResponseBody::RegionConfigs>> regionConfigs_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
