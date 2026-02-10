// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKINCLUSIVEFILETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKINCLUSIVEFILETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockInclusiveFileTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockInclusiveFileTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InclusiveFileType, inclusiveFileType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockInclusiveFileTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InclusiveFileType, inclusiveFileType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockInclusiveFileTypeResponseBody() = default ;
    DescribeWebLockInclusiveFileTypeResponseBody(const DescribeWebLockInclusiveFileTypeResponseBody &) = default ;
    DescribeWebLockInclusiveFileTypeResponseBody(DescribeWebLockInclusiveFileTypeResponseBody &&) = default ;
    DescribeWebLockInclusiveFileTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockInclusiveFileTypeResponseBody() = default ;
    DescribeWebLockInclusiveFileTypeResponseBody& operator=(const DescribeWebLockInclusiveFileTypeResponseBody &) = default ;
    DescribeWebLockInclusiveFileTypeResponseBody& operator=(DescribeWebLockInclusiveFileTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inclusiveFileType_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // inclusiveFileType Field Functions 
    bool hasInclusiveFileType() const { return this->inclusiveFileType_ != nullptr;};
    void deleteInclusiveFileType() { this->inclusiveFileType_ = nullptr;};
    inline const vector<string> & getInclusiveFileType() const { DARABONBA_PTR_GET_CONST(inclusiveFileType_, vector<string>) };
    inline vector<string> getInclusiveFileType() { DARABONBA_PTR_GET(inclusiveFileType_, vector<string>) };
    inline DescribeWebLockInclusiveFileTypeResponseBody& setInclusiveFileType(const vector<string> & inclusiveFileType) { DARABONBA_PTR_SET_VALUE(inclusiveFileType_, inclusiveFileType) };
    inline DescribeWebLockInclusiveFileTypeResponseBody& setInclusiveFileType(vector<string> && inclusiveFileType) { DARABONBA_PTR_SET_RVALUE(inclusiveFileType_, inclusiveFileType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockInclusiveFileTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockInclusiveFileTypeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the types of files that can be protected by web tamper proofing.
    shared_ptr<vector<string>> inclusiveFileType_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of the types of files that can be protected by web tamper proofing.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
