// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFilesystemsVscAttachInfoRequestResourceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsVscAttachInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsVscAttachInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsVscAttachInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
    };
    DescribeFilesystemsVscAttachInfoRequest() = default ;
    DescribeFilesystemsVscAttachInfoRequest(const DescribeFilesystemsVscAttachInfoRequest &) = default ;
    DescribeFilesystemsVscAttachInfoRequest(DescribeFilesystemsVscAttachInfoRequest &&) = default ;
    DescribeFilesystemsVscAttachInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsVscAttachInfoRequest() = default ;
    DescribeFilesystemsVscAttachInfoRequest& operator=(const DescribeFilesystemsVscAttachInfoRequest &) = default ;
    DescribeFilesystemsVscAttachInfoRequest& operator=(DescribeFilesystemsVscAttachInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->resourceIds_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFilesystemsVscAttachInfoRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFilesystemsVscAttachInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<DescribeFilesystemsVscAttachInfoRequestResourceIds> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<DescribeFilesystemsVscAttachInfoRequestResourceIds>) };
    inline vector<DescribeFilesystemsVscAttachInfoRequestResourceIds> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<DescribeFilesystemsVscAttachInfoRequestResourceIds>) };
    inline DescribeFilesystemsVscAttachInfoRequest& setResourceIds(const vector<DescribeFilesystemsVscAttachInfoRequestResourceIds> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeFilesystemsVscAttachInfoRequest& setResourceIds(vector<DescribeFilesystemsVscAttachInfoRequestResourceIds> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Query token, which is the NextToken value returned from the previous API call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID information of the file system and virtual storage channel. Each batch can contain up to 10 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DescribeFilesystemsVscAttachInfoRequestResourceIds>> resourceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
