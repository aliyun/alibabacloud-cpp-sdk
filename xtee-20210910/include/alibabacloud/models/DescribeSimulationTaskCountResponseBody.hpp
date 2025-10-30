// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMULATIONTASKCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMULATIONTASKCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSimulationTaskCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimulationTaskCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimulationTaskCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeSimulationTaskCountResponseBody() = default ;
    DescribeSimulationTaskCountResponseBody(const DescribeSimulationTaskCountResponseBody &) = default ;
    DescribeSimulationTaskCountResponseBody(DescribeSimulationTaskCountResponseBody &&) = default ;
    DescribeSimulationTaskCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimulationTaskCountResponseBody() = default ;
    DescribeSimulationTaskCountResponseBody& operator=(const DescribeSimulationTaskCountResponseBody &) = default ;
    DescribeSimulationTaskCountResponseBody& operator=(DescribeSimulationTaskCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSimulationTaskCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline bool resultObject() const { DARABONBA_PTR_GET_DEFAULT(resultObject_, false) };
    inline DescribeSimulationTaskCountResponseBody& setResultObject(bool resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Return object
    std::shared_ptr<bool> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
