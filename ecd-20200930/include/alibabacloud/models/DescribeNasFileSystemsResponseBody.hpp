// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNASFileSystemsResponseBodyFileSystems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNASFileSystemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNASFileSystemsResponseBody() = default ;
    DescribeNASFileSystemsResponseBody(const DescribeNASFileSystemsResponseBody &) = default ;
    DescribeNASFileSystemsResponseBody(DescribeNASFileSystemsResponseBody &&) = default ;
    DescribeNASFileSystemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASFileSystemsResponseBody() = default ;
    DescribeNASFileSystemsResponseBody& operator=(const DescribeNASFileSystemsResponseBody &) = default ;
    DescribeNASFileSystemsResponseBody& operator=(DescribeNASFileSystemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystems_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // fileSystems Field Functions 
    bool hasFileSystems() const { return this->fileSystems_ != nullptr;};
    void deleteFileSystems() { this->fileSystems_ = nullptr;};
    inline const vector<DescribeNASFileSystemsResponseBodyFileSystems> & fileSystems() const { DARABONBA_PTR_GET_CONST(fileSystems_, vector<DescribeNASFileSystemsResponseBodyFileSystems>) };
    inline vector<DescribeNASFileSystemsResponseBodyFileSystems> fileSystems() { DARABONBA_PTR_GET(fileSystems_, vector<DescribeNASFileSystemsResponseBodyFileSystems>) };
    inline DescribeNASFileSystemsResponseBody& setFileSystems(const vector<DescribeNASFileSystemsResponseBodyFileSystems> & fileSystems) { DARABONBA_PTR_SET_VALUE(fileSystems_, fileSystems) };
    inline DescribeNASFileSystemsResponseBody& setFileSystems(vector<DescribeNASFileSystemsResponseBodyFileSystems> && fileSystems) { DARABONBA_PTR_SET_RVALUE(fileSystems_, fileSystems) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNASFileSystemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNASFileSystemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The NAS file systems.
    std::shared_ptr<vector<DescribeNASFileSystemsResponseBodyFileSystems>> fileSystems_ = nullptr;
    // The token that determines the start point of the next query. This parameter is empty if no additional results exist.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
