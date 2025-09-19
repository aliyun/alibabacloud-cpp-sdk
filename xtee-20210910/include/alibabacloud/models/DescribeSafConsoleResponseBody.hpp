// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(bizData, bizData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(bizData, bizData_);
    };
    DescribeSafConsoleResponseBody() = default ;
    DescribeSafConsoleResponseBody(const DescribeSafConsoleResponseBody &) = default ;
    DescribeSafConsoleResponseBody(DescribeSafConsoleResponseBody &&) = default ;
    DescribeSafConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafConsoleResponseBody() = default ;
    DescribeSafConsoleResponseBody& operator=(const DescribeSafConsoleResponseBody &) = default ;
    DescribeSafConsoleResponseBody& operator=(DescribeSafConsoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->bizData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSafConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // bizData Field Functions 
    bool hasBizData() const { return this->bizData_ != nullptr;};
    void deleteBizData() { this->bizData_ = nullptr;};
    inline const vector<string> & bizData() const { DARABONBA_PTR_GET_CONST(bizData_, vector<string>) };
    inline vector<string> bizData() { DARABONBA_PTR_GET(bizData_, vector<string>) };
    inline DescribeSafConsoleResponseBody& setBizData(const vector<string> & bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };
    inline DescribeSafConsoleResponseBody& setBizData(vector<string> && bizData) { DARABONBA_PTR_SET_RVALUE(bizData_, bizData) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned result.
    std::shared_ptr<vector<string>> bizData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
