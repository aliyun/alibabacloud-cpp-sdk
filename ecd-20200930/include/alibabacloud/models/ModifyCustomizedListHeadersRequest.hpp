// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEDLISTHEADERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEDLISTHEADERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCustomizedListHeadersRequestHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCustomizedListHeadersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomizedListHeadersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomizedListHeadersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyCustomizedListHeadersRequest() = default ;
    ModifyCustomizedListHeadersRequest(const ModifyCustomizedListHeadersRequest &) = default ;
    ModifyCustomizedListHeadersRequest(ModifyCustomizedListHeadersRequest &&) = default ;
    ModifyCustomizedListHeadersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomizedListHeadersRequest() = default ;
    ModifyCustomizedListHeadersRequest& operator=(const ModifyCustomizedListHeadersRequest &) = default ;
    ModifyCustomizedListHeadersRequest& operator=(ModifyCustomizedListHeadersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->listType_ == nullptr && return this->regionId_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<ModifyCustomizedListHeadersRequestHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<ModifyCustomizedListHeadersRequestHeaders>) };
    inline vector<ModifyCustomizedListHeadersRequestHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<ModifyCustomizedListHeadersRequestHeaders>) };
    inline ModifyCustomizedListHeadersRequest& setHeaders(const vector<ModifyCustomizedListHeadersRequestHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyCustomizedListHeadersRequest& setHeaders(vector<ModifyCustomizedListHeadersRequestHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string listType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline ModifyCustomizedListHeadersRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCustomizedListHeadersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The headers.
    std::shared_ptr<vector<ModifyCustomizedListHeadersRequestHeaders>> headers_ = nullptr;
    // The type of the list.
    // 
    // Valid values:
    // 
    // *   desktop: cloud computer
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> listType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
