// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSERVERREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSERVERREGIONSRESPONSEBODY_HPP_
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
  class DescribeHybridCloudServerRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudServerRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudServerRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridCloudServerRegionsResponseBody() = default ;
    DescribeHybridCloudServerRegionsResponseBody(const DescribeHybridCloudServerRegionsResponseBody &) = default ;
    DescribeHybridCloudServerRegionsResponseBody(DescribeHybridCloudServerRegionsResponseBody &&) = default ;
    DescribeHybridCloudServerRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudServerRegionsResponseBody() = default ;
    DescribeHybridCloudServerRegionsResponseBody& operator=(const DescribeHybridCloudServerRegionsResponseBody &) = default ;
    DescribeHybridCloudServerRegionsResponseBody& operator=(DescribeHybridCloudServerRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Regions() = default ;
      Regions(const Regions &) = default ;
      Regions(Regions &&) = default ;
      Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Regions() = default ;
      Regions& operator=(const Regions &) = default ;
      Regions& operator=(Regions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Regions& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Regions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The code of the region.
      shared_ptr<int32_t> code_ {};
      // The name of the region.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<DescribeHybridCloudServerRegionsResponseBody::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<DescribeHybridCloudServerRegionsResponseBody::Regions>) };
    inline vector<DescribeHybridCloudServerRegionsResponseBody::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<DescribeHybridCloudServerRegionsResponseBody::Regions>) };
    inline DescribeHybridCloudServerRegionsResponseBody& setRegions(const vector<DescribeHybridCloudServerRegionsResponseBody::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeHybridCloudServerRegionsResponseBody& setRegions(vector<DescribeHybridCloudServerRegionsResponseBody::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudServerRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the regions.
    shared_ptr<vector<DescribeHybridCloudServerRegionsResponseBody::Regions>> regions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
