// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsNetLevelResponseBodyEnsNetLevels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnsNetLevels, ensNetLevels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnsNetLevels, ensNetLevels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsNetLevelResponseBody() = default ;
    DescribeEnsNetLevelResponseBody(const DescribeEnsNetLevelResponseBody &) = default ;
    DescribeEnsNetLevelResponseBody(DescribeEnsNetLevelResponseBody &&) = default ;
    DescribeEnsNetLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetLevelResponseBody() = default ;
    DescribeEnsNetLevelResponseBody& operator=(const DescribeEnsNetLevelResponseBody &) = default ;
    DescribeEnsNetLevelResponseBody& operator=(DescribeEnsNetLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->ensNetLevels_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnsNetLevelResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ensNetLevels Field Functions 
    bool hasEnsNetLevels() const { return this->ensNetLevels_ != nullptr;};
    void deleteEnsNetLevels() { this->ensNetLevels_ = nullptr;};
    inline const DescribeEnsNetLevelResponseBodyEnsNetLevels & ensNetLevels() const { DARABONBA_PTR_GET_CONST(ensNetLevels_, DescribeEnsNetLevelResponseBodyEnsNetLevels) };
    inline DescribeEnsNetLevelResponseBodyEnsNetLevels ensNetLevels() { DARABONBA_PTR_GET(ensNetLevels_, DescribeEnsNetLevelResponseBodyEnsNetLevels) };
    inline DescribeEnsNetLevelResponseBody& setEnsNetLevels(const DescribeEnsNetLevelResponseBodyEnsNetLevels & ensNetLevels) { DARABONBA_PTR_SET_VALUE(ensNetLevels_, ensNetLevels) };
    inline DescribeEnsNetLevelResponseBody& setEnsNetLevels(DescribeEnsNetLevelResponseBodyEnsNetLevels && ensNetLevels) { DARABONBA_PTR_SET_RVALUE(ensNetLevels_, ensNetLevels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsNetLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. A value of 0 indicates that the operation was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The network levels.
    std::shared_ptr<DescribeEnsNetLevelResponseBodyEnsNetLevels> ensNetLevels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
