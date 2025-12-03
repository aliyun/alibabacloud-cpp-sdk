// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDatasetListRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDatasetListRequest() = default ;
    DescribeDatasetListRequest(const DescribeDatasetListRequest &) = default ;
    DescribeDatasetListRequest(DescribeDatasetListRequest &&) = default ;
    DescribeDatasetListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetListRequest() = default ;
    DescribeDatasetListRequest& operator=(const DescribeDatasetListRequest &) = default ;
    DescribeDatasetListRequest& operator=(DescribeDatasetListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetIds_ == nullptr
        && return this->datasetName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr; };
    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline string datasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
    inline DescribeDatasetListRequest& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline DescribeDatasetListRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatasetListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatasetListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeDatasetListRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDatasetListRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDatasetListRequestTag>) };
    inline vector<DescribeDatasetListRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeDatasetListRequestTag>) };
    inline DescribeDatasetListRequest& setTag(const vector<DescribeDatasetListRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDatasetListRequest& setTag(vector<DescribeDatasetListRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of the datasets.
    std::shared_ptr<string> datasetIds_ = nullptr;
    // The name of the dataset.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // Specify the object labels to which the rule applies, and multiple labels can be set
    std::shared_ptr<vector<DescribeDatasetListRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
