// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeComputeResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComputeResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComputeResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComputeResourceResponseBody() = default ;
    DescribeComputeResourceResponseBody(const DescribeComputeResourceResponseBody &) = default ;
    DescribeComputeResourceResponseBody(DescribeComputeResourceResponseBody &&) = default ;
    DescribeComputeResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComputeResourceResponseBody() = default ;
    DescribeComputeResourceResponseBody& operator=(const DescribeComputeResourceResponseBody &) = default ;
    DescribeComputeResourceResponseBody& operator=(DescribeComputeResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComputeResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComputeResource& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayValue, displayValue_);
        DARABONBA_PTR_TO_JSON(RealValue, realValue_);
      };
      friend void from_json(const Darabonba::Json& j, ComputeResource& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayValue, displayValue_);
        DARABONBA_PTR_FROM_JSON(RealValue, realValue_);
      };
      ComputeResource() = default ;
      ComputeResource(const ComputeResource &) = default ;
      ComputeResource(ComputeResource &&) = default ;
      ComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComputeResource() = default ;
      ComputeResource& operator=(const ComputeResource &) = default ;
      ComputeResource& operator=(ComputeResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayValue_ == nullptr
        && this->realValue_ == nullptr; };
      // displayValue Field Functions 
      bool hasDisplayValue() const { return this->displayValue_ != nullptr;};
      void deleteDisplayValue() { this->displayValue_ = nullptr;};
      inline string getDisplayValue() const { DARABONBA_PTR_GET_DEFAULT(displayValue_, "") };
      inline ComputeResource& setDisplayValue(string displayValue) { DARABONBA_PTR_SET_VALUE(displayValue_, displayValue) };


      // realValue Field Functions 
      bool hasRealValue() const { return this->realValue_ != nullptr;};
      void deleteRealValue() { this->realValue_ = nullptr;};
      inline string getRealValue() const { DARABONBA_PTR_GET_DEFAULT(realValue_, "") };
      inline ComputeResource& setRealValue(string realValue) { DARABONBA_PTR_SET_VALUE(realValue_, realValue) };


    protected:
      // The specifications of computing resources displayed in the console.
      shared_ptr<string> displayValue_ {};
      // The actual specifications of computing resources.
      shared_ptr<string> realValue_ {};
    };

    virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->requestId_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const vector<DescribeComputeResourceResponseBody::ComputeResource> & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, vector<DescribeComputeResourceResponseBody::ComputeResource>) };
    inline vector<DescribeComputeResourceResponseBody::ComputeResource> getComputeResource() { DARABONBA_PTR_GET(computeResource_, vector<DescribeComputeResourceResponseBody::ComputeResource>) };
    inline DescribeComputeResourceResponseBody& setComputeResource(const vector<DescribeComputeResourceResponseBody::ComputeResource> & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline DescribeComputeResourceResponseBody& setComputeResource(vector<DescribeComputeResourceResponseBody::ComputeResource> && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComputeResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried specifications of computing resources.
    shared_ptr<vector<DescribeComputeResourceResponseBody::ComputeResource>> computeResource_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
