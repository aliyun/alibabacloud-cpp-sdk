// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDirectoriesResponseBodyDirectories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_TO_JSON(Directories, directories_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_FROM_JSON(Directories, directories_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDirectoriesResponseBody() = default ;
    DescribeDirectoriesResponseBody(const DescribeDirectoriesResponseBody &) = default ;
    DescribeDirectoriesResponseBody(DescribeDirectoriesResponseBody &&) = default ;
    DescribeDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirectoriesResponseBody() = default ;
    DescribeDirectoriesResponseBody& operator=(const DescribeDirectoriesResponseBody &) = default ;
    DescribeDirectoriesResponseBody& operator=(DescribeDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adHostname_ != nullptr
        && this->directories_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // adHostname Field Functions 
    bool hasAdHostname() const { return this->adHostname_ != nullptr;};
    void deleteAdHostname() { this->adHostname_ = nullptr;};
    inline string adHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
    inline DescribeDirectoriesResponseBody& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


    // directories Field Functions 
    bool hasDirectories() const { return this->directories_ != nullptr;};
    void deleteDirectories() { this->directories_ = nullptr;};
    inline const vector<DescribeDirectoriesResponseBodyDirectories> & directories() const { DARABONBA_PTR_GET_CONST(directories_, vector<DescribeDirectoriesResponseBodyDirectories>) };
    inline vector<DescribeDirectoriesResponseBodyDirectories> directories() { DARABONBA_PTR_GET(directories_, vector<DescribeDirectoriesResponseBodyDirectories>) };
    inline DescribeDirectoriesResponseBody& setDirectories(const vector<DescribeDirectoriesResponseBodyDirectories> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
    inline DescribeDirectoriesResponseBody& setDirectories(vector<DescribeDirectoriesResponseBodyDirectories> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDirectoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The hostname of the domain controller. The hostname must comply with the hostname naming convention of Windows. This parameter is returned only when the directory type is AD office network.
    std::shared_ptr<string> adHostname_ = nullptr;
    // The directories.
    std::shared_ptr<vector<DescribeDirectoriesResponseBodyDirectories>> directories_ = nullptr;
    // The token that is used for the next query. If this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
